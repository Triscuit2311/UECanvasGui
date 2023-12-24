#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x610 (0x870 - 0x260)
// WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C
class UW_WeaponWheel_ItemStat_C : public UWeaponWheel_ItemStat_Base
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        Stat_Container;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardText_C*                     StatName_Text;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          StatVisual_ProgressBar;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StatName;                                          // 0x280(0x18)(Edit, BlueprintVisible)
	float                                        ProgressBarValue;                                  // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxStatValue;                                      // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAnimating;                                      // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3738[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeElapsed;                                       // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FillSpeed;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        TargetPercent;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEasingFunc                       EasingFunction;                                    // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_373C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      ItemLookupTable;                                   // 0x2C0(0x5A0)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        WheelSize;                                         // 0x860(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        MaxWheelSize;                                      // 0x864(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             WidgetSize;                                        // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_WeaponWheel_ItemStat_C* GetDefaultObj();

	void SetupWidgetSize(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetupFontSize(float CallFunc_MapRangeClamped_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void Initialize(float CallFunc_MapRangeClamped_ReturnValue);
	void StopAnimating();
	void StartAnimating();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnWheelCreated();
	void OnRefresh();
	void ExecuteUbergraph_W_WeaponWheel_ItemStat(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Ease_ReturnValue);
};

}


