#include "pch.h"
#include "engine_renderer.hpp"


engine_renderer::engine_renderer() = default;

void engine_renderer::set_canvas(SDK::UCanvas* canvas)
{
	canvas_ = canvas;
}

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
		auto& objs = SDK::UObject::GObjects;
		for (int i = 0; i < objs->Num(); i++)
		{
			if (auto item = objs->GetByIndex(i))
			{
				if (item && item->IsA(SDK::UFont::StaticClass()))
				{
					auto name = objs->GetByIndex(i)->GetName();
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
	try
	{


		// All these are working and usable
		// default_font = fonts_map.find("Default__Font")->second;
		// default_font = fonts_map.find("RobotoDistanceField")->second;
		default_font = fonts_map.find("TeutonNormal_Font")->second;
		// default_font = fonts_map.find("DuntonWriting_Font")->second;
		// default_font = fonts_map.find("Expressway")->second;
		// default_font = fonts_map.find("Roboto")->second;
		// default_font = fonts_map.find("VCR_OSD_MONO_1_001_Font")->second;
		// default_font = fonts_map.find("Tungsten")->second;
		// default_font = fonts_map.find("Louis_George_Cafe_Bold_Font")->second;
		// default_font = fonts_map.find("Arial")->second;
		// default_font = fonts_map.find("rajdhani")->second;
		// default_font = fonts_map.find("Sarpanch")->second;
		// default_font = fonts_map.find("Barlow")->second;
		// default_font = fonts_map.find("wwDigital")->second;
		// default_font = fonts_map.find("VRText_RobotoLarge")->second;

		// DEBUG
		// VARLOG_D(default_font->Characters.Num());
		// VARLOG_D(default_font->Characters);
		//
		// VARLOG_D(default_font->Characters.Num());//                       
		// VARLOG_D(default_font->Textures.Num());//                         
		// VARLOG_D(default_font->IsRemapped);//;                            
		// VARLOG_F(default_font->EmScale);                                  
		// VARLOG_F(default_font->Ascent);                                   
		// VARLOG_F(default_font->Descent);                                  
		// VARLOG_F(default_font->Leading);                                  
		// VARLOG_F(default_font->Kerning);                                  
		// VARLOG_D(default_font->NumCharacters);                            
		// VARLOG_D(default_font->MaxCharHeight.Num());                      
		// VARLOG_F(default_font->ScalingFactor);                            
		// VARLOG_D(default_font->LegacyFontSize);
		// VARLOG_D(default_font->MaxCharHeight[0]);

		//struct FCompositeFont                        CompositeFont;     
	}
	catch (...)
	{
		ERR("Could not set default fonts");
	}
}

float engine_renderer::get_font_size()
{
	if (default_font == nullptr) { return 0.0f; }
	return (float)default_font->LegacyFontSize;
}

void engine_renderer::draw_text(const wchar_t* text,
                                const SDK::FVector2D& pos, const SDK::FLinearColor color) const
{
	canvas_->K2_DrawText(
		default_font, //font
		text, // wstr/ FString
		pos, // pos
		{1.0f, 1.0f}, // scale
		color, // col
		1, // kerning
		col.none, // shadow col
		{0, 0}, // shadow offset
		false, // center on X axis
		false, // center on Y axis
		false, // outlined
		col.black // outline col
	);
}

void engine_renderer::draw_text_f(const SDK::FString& text,
                                  const SDK::FVector2D& pos, const SDK::FLinearColor color) const
{
	canvas_->K2_DrawText(
		default_font, //font
		text, // wstr/ FString
		pos, // pos
		{1.0f, 1.0f}, // scale
		color, // col
		1, // kerning
		col.none, // shadow col
		{0, 0}, // shadow offset
		false, // center on X axis
		false, // center on Y axis
		false, // outlined
		col.black // outline col
	);
}

void engine_renderer::draw_text_outlined(
	const wchar_t* text, const SDK::FVector2D& pos,
	const SDK::FLinearColor color) const
{
	canvas_->K2_DrawText(
		default_font, //font
		text, // wstr/ FString
		pos, // pos
		{1.0f, 1.0f}, // scale
		color, // col
		1, // kerning
		col.none, // shadow col
		{0, 0}, // shadow offset
		false, // center on X axis
		false, // center on Y axis
		true, // outlined
		col.black // outline col
	);
}

void engine_renderer::draw_text_c(const SDK::FString text,
                                  const SDK::FVector2D& pos, const SDK::FLinearColor color,
                                  const bool centered_x, const bool centered_y,
                                  const bool outlined) const
{
	canvas_->K2_DrawText(
		default_font, //font
		text, // wstr/ FString
		pos, // pos
		{1.0f, 1.0f}, // scale
		color, // col
		1, // kerning
		col.none, // shadow col
		{0, 0}, // shadow offset
		centered_x, // center on X axis
		centered_y, // center on Y axis
		outlined, // outlined
		col.black // outline col
	);
}

void engine_renderer::draw_filled_rect(const SDK::FVector2D& pos,
                                       const float w, const float h, const SDK::FLinearColor color) const
{
	for (float i = 0.0f; i < h; i += 1.0f)
	{
		canvas_->K2_DrawLine(
			SDK::FVector2D{pos.X, pos.Y + i},
			SDK::FVector2D{pos.X + w, pos.Y + i},
			1.0f, color);
	}
}

void engine_renderer::draw_filled_rect(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
                                       const SDK::FLinearColor color) const
{
	for (float i = 0.0f; i < abs(pos_a.Y - pos_b.Y); i += 1.0f)
	{
		canvas_->K2_DrawLine(
			SDK::FVector2D{pos_a.X, pos_a.Y + i},
			SDK::FVector2D{pos_a.X + abs(pos_a.X - pos_b.X), pos_a.Y + i},
			1.0f, color);
	}
}

void engine_renderer::draw_rect(
	const SDK::FVector2D& pos, const float w, const float h,
	const float thickness, const SDK::FLinearColor color) const
{
	canvas_->K2_DrawBox(pos, {w, h}, thickness, color);
}

void engine_renderer::draw_rect(
	const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
	const float thickness, const SDK::FLinearColor color) const
{
	canvas_->K2_DrawBox(pos_a, pos_b, thickness, color);
}

void engine_renderer::draw_line(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
                                const float thickness, const SDK::FLinearColor color) const
{
	canvas_->K2_DrawLine(
		pos_a,
		pos_b,
		thickness,
		color);
}

void engine_renderer::draw_triangle(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
	const SDK::FVector2D& pos_c,
	const SDK::FLinearColor color, const float thickness) const
{
	canvas_->K2_DrawLine(
		pos_a,
		pos_b,
		thickness,
		color);
	canvas_->K2_DrawLine(
		pos_a,
		pos_c,
		thickness,
		color);
	canvas_->K2_DrawLine(
		pos_c,
		pos_b,
		thickness,
		color);
}
void engine_renderer::draw_filled_triangle(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b, 
	const SDK::FVector2D& pos_c,
	 const SDK::FLinearColor color) const
{
#pragma warning(disable : 4244)
	const int num_lines = std::max(abs(pos_b.X - pos_c.X), abs(pos_b.Y - pos_c.Y));
#pragma warning(default : 4244)

	for (int i = 0; i <= num_lines; ++i) {
		const float lerp_factor = static_cast<float>(i) / num_lines;

		// Interpolate between pos_b and pos_c
		SDK::FVector2D intermediate_point;
		intermediate_point.X = pos_b.X + lerp_factor * (pos_c.X - pos_b.X);
		intermediate_point.Y = pos_b.Y + lerp_factor * (pos_c.Y - pos_b.Y);
		canvas_->K2_DrawLine(
			pos_a,
			intermediate_point,
			1,
			color);
	}
}
