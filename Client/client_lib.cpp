#include "pch.h"
#include "client_lib.hpp"
#include "engine_data.hpp"
#include "engine_hooks.hpp"
#include "engine_renderer.hpp"

namespace client_lib
{
	namespace globals
	{
		std::atomic<float> cursor_x = 0;
		std::atomic<float> cursor_y = 0;
		std::atomic<bool> mouse_down = false;


		HMODULE h_module{nullptr};
		std::atomic_bool interrupt{false};
		std::atomic_bool running{true};

		void exit()
		{
			running = false;
			interrupt = true;
		}
	}

	p_thread main_thread;


	DWORD p_thread::func(LPVOID lp_param)
	{
		INIT_CONSOLE();

		LOG("Initializing global modules");
		modules::ue = std::make_unique<engine_data>();
		modules::renderer = std::make_unique<engine_renderer>();
		modules::ui = std::make_unique<engine_ui>();

		LOG("Setting up game data");
		modules::ue->init();
		modules::renderer->init();
		modules::ui->init();


		LOG("Initializing UE4 Hooks");

		engine_hooks::PostRenderHook::apply_hook();

		INF("Initialized UE4 Hooks");


		//LOG("Syncing settings");
		// Load default or saved


		//LOG("Starting worker threads");
		// spawn thread
		// maybe use a pool


		 LOG("Entering main loop");
		 while (globals::running)
		 {
		 	// Ensure local player vars & engine statics
		 	if (!modules::ue->lp.ensure()) { ERR("Can't Ensure LP"); }
		 	if (!modules::ue->statics.ensure()) { ERR("Can't Ensure statics"); }
		
		 	if (GetAsyncKeyState(VK_END) & 1) { break; }
		
		
		 	POINT cursor_pos;
		 	GetCursorPos(&cursor_pos);

		 	globals::cursor_x = static_cast<float>(cursor_pos.x);
		 	globals::cursor_y = static_cast<float>(cursor_pos.y);
		 	globals::mouse_down = GetAsyncKeyState(VK_LBUTTON) & 0x8000;
		
		 }
		 LOG("Exited main loop");


		 INF("Removing UE4 Hooks");

		 engine_hooks::PostRenderHook::remove_hook();

		 INF("Removed UE4 Hooks");



		EXIT_CONSOLE();
		FreeLibraryAndExitThread(globals::h_module, 0);
		return 0; // NOLINT(clang-diagnostic-unreachable-code-return)
	}
}
