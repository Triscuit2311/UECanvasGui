#pragma once

namespace animation
{
	constexpr float base = 1.0f;
	constexpr float reference_fps = 60.0f; // FPS to base calculations on

	// scales alpha value based on actual fps, relative to ref FPS
	inline float scaled_alpha(const float alpha, const float fps)
	{
		return fps <= 0 ? 0 : alpha * (reference_fps / fps);
	}
}
