#pragma once

class Window;

namespace ui_vars
{
	inline float margin = 10;
	inline float control_width = 75;
	inline float control_height = 20;
	inline float spacing = 5;

}




struct Control
{
	SDK::FVector2D offset;
	SDK::FVector2D size;
	SDK::FString label;

	// Constructor
	Control(SDK::FString text, SDK::FVector2D pos, SDK::FVector2D sz) : label(text), offset(pos), size(sz)
	{
	}

	// Virtual render function - can be omitted if not needed
	virtual void render(SDK::UCanvas* canvas, const SDK::FVector2D& root_pos) = 0;

	static SDK::FVector2D getDefaultSize()
	{
		return {ui_vars::control_width, ui_vars::control_height};
	}
};

struct Toggle : public Control
{
	std::atomic<bool>& value;

	Toggle(const SDK::FString label, std::atomic<bool>& val, SDK::FVector2D pos, SDK::FVector2D sz)
		: Control(label, pos, sz), value(val)
	{
	}

	void render(SDK::UCanvas* canvas, const SDK::FVector2D& root_pos) override;
};



//todo: determine max control width
class Window
{
	std::vector<std::shared_ptr<Control>> controls;
	SDK::FVector2D nextControlPosition;

public:
	SDK::FVector2D position = {100, 100};
	SDK::FVector2D size = {100, 100};

	Window() : nextControlPosition{ui_vars::margin, ui_vars::margin}
	{
	}

	template <typename T, typename... Args>
	void addControl(Args&&... args)
	{
		auto control = std::make_shared<T>(std::forward<Args>(args)..., nextControlPosition, T::getDefaultSize());
		controls.push_back(control);
		nextControlPosition.Y += T::getDefaultSize().Y + ui_vars::spacing;

		size.Y = 
			(controls.size() * ui_vars::control_height) +
			((controls.size() - 1) * ui_vars::spacing) + 
			(ui_vars::margin * 2);

		size.X = ui_vars::control_width + (ui_vars::margin * 2);
	}


	void render(SDK::UCanvas* canvas);
};
