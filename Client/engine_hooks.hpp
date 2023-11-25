#pragma once

namespace engine_hooks
{

	class PostRenderHook
	{
		inline static PVOID(*original_post_render)(PVOID, PVOID) = nullptr;
	public:
		static bool apply_hook();
		static bool remove_hook();
		static PVOID hook_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas);
		static void pre_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas);
		static void post_func(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas);
	};

}
