#include "pch.h"
#include "engine_hooks.hpp"
#include "client_lib.hpp"
#include "engine_renderer.hpp"


namespace engine_hooks
{
	bool PostRenderHook::apply_hook()
	{
		LOG("Starting postrender hook");
		if (GWORLD->OwningGameInstance && GWORLD->OwningGameInstance->LocalPlayers.Num() > 0)
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

					PVOID func_obj = (PVOID)&VTable[Offsets::PostRenderIdx];

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

		if (GWORLD->OwningGameInstance && GWORLD->OwningGameInstance->LocalPlayers.Num() > 0)
		{
			LOG("\tWorld exists/player exists");

			SDK::UGameViewportClient* Viewport = GWORLD->OwningGameInstance->LocalPlayers[0]->ViewportClient;
			if (Viewport && Viewport->IsA(SDK::UGameViewportClient::StaticClass()))
			{
				LOG("\tViewport exists && is right type");

				void** VTable = *reinterpret_cast<void***>(Viewport);

				LOG("\tvTable casted");

				PVOID PostRenderObject = (PVOID)&VTable[Offsets::PostRenderIdx];

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
		LOG("HOOK CALLED");

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

		client_lib::modules::ui->render_frame(canvas);
		return;



		// auto cw = float(canvas->SizeX / 2);
		// auto ch = float(canvas->SizeY / 2);
		// canvas->K2_DrawLine({ cw - 2,ch }, { cw + 2,ch }, 1, { 0,1,1,255 });
		// canvas->K2_DrawLine({ cw,ch - 2 }, { cw,ch + 2 }, 1, { 0,1,1,255 });
		//
		//
		SDK::FVector2D pos_a{ 300.0f, 300.0f }; // X,Y
		SDK::FVector2D pos_b{ 200.0f, 200.0f }; // X,Y
		
		SDK::FVector2D size_a{ 100.0f, 100.0f }; // X,Y

		SDK::FLinearColor color_1{ 1.0f, 0.2f, 0.2f, 1.0f }; // R,G,B,A 0.0f-1.0f
		SDK::FLinearColor color_2{ 0.2f, 1.0f, 0.2f, 1.0f }; // R,G,B,A 0.0f-1.0f
		float thickness = 5.0f;
		
		//canvas->K2_DrawBox(pos_a, size_a, thickness, color_1);
		//canvas->K2_DrawLine(pos_a, pos_b, thickness, color_1);
		// for (auto kvp : engine_renderer::fonts_map)
		// {
		// 	// std::wstring ws(kvp.first.size(), L' '); // Overestimate number of code points.
		// 	// ws.resize(std::mbstowcs(&ws[0], kvp.first.c_str(), kvp.first.size())); // Shrink to fit.
		//
		// 	canvas->K2_DrawText(kvp.second, ws.c_str() , pos_a, { 1,1 }, color_1, 1, color_2, { 5,5 }, false, false, false, color_2);
		// 	//pos_a.Y += 30;
		// }


		if(client_lib::modules::renderer->default_font != nullptr)
		{
			canvas->K2_DrawText(
				client_lib::modules::renderer->default_font,	//font
				L"Bordered",									// wstr/ FString
				pos_a,		// pos
				{ 1.0f,1.0f },	// scale
				client_lib::modules::renderer->col.indigo,		// col
				1,			// kerning
				client_lib::modules::renderer->col.none,		// shadow col
				{ 0,0 },	// shadow offset
				false,		// center on X axis
				false,		// center on Y axis
				true, //true,		// outlined
				client_lib::modules::renderer->col.black			// outline col
			);
			pos_a.Y += 30;
			canvas->K2_DrawText(
				client_lib::modules::renderer->default_font,	//font
				L"Bordered 0 Kerning",							// wstr/ FString
				pos_a,		// pos
				{ 1.0f,1.0f },	// scale
				client_lib::modules::renderer->col.indigo,		// col
				0,			// kerning
				client_lib::modules::renderer->col.none,		// shadow col
				{ 0,0 },	// shadow offset
				false,		// center on X axis
				false,		// center on Y axis
				true, //true,		// outlined
				client_lib::modules::renderer->col.black		// outline col
			);

			pos_a.Y += 30;
			canvas->K2_DrawText(
				client_lib::modules::renderer->default_font,	//font
				L"Bordered 5 Kerning",									// wstr/ FString
				pos_a,		// pos
				{ 1.0f,1.0f },	// scale
				client_lib::modules::renderer->col.indigo,		// col
				5,			// kerning
				client_lib::modules::renderer->col.none,		// shadow col
				{ 0,0 },	// shadow offset
				false,		// center on X axis
				false,		// center on Y axis
				true, //true,		// outlined
				client_lib::modules::renderer->col.black			// outline col
			);
			pos_a.Y += 30;
			canvas->K2_DrawText(
				client_lib::modules::renderer->default_font,	//font
				L"No Border",									// wstr/ FString
				pos_a,		// pos
				{ 1.0f,1.0f },	// scale
				client_lib::modules::renderer->col.indigo,		// col
				1,			// kerning
				client_lib::modules::renderer->col.none,		// shadow col
				{ 0,0 },	// shadow offset
				false,		// center on X axis
				false,		// center on Y axis
				false, //true,		// outlined
				client_lib::modules::renderer->col.black			// outline col
			);
			pos_a.Y += 30;
			canvas->K2_DrawText(
				client_lib::modules::renderer->default_font,	//font
				L"No Border 0 Kerning",									// wstr/ FString
				pos_a,		// pos
				{ 1.0f,1.0f },	// scale
				client_lib::modules::renderer->col.indigo,		// col
				0,			// kerning
				client_lib::modules::renderer->col.none,		// shadow col
				{ 0,0 },	// shadow offset
				false,		// center on X axis
				false,		// center on Y axis
				false, //true,		// outlined
				client_lib::modules::renderer->col.black			// outline col
			);


		}

	}

	void PostRenderHook::post_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
	{
	}


}
