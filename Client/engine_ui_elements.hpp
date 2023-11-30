#pragma once
#include "engine_extensions.hpp"
#include "ui_style.h"

class engine_ui;

struct Control
{
	SDK::FVector2D offset ={};
	SDK::FVector2D size = {};
	SDK::FString label;
	bool interactable_hovered = false;
	int slots = 1;

	// Constructor
	Control(const SDK::FString text): label(text)
	{
	}

	// Virtual render function - can be omitted if not needed
	virtual void render(const SDK::FVector2D& root_pos, bool mouse_down) = 0;
	virtual bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos) = 0;
};

struct Empty : public Control
{
	Empty(const int slots)
		: Control(L"")
	{
		this->slots = slots;
	}

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
	virtual bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos);

};

struct Label : public Control
{
	Label(const SDK::FString label)
		: Control(label)
	{
	}

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
	virtual bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos);
};

struct Seperator : public Control
{
	Seperator(const SDK::FString label)
		: Control(label)
	{
	}

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
	virtual bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos);
};


struct Toggle : public Control
{
	std::atomic<bool>& val;
	bool was_just_toggled;
	bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos);

	Toggle(const SDK::FString label, std::atomic<bool>& val)
		: Control(label), val(val)
	{
	}

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
};

struct Button : public Control
{
	std::function<void()>& func;
	bool was_just_used = false;

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
	bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos) override;
	Button(const SDK::FString label, std::function<void()>& action)
		: Control(label), func(action)
	{
	}
};


struct IntSlider : public Control
{
	std::atomic<int>& val;
	int min_val;
	int max_val;
	bool was_just_used = false;
	SDK::FVector2D last_mouse_pos = {};

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
	bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos) override;
	IntSlider(const SDK::FString label, std::atomic<int>& val, const int min_v, const int max_v)
		: Control(label), val(val), min_val(min_v), max_val(max_v)
	{
		slots = 2;
	}
};

struct FloatSlider : public Control
{
	std::atomic<float>& val;
	float min_val;
	float max_val;
	bool was_just_used = false;
	SDK::FVector2D last_mouse_pos = {};

	void render(const SDK::FVector2D& root_pos, bool mouse_down) override;
	bool is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos) override;
	FloatSlider(const SDK::FString label, std::atomic<float>& val, const float min_v, const float max_v)
		: Control(label), val(val), min_val(min_v), max_val(max_v)
	{
		slots = 2;
	}
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
	bool window_selected_ = false;
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
		auto control = std::make_shared<T>(std::forward<Args>(args)...);
		control->offset = next_control_position_;
		control->size.Y = control->slots * ui_style::control_size.Y;
		control->size.X = ui_style::control_size.X;

		controls_.push_back(control);


		next_control_position_.Y += (control->slots * ui_style::control_size.Y)  + ui_style::spacing;

		// controls size + 1 because of header

		size.Y = ui_style::control_size.Y + ui_style::margins.tb; // min size for header
		for (const auto & c: controls_)
		{
			size.Y += ui_style::control_size.Y * c->slots;
			size.Y += ui_style::spacing;
		}

		// size.Y =
		// 	((controls_.size() + 1) * ui_style::control_size.Y) +
		// 	((controls_.size()) * ui_style::spacing) +
		// 	ui_style::margins.tb;

		size.X = ui_style::control_size.X + (ui_style::margins.lr * 2);

	}


	

	bool is_hovered(const SDK::FVector2D& cursor_pos) const;
	void render(const SDK::FVector2D& cursor_pos, const float fps);
	void init(SDK::FString label);
};
