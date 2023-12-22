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
	bool show_windows = true;
	bool show_debug = true;
	bool show_other = true;
	bool show_cursor = true;

	float fps = 0;

	void init();
	void render_frame(SDK::UCanvas* canvas);
	void draw_cursor() const;
	void debug_info_panel() const;




	Window window;












};


