#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x878 - 0x870)
// WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat_FireRate.W_WeaponWheel_ItemStat_FireRate_C
class UW_WeaponWheel_ItemStat_FireRate_C : public UW_WeaponWheel_ItemStat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x870(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_WeaponWheel_ItemStat_FireRate_C* GetDefaultObj();

	void Initialize(float CallFunc_MapRangeClamped_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnRefresh();
	void OnWheelCreated();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_WeaponWheel_ItemStat_FireRate(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


