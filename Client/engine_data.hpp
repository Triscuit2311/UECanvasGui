#pragma once
class engine_data
{
public:
	static void init()
	{
		LOG("Initializing SDK");
		SDK::InitGObjects();
		SDK::FName::InitGNames();
		LOG("SDK Init Complete");
		SPE("\t> GObjects: 0x%011X", SDK::UObject::GObjects);
		SPE("\t> GNames: 0x%011X", SDK::FName::GNames);
		SPE("\t> GWorld: 0x%011X", GWORLD);
	}

	static bool world_ok()
	{
		if (!GWORLD) {
			return false;
		}
		return true;
	}

	static SDK::AReadyOrNotGameState* GetGameState();
	static SDK::AReadyOrNotGameMode* GetGameMode();
	static SDK::ULocalPlayer* GetLocalPlayer();
	static SDK::AReadyOrNotPlayerController* GetLocalPlayerController();
	static SDK::APlayerCharacter* GetLocalPlayerCharacter();
	static bool LoopAICharacters(std::function<void(SDK::ACyberneticCharacter*)> func, bool exit_on_error);
	static bool LoopItems(std::function<void(SDK::ABaseItem*)> func, bool exit_on_error);
	static bool LoopReportables(std::function<void(SDK::AReportableActor*)> func, bool exit_on_error);

public:


	SDK::TArray<SDK::EFireMode> fire_modes_unlocked;


	engine_data();

	engine_data(const engine_data& other)
	{
	}

	engine_data(engine_data&& other) noexcept
	{
	}

	engine_data& operator=(const engine_data& other)
	{
		if (this == &other)
			return *this;
		return *this;
	}

	engine_data& operator=(engine_data&& other) noexcept
	{
		if (this == &other)
			return *this;
		return *this;
	}
};

