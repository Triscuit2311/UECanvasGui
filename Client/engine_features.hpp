#pragma once
#include <map>


using namespace std::chrono_literals;

class engine_features
{
	struct feature
	{
		std::atomic<bool> enabled = false;
	};


	struct exec_feature : feature
	{
		std::function<void()> on_exec = nullptr;
	};

	struct float_feature : feature
	{
		float min_v = 0.0f;

		float_feature(const float min, const float max, const float val)
			: min_v(min),
			  max_v(max),
			  val(val)
		{
		}

		float max_v = 1.0f;
		std::atomic<float> val = min_v;
	};

	struct score_grace_s : feature
	{
		std::atomic<int> last_modified_score = 0;
		std::atomic<int> delta_score_threshold = 100;
	};



	std::atomic<bool> thread_exit_signal = false;
	const std::chrono::milliseconds exec_thread_sleep_time = 50ms;
	const std::chrono::milliseconds lazy_thread_sleep_time = 500ms;

	std::jthread exec_thread;
	std::jthread lazy_thread;

	void exec_thread_func();
	void lazy_thread_func();

public:

	// Lobby
	score_grace_s score_grace;
	exec_feature force_surrender;


	// Player
	feature keep_mags_full;
	feature player_god_mode;
	feature crouch_super_speed;
	feature auto_stop_bleed;


	// Weapon
	feature always_full_auto;
	feature no_recoil;
	feature no_spread;
	float_feature custom_fire_rate = float_feature{ 0.0001f,0.3f, 0.1f};



	exec_feature test_feature;
	exec_feature setup_mats;
	size_t mat_idx = 0;

	std::vector<std::pair<std::string, SDK::UMaterial*>> all_mats = {};



	void start_threads();
	void join_threads();

	void init();
};

