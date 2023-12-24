#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x2F1 - 0x260)
// WidgetBlueprintGeneratedClass W_OfficerMarker.W_OfficerMarker_C
class UW_OfficerMarker_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Circle;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Number;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PlayerNumber;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PlayerColor;                                       // 0x28C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Solid;                                             // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_178E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ID;                                                // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_178F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotPlayerState*                PlayerState;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRightClicked;                                    // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IgnoreInheritedScale;                              // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_OfficerMarker_C* GetDefaultObj();

	void UpdateData(bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetPlayerTeamColor_LinearColor, const struct FSlateColor& CallFunc_GetPlayerTeamColor_SlateColor, int32 CallFunc_GetPlanningPlayerNumber_ReturnValue);
	void SetPlayerState(class AReadyOrNotPlayerState* PlayerState);
	void UpdateStyle(class FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_W_OfficerMarker(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent);
	void OnRightClicked__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker);
	void OnUnhovered__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker);
	void OnHovered__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker);
	void OnClicked__DelegateSignature(class UW_OfficerMarker_C* TriggeringMarker);
};

}


