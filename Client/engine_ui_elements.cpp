#include "pch.h"
#include "engine_ui_elements.hpp"

#include "animations.h"


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

bool Window::is_header_hovered(const SDK::FVector2D& cursor_pos) const
{
	return engine_extensions::is_point_in_rect(cursor_pos, position, ui_style::control_size);
}

bool Window::is_hovered(const SDK::FVector2D& cursor_pos) const
{
	return engine_extensions::is_point_in_rect(cursor_pos, position, size);
}

void Window::render(const SDK::FVector2D& cursor_pos, const float fps)
{

	window_hovered_ = is_hovered(cursor_pos);
	//only check header if window is hovered
	header_hovered_ = window_hovered_ && is_header_hovered(cursor_pos);

	const bool mouse_down = client_lib::globals::mouse_down.load();

	// if header is already grabbed, it stays grabbed while mouse is down
	// prevents having to keep mouse in rendered header area to move window
	header_grabbed_ = header_grabbed_ ? mouse_down : header_hovered_ && mouse_down;


	if (header_grabbed_)
	{
		position = engine_extensions::lerp(
			position,
			{
				cursor_pos.X - (size.X / 2),
				cursor_pos.Y - (ui_style::control_size.Y / 2)
			},
			animation::scaled_alpha(0.15f, fps));

		window_hovered_ = true;
		header_hovered_ = true;
		can_use_controls_ = false;
	}else
	{
		can_use_controls_ = true;
	}


	//window bg
	client_lib::modules::renderer->draw_filled_rect(position, size.X, size.Y,
	                                                ui_style::colors.window_bg);

	//header

	client_lib::modules::renderer->draw_filled_rect(position, size.X, ui_style::control_size.Y,
	                                                ui_style::colors.control_bg);
	if (header_hovered_)
	{
		client_lib::modules::renderer->draw_text_f(label, position,
		                                           {0, 0, 1, 1});
	}
	else
	{
		client_lib::modules::renderer->draw_text_f(label, position,
		                                           ui_style::colors.control_fg);
	}

	//outline
	if (window_hovered_)
	{
		if (mouse_down)
		{
			client_lib::modules::renderer->draw_rect(position, size, 1,
				{0, 1, 0, 1});
		}
		else
		{
			client_lib::modules::renderer->draw_rect(position, size, 1,
				{1, 0, 0, 1});
		}
	}
	else
	{
		client_lib::modules::renderer->draw_rect(position, size, 1, ui_style::colors.window_fg);
	}



	for (const auto& control : controls_)
	{
		control->render(position);
	}
}

void Window::init(const SDK::FString label)
{
	this->label = label;
}
