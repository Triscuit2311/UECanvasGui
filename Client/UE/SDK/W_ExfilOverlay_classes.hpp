#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass W_ExfilOverlay.W_ExfilOverlay_C
class UW_ExfilOverlay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_176;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardModal_C*                    W_StandardModal;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnExfilClicked;                                    // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCancelClicked;                                   // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ExfilOverlay_C* GetDefaultObj();

	void Construct();
	void SetNumMissingSwat(int32 MissingSwat, bool bMissionSoftComplete);
	void BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_0_OnOkClicked__DelegateSignature(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void BndEvt__W_ExfilOverlay_W_StandardModal_K2Node_ComponentBoundEvent_1_CancelClickedDelegate__DelegateSignature(class UStandardModal* CallingModal);
	void ExecuteUbergraph_W_ExfilOverlay(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_CustomEvent_MissingSwat, bool K2Node_CustomEvent_bMissionSoftComplete, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class UW_StandardModal_C* K2Node_ComponentBoundEvent_CallingModal_1, class FText K2Node_ComponentBoundEvent_TextEntry, class UStandardModal* K2Node_ComponentBoundEvent_CallingModal, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, bool CallFunc_RemoveWidgetFromStack_ReturnValue, bool CallFunc_RemoveWidgetFromStack_ReturnValue_1);
	void OnCancelClicked__DelegateSignature();
	void OnExfilClicked__DelegateSignature();
};

}


