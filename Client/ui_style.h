#pragma once


namespace ui_style
{

	inline float spacing = 5;

	inline struct margin_set
	{
		float tb = 5;
		float lr = 4;
	} margins;





#define BLACK_1 "#242124"
#define GRAY_1 "#4A444A"
#define GRAY_2 "#6E656E"
#define GRAY_3 "#968A96"
#define GRAY_4 "#B5A7B5"
#define GRAY_5 "#D4C3D4"
#define WHITE_1 "#E6D3E6"
#define WHITE_2 "#FFEBFF"

#define RAISIN_BLACK "#2E2C2F"
#define CHARCOAL_GRAY "#373F47"
#define DAVYS_GRAY "#585563"
#define SILVER_GRAY "#B3B3B3"
#define CORNSILK_WHITE "#FFFAE2"
#define WISTERIA_LIGHT_PURPLE "#B4A0E5"
#define TEA_LIGHT_GREEN "#CAFFD0"


#define TIFFANY_BLUE "#94BFBE"
#define CELADON_GREEN "#ACF7C1"
#define AMARANTH_PINK "#F194B4"
#define SELECTIVE_YELLOW "#FFB100"
#define PHLOX_PURPLE "#CA3CFF"
#define IMPERIAL_RED "#F93943"




	inline struct color_set
	{
		

		SDK::FLinearColor text{ engine_extensions::hex_to_flinear(WISTERIA_LIGHT_PURPLE) };
		SDK::FLinearColor text_highlight{ engine_extensions::hex_to_flinear(SELECTIVE_YELLOW) };


		SDK::FLinearColor window_bg{ engine_extensions::hex_to_flinear(BLACK_1) };
		SDK::FLinearColor window_fg{ engine_extensions::hex_to_flinear(CHARCOAL_GRAY) };
		SDK::FLinearColor seperator{ engine_extensions::hex_to_flinear(CHARCOAL_GRAY) };


		SDK::FLinearColor control_bg{ engine_extensions::hex_to_flinear(SILVER_GRAY) };
		SDK::FLinearColor control_fg{ engine_extensions::hex_to_flinear(BLACK_1) };


		SDK::FLinearColor cursor_fill{ engine_extensions::hex_to_flinear(DAVYS_GRAY) };
		SDK::FLinearColor cursor_outline{ engine_extensions::hex_to_flinear(CORNSILK_WHITE) };


		SDK::FLinearColor window_selected_outline {engine_extensions::hex_to_flinear(SELECTIVE_YELLOW)};
		SDK::FLinearColor window_hovered_outline {engine_extensions::hex_to_flinear(TIFFANY_BLUE) };

		SDK::FLinearColor control_selected_outline{ engine_extensions::hex_to_flinear(SELECTIVE_YELLOW) };
		SDK::FLinearColor control_hovered_outline{ engine_extensions::hex_to_flinear(PHLOX_PURPLE) };

	} colors;

	inline SDK::FVector2D control_size = { 220, 20 };

}


