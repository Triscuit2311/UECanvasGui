#pragma once
#include <chrono>
#include <functional>
#include "engine_ui_elements.hpp"

class engine_ui
{

private:
	std::atomic<unsigned long long> tick_;
	
	int fps_ct_ = 0;
	std::chrono::time_point<std::chrono::steady_clock> last_time_;
	SDK::FVector2D cursor_pos_;
	void inc_tick();
	unsigned long long tick() const;

public:
	float fps = 0;

	void init();
	void render_frame(SDK::UCanvas* canvas);
	void draw_cursor() const;

	void debug_info_panel() const;

	Window window;

	std::atomic<bool> toggleValue = false;
	std::atomic<int> sliderIntValue = 0;
	std::atomic<float> sliderFloatValue = 0.0f;
	std::atomic<size_t> comboBoxIndex = 0;
	//std::atomic<std::function<void>> = { []() { std::cout << "Button pressed!\n"; } };
};


