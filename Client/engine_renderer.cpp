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
	try
	{
		auto& objs = SDK::UObject::GetGlobalObjects();
		for (int i = 0; i < objs.Count(); i++)
		{
			if (auto item = objs.GetByIndex(i))
			{
				if (item && item->IsA(SDK::UFont::StaticClass()))
				{
					;
					auto name = objs.GetByIndex(i)->GetName();
					engine_renderer::fonts_map[name] = reinterpret_cast<SDK::UFont*>(item);

					LOG("Font Found: %s", name.c_str());
				}
			}
		}
	}
	catch (...)
	{
		ERR("Could not populate fonts map");
	}

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
		ERR("Could not init default font");
	}
}
