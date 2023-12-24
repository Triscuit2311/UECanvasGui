#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayControls.W_ReplayControls_C
// (None)

class UClass* UW_ReplayControls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayControls_C");

	return Clss;
}


// W_ReplayControls_C W_ReplayControls.Default__W_ReplayControls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayControls_C* UW_ReplayControls_C::GetDefaultObj()
{
	static class UW_ReplayControls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayControls_C*>(UW_ReplayControls_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplayControls.W_ReplayControls_C.PositionSettingPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     AnchorWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::PositionSettingPanel(class UWidget* AnchorWidget, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "PositionSettingPanel");

	Params::UW_ReplayControls_C_PositionSettingPanel_Params Parms{};

	Parms.AnchorWidget = AnchorWidget;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.SetHoveredToolButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 TriggeringButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovered                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Text_C*                   CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayControls_C::SetHoveredToolButton(class UW_Button_C* TriggeringButton, bool Hovered, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_Text_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "SetHoveredToolButton");

	Params::UW_ReplayControls_C_SetHoveredToolButton_Params Parms{};

	Parms.TriggeringButton = TriggeringButton;
	Parms.Hovered = Hovered;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.SetupToolNav
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::SetupToolNav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "SetupToolNav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.SetActiveToolButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Button_C*                 SelectedButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Text_C*                   CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Text_C*                   CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayControls_C::SetActiveToolButton(class UW_Button_C* SelectedButton, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UW_Text_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Text_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "SetActiveToolButton");

	Params::UW_ReplayControls_C_SetActiveToolButton_Params Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_ReplayControls_C::GetText_0(class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, class FText CallFunc_Key_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "GetText_0");

	Params::UW_ReplayControls_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Key_GetDisplayName_ReturnValue = CallFunc_Key_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.GetColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateColor UW_ReplayControls_C::GetColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "GetColorAndOpacity_0");

	Params::UW_ReplayControls_C_GetColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_1                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_ReplayControls_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "OnKeyUp");

	Params::UW_ReplayControls_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetActionMappingByName_OutMappings_1 = CallFunc_GetActionMappingByName_OutMappings_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_btn_Page4_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ReplayControls_C::Get_btn_Page4_bIsEnabled_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_btn_Page4_bIsEnabled_0");

	Params::UW_ReplayControls_C_Get_btn_Page4_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_SplineRotationComboBox_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_ReplayControls_C::Get_SplineRotationComboBox_bIsEnabled_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_SplineRotationComboBox_bIsEnabled_0");

	Params::UW_ReplayControls_C_Get_SplineRotationComboBox_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_SelectedActorName_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetActorName_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_ReplayControls_C::Get_SelectedActorName_Text_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetActorName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_SelectedActorName_Text_0");

	Params::UW_ReplayControls_C_Get_SelectedActorName_Text_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActorName_ReturnValue = CallFunc_GetActorName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.FOV_to_FocalLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FOV2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FocalLength2                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegTan_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::FOV_to_FocalLength(float FOV2, float* FocalLength2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, float CallFunc_DegTan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "FOV_to_FocalLength");

	Params::UW_ReplayControls_C_FOV_to_FocalLength_Params Parms{};

	Parms.FOV2 = FOV2;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_DegTan_ReturnValue = CallFunc_DegTan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FocalLength2 != nullptr)
		*FocalLength2 = Parms.FocalLength2;

}


// Function W_ReplayControls.W_ReplayControls_C.FocalLength_to_FOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FocalLength                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAtan_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::FocalLength_to_FOV(float FocalLength, float* FOV, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_DegAtan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "FocalLength_to_FOV");

	Params::UW_ReplayControls_C_FocalLength_to_FOV_Params Parms{};

	Parms.FocalLength = FocalLength;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_DegAtan_ReturnValue = CallFunc_DegAtan_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function W_ReplayControls.W_ReplayControls_C.GetVisibility_1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_ReplayControls_C::GetVisibility_1(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "GetVisibility_1");

	Params::UW_ReplayControls_C_GetVisibility_1_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_ReplayControls_C::GetVisibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "GetVisibility_0");

	Params::UW_ReplayControls_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_TimeDilationSlider_Value_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UW_ReplayControls_C::Get_TimeDilationSlider_Value_0(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_TimeDilationSlider_Value_0");

	Params::UW_ReplayControls_C_Get_TimeDilationSlider_Value_0_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_PauseButtonTxt_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UW_ReplayControls_C::Get_PauseButtonTxt_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_PauseButtonTxt_Text_0");

	Params::UW_ReplayControls_C_Get_PauseButtonTxt_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_ReplayTimeSet_Value_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UW_ReplayControls_C::Get_ReplayTimeSet_Value_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_ReplayTimeSet_Value_0");

	Params::UW_ReplayControls_C_Get_ReplayTimeSet_Value_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_MaxTime_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_ReplayControls_C::Get_MaxTime_Text_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_MaxTime_Text_0");

	Params::UW_ReplayControls_C_Get_MaxTime_Text_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_TimeSecondsToString_ReturnValue = CallFunc_TimeSecondsToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.Get_CurrentTime_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TimeSecondsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UW_ReplayControls_C::Get_CurrentTime_Text_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_TimeSecondsToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Get_CurrentTime_Text_0");

	Params::UW_ReplayControls_C_Get_CurrentTime_Text_0_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_TimeSecondsToString_ReturnValue = CallFunc_TimeSecondsToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ReplayController_C*      K2Node_DynamicCast_AsBP_Replay_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_1                    (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_2                    (ReferenceParm)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_3                    (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_2                                        (None)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_3                                        (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_4                    (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_4                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_5                    (ReferenceParm)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_6                    (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_5                                        (None)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_6                                        (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_7                    (ReferenceParm)
// struct FInputActionKeyMapping      CallFunc_Array_Get_Item_7                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UW_ReplayControls_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, int32 Temp_int_Array_Index_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_7, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_2, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_3, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_2, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_3, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_2, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_7, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_4, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_4, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_7, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_5, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_6, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_5, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_6, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_5, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_6, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_7, const struct FEventReply& CallFunc_Handled_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_7, const struct FInputActionKeyMapping& CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "OnKeyDown");

	Params::UW_ReplayControls_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Replay_Controller = K2Node_DynamicCast_AsBP_Replay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_GetActionMappingByName_OutMappings_1 = CallFunc_GetActionMappingByName_OutMappings_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_GetInputSettings_ReturnValue_2 = CallFunc_GetInputSettings_ReturnValue_2;
	Parms.CallFunc_GetInputSettings_ReturnValue_3 = CallFunc_GetInputSettings_ReturnValue_3;
	Parms.CallFunc_GetActionMappingByName_OutMappings_2 = CallFunc_GetActionMappingByName_OutMappings_2;
	Parms.CallFunc_GetActionMappingByName_OutMappings_3 = CallFunc_GetActionMappingByName_OutMappings_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_GetInputSettings_ReturnValue_4 = CallFunc_GetInputSettings_ReturnValue_4;
	Parms.CallFunc_GetActionMappingByName_OutMappings_4 = CallFunc_GetActionMappingByName_OutMappings_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetInputSettings_ReturnValue_5 = CallFunc_GetInputSettings_ReturnValue_5;
	Parms.CallFunc_GetInputSettings_ReturnValue_6 = CallFunc_GetInputSettings_ReturnValue_6;
	Parms.CallFunc_GetActionMappingByName_OutMappings_5 = CallFunc_GetActionMappingByName_OutMappings_5;
	Parms.CallFunc_GetActionMappingByName_OutMappings_6 = CallFunc_GetActionMappingByName_OutMappings_6;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_GetInputSettings_ReturnValue_7 = CallFunc_GetInputSettings_ReturnValue_7;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings_7 = CallFunc_GetActionMappingByName_OutMappings_7;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SpinBox_5_K2Node_ComponentBoundEvent_21_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_SpinBox_5_K2Node_ComponentBoundEvent_21_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_SpinBox_5_K2Node_ComponentBoundEvent_21_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_SpinBox_5_K2Node_ComponentBoundEvent_21_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_FieldOfViewSlider_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_FieldOfViewSlider_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_FieldOfViewSlider_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_FieldOfViewSlider_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_FStopSlider_K2Node_ComponentBoundEvent_26_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_FStopSlider_K2Node_ComponentBoundEvent_26_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_FStopSlider_K2Node_ComponentBoundEvent_26_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_FStopSlider_K2Node_ComponentBoundEvent_26_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_FocusDistanceSlider_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_FocusDistanceSlider_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_FocusDistanceSlider_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_FocusDistanceSlider_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ContrastSlider_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_ContrastSlider_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_ContrastSlider_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_ContrastSlider_K2Node_ComponentBoundEvent_8_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_GammaSlider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_GammaSlider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_GammaSlider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_GammaSlider_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SplineRotationComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_SplineRotationComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_SplineRotationComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_SplineRotationComboBox_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SaturationReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_SaturationReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_SaturationReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ContrastReset_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_ContrastReset_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_ContrastReset_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_GammaRest_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_GammaRest_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_GammaRest_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SlopeReset_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_SlopeReset_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_SlopeReset_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ToeReset_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_ToeReset_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_ToeReset_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ShoulderReset_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_ShoulderReset_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_ShoulderReset_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_BlackClipReset_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_BlackClipReset_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_BlackClipReset_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_WhiteClipReset_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_WhiteClipReset_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_WhiteClipReset_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_GradingSaturationR_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_GradingSaturationR_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_GradingSaturationR_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_GradingSaturationR_K2Node_ComponentBoundEvent_18_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.InitializeDefaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::InitializeDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "InitializeDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplaySettings_SplinePathSpeedSlider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplaySettings_SplinePathSpeedSlider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplaySettings_SplinePathSpeedSlider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplaySettings_SplinePathSpeedSlider_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.ReplayTimeBarChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::ReplayTimeBarChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "ReplayTimeBarChanged");

	Params::UW_ReplayControls_C_ReplayTimeBarChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Page1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Page1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page2_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Page2_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Page2_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page2_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page3_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Page3_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Page3_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page3_K2Node_ComponentBoundEvent_37_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_RollSlider_K2Node_ComponentBoundEvent_17_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_RollSlider_K2Node_ComponentBoundEvent_17_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_RollSlider_K2Node_ComponentBoundEvent_17_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_RollSlider_K2Node_ComponentBoundEvent_17_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_WhiteClipSlider_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_WhiteClipSlider_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_WhiteClipSlider_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_WhiteClipSlider_K2Node_ComponentBoundEvent_19_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.SetMinimumReplayBarTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::SetMinimumReplayBarTime(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "SetMinimumReplayBarTime");

	Params::UW_ReplayControls_C_SetMinimumReplayBarTime_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Page4_K2Node_ComponentBoundEvent_38_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Page4_K2Node_ComponentBoundEvent_38_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Page4_K2Node_ComponentBoundEvent_38_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Page4_K2Node_ComponentBoundEvent_38_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ShoulderSlider_K2Node_ComponentBoundEvent_25_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_ShoulderSlider_K2Node_ComponentBoundEvent_25_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_ShoulderSlider_K2Node_ComponentBoundEvent_25_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_ShoulderSlider_K2Node_ComponentBoundEvent_25_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.UpdateMountedSocketSelections
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::UpdateMountedSocketSelections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "UpdateMountedSocketSelections");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_AddSplinePoint_K2Node_ComponentBoundEvent_39_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_AddSplinePoint_K2Node_ComponentBoundEvent_39_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_AddSplinePoint_K2Node_ComponentBoundEvent_39_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_AddSplinePoint_K2Node_ComponentBoundEvent_39_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_ClearAllPathPoints_K2Node_ComponentBoundEvent_40_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_ClearAllPathPoints_K2Node_ComponentBoundEvent_40_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_ClearAllPathPoints_K2Node_ComponentBoundEvent_40_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_ClearAllPathPoints_K2Node_ComponentBoundEvent_40_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_RemoveLastPoint_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_RemoveLastPoint_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_RemoveLastPoint_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_RemoveLastPoint_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_FollowPath_K2Node_ComponentBoundEvent_42_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_FollowPath_K2Node_ComponentBoundEvent_42_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_FollowPath_K2Node_ComponentBoundEvent_42_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_FollowPath_K2Node_ComponentBoundEvent_42_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBack_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipBack_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipBack_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipBack_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForward_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipForward_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipForward_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipForward_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_BlackClipSlider_K2Node_ComponentBoundEvent_24_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_BlackClipSlider_K2Node_ComponentBoundEvent_24_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_BlackClipSlider_K2Node_ComponentBoundEvent_24_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_BlackClipSlider_K2Node_ComponentBoundEvent_24_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_SlopeSlider_K2Node_ComponentBoundEvent_23_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_SlopeSlider_K2Node_ComponentBoundEvent_23_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_SlopeSlider_K2Node_ComponentBoundEvent_23_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_SlopeSlider_K2Node_ComponentBoundEvent_23_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_ToneSlider_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_ToneSlider_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_ToneSlider_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_ToneSlider_K2Node_ComponentBoundEvent_20_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_IncreasePlaybackSpeed_K2Node_ComponentBoundEvent_45_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_IncreasePlaybackSpeed_K2Node_ComponentBoundEvent_45_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_IncreasePlaybackSpeed_K2Node_ComponentBoundEvent_45_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_IncreasePlaybackSpeed_K2Node_ComponentBoundEvent_46_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_IncreasePlaybackSpeed_K2Node_ComponentBoundEvent_46_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_IncreasePlaybackSpeed_K2Node_ComponentBoundEvent_46_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_DecreasePlaybackSpeed_K2Node_ComponentBoundEvent_47_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_DecreasePlaybackSpeed_K2Node_ComponentBoundEvent_47_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_DecreasePlaybackSpeed_K2Node_ComponentBoundEvent_47_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_DecreasePlaybackSpeed_K2Node_ComponentBoundEvent_48_Released__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_DecreasePlaybackSpeed_K2Node_ComponentBoundEvent_48_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_DecreasePlaybackSpeed_K2Node_ComponentBoundEvent_48_Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_51_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_51_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_51_Clicked__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_51_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.PauseReplay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::PauseReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "PauseReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.SkipReplayBackward
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::SkipReplayBackward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "SkipReplayBackward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.SkipReplayForward
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::SkipReplayForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "SkipReplayForward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.ToggleHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::ToggleHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "ToggleHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.NextActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::NextActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "NextActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.PreviousActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::PreviousActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "PreviousActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.CustomTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::CustomTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "CustomTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.Pause Replay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::Pause_Replay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "Pause Replay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_Pause_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_10_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_10_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipBackwards_K2Node_ComponentBoundEvent_10_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_SkipForwards_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_Drop_CameraMode_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_Drop_CameraMode_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_Drop_CameraMode_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_Drop_CameraMode_K2Node_ComponentBoundEvent_12_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_14_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_14_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_14_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_14_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionCamera_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_16_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_16_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_16_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_16_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionSpline_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_53_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_53_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_53_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_53_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_54_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_54_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionFilm_K2Node_ComponentBoundEvent_54_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_55_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_55_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_55_Hovered__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_55_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_56_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_56_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_btn_OptionLens_K2Node_ComponentBoundEvent_56_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_7_OnScrubbingBegin__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_7_OnScrubbingBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_7_OnScrubbingBegin__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_13_OnScrubbingEnd__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewCurrentTimeInSeconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_13_OnScrubbingEnd__DelegateSignature(float NewCurrentTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_13_OnScrubbingEnd__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_13_OnScrubbingEnd__DelegateSignature_Params Parms{};

	Parms.NewCurrentTimeInSeconds = NewCurrentTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_57_OnChangeCurrentTime__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewCurrentTimeInSeconds                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayControls_C::BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_57_OnChangeCurrentTime__DelegateSignature(float NewCurrentTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_57_OnChangeCurrentTime__DelegateSignature");

	Params::UW_ReplayControls_C_BndEvt__W_ReplayControls_W_ReplayTimeBar_K2Node_ComponentBoundEvent_57_OnChangeCurrentTime__DelegateSignature_Params Parms{};

	Parms.NewCurrentTimeInSeconds = NewCurrentTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayControls.W_ReplayControls_C.ResumeReplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayControls_C::ResumeReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "ResumeReplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayControls.W_ReplayControls_C.ExecuteUbergraph_W_ReplayControls
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayMountedSubMesh_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplaySocket_C*           CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        K2Node_DynamicCast_AsCine_Camera_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPaused_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPaused_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FReplayEvent>        CallFunc_GetReplayEvents_ReturnValue                             (ReferenceParm)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_19                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_18                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_17                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percent                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_16                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              K2Node_ComponentBoundEvent_InValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FReplaySubMesh              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReplaySocket               CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ReplayController_C*      K2Node_DynamicCast_AsBP_Replay_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_ReplayControls_C::ExecuteUbergraph_W_ReplayControls(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UW_ReplayMountedSubMesh_C* CallFunc_Create_ReturnValue, class UW_ReplaySocket_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable, float K2Node_ComponentBoundEvent_InValue_13, float K2Node_ComponentBoundEvent_InValue_12, float K2Node_ComponentBoundEvent_InValue_11, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_ComponentBoundEvent_InValue_10, float K2Node_ComponentBoundEvent_InValue_9, float K2Node_ComponentBoundEvent_InValue_8, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, float K2Node_ComponentBoundEvent_InValue_7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_SetPaused_ReturnValue, bool CallFunc_SetPaused_ReturnValue_1, float K2Node_ComponentBoundEvent_InValue_6, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_3, bool K2Node_DynamicCast_bSuccess_5, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_4, bool K2Node_DynamicCast_bSuccess_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_5, bool K2Node_DynamicCast_bSuccess_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 CallFunc_MakeLiteralInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_8, TArray<struct FReplayEvent>& CallFunc_GetReplayEvents_ReturnValue, float Temp_float_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, int32 Temp_int_Variable_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_6, bool K2Node_DynamicCast_bSuccess_9, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, float CallFunc_FClamp_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float K2Node_CustomEvent_Value, class UW_Button_C* K2Node_ComponentBoundEvent_Button_19, class UW_Button_C* K2Node_ComponentBoundEvent_Button_18, class UW_Button_C* K2Node_ComponentBoundEvent_Button_17, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, float K2Node_ComponentBoundEvent_InValue_5, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_7, bool K2Node_DynamicCast_bSuccess_10, float Temp_float_Variable_1, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue_1, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float K2Node_ComponentBoundEvent_InValue_4, float CallFunc_FClamp_ReturnValue_1, float K2Node_Event_Percent, int32 Temp_int_Variable_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_16, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float K2Node_ComponentBoundEvent_InValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_8, bool K2Node_DynamicCast_bSuccess_11, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FReplaySubMesh& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FReplaySocket& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_15, class UW_Button_C* K2Node_ComponentBoundEvent_Button_14, class UW_Button_C* K2Node_ComponentBoundEvent_Button_13, class UW_Button_C* K2Node_ComponentBoundEvent_Button_12, class UW_Button_C* K2Node_ComponentBoundEvent_Button_11, class UW_Button_C* K2Node_ComponentBoundEvent_Button_10, float K2Node_ComponentBoundEvent_InValue_2, float K2Node_ComponentBoundEvent_InValue_1, float K2Node_ComponentBoundEvent_InValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_9, bool K2Node_DynamicCast_bSuccess_12, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_10, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_10, bool K2Node_DynamicCast_bSuccess_13, class UW_Button_C* K2Node_ComponentBoundEvent_Button_9, class UW_Button_C* K2Node_ComponentBoundEvent_Button_8, class UW_Button_C* K2Node_ComponentBoundEvent_Button_7, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_11, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess_14, class UW_Button_C* K2Node_ComponentBoundEvent_Button_6, class UW_Button_C* K2Node_ComponentBoundEvent_Button_5, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, const class FString& K2Node_ComponentBoundEvent_OptionID, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds_1, float K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayControls_C", "ExecuteUbergraph_W_ReplayControls");

	Params::UW_ReplayControls_C_ExecuteUbergraph_W_ReplayControls_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_ComponentBoundEvent_InValue_13 = K2Node_ComponentBoundEvent_InValue_13;
	Parms.K2Node_ComponentBoundEvent_InValue_12 = K2Node_ComponentBoundEvent_InValue_12;
	Parms.K2Node_ComponentBoundEvent_InValue_11 = K2Node_ComponentBoundEvent_InValue_11;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_ComponentBoundEvent_InValue_10 = K2Node_ComponentBoundEvent_InValue_10;
	Parms.K2Node_ComponentBoundEvent_InValue_9 = K2Node_ComponentBoundEvent_InValue_9;
	Parms.K2Node_ComponentBoundEvent_InValue_8 = K2Node_ComponentBoundEvent_InValue_8;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.K2Node_ComponentBoundEvent_InValue_7 = K2Node_ComponentBoundEvent_InValue_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn = K2Node_DynamicCast_AsReplay_Camera_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCine_Camera_Component = K2Node_DynamicCast_AsCine_Camera_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsReplay_Controller_1 = K2Node_DynamicCast_AsReplay_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsReplay_Controller_2 = K2Node_DynamicCast_AsReplay_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_SetPaused_ReturnValue = CallFunc_SetPaused_ReturnValue;
	Parms.CallFunc_SetPaused_ReturnValue_1 = CallFunc_SetPaused_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue_6 = K2Node_ComponentBoundEvent_InValue_6;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsReplay_Controller_3 = K2Node_DynamicCast_AsReplay_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsReplay_Controller_4 = K2Node_DynamicCast_AsReplay_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsReplay_Controller_5 = K2Node_DynamicCast_AsReplay_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetReplayEvents_ReturnValue = CallFunc_GetReplayEvents_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_DynamicCast_AsReplay_Controller_6 = K2Node_DynamicCast_AsReplay_Controller_6;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue = CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button_19 = K2Node_ComponentBoundEvent_Button_19;
	Parms.K2Node_ComponentBoundEvent_Button_18 = K2Node_ComponentBoundEvent_Button_18;
	Parms.K2Node_ComponentBoundEvent_Button_17 = K2Node_ComponentBoundEvent_Button_17;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_InValue_5 = K2Node_ComponentBoundEvent_InValue_5;
	Parms.K2Node_DynamicCast_AsReplay_Controller_7 = K2Node_DynamicCast_AsReplay_Controller_7;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue_1 = CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue_1 = CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue_4 = K2Node_ComponentBoundEvent_InValue_4;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.K2Node_Event_Percent = K2Node_Event_Percent;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_ComponentBoundEvent_Button_16 = K2Node_ComponentBoundEvent_Button_16;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InValue_3 = K2Node_ComponentBoundEvent_InValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsReplay_Controller_8 = K2Node_DynamicCast_AsReplay_Controller_8;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsReplay_Controller_9 = K2Node_DynamicCast_AsReplay_Controller_9;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_10 = CallFunc_GetPlayerController_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsReplay_Controller_10 = K2Node_DynamicCast_AsReplay_Controller_10;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_11 = CallFunc_GetPlayerController_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_Replay_Controller = K2Node_DynamicCast_AsBP_Replay_Controller;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds_1 = K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds_1;
	Parms.K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds = K2Node_ComponentBoundEvent_NewCurrentTimeInSeconds;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


