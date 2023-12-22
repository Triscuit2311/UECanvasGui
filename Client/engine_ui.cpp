#include "pch.h"
#include "engine_ui.hpp"
#include "engine_ui_elements.hpp"


void engine_ui::inc_tick()
{
	tick_ += 1;

	const auto current_time = std::chrono::steady_clock::now();
	fps_ct_ += 1;
	if (current_time - last_time_ >= std::chrono::seconds(1)) {
		fps = static_cast<float>(fps_ct_);
		fps_ct_ = 0;
		last_time_ = current_time;
	}
}

unsigned long long engine_ui::tick() const
{
	return tick_.load();
}

void engine_ui::init()
{
	tick_ = 0;
	cursor_pos_ = {0, 0};

	window.init(L"Admin Menu");
	window.add_control<Toggle>(L"Use Score Buffer", client_lib::modules::features->score_grace.enabled);
	window.add_control<IntSlider>(L"Score Buffer: %d", client_lib::modules::features->score_grace.delta_score_threshold, 0, 2000);

	window.add_control<Toggle>(L"Keep Mags Full", client_lib::modules::features->keep_mags_full.enabled);

	window.add_control<Button>(L"Set Crouch Speedhack", client_lib::modules::features->speedhack.on_exec);
	window.add_control<Button>(L"Force Surrender", client_lib::modules::features->force_surrender.on_exec);


	window.add_control<Button>(L"Run Test", client_lib::modules::features->test_feature.on_exec);


	// window.add_control<Label>(L"Ingredients:");
	// window.add_control<Toggle>(L"Use Strawberry", toggled_1);
	// window.add_control<Toggle>(L"Use Banana", toggled_2);
	// window.add_control<IntSlider>(L"You have %d of blueberries", sliderIntValue, 0, 10);
	//
	// window.add_control<Seperator>(L"");
	//
	// window.add_control<IntSlider>(L"Power Setting: %d", sliderIntValue2, -30, 30);
	// window.add_control<FloatSlider>(L"Ice Amount: %.1f", sliderFloatValue, 0.0f, 20.0f);
	//
	// window.add_control<Seperator>(L"");
	//
	// window.add_control<Button>(L"Make Smoothie", test_func);

	window.position.X = 400;
}


void engine_ui::render_frame(SDK::UCanvas* canvas)
{
	inc_tick();
	if (!canvas) return;
	client_lib::modules::renderer->set_canvas(canvas);

	cursor_pos_ = {client_lib::globals::cursor_x.load(), client_lib::globals::cursor_y.load()};


	if (!show_windows) { return; }

	try
	{
		window.render(cursor_pos_, fps);

	}
	catch (...)
	{
	}


	try
	{
		if (show_debug) {
			debug_info_panel();
		}
	}
	catch (...)
	{
	}

	if (show_cursor) {
		draw_cursor();
	}
}


void engine_ui::draw_cursor() const
{
	constexpr int size = 16;

	//cursor fill
	for (int i = size - 1; i >= (size / 2) + 1; i--)
	{
		client_lib::modules::renderer->draw_line(
			cursor_pos_,
			{cursor_pos_.X + (size / 2) + 1, cursor_pos_.Y + i},
			1, ui_style::colors.cursor_fill);
		client_lib::modules::renderer->draw_line(
			cursor_pos_,
			{cursor_pos_.X + i, cursor_pos_.Y + (size / 2) + 1},
			1, ui_style::colors.cursor_fill);
	}

	//outline
	client_lib::modules::renderer->draw_line(
		cursor_pos_,
		{cursor_pos_.X + (size / 2), cursor_pos_.Y + size},
		1, ui_style::colors.cursor_outline);
	client_lib::modules::renderer->draw_line(
		{cursor_pos_.X + (size / 2) + 1, cursor_pos_.Y + (size / 2) + 1},
		{cursor_pos_.X + (size / 2), cursor_pos_.Y + size},
		1, ui_style::colors.cursor_outline);

	client_lib::modules::renderer->draw_line(
		cursor_pos_,
		{cursor_pos_.X + size, cursor_pos_.Y + (size / 2)},
		1, ui_style::colors.cursor_outline);
	client_lib::modules::renderer->draw_line(
		{cursor_pos_.X + (size / 2) + 1, cursor_pos_.Y + (size / 2) + 1},
		{cursor_pos_.X + size, cursor_pos_.Y + (size / 2)},
		1, ui_style::colors.cursor_outline);
}

void engine_ui::debug_info_panel() const
{
	client_lib::modules::renderer->draw_filled_rect({10, 10},
	                                                100, 60, {0, 0, 0, 1});

	wchar_t buffer[100];
	swprintf(buffer, std::size(buffer), L"Tick: %llu", tick());

	client_lib::modules::renderer->draw_text(buffer, {20, 20},
	                                         client_lib::modules::renderer->col.gold);

	wchar_t buffer_a[100];
	swprintf(buffer_a, std::size(buffer_a), L"FPS: %0.f", fps);

	client_lib::modules::renderer->draw_text(buffer_a, { 20, 40 },
		client_lib::modules::renderer->col.gold);
}
