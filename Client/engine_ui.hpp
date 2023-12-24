#pragma once

#include "engine_ui_elements.hpp"

class engine_ui
{
	struct notification
	{
		enum notif_state
		{
			SLIDING_OUT,
			DISPLAYING,
			SLIDING_BACK
		};
		notif_state state = SLIDING_OUT;
		SDK::FString text;
		int duration_seconds = 0;
		bool has_started = false;
		bool is_error = false;
		notification(SDK::FString info, int duration_secs, bool error = false) { text = info; duration_seconds = duration_secs; is_error = error; };
	};

	struct notif_system_data
	{
		std::queue<notification> notification_queue = {};
		std::chrono::time_point<std::chrono::steady_clock> last_notif_start_time_;
		const SDK::FVector2D notification_size{ 150, 30 };
		const SDK::FVector2D notification_start_pos = { 100, 0 - notification_size.Y - 10 };
		const SDK::FVector2D notification_target_pos = { 100, 0 };
		SDK::FVector2D current_notification_pos = notification_start_pos;
		
	}notif_system;


	std::atomic<unsigned long long> tick_;
	
	int fps_ct_ = 0;
	std::chrono::time_point<std::chrono::steady_clock> last_time_;
	SDK::FVector2D cursor_pos_;

	void inc_tick();
	unsigned long long tick() const;

	bool show_windows = false;
	bool show_debug = false;
	bool show_other = true;
	bool show_cursor = false;
	bool show_notifications = true;

	void render_notifications();
	void draw_cursor() const;
	void debug_info_panel() const;


public:
	~engine_ui();
	void ToggleMenu();

	void Notify(const SDK::FString text, const int duration_seconds, bool is_error = false);

	float fps = 0;

	void init();
	void render_frame(SDK::UCanvas* canvas);



private:
	std::vector<Window> windows_ = {};
	Window lobby_window;
	Window player_window;
	Window weapon_window;
	Window dev_window;

	std::function<void()> fake_err = [this]() {Notify(L"ERROR!", 2, true); };
	std::function<void()> fake_notif = [this]() {Notify(L"Long Notification!! Long Notification!! Long Notification!! Long Notification!!", 2); };

};


