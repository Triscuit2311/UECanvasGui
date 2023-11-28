#pragma once
class engine_renderer
{
	SDK::UCanvas* canvas_ = nullptr;
public:
	engine_renderer();

	void set_canvas(SDK::UCanvas* canvas);

	engine_renderer& operator=(const engine_renderer& other);

	engine_renderer& operator=(engine_renderer&& other) noexcept;

	std::unordered_map<std::string, SDK::UFont*> fonts_map = {};
	SDK::UFont* default_font;

	void init();

	void draw_text(const wchar_t* text, const SDK::FVector2D& pos,
	               SDK::FLinearColor color) const;
	void draw_text_f(const SDK::FString& text, const SDK::FVector2D& pos,
	                 SDK::FLinearColor color) const;
	void draw_text_outlined(const wchar_t* text, const SDK::FVector2D& pos,
	                        SDK::FLinearColor color) const;
	void draw_text_c(const wchar_t* text, const SDK::FVector2D& pos,
	                 SDK::FLinearColor color, bool centered_x, bool centered_y, bool outlined) const;

	void draw_filled_rect(const SDK::FVector2D& pos, float w, float h,
	                      SDK::FLinearColor color) const;
	void draw_filled_rect(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
		SDK::FLinearColor color) const;
	void draw_rect(const SDK::FVector2D& pos, float w, float h,
	               float thickness, SDK::FLinearColor color) const;
	void draw_rect(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
	               float thickness,
	               SDK::FLinearColor color) const;

	void draw_line(const SDK::FVector2D& pos_a, const SDK::FVector2D& pos_b,
	               const float thickness, const SDK::
	               FLinearColor color) const;


	struct colors
	{
		SDK::FLinearColor none{0, 0, 0, 0};
		SDK::FLinearColor red{1.0f, 0, 0, 1.0f};
		SDK::FLinearColor l_red{1.0f, 0.3f, 0.3f, 1.0f};
		SDK::FLinearColor green{0, 1.0f, 0, 1.0f};
		SDK::FLinearColor l_green{0.3f, 1.0f, 0.3f, 1.0f};
		SDK::FLinearColor blue{0, 0, 1.0f, 1.0f};
		SDK::FLinearColor l_blue{0.3f, 0.3f, 1.0f, 1.0f};
		SDK::FLinearColor black{0, 0, 0, 1.0f};
		SDK::FLinearColor white{1.0f, 1.0f, 1.0f, 1.0f};
		SDK::FLinearColor l_gray{0.7f, 0.7f, 0.7f, 1.0f};
		SDK::FLinearColor d_gray{0.3f, 0.3f, 0.3f, 1.0f};
		SDK::FLinearColor yellow{1.0f, 1.0f, 0, 1.0f};
		SDK::FLinearColor l_yellow{1.0f, 1.0f, 0.3f, 1.0f};
		SDK::FLinearColor cyan{0, 1.0f, 1.0f, 1.0f};
		SDK::FLinearColor l_cyan{0.3f, 1.0f, 1.0f, 1.0f};
		SDK::FLinearColor magenta{1.0f, 0, 1.0f, 1.0f};
		SDK::FLinearColor l_magenta{1.0f, 0.3f, 1.0f, 1.0f};
		SDK::FLinearColor orange{1.0f, 0.5f, 0, 1.0f};
		SDK::FLinearColor l_orange{1.0f, 0.6f, 0.3f, 1.0f};
		SDK::FLinearColor purple{0.5f, 0, 0.5f, 1.0f};
		SDK::FLinearColor l_purple{0.6f, 0.3f, 0.6f, 1.0f};
		SDK::FLinearColor pink{1.0f, 0.5f, 0.7f, 1.0f};
		SDK::FLinearColor l_pink{1.0f, 0.6f, 0.8f, 1.0f};
		SDK::FLinearColor brown{0.4f, 0.2f, 0, 1.0f};
		SDK::FLinearColor l_brown{0.6f, 0.4f, 0.3f, 1.0f};
		SDK::FLinearColor olive{0.5f, 0.5f, 0, 1.0f};
		SDK::FLinearColor l_olive{0.6f, 0.6f, 0.3f, 1.0f};
		SDK::FLinearColor teal{0, 0.5f, 0.5f, 1.0f};
		SDK::FLinearColor l_teal{0.3f, 0.6f, 0.6f, 1.0f};
		SDK::FLinearColor lavender{0.7f, 0.5f, 0.8f, 1.0f};
		SDK::FLinearColor l_lavender{0.8f, 0.6f, 0.9f, 1.0f};
		SDK::FLinearColor maroon{0.5f, 0, 0, 1.0f};
		SDK::FLinearColor l_maroon{0.6f, 0.3f, 0.3f, 1.0f};
		SDK::FLinearColor gold{1.0f, 0.8f, 0, 1.0f};
		SDK::FLinearColor l_gold{1.0f, 0.9f, 0.3f, 1.0f};
		SDK::FLinearColor silver{0.8f, 0.8f, 0.8f, 1.0f};
		SDK::FLinearColor l_silver{0.9f, 0.9f, 0.9f, 1.0f};
		SDK::FLinearColor indigo{0.3f, 0, 0.5f, 1.0f};
		SDK::FLinearColor l_indigo{0.4f, 0.3f, 0.6f, 1.0f};
		SDK::FLinearColor lime{0.5f, 1.0f, 0, 1.0f};
		SDK::FLinearColor l_lime{0.6f, 1.0f, 0.3f, 1.0f};
		SDK::FLinearColor turquoise{0, 0.8f, 0.8f, 1.0f};
		SDK::FLinearColor l_turquoise{0.3f, 0.9f, 0.9f, 1.0f};
		SDK::FLinearColor peach{1.0f, 0.7f, 0.5f, 1.0f};
		SDK::FLinearColor l_peach{1.0f, 0.8f, 0.6f, 1.0f};
		SDK::FLinearColor forest_green{0.1f, 0.4f, 0.1f, 1.0f};
		SDK::FLinearColor l_forest_green{0.2f, 0.5f, 0.2f, 1.0f};
		SDK::FLinearColor sky_blue{0.3f, 0.6f, 0.8f, 1.0f};
		SDK::FLinearColor l_sky_blue{0.4f, 0.7f, 0.9f, 1.0f};
		SDK::FLinearColor brick_red{0.7f, 0.2f, 0.1f, 1.0f};
		SDK::FLinearColor l_brick_red{0.8f, 0.3f, 0.2f, 1.0f};
		SDK::FLinearColor lavender_blue{0.5f, 0.5f, 0.8f, 1.0f};
		SDK::FLinearColor l_lavender_blue{0.6f, 0.6f, 0.9f, 1.0f};
		SDK::FLinearColor coral{1.0f, 0.5f, 0.3f, 1.0f};
		SDK::FLinearColor l_coral{1.0f, 0.6f, 0.4f, 1.0f};
		SDK::FLinearColor midnight_blue{0.1f, 0.1f, 0.4f, 1.0f};
		SDK::FLinearColor l_midnight_blue{0.2f, 0.2f, 0.5f, 1.0f};
		SDK::FLinearColor khaki{0.7f, 0.6f, 0.2f, 1.0f};
		SDK::FLinearColor l_khaki{0.8f, 0.7f, 0.4f, 1.0f};
		SDK::FLinearColor slate_gray{0.4f, 0.5f, 0.6f, 1.0f};
		SDK::FLinearColor l_slate_gray{0.5f, 0.6f, 0.7f, 1.0f};
	} col;
};
