#include "pch.h"
#include "client_lib.hpp"
#include "engine_data.hpp"
#include "engine_hooks.hpp"
#include "engine_renderer.hpp"

namespace client_lib
{


	namespace globals
	{
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

		LOG("Setting up game data");
		modules::ue->init();
		modules::renderer->init();


		LOG("Initializing UE4 Hooks");
		engine_hooks::PostRenderHook::apply_hook();
		INF("Initialized UE4 Hooks");


		LOG("Syncing settings");
		// Load default or saved


		LOG("Starting worker threads");
		// spawn thread
		// maybe use a pool



		


		LOG("Entering main loop");
		while (globals::running)
		{
			// Ensure local player vars & engine statics
			if (!modules::ue->lp.ensure()) { ERR("Can't Ensure LP"); }
			if (!modules::ue->statics.ensure()) { ERR("Can't Ensure statics"); }

			if (GetAsyncKeyState(VK_END) & 1) { break; }

			// top-level interface toggle   
		}
		LOG("Exited main loop");

		engine_hooks::PostRenderHook::remove_hook();


		EXIT_CONSOLE();
		FreeLibraryAndExitThread(globals::h_module, 0);
		return 0; // NOLINT(clang-diagnostic-unreachable-code-return)
	}
}
