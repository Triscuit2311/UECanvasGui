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

	struct static_objects
	{
		SDK::UKismetSystemLibrary* KismetSystemLibrary = nullptr;
		bool ensure();
		bool update();
	} statics;

	struct local_player_data
	{
		SDK::ULocalPlayer* player = nullptr;
		SDK::AReadyOrNotPlayerController* controller = nullptr;
		SDK::APlayerCharacter* character = nullptr;
		bool ensure();
		bool update();
	} lp;
	

public:
	engine_data() = default;

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

