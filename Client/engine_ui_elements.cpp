#include "pch.h"
#include "engine_ui_elements.hpp"

#include "animations.h"



void IntSlider::render(const SDK::FVector2D& root_pos, bool mouse_down)
{
	const SDK::FVector2D line_left = {
		root_pos.X + offset.X + (ui_style::margins.lr * 2), root_pos.Y + offset.Y + (size.Y / 2)
	};
	const SDK::FVector2D line_right = {
		root_pos.X + offset.X + size.X - (ui_style::margins.lr * 2), root_pos.Y + offset.Y + (size.Y / 2)
	};


	client_lib::modules::renderer->draw_line(
		line_left,
		line_right,
		2, ui_style::colors.control_bg);


	const float val_in_percent_range = (float(val - min_val) / float(max_val - min_val)) * 100.0f;
	const float slider_x_pos = line_left.X + ((size.X - (ui_style::margins.lr * 4)) / 100.0f) * val_in_percent_range;

	const SDK::FVector2D tri_root = {
		 slider_x_pos, line_right.Y
	};

	client_lib::modules::renderer->draw_filled_triangle(
		tri_root,
		{ tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4) },
		{ tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4) },
		ui_style::colors.control_fg);
	client_lib::modules::renderer->draw_triangle(
		tri_root,
		{ tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4) },
		{ tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4) },
		ui_style::colors.control_bg, 1);


	if (interactable_hovered)
	{
		client_lib::modules::renderer->draw_rect({ line_left.X - 1, line_left.Y - 1 },
			line_right.X - line_left.X + 2, 2, 1,
			ui_style::colors.control_hovered_outline);
		client_lib::modules::renderer->draw_triangle(
			tri_root,
			{ tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4) },
			{ tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4) },
			ui_style::colors.control_bg, 1);




		if (mouse_down)
		{
			client_lib::modules::renderer->draw_rect({ line_left.X - 1, line_left.Y - 1 },
				line_right.X - line_left.X + 2, 2, 1,
				ui_style::colors.control_selected_outline);
			client_lib::modules::renderer->draw_triangle(
				tri_root,
				{ tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4) },
				{ tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4) },
				ui_style::colors.control_bg, 1);


			// FIX ME: Slider does not allow val to get to max_val. the last 10-20% of the slider does not work as expected.


			float new_slider_pos = animation::lerp<float>(slider_x_pos, last_mouse_pos.X, 0.75f);

			const float slider_percentage = ((new_slider_pos - line_left.X) / (size.X - (ui_style::margins.lr * 4))) * 100.0f;

			const float val_from_slider = min_val + ((slider_percentage / 100.0f) * (max_val - min_val));

			val = static_cast<int>(max(min_val, min(val_from_slider, max_val)));

			// END FIX ME
		}
	}

	interactable_hovered = false;


	wchar_t label_buffer[100];
	swprintf(label_buffer, std::size(label_buffer), label.wc_str(), val.load());

	client_lib::modules::renderer->draw_text_c(label_buffer,
		{
			root_pos.X + offset.X + (size.X / 2) - ui_style::margins.lr,
			root_pos.Y + offset.Y
		},
		ui_style::colors.text, true, false, false);
}

bool IntSlider::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	interactable_hovered = engine_extensions::is_point_in_rect(cursor_pos,
		{
			root_pos.X + offset.X,
			root_pos.Y + offset.Y + (size.Y / 2)
		},
		{ size.X, size.Y / 2 }
	);
	last_mouse_pos = cursor_pos;
	return interactable_hovered;
}


void FloatSlider::render(const SDK::FVector2D& root_pos, bool mouse_down)
{
	const SDK::FVector2D line_left = {
		root_pos.X + offset.X + (ui_style::margins.lr * 2), root_pos.Y + offset.Y + (size.Y / 2)
	};
	const SDK::FVector2D line_right = {
		root_pos.X + offset.X + size.X - (ui_style::margins.lr * 2), root_pos.Y + offset.Y + (size.Y / 2)
	};


	client_lib::modules::renderer->draw_line(
		line_left,
		line_right,
		2, ui_style::colors.control_bg);


	const float val_in_percent_range = ((val - min_val) / (max_val - min_val)) * 100.0f;
	const float slider_x_pos = line_left.X + ((size.X - (ui_style::margins.lr * 4)) / 100.0f) * val_in_percent_range;

	const SDK::FVector2D tri_root = {
		 slider_x_pos, line_right.Y
	};

	client_lib::modules::renderer->draw_filled_triangle(
		tri_root,
		{tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4)},
		{tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4)},
		ui_style::colors.control_fg);
	client_lib::modules::renderer->draw_triangle(
		tri_root,
		{tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4)},
		{tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4)},
		ui_style::colors.control_bg, 1);


	if (interactable_hovered)
	{
		client_lib::modules::renderer->draw_rect({line_left.X - 1, line_left.Y - 1},
		                                         line_right.X - line_left.X + 2, 3, 1,
		                                         ui_style::colors.control_hovered_outline);
		client_lib::modules::renderer->draw_triangle(
			tri_root,
			{tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4)},
			{tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4)},
			ui_style::colors.control_bg, 1);

		if (mouse_down)
		{
			client_lib::modules::renderer->draw_rect({ line_left.X - 1, line_left.Y - 1 },
				line_right.X - line_left.X + 2, 3, 1,
				ui_style::colors.control_selected_outline);
			client_lib::modules::renderer->draw_triangle(
				tri_root,
				{ tri_root.X - (size.Y / 6), tri_root.Y + (size.Y / 4) },
				{ tri_root.X + (size.Y / 6), tri_root.Y + (size.Y / 4) },
				ui_style::colors.control_bg, 1);


			const float new_slider_pos = animation::lerp<float>(slider_x_pos, last_mouse_pos.X, 0.55f);

			const float slider_percentage = ((new_slider_pos - line_left.X) / (size.X - (ui_style::margins.lr * 4))) * 100.0f;

			const float val_from_slider = min_val + ((slider_percentage / 100.0f) * (max_val - min_val));

			val = max(min_val, min(val_from_slider, max_val));
		}
	}

	interactable_hovered = false;


	wchar_t label_buffer[100];
	swprintf(label_buffer, std::size(label_buffer), label.wc_str(), val.load());

	client_lib::modules::renderer->draw_text_c(label_buffer,
	                                           {
		                                           root_pos.X + offset.X + (size.X / 2) - ui_style::margins.lr,
		                                           root_pos.Y + offset.Y
	                                           },
	                                           ui_style::colors.text, true, false, false);
}

bool FloatSlider::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	interactable_hovered = engine_extensions::is_point_in_rect(cursor_pos,
	                                                           {
		                                                           root_pos.X + offset.X,
		                                                           root_pos.Y + offset.Y + (size.Y / 2)
	                                                           },
	                                                           {size.X, size.Y / 2}
	);
	last_mouse_pos = cursor_pos;
	return interactable_hovered;
}


void Button::render(const SDK::FVector2D& root_pos, const bool mouse_down)
{
	client_lib::modules::renderer->draw_filled_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
	                                                size.X, size.Y, ui_style::colors.control_bg);
	client_lib::modules::renderer->draw_filled_rect({root_pos.X + offset.X + 1, root_pos.Y + offset.Y + 1},
	                                                size.X - 2, size.Y - 2, ui_style::colors.control_fg);

	if (interactable_hovered)
	{
		client_lib::modules::renderer->draw_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
		                                         size.X, size.Y - 1, 1, ui_style::colors.control_hovered_outline);
		if (mouse_down)
		{
			client_lib::modules::renderer->draw_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
			                                         size.X, size.Y - 1, 1, ui_style::colors.control_selected_outline);
			if (!was_just_used)
			{
				func();
				was_just_used = true;
			}
		}
		else
		{
			was_just_used = false;
		}
	}
	else
	{
		was_just_used = false;
	}

	interactable_hovered = false;

	client_lib::modules::renderer->draw_text_c(label,
	                                           {
		                                           root_pos.X + offset.X + (size.X / 2) - ui_style::margins.lr,
		                                           root_pos.Y + offset.Y + (size.Y / 2)
	                                           },
	                                           ui_style::colors.text, true, true, false);
}

bool Button::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	interactable_hovered = engine_extensions::is_point_in_rect(cursor_pos, {
		                                                           root_pos.X + offset.X, root_pos.Y + offset.Y
	                                                           }, size);
	return interactable_hovered;
}


void Empty::render(const SDK::FVector2D& root_pos, bool mouse_down)
{
}

bool Empty::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	return false;
}

void Label::render(const SDK::FVector2D& root_pos, bool mouse_down)
{
	client_lib::modules::renderer->draw_text_c(label,
	                                           {
		                                           root_pos.X + offset.X + (size.X / 2) - ui_style::margins.lr,
		                                           root_pos.Y + offset.Y + (size.Y / 2)
	                                           },
	                                           ui_style::colors.text, true, true, false);
}

bool Label::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	return false;
}

void Seperator::render(const SDK::FVector2D& root_pos, bool mouse_down)
{
	const SDK::FVector2D line_left = {
	root_pos.X + offset.X + (ui_style::margins.lr), root_pos.Y + offset.Y + (size.Y / 2)
	};
	const SDK::FVector2D line_right = {
		root_pos.X + offset.X + size.X - (ui_style::margins.lr), root_pos.Y + offset.Y + (size.Y / 2)
	};

	client_lib::modules::renderer->draw_line(
		line_left,
		line_right,
		1, ui_style::colors.seperator);

}

bool Seperator::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	return false;
}

bool Toggle::is_interactable_hovered(const SDK::FVector2D& cursor_pos, const SDK::FVector2D& root_pos)
{
	interactable_hovered = engine_extensions::is_point_in_rect(cursor_pos, {
		                                                           root_pos.X + offset.X, root_pos.Y + offset.Y
	                                                           }, size);
	return interactable_hovered;
}

void Toggle::render(const SDK::FVector2D& root_pos, const bool mouse_down)
{
	client_lib::modules::renderer->draw_filled_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
	                                                size.Y, size.Y, ui_style::colors.control_bg);

	if (interactable_hovered)
	{
		client_lib::modules::renderer->draw_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
		                                         size.Y, size.Y, 1, ui_style::colors.control_hovered_outline);
		if (mouse_down)
		{
			client_lib::modules::renderer->draw_rect({root_pos.X + offset.X, root_pos.Y + offset.Y},
			                                         size.Y, size.Y, 1, ui_style::colors.control_selected_outline);
			if (!was_just_toggled)
			{
				val = !val;
				was_just_toggled = true;
			}
		}
		else
		{
			was_just_toggled = false;
		}
	}
	else
	{
		was_just_toggled = false;
	}
	interactable_hovered = false;

	if (val.load())
	{
		const float n = 3;
		const SDK::FVector2D TL = {root_pos.X + offset.X + n, root_pos.Y + offset.Y + n};
		const SDK::FVector2D BR = {root_pos.X + offset.X + size.Y - n, root_pos.Y + offset.Y + size.Y - n};

		client_lib::modules::renderer->draw_filled_rect(TL, BR, ui_style::colors.control_fg);
	}

	client_lib::modules::renderer->draw_text_c(label,
	                                           {
		                                           root_pos.X + offset.X + size.Y + +ui_style::margins.lr,
		                                           // root_pos.X + offset.X + size.Y + ((size.X - size.Y) / 2) - ui_style::margins.lr,
		                                           root_pos.Y + offset.Y + (size.Y / 2)
	                                           },
	                                           ui_style::colors.text, false, true, false);
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
			animation::scaled_alpha(0.25f, fps));

		window_hovered_ = true;
		header_hovered_ = true;
		can_use_controls_ = false;
	}
	else
	{
		can_use_controls_ = true;
	}


	//window bg
	client_lib::modules::renderer->draw_filled_rect(position, size.X, size.Y,
	                                                ui_style::colors.window_bg);

	//header
	client_lib::modules::renderer->draw_filled_rect(position, size.X, ui_style::control_size.Y,
	                                                ui_style::colors.window_fg);
	client_lib::modules::renderer->draw_text_c(label,
	                                           {
		                                           position.X + (size.X / 2) - ui_style::margins.lr,
		                                           position.Y + (ui_style::control_size.Y / 2)
	                                           },
	                                           ui_style::colors.text, true, true, false);


	bool any_control_hovered = false;
	for (const auto& control : controls_)
	{
		// Only allow controls to be interactable if not dragging
		if (can_use_controls_)
		{
			// don't select window when selecting a control
			any_control_hovered = control->is_interactable_hovered(cursor_pos, position) ? true : any_control_hovered;
		}

		control->render(position, mouse_down);
	}

	window_selected_ = any_control_hovered ? false : window_hovered_ && mouse_down;
	//outline
	if (window_hovered_)
	{
		if (window_selected_)
		{
			client_lib::modules::renderer->draw_rect(position, size, 1,
			                                         ui_style::colors.window_selected_outline);
		}
		else
		{
			client_lib::modules::renderer->draw_rect(position, size, 1,
			                                         ui_style::colors.window_hovered_outline);
		}
	}
	else
	{
		client_lib::modules::renderer->draw_rect(position, size, 1, ui_style::colors.window_fg);
	}
}

void Window::init(const SDK::FString label)
{
	this->label = label;
}
