#pragma once
#include <functional>

#include "engine_ui_elements.hpp"


/*
struct FVector2D
{
public:
    float X;
    float Y;
};
*/

class engine_ui
{

private:
	std::atomic<unsigned long long> tick_;
	SDK::FVector2D cursor_pos_;
	void inc_tick();
	unsigned long long tick() const;

public:
	void init();
	void render_frame(SDK::UCanvas* canvas);
	void draw_cursor() const;

	void debug_info_panel() const;


	// std::unique_ptr<window> window_1;
	Window window;

	std::atomic<bool> toggleValue = false;
	std::atomic<int> sliderIntValue = 0;
	std::atomic<float> sliderFloatValue = 0.0f;
	std::atomic<size_t> comboBoxIndex = 0;
	//std::atomic<std::function<void>> = { []() { std::cout << "Button pressed!\n"; } };
};


