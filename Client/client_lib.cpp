#include "pch.h"
#include "client_lib.hpp"

#include "engine_data.hpp"
#include "engine_hooks.hpp"
#include "engine_renderer.hpp"
#include "windows_utils.hpp"

namespace client_lib
{
	namespace globals
	{

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
		modules::features = std::make_unique<engine_features>();
		LOG("Initialized global modules");


		LOG("Initializing game data");
		modules::ue->init();
		modules::renderer->init();
		modules::ui->init();
		modules::features->init();
		LOG("Initialized game data");


		LOG("Initializing Engine Hooks");
		engine_hooks::PostRenderHook::apply_hook();
		INF("Initialized Engine Hooks");




		//LOG("Syncing settings");
		// Load default or saved

		LOG("Starting worker threads");
		modules::features->start_threads();
		LOG("Worker threads runnning");



		 LOG("Entering main loop");
		 while (globals::running)
		 {
			if (GetAsyncKeyState(VK_END) & 1) { break; }
			if (GetAsyncKeyState(VK_INSERT) & 1)
			{
				modules::ui->ToggleMenu();
			}

		 	globals::mouse_down = GetAsyncKeyState(VK_LBUTTON) & 0x8000;
		 }
		 LOG("Exited main loop");


		 INF("Removing Engine Hooks");
		 engine_hooks::PostRenderHook::remove_hook();
		 INF("Removed Engine Hooks");

		 LOG("Stopping worker threads");
		 modules::features->join_threads();
		 LOG("Stopped worker threads");


		EXIT_CONSOLE();
		FreeLibraryAndExitThread(globals::h_module, 0);
		return 0; // NOLINT(clang-diagnostic-unreachable-code-return)
	}
}
