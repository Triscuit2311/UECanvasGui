#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x359 - 0x328)
// WidgetBlueprintGeneratedClass W_Collectable.W_Collectable_C
class UW_Collectable_C : public UCollectableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ClickableArea;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Content;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemDescription;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemName;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageHeader_208;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_Collectable_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	bool BP_OnHandleBackAction(bool CallFunc_BackPage_Handled);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void SetItem(class ACollectable* Collectable);
	void BP_OnActivated();
	void OnInitialized();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_Collectable_W_PageHeader_208_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonID);
	void ExecuteUbergraph_W_Collectable(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_ButtonID, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, class ACollectable* K2Node_Event_Collectable, float K2Node_Event_Delay_1, bool CallFunc_BackPage_Handled, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
};

}


