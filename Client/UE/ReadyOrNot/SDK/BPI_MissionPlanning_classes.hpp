#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MissionPlanning.BPI_MissionPlanning_C
class IBPI_MissionPlanning_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MissionPlanning_C* GetDefaultObj();

	void MissionChanged(const class FString& MissionURL, const struct FLevelDataLookupTable& LevelData);
};

}


