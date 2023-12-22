#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x350 - 0x320)
// WidgetBlueprintGeneratedClass W_COOPDeathScreen.W_COOPDeathScreen_C
class UW_COOPDeathScreen_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Spectate;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            YouAreDeadText;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSpectateButtonClicked;                           // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        AliveOfficers;                                     // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DeadOfficers;                                      // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_COOPDeathScreen_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_COOPDeathScreen(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess);
	void OnSpectateButtonClicked__DelegateSignature();
};

}


