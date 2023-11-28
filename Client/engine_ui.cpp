#include "pch.h"
#include "engine_ui.hpp"
#include "engine_ui_elements.hpp"


void engine_ui::inc_tick()
{
	tick_ += 1;

	const auto current_time = std::chrono::steady_clock::now();
	fps_ct_ += 1;
	if (current_time - last_time_ >= std::chrono::seconds(1)) {
		fps = fps_ct_;
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

	std::atomic<bool> toggleVal = true;
	std::atomic<int> sliderVal = 0;

	window.init(L"Winduh");
	window.add_control<Toggle>(L"L1", toggleVal);
	window.add_control<Toggle>(L"L2", toggleVal);
	window.add_control<Toggle>(L"L3", toggleVal);


	window.position.X = 400;
}


void engine_ui::render_frame(SDK::UCanvas* canvas)
{
	inc_tick();
	if (!canvas) return;
	client_lib::modules::renderer->set_canvas(canvas);

	cursor_pos_ = {client_lib::globals::cursor_x.load(), client_lib::globals::cursor_y.load()};


	try
	{
		debug_info_panel();
	}
	catch (...)
	{
	}

	try
	{
		window.render(cursor_pos_, fps);
	}
	catch (...)
	{
	}


	draw_cursor();
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
	client_lib::modules::renderer->draw_filled_rect({100, 100},
	                                                100, 60, {0, 0, 0, 1});

	wchar_t buffer[100];
	swprintf(buffer, std::size(buffer), L"Tick: %llu", tick());

	client_lib::modules::renderer->draw_text(buffer, {110, 110},
	                                         client_lib::modules::renderer->col.gold);

	wchar_t buffer_a[100];
	swprintf(buffer_a, std::size(buffer_a), L"FPS: %f.0", fps);

	client_lib::modules::renderer->draw_text(buffer_a, { 110, 130 },
		client_lib::modules::renderer->col.gold);
}
