#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E8 - 0x268)
// WidgetBlueprintGeneratedClass W_SupporterCredit.W_SupporterCredit_C
class UW_SupporterCredit_C : public UBaseCredit
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimSupportName;                                   // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_SupportName;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SupportName;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SupportName_1;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SupportName_2;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SupporterCredit_1;                                 // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  SupporterCredit_2;                                 // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  SupporterCredit_3;                                 // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bRevealed_0;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackSpeed;                                     // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SupporterCredit_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void IsAnimating(bool* Animating, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void ExecuteUbergraph_W_SupporterCredit(int32 EntryPoint, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


