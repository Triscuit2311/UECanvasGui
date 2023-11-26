#include "pch.h"
#include "engine_renderer.hpp"


engine_renderer::engine_renderer() = default;

engine_renderer& engine_renderer::operator=(const engine_renderer& other)
{
	if (this == &other)
		return *this;
	fonts_map = other.fonts_map;
	return *this;
}

engine_renderer& engine_renderer::operator=(engine_renderer&& other) noexcept
{
	if (this == &other)
		return *this;
	fonts_map = std::move(other.fonts_map);
	return *this;
}

void engine_renderer::init()
{
	LOG("Populating fonts map");
	try
	{
		auto& objs = SDK::UObject::GetGlobalObjects();
		for (int i = 0; i < objs.Count(); i++)
		{
			if (auto item = objs.GetByIndex(i))
			{
				if (item && item->IsA(SDK::UFont::StaticClass()))
				{
					auto name = objs.GetByIndex(i)->GetName();
					engine_renderer::fonts_map[name] = reinterpret_cast<SDK::UFont*>(item);
					//LOG("Font Found: %s", name.c_str());
				}
			}
		}
	}
	catch (...)
	{
		ERR("Could not populate fonts map");
	}

	LOG("Setting default fonts");
	try {


		// default_font = fonts_map.find("Default__Font")->second;
		// default_font = fonts_map.find("RobotoDistanceField")->second;
		// default_font = fonts_map.find("TeutonNormal - Bold_Font")->second;
		// default_font = fonts_map.find("DuntonWriting_Font")->second;
		// default_font = fonts_map.find("Irregularis - raa9_Font")->second;
		// default_font = fonts_map.find("Roboto")->second;
		// default_font = fonts_map.find("VCR_OSD_MONO_1_001_Font")->second;
		// default_font = fonts_map.find("TeutonNormal_Font")->second;
		//default_font = fonts_map.find("Louis_George_Cafe_Bold_Font")->second;
		//default_font = fonts_map.find("Tungsten")->second;
		// default_font = fonts_map.find("BebasNeue - Regular_Font")->second;
		// default_font = fonts_map.find("rajdhani")->second;
		// default_font = fonts_map.find("Arial")->second;
		//default_font = fonts_map.find("Expressway")->second;
		// default_font = fonts_map.find("Sarpanch")->second;
		default_font = fonts_map.find("Barlow")->second;
		// default_font = fonts_map.find("wwDigital")->second;

	}catch (...)
	{
		ERR("Could not set default fonts");
	}
}

void engine_renderer::draw_text(SDK::UCanvas* canvas, const wchar_t* text, 
	const SDK::FVector2D& pos, const SDK::FLinearColor color) const
{
canvas->K2_DrawText(
	default_font,	//font
	text,			// wstr/ FString
	pos,			// pos
	{ 1.0f,1.0f },	// scale
	color,			// col
	1,				// kerning
	col.none,		// shadow col
	{ 0,0 },	// shadow offset
	false,			// center on X axis
	false,			// center on Y axis
	false,			// outlined
	col.black		// outline col
	);
}

void engine_renderer::draw_text_f(SDK::UCanvas* canvas, const SDK::FString& text,
	const SDK::FVector2D& pos, const SDK::FLinearColor color) const
{
	canvas->K2_DrawText(
		default_font,	//font
		text,			// wstr/ FString
		pos,			// pos
		{ 1.0f,1.0f },	// scale
		color,			// col
		1,				// kerning
		col.none,		// shadow col
		{ 0,0 },	// shadow offset
		false,			// center on X axis
		false,			// center on Y axis
		false,			// outlined
		col.black		// outline col
	);
}

void engine_renderer::draw_text_outlined(SDK::UCanvas* canvas,
	const wchar_t* text, const SDK::FVector2D& pos, const SDK::FLinearColor color) const
{
	canvas->K2_DrawText(
		default_font,	//font
		text,			// wstr/ FString
		pos,			// pos
		{ 1.0f,1.0f },	// scale
		color,			// col
		1,				// kerning
		col.none,		// shadow col
		{ 0,0 },	// shadow offset
		false,			// center on X axis
		false,			// center on Y axis
		true,			// outlined
		col.black		// outline col
	);
}

void engine_renderer::draw_text_c(SDK::UCanvas* canvas, const wchar_t* text,
	const SDK::FVector2D& pos, const SDK::FLinearColor color,
	const bool centered_x, const bool centered_y,
	const bool outlined) const
{
	canvas->K2_DrawText(
		default_font,	//font
		text,			// wstr/ FString
		pos,			// pos
		{ 1.0f,1.0f },	// scale
		color,			// col
		1,				// kerning
		col.none,		// shadow col
		{ 0,0 },	// shadow offset
		centered_x,			// center on X axis
		centered_y,			// center on Y axis
		outlined,			// outlined
		col.black		// outline col
	);
}

void engine_renderer::draw_filled_rect(SDK::UCanvas* canvas, const SDK::FVector2D& pos, 
	const float w, const float h, const SDK::FLinearColor color)
{
	for (float i = 0.0f; i < h; i += 1.0f) {
		canvas->K2_DrawLine(
			SDK::FVector2D{ pos.X, pos.Y + i },
			SDK::FVector2D{ pos.X + w, pos.Y + i },
			1.0f, color);
	}
}
