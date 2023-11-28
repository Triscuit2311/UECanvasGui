#include "pch.h"
#include "engine_ui_elements.hpp"


void Toggle::render(const SDK::FVector2D& root_pos)
{
	client_lib::modules::renderer->draw_filled_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
	                                                size.Y, size.Y, ui_style::colors.control_bg);
	if (val.load())
	{
		float n = 3;
		SDK::FVector2D TL = {root_pos.X + offset.X + n, root_pos.Y + offset.Y + n};
		SDK::FVector2D BR = {root_pos.X + offset.X + size.Y - n, root_pos.Y + offset.Y + size.Y - n};

		client_lib::modules::renderer->draw_filled_rect(TL, BR, ui_style::colors.control_fg);
	}
	client_lib::modules::renderer->draw_text_f(label,
	                                           {
		                                           root_pos.X + offset.X + size.Y + ui_style::margins.lr,
		                                           root_pos.Y + offset.Y
	                                           },
	                                           ui_style::colors.control_fg);
}

bool Toggle::is_hovered(const SDK::FVector2D& cursor_pos)
{
	//TODO: implement
	return false;
}

bool Window::is_hovered(const SDK::FVector2D& cursor_pos) const
{
	if (cursor_pos.X < position.X) return false;
	if (cursor_pos.X > position.X + size.X) return false;
	if (cursor_pos.Y < position.Y) return false;
	if (cursor_pos.Y > position.Y + size.Y) return false;
	return true;
}

void Window::render(const SDK::FVector2D& cursor_pos)
{
	hovered_ = is_hovered(cursor_pos);

	client_lib::modules::renderer->draw_filled_rect(position, size.X, size.Y,
	                                                ui_style::colors.window_bg);
	client_lib::modules::renderer->draw_filled_rect(position, size.X, ui_style::control_dimensions.h,
	                                                ui_style::colors.control_bg);
	client_lib::modules::renderer->draw_text_f(label, position,
	                                           ui_style::colors.control_fg);


	//outline
	if (hovered_) {
		client_lib::modules::renderer->draw_rect(position, size, 1, {1,0,0,1});

	}
	else {
		client_lib::modules::renderer->draw_rect(position, size, 1, ui_style::colors.window_fg);
	}

	// //shadow
	// client_lib::modules::renderer->draw_line(canvas,
	//                                          {position.X + size.X + 1, position.Y + size.Y}, // BR
	//                                          {position.X - 1, position.Y + size.Y}, // BL
	//                                          1, {0,0,0, 1});
	//
	// client_lib::modules::renderer->draw_line(canvas,
	//                                          {position.X + size.X + 1, position.Y + size.Y}, // BR
	//                                          {position.X + size.X + 1, position.Y},		//TR
	//                                          1, {0, 0, 0, 1});
	//
	// //highlight
	// client_lib::modules::renderer->draw_line(canvas,
	//                                          {position.X - 1, position.Y - 1}, //TL
	//                                          {position.X + size.X + 1, position.Y - 1}, //TR
	//                                          1, {1, 1, 1, 1});
	//
	// client_lib::modules::renderer->draw_line(canvas,
	//                                          {position.X - 1, position.Y - 1}, //TL
	//                                          {position.X - 1, position.Y + size.Y - 1}, //BL
	//                                          1, {1, 1, 1, 1});

	for (const auto& control : controls_)
	{
		control->render(position);
	}
}

void Window::init(const SDK::FString label)
{
	this->label = label;
}
