#pragma once
#include <algorithm>

namespace animation
{
	constexpr float base = 1.0f;
	constexpr float reference_fps = 60.0f; // FPS to base calculations on

	// scales alpha value based on actual fps, relative to ref FPS
	inline float scaled_alpha(const float alpha, const float fps)
	{
		return fps <= 0 ? 0 : alpha * (reference_fps / fps);
	}


    constexpr float EASE_FACTOR = 1.70158f;


    template <typename T>
    T lerp(const T& start, const T& end, float val) {
        val = std::clamp(val, 0.0f, 1.0f);
        return start + (end - start) * val;
    }

    template<typename T, typename C>
    float SlideAnimation(const T start, const T end, C duration, C tick) {
        float n = fmod(tick, duration) / duration; // Normalize time between 0 and 1

        // Apply a simple easing equation to create overshoot and settle effect
        if (n < 0.5f) {
            // Overshoot phase
            n = 2.0f * n;
            return start + (end - start) * (n * n * ((EASE_FACTOR + 1.0f) * n - EASE_FACTOR) * 0.5f);
        }
        else {
            // Settle phase
            n = 2.0f * (n - 0.5f);
            return start + (end - start) * (n * n * ((EASE_FACTOR + 1.0f) * n + EASE_FACTOR) * 0.5f);
        }
    }

}
