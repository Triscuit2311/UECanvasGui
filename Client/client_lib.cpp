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
		logger::con.init();

		logger::con.log("Initializing global modules");
		modules::ue = std::make_unique<engine_data>();

		logger::con.log("Initialized global modules");


		logger::con.log("Initializing game data");
		modules::ue->init();

		logger::con.log("Initialized game data");



		//logger::con.log("Syncing settings");
		// Load default or saved

		logger::con.log("Starting worker threads");
		//modules::features->start_threads();
		logger::con.log("Worker threads runnning");



		 logger::con.log("Entering main loop");
		 while (globals::running)
		 {
			if (GetAsyncKeyState(VK_END) & 1) { break; }
			if (GetAsyncKeyState(VK_INSERT) & 1)
			{
				logger::con.log("LPs: %d", GWORLD->OwningGameInstance->LocalPlayers.Num());
				auto lpc = modules::ue->GetLocalPlayerCharacter();
				logger::con.special("HP: %d", lpc->GetHealth());

				auto set_attr = [](SDK::FGameplayAttributeData* attr, float val)
				{
						attr->CurrentValue = val;
						attr->BaseValue = val;
				};

				set_attr(&lpc->Attributes->AttackRateMultiplier, 1.5f);
				set_attr(&lpc->Attributes->AmmoUsedPerShot, 1);
				set_attr(&lpc->Attributes->FullyAimedDamageModifier, 4.5f);

				set_attr(&lpc->Attributes->DashCooldownModifier, 3);

				set_attr(&lpc->Attributes->ElementProcChanceMultiplier, 2);
				set_attr(&lpc->Attributes->GrenadeDamageMultiplier, 100);

				set_attr(&lpc->Attributes->ChargeTimeModifier, 100);



				lpc->ClientSetSmartBulletsEnabled(false);




			//	modules::ui->ToggleMenu();
			}

		 	globals::mouse_down = GetAsyncKeyState(VK_LBUTTON) & 0x8000;
		 }
		 logger::con.log("Exited main loop");

		 logger::con.log("Stopping worker threads");
		 //modules::features->join_threads();
		 logger::con.log("Stopped worker threads");


		 logger::con.free();
		FreeLibraryAndExitThread(globals::h_module, 0);
		return 0; // NOLINT(clang-diagnostic-unreachable-code-return)
	}
}
