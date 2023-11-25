#include "pch.h"
#include "engine_hooks.hpp"

namespace engine_hooks
{
	bool PostRenderHook::apply_hook()
	{
		LOG("Starting postrender hook");
		if (GWORLD->OwningGameInstance && GWORLD->OwningGameInstance->LocalPlayers.Count() > 0)
		{
			LOG("\tWorld exists | player exists");

			SDK::UGameViewportClient* base_class_to_hook = GWORLD->OwningGameInstance->LocalPlayers[0]->ViewportClient;

			SDK::UClass* verify_class = SDK::UGameViewportClient::StaticClass();

			if (base_class_to_hook)
			{
				LOG("\tClass Found");
				if (base_class_to_hook->IsA(verify_class)) {

					LOG("\tClass Verified");

					void** VTable = *reinterpret_cast<void***>(base_class_to_hook);

					LOG("\tvTable created");

					PVOID func_obj = (PVOID)&VTable[POST_RENDER_INDEX];

					LOG("\tPerforming vTable ptr swap");

					DWORD Old;
					VirtualProtect(func_obj, sizeof(PVOID), PAGE_READWRITE, &Old);
					*(PVOID*)&original_post_render = *(PVOID*)func_obj;
					*(PVOID*)func_obj = &hook_func;
					VirtualProtect(func_obj, sizeof(PVOID), Old, &Old);
					LOG("\tHook done");
					return true;
				}
			}
		}
		return false;
	}

	bool PostRenderHook::remove_hook()
	{
		LOG("Starting unhooking postrender");

		if (GWORLD->OwningGameInstance && GWORLD->OwningGameInstance->LocalPlayers.Count() > 0)
		{
			LOG("\tWorld exists/player exists");

			SDK::UGameViewportClient* Viewport = GWORLD->OwningGameInstance->LocalPlayers[0]->ViewportClient;
			if (Viewport && Viewport->IsA(SDK::UGameViewportClient::StaticClass()))
			{
				LOG("\tViewport exists && is right type");

				void** VTable = *reinterpret_cast<void***>(Viewport);

				LOG("\tvTable casted");

				PVOID PostRenderObject = (PVOID)&VTable[POST_RENDER_INDEX];

				LOG("\tPerforming vtable swap back");

				DWORD Old;
				VirtualProtect(PostRenderObject, sizeof(PVOID), PAGE_READWRITE, &Old);

				// Restore the original function pointer
				*(PVOID*)PostRenderObject = original_post_render;

				VirtualProtect(PostRenderObject, sizeof(PVOID), Old, &Old);
				LOG("\tUnhook done");
				return true;
			}
		}
		return false;
	}

	PVOID PostRenderHook::hook_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
	{
		pre_func(viewport, canvas);
		PVOID pv = original_post_render(viewport, canvas);
		post_func(viewport, canvas);
		return pv;

	}

	void PostRenderHook::pre_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
	{
		if (!canvas) {
			return;
		}

		auto cw = float(canvas->SizeX / 2);
		auto ch = float(canvas->SizeY / 2);
		canvas->K2_DrawLine({ cw - 2,ch }, { cw + 2,ch }, 1, { 0,1,1,255 });
		canvas->K2_DrawLine({ cw,ch - 2 }, { cw,ch + 2 }, 1, { 0,1,1,255 });

	}

	void PostRenderHook::post_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
	{
	}


}