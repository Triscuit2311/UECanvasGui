#include "pch.h"
#include "engine_ui_elements.hpp"


// client_lib::modules::renderer->draw_filled_rect(canvas_, root_, size_.X, size_.Y, { 1,0,0,1 });
// // LOG("Rendering window at: %f,%f -> %f %f", root_.X, root_.Y, size_.X + root_.X, size_.Y + root_.Y);
// for (auto control: controls)
// {
// 	control->render();
// }
void Toggle::render(SDK::UCanvas* canvas, const SDK::FVector2D& root_pos)
{
    {
        // Render the toggle
        // LOG("Rendering toggle at: %f,%f -> %f %f",
        //     root_pos.X + offset.X, root_pos.Y + offset.Y, // start pos
        //     root_pos.X + size.X + offset.X, root_pos.Y + size.Y + offset.Y); // end pos

        client_lib::modules::renderer->draw_filled_rect(canvas, { root_pos.X + offset.X , root_pos.Y + offset.Y }, size.X, size.Y,
            client_lib::modules::renderer->col.l_midnight_blue);
        client_lib::modules::renderer->draw_text_f(canvas, label, { root_pos.X + offset.X , root_pos.Y + offset.Y }, 
            client_lib::modules::renderer->col.midnight_blue);
    }
}

void Window::render(SDK::UCanvas* canvas)
{
    {
        client_lib::modules::renderer->draw_filled_rect(canvas, { position.X, position.Y }, size.X, size.Y, 
            client_lib::modules::renderer->col.midnight_blue);

       // LOG("Rendering window at: %f,%f -> %f %f", position.X, position.Y, size.X + position.X, size.Y + position.Y);
        for (auto& control : controls) {
            control->render(canvas, position);
        }
    }
}
