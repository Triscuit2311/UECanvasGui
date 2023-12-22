#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Replay_SettingPanel.W_Replay_SettingPanel_C
// (None)

class UClass* UW_Replay_SettingPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Replay_SettingPanel_C");

	return Clss;
}


// W_Replay_SettingPanel_C W_Replay_SettingPanel.Default__W_Replay_SettingPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Replay_SettingPanel_C* UW_Replay_SettingPanel_C::GetDefaultObj()
{
	static class UW_Replay_SettingPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Replay_SettingPanel_C*>(UW_Replay_SettingPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.OpenPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Replay_SettingPanel_C::OpenPanel(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "OpenPanel");

	Params::UW_Replay_SettingPanel_C_OpenPanel_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.ClosePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Replay_SettingPanel_C::ClosePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "ClosePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.ToggleSplinePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Replay_SettingPanel_C::ToggleSplinePanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "ToggleSplinePanel");

	Params::UW_Replay_SettingPanel_C_ToggleSplinePanel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.ToggleLensPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Replay_SettingPanel_C::ToggleLensPanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "ToggleLensPanel");

	Params::UW_Replay_SettingPanel_C_ToggleLensPanel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.ToggleFilmPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Replay_SettingPanel_C::ToggleFilmPanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "ToggleFilmPanel");

	Params::UW_Replay_SettingPanel_C_ToggleFilmPanel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.ToggleCameraPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Replay_SettingPanel_C::ToggleCameraPanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "ToggleCameraPanel");

	Params::UW_Replay_SettingPanel_C_ToggleCameraPanel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.SetSpinnerDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Spinbox_C*                SpinnerWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::SetSpinnerDefault(class UW_Spinbox_C* SpinnerWidget, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "SetSpinnerDefault");

	Params::UW_Replay_SettingPanel_C_SetSpinnerDefault_Params Parms{};

	Parms.SpinnerWidget = SpinnerWidget;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_drop_SplineRotation_K2Node_ComponentBoundEvent_32_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      OptionID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_drop_SplineRotation_K2Node_ComponentBoundEvent_32_OnOptionSelected__DelegateSignature(const class FString& OptionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_drop_SplineRotation_K2Node_ComponentBoundEvent_32_OnOptionSelected__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_drop_SplineRotation_K2Node_ComponentBoundEvent_32_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionID = OptionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveLast_K2Node_ComponentBoundEvent_31_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveLast_K2Node_ComponentBoundEvent_31_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveLast_K2Node_ComponentBoundEvent_31_Clicked__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveLast_K2Node_ComponentBoundEvent_31_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveAll_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveAll_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveAll_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveAll_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_btn_Spline_Play_K2Node_ComponentBoundEvent_29_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_btn_Spline_Play_K2Node_ComponentBoundEvent_29_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_btn_Spline_Play_K2Node_ComponentBoundEvent_29_Clicked__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_btn_Spline_Play_K2Node_ComponentBoundEvent_29_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_btn_Spline_Add_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_btn_Spline_Add_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_btn_Spline_Add_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_btn_Spline_Add_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_SplineDuration_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_SplineDuration_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_SplineDuration_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_SplineDuration_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.InitializeDefaults
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Replay_SettingPanel_C::InitializeDefaults()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "InitializeDefaults");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_SettingPanel_C::BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature");

	Params::UW_Replay_SettingPanel_C_BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_SettingPanel.W_Replay_SettingPanel_C.ExecuteUbergraph_W_Replay_SettingPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCineCameraComponent*        K2Node_DynamicCast_AsCine_Camera_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_MakeStruct_Vector4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector4                    K2Node_MakeStruct_Vector4_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    K2Node_MakeStruct_Vector4_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_OptionID                              (ZeroConstructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ReplayCameraPawn_C*      K2Node_DynamicCast_AsBP_Replay_Camera_Pawn                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCineCameraComponent*        K2Node_DynamicCast_AsCine_Camera_Component_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCineCameraComponent*        K2Node_DynamicCast_AsCine_Camera_Component_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Replay_SettingPanel_C::ExecuteUbergraph_W_Replay_SettingPanel(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_ComponentBoundEvent_Value_13, int32 Temp_int_Variable_1, float K2Node_ComponentBoundEvent_Value_12, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, float K2Node_ComponentBoundEvent_Value_11, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, float K2Node_ComponentBoundEvent_Value_10, float K2Node_ComponentBoundEvent_Value_9, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_3, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_5, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_4, bool K2Node_DynamicCast_bSuccess_5, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_5, bool K2Node_DynamicCast_bSuccess_6, class APawn* CallFunc_GetPlayerPawn_ReturnValue_6, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_6, bool K2Node_DynamicCast_bSuccess_7, class APawn* CallFunc_GetPlayerPawn_ReturnValue_7, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_7, bool K2Node_DynamicCast_bSuccess_8, float K2Node_ComponentBoundEvent_Value_8, const struct FVector4& K2Node_MakeStruct_Vector4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_8, float K2Node_ComponentBoundEvent_Value_7, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_8, bool K2Node_DynamicCast_bSuccess_9, const struct FVector4& K2Node_MakeStruct_Vector4_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_9, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_9, bool K2Node_DynamicCast_bSuccess_10, float K2Node_ComponentBoundEvent_Value_6, const struct FVector4& K2Node_MakeStruct_Vector4_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_EqualEqual_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_12, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_2, bool K2Node_DynamicCast_bSuccess_13, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_3, bool K2Node_DynamicCast_bSuccess_14, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_4, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_10, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_ReplayCameraPawn_C* K2Node_DynamicCast_AsBP_Replay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess_16, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_5, bool K2Node_DynamicCast_bSuccess_17, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float K2Node_ComponentBoundEvent_Value_5, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_11, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_10, bool K2Node_DynamicCast_bSuccess_18, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_BreakVector4_X, float CallFunc_BreakVector4_Y, float CallFunc_BreakVector4_Z, float CallFunc_BreakVector4_W, class APawn* CallFunc_GetPlayerPawn_ReturnValue_12, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_11, bool K2Node_DynamicCast_bSuccess_19, float K2Node_ComponentBoundEvent_Value_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_13, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_12, bool K2Node_DynamicCast_bSuccess_20, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_ComponentBoundEvent_Value_3, bool CallFunc_K2_SetActorRotation_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, class APawn* CallFunc_GetPlayerPawn_ReturnValue_14, class APawn* CallFunc_GetPlayerPawn_ReturnValue_15, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_13, bool K2Node_DynamicCast_bSuccess_21, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_14, bool K2Node_DynamicCast_bSuccess_22, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component_1, bool K2Node_DynamicCast_bSuccess_23, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component_2, bool K2Node_DynamicCast_bSuccess_24)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_SettingPanel_C", "ExecuteUbergraph_W_Replay_SettingPanel");

	Params::UW_Replay_SettingPanel_C_ExecuteUbergraph_W_Replay_SettingPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn = K2Node_DynamicCast_AsReplay_Camera_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_1 = K2Node_DynamicCast_AsReplay_Camera_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCine_Camera_Component = K2Node_DynamicCast_AsCine_Camera_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_13 = K2Node_ComponentBoundEvent_Value_13;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Value_12 = K2Node_ComponentBoundEvent_Value_12;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_11 = K2Node_ComponentBoundEvent_Value_11;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_10 = K2Node_ComponentBoundEvent_Value_10;
	Parms.K2Node_ComponentBoundEvent_Value_9 = K2Node_ComponentBoundEvent_Value_9;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_2 = K2Node_DynamicCast_AsReplay_Camera_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_3 = K2Node_DynamicCast_AsReplay_Camera_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_4 = CallFunc_GetPlayerPawn_ReturnValue_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_5 = CallFunc_GetPlayerPawn_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_4 = K2Node_DynamicCast_AsReplay_Camera_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_5 = K2Node_DynamicCast_AsReplay_Camera_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_6 = CallFunc_GetPlayerPawn_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_6 = K2Node_DynamicCast_AsReplay_Camera_Pawn_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_7 = CallFunc_GetPlayerPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_7 = K2Node_DynamicCast_AsReplay_Camera_Pawn_7;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_ComponentBoundEvent_Value_8 = K2Node_ComponentBoundEvent_Value_8;
	Parms.K2Node_MakeStruct_Vector4 = K2Node_MakeStruct_Vector4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_8 = CallFunc_GetPlayerPawn_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_Value_7 = K2Node_ComponentBoundEvent_Value_7;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_8 = K2Node_DynamicCast_AsReplay_Camera_Pawn_8;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_MakeStruct_Vector4_1 = K2Node_MakeStruct_Vector4_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_9 = CallFunc_GetPlayerPawn_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_9 = K2Node_DynamicCast_AsReplay_Camera_Pawn_9;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_ComponentBoundEvent_Value_6 = K2Node_ComponentBoundEvent_Value_6;
	Parms.K2Node_MakeStruct_Vector4_2 = K2Node_MakeStruct_Vector4_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OptionID = K2Node_ComponentBoundEvent_OptionID;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsReplay_Controller_1 = K2Node_DynamicCast_AsReplay_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsReplay_Controller_2 = K2Node_DynamicCast_AsReplay_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsReplay_Controller_3 = K2Node_DynamicCast_AsReplay_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsReplay_Controller_4 = K2Node_DynamicCast_AsReplay_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_10 = CallFunc_GetPlayerPawn_ReturnValue_10;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Replay_Camera_Pawn = K2Node_DynamicCast_AsBP_Replay_Camera_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReplay_Controller_5 = K2Node_DynamicCast_AsReplay_Controller_5;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Value_5 = K2Node_ComponentBoundEvent_Value_5;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_11 = CallFunc_GetPlayerPawn_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_10 = K2Node_DynamicCast_AsReplay_Camera_Pawn_10;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_12 = CallFunc_GetPlayerPawn_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_11 = K2Node_DynamicCast_AsReplay_Camera_Pawn_11;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_13 = CallFunc_GetPlayerPawn_ReturnValue_13;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_12 = K2Node_DynamicCast_AsReplay_Camera_Pawn_12;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_14 = CallFunc_GetPlayerPawn_ReturnValue_14;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_15 = CallFunc_GetPlayerPawn_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_13 = K2Node_DynamicCast_AsReplay_Camera_Pawn_13;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_14 = K2Node_DynamicCast_AsReplay_Camera_Pawn_14;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.K2Node_DynamicCast_AsCine_Camera_Component_1 = K2Node_DynamicCast_AsCine_Camera_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.K2Node_DynamicCast_AsCine_Camera_Component_2 = K2Node_DynamicCast_AsCine_Camera_Component_2;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;

	UObject::ProcessEvent(Func, &Parms);

}

}


