#pragma once


namespace ui_style
{

	inline float spacing = 5;

	inline struct margin_set
	{
		float tb = 5;
		float lr = 4;
	} margins;

	inline struct color_set
	{
		SDK::FLinearColor window_bg{ engine_extensions::hex_to_flinear("#124559") };
		SDK::FLinearColor window_fg{ engine_extensions::hex_to_flinear("#598392") };

		SDK::FLinearColor control_bg{ engine_extensions::hex_to_flinear("#598392") };
		SDK::FLinearColor control_fg{ engine_extensions::hex_to_flinear("#01161E") };


		SDK::FLinearColor cursor_fill{ engine_extensions::hex_to_flinear("#01161E") };
		SDK::FLinearColor cursor_outline{ engine_extensions::hex_to_flinear("#aec3b0") };
	} colors;

	inline SDK::FVector2D control_size = { 75, 15 };

}


