#pragma once
#include "engine_extensions.hpp"
#include "ui_style.h"

class engine_ui;

struct Control
{
	SDK::FVector2D offset;
	SDK::FVector2D size;
	SDK::FString label;

	bool hovered = false;


	// Constructor
	Control(const SDK::FString text, const SDK::FVector2D& pos, const SDK::FVector2D& sz) : offset(pos), size(sz),
		label(text)
	{
	}

	// Virtual render function - can be omitted if not needed
	virtual void render(const SDK::FVector2D& root_pos) = 0;
	virtual bool is_hovered(const SDK::FVector2D& cursor_pos) = 0;

	static SDK::FVector2D get_default_size()
	{
		return ui_style::control_size;
	}
};

struct Toggle : public Control
{
	std::atomic<bool>& val;

	Toggle(const SDK::FString label, std::atomic<bool>& val, const SDK::FVector2D& pos, const SDK::FVector2D& sz)
		: Control(label, pos, sz), val(val)
	{
	}

	void render(const SDK::FVector2D& root_pos) override;
	bool is_hovered(const SDK::FVector2D& cursor_pos) override;
};


//todo: determine max control width
class Window
{
public:
	explicit Window(const SDK::FString& label)
		: next_control_position_{
			  ui_style::margins.tb, ui_style::margins.lr
		  }, label(label)
	{
	}

private:
	std::vector<std::shared_ptr<Control>> controls_;
	SDK::FVector2D next_control_position_;

	bool window_hovered_ = false;
	bool header_hovered_ = false;
	bool header_grabbed_ = false;
	bool can_use_controls_ = true;
	bool is_header_hovered(const SDK::FVector2D& cursor_pos) const;

public:
	SDK::FString label = L"EMPTY";
	SDK::FVector2D position = {100, 100};
	SDK::FVector2D size = {100, 100};


	SDK::FVector2D last_cursor_offset = {-10000, -10000};


	Window() : next_control_position_{ui_style::margins.lr, ui_style::margins.tb + ui_style::control_size.Y}
	{
	}

	template <typename T, typename... Args>
	void add_control(Args&&... args)
	{
		auto control = std::make_shared<T>(std::forward<Args>(args)..., next_control_position_, T::get_default_size());
		controls_.push_back(control);
		next_control_position_.Y += T::get_default_size().Y + ui_style::spacing;


		// controls size + 1 because of header
		size.Y =
			((controls_.size() + 1) * ui_style::control_size.Y) +
			((controls_.size()) * ui_style::spacing) +
			ui_style::margins.tb;

		size.X = ui_style::control_size.X + (ui_style::margins.lr * 2);

	}

	

	bool is_hovered(const SDK::FVector2D& cursor_pos) const;
	void render(const SDK::FVector2D& cursor_pos, const float fps);
	void init(SDK::FString label);
};
