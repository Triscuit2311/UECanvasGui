#include "pch.h"
#include "client_lib.hpp"

#include "engine_data.hpp"
#include "engine_hooks.hpp"
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

		LOG("Initialized global modules");


		LOG("Initializing game data");
		modules::ue->init();

		LOG("Initialized game data");



		//LOG("Syncing settings");
		// Load default or saved

		LOG("Starting worker threads");
		//modules::features->start_threads();
		LOG("Worker threads runnning");



		 LOG("Entering main loop");
		 while (globals::running)
		 {
			if (GetAsyncKeyState(VK_END) & 1) { break; }
			if (GetAsyncKeyState(VK_INSERT) & 1)
			{
				LOG("LPs: %d", GWORLD->OwningGameInstance->LocalPlayers.Num());
				auto lpc = modules::ue->GetLocalPlayerCharacter();
				SPE("HP: %d", lpc->GetHealth());

				auto set_attr = [](SDK::FGameplayAttributeData* attr, float val)
				{
						attr->CurrentValue = val;
						attr->BaseValue = val;
				};

				set_attr(&lpc->Attributes->AttackRateMultiplier, 10);
				set_attr(&lpc->Attributes->AmmoUsedPerShot, 0);
				set_attr(&lpc->Attributes->DashCooldownModifier, 6);

				set_attr(&lpc->Attributes->ElementProcChanceMultiplier, 10);



			//	modules::ui->ToggleMenu();
			}

		 	globals::mouse_down = GetAsyncKeyState(VK_LBUTTON) & 0x8000;
		 }
		 LOG("Exited main loop");

		 LOG("Stopping worker threads");
		 //modules::features->join_threads();
		 LOG("Stopped worker threads");


		EXIT_CONSOLE();
		FreeLibraryAndExitThread(globals::h_module, 0);
		return 0; // NOLINT(clang-diagnostic-unreachable-code-return)
	}
}
