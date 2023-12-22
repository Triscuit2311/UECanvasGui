#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LoadoutUI.LoadoutUI_C
class ILoadoutUI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadoutUI_C* GetDefaultObj();

	void HeaderSubpageNavigation(class FName OptionNameID);
	void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
};

}


