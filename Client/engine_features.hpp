#pragma once
#include <thread>

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

	struct score_grace_s : feature
	{
		std::atomic<int> last_modified_score = 0;
		std::atomic<int> delta_score_threshold = 100;
	};

	std::atomic<bool> thread_exit_signal = false;
	const std::chrono::milliseconds exec_thread_sleep_time = 5ms;
	const std::chrono::milliseconds lazy_thread_sleep_time = 500ms;

	std::jthread exec_thread;
	std::jthread lazy_thread;

	void exec_thread_func();
	void lazy_thread_func();

public:
	score_grace_s score_grace;
	feature keep_mags_full;

	exec_feature speedhack;
	exec_feature force_surrender;


	exec_feature test_feature;


	void start_threads();
	void join_threads();

	void init();
};

