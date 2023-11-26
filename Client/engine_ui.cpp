#include "pch.h"
#include "engine_ui.hpp"
#include "engine_ui_elements.hpp"


void engine_ui::inc_tick()
{
	tick_ += 1;
}

unsigned long long engine_ui::tick() const
{
	return tick_.load();
}

void engine_ui::init()
{
	tick_ = 0;

	std::atomic<bool> toggleVal = false;
	std::atomic<int> sliderVal = 0;


	window.addControl<Toggle>(L"L1", toggleVal);
	window.addControl<Toggle>(L"L2", toggleVal);
	window.addControl<Toggle>(L"L3", toggleVal);


	//window.addControl<Toggle>(L"L4", toggleVal);
	//window.addControl<Toggle>(L"L5", toggleVal);
	//myWindow.addControl<Slider>(sliderVal);
	window.position.X = 400;


}



void engine_ui::render_frame(SDK::UCanvas* canvas)
{
	inc_tick();
	if (!canvas) return;
	canvas_ = canvas;

	debug_info_panel();


	try
	{
		window.render(canvas_);

	}catch(...){}

}

void engine_ui::debug_info_panel() const
{
	client_lib::modules::renderer->draw_filled_rect(canvas_, { 100,100 },
		150, 100, { 0,0,0,1 });


	wchar_t buffer[100];
	swprintf(buffer, std::size(buffer), L"Tick: %llu", tick());


	client_lib::modules::renderer->draw_text(canvas_, buffer, {110, 110 },
		client_lib::modules::renderer->col.gold);
	
	int amplitude = 10; // Adjust the amplitude of the diagonal movement
	int period = 50;   // Adjust the period of the diagonal movement
	
	int x = amplitude * std::sin(2 * 3.14159 * tick() / period);
	int y = amplitude * std::cos(2 * 3.14159 * tick() / period);
	
	client_lib::modules::renderer->draw_filled_rect(canvas_, { 350 + float(x),350 + float(y) },
		30, 30, { 1,0,0,1 });


}
