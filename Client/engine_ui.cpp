#include "pch.h"
#include "engine_ui.hpp"

#include "animations.h"
#include "client_lib.hpp"
#include "engine_ui_elements.hpp"


void engine_ui::init()
{
	tick_ = 0;
	cursor_pos_ = { 0, 0 };
	/////////////////////////////////////////////////

	lobby_window.init(L"Admin Menu");
	lobby_window.position = {200, 100};

	lobby_window.add_control<Toggle>(L"Use Score Buffer",
		client_lib::modules::features->score_grace.enabled);
	lobby_window.add_control<IntSlider>(L"Score Buffer: %d",
		client_lib::modules::features->score_grace.delta_score_threshold, 0, 3000);

	lobby_window.add_control<Seperator>(L"");

	lobby_window.add_control<Button>(L"Surrender Suspects",
		client_lib::modules::features->force_surrender.on_exec);




	player_window.init(L"Player");
	player_window.position = { 450, 100 };
	player_window.add_control<Toggle>(L"GodMode",
		client_lib::modules::features->player_god_mode.enabled);
	player_window.add_control<Toggle>(L"Auto Stop Bleeds",
		client_lib::modules::features->auto_stop_bleed.enabled);
	player_window.add_control<Toggle>(L"Keep Mags Full",
		client_lib::modules::features->keep_mags_full.enabled);
	player_window.add_control<Toggle>(L"Crouch Super Speed",
		client_lib::modules::features->crouch_super_speed.enabled);




	weapon_window.init(L"Weapon");
	weapon_window.position = { 700, 100 };
	weapon_window.add_control<Toggle>(L"No Recoil", 
		client_lib::modules::features->no_recoil.enabled);
	weapon_window.add_control<Toggle>(L"No Spread",
		client_lib::modules::features->no_spread.enabled);
	weapon_window.add_control<Toggle>(L"Full Auto",
		client_lib::modules::features->always_full_auto.enabled);
	weapon_window.add_control<Seperator>(L"");
	weapon_window.add_control<Toggle>(L"Custom Fire Rate",
		client_lib::modules::features->custom_fire_rate.enabled);
	weapon_window.add_control<FloatSlider>(L"Fire Rate: %.4f",
		client_lib::modules::features->custom_fire_rate.val,
		client_lib::modules::features->custom_fire_rate.min_v,
		client_lib::modules::features->custom_fire_rate.max_v);




	dev_window.init(L"Development");
	dev_window.position = {200, 500};
	dev_window.add_control<Button>(L"Setup Mats",
		client_lib::modules::features->setup_mats.on_exec);
	dev_window.add_control<Button>(L"Run Test",
		client_lib::modules::features->test_feature.on_exec);
	dev_window.add_control<Seperator>(L"");
		dev_window.add_control<Button>(L"Thow Error", fake_err);
	dev_window.add_control<Button>(L"Show Long Notif", fake_notif);


	windows_.emplace_back(lobby_window);
	windows_.emplace_back(player_window);
	windows_.emplace_back(weapon_window);
	windows_.emplace_back(dev_window);

	/////////////////////////////////////////////////
	ToggleMenu();
}


// UI Internals


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

void engine_ui::ToggleMenu()
{
	show_windows = !show_windows;
	show_cursor = !show_cursor;

	// Toggle player's inputs as well
	if(show_cursor)
	{

		engine_data::GetLocalPlayerCharacter()->bActionsLocked = true;
		engine_data::GetLocalPlayerCharacter()->bAimLocked = true;
	}else
	{
		engine_data::GetLocalPlayerCharacter()->bActionsLocked = false;
		engine_data::GetLocalPlayerCharacter()->bAimLocked = false;
	}
}

void engine_ui::Notify(const SDK::FString text, const int duration_seconds, bool is_error)
{
	notif_system.notification_queue.push(notification{ text, duration_seconds, is_error });
}



void engine_ui::render_frame(SDK::UCanvas* canvas)
{
	inc_tick();
	if (!canvas) return;
	client_lib::modules::renderer->set_canvas(canvas);


	if (show_windows) {

		try
		{
			for (auto& win : windows_)
			{
				win.render(cursor_pos_, fps);
			}

		}
		catch (...)
		{
		}
	}
	if (show_cursor) {
		engine_data::GetLocalPlayerController()->GetMousePosition(&cursor_pos_.X, &cursor_pos_.Y);
		draw_cursor();
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



	if(!notif_system.notification_queue.empty())
	{
		render_notifications();
	}

	
}



void engine_ui::render_notifications()
{
	bool remove_notification = false;
	if (notif_system.notification_queue.front().has_started) {

		switch(notif_system.notification_queue.front().state)
		{
		case notification::SLIDING_OUT:
			notif_system.current_notification_pos = animation::lerp(
				notif_system.current_notification_pos, notif_system.notification_target_pos,
				animation::scaled_alpha(0.05f, fps));
			if(abs(engine_extensions::delta(notif_system.current_notification_pos,notif_system.notification_target_pos)) < 3)
			{
				notif_system.notification_queue.front().state = notification::DISPLAYING;
			}
			break;
		case notification::DISPLAYING:
			if (last_time_ - notif_system.last_notif_start_time_ >=
				std::chrono::seconds(notif_system.notification_queue.front().duration_seconds)) {
				notif_system.notification_queue.front().state = notification::SLIDING_BACK;
			}
			break;
		case notification::SLIDING_BACK:
			notif_system.current_notification_pos = animation::lerp(
				notif_system.current_notification_pos, notif_system.notification_start_pos,
				animation::scaled_alpha(0.05f, fps));
			if (abs(engine_extensions::delta(notif_system.current_notification_pos, notif_system.notification_start_pos)) < 3)
			{
				remove_notification = true;
			}
			break;
		default: break;
		}
	}else
	{
		notif_system.notification_queue.front().has_started = true;
		notif_system.last_notif_start_time_ = last_time_;
	}

	// TODO: adjust size based on text size
	float width = (ui_style::margins.lr * 2) + notif_system.notification_queue.front().text.Num() * client_lib::modules::renderer->get_font_size();
	client_lib::modules::renderer->draw_filled_rect(
		notif_system.current_notification_pos,
		width,
		notif_system.notification_size.Y,
		ui_style::colors.window_bg);

	client_lib::modules::renderer->draw_rect(
		notif_system.current_notification_pos,
		{ width, notif_system.notification_size.Y }, 1,
		notif_system.notification_queue.front().is_error ? ui_style::colors.notif_error_border : ui_style::colors.window_selected_outline);

	client_lib::modules::renderer->draw_text_c(
		notif_system.notification_queue.front().text,
		{
			notif_system.current_notification_pos.X + width/2 - ui_style::margins.lr,
			notif_system.current_notification_pos.Y + notif_system.notification_size.Y / 2
			},
		ui_style::colors.text, true, true, false);



	if (remove_notification)
	{
		notif_system.notification_queue.pop();
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

engine_ui::~engine_ui()
{

	// Make sure player is not frozen when GUI is destroyed
	engine_data::GetLocalPlayerCharacter()->bActionsLocked = false;
	engine_data::GetLocalPlayerCharacter()->bAimLocked = false;
}
