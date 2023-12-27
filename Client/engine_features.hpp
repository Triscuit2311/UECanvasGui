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

	struct color_models_s : exec_feature
	{
		SDK::UMaterial* red_mat = nullptr;
		SDK::UMaterial* blue_mat = nullptr;
		SDK::UMaterial* green_mat = nullptr;
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
	exec_feature tp_civs;
	exec_feature tp_suspects;
	color_models_s color_models;
	feature civ_godmode;
	feature squad_godmode;
	exec_feature collect_evidence;


	// Player
	feature keep_mags_full;
	feature player_god_mode;
	feature crouch_super_speed;
	feature auto_stop_bleed;


	// Weapon
	feature always_full_auto;
	feature no_recoil;
	feature no_spread;
	feature instant_ads;
	feature no_brass_spawn;
	float_feature custom_fire_rate = float_feature{ 0.0001f,0.3f, 0.1f };



	exec_feature test_feature;
	exec_feature setup_mats;
	size_t mat_idx = 0;

	std::vector<std::pair<std::string, SDK::UMaterial*>> all_mats = {};



	void start_threads();
	void join_threads();

	void init();
	void lazy_loop_squad(SDK::ACyberneticCharacter* ai) const;
	void lazy_loop_civ(SDK::ACyberneticCharacter* ai) const;
	static void lazy_loop_suspect(SDK::ACyberneticCharacter* ai);
};

