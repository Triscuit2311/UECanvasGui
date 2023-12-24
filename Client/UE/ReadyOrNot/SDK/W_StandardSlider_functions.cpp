#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StandardSlider.W_StandardSlider_C
// (None)

class UClass* UW_StandardSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StandardSlider_C");

	return Clss;
}


// W_StandardSlider_C W_StandardSlider.Default__W_StandardSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StandardSlider_C* UW_StandardSlider_C::GetDefaultObj()
{
	static class UW_StandardSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StandardSlider_C*>(UW_StandardSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_StandardSlider.W_StandardSlider_C.SetDLSSQualityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewQuality                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardSlider_C::SetDLSSQualityValue(int32 NewQuality, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "SetDLSSQualityValue");

	Params::UW_StandardSlider_C_SetDLSSQualityValue_Params Parms{};

	Parms.NewQuality = NewQuality;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.AddIntegralValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::AddIntegralValue(int32 Value, int32* NewValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "AddIntegralValue");

	Params::UW_StandardSlider_C_AddIntegralValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function W_StandardSlider.W_StandardSlider_C.AddFloatValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::AddFloatValue(float Value, float* NewValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SetFloatValue_NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "AddFloatValue");

	Params::UW_StandardSlider_C_AddFloatValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function W_StandardSlider.W_StandardSlider_C.SetResolutionValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Resolution                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::SetResolutionValue(const class FString& Resolution, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "SetResolutionValue");

	Params::UW_StandardSlider_C_SetResolutionValue_Params Parms{};

	Parms.Resolution = Resolution;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.SetQualityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewQuality                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardSlider_C::SetQualityValue(int32 NewQuality, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "SetQualityValue");

	Params::UW_StandardSlider_C_SetQualityValue_Params Parms{};

	Parms.NewQuality = NewQuality;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.SetIntegralValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewInteger                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardSlider_C::SetIntegralValue(int32 NewInteger, int32* NewValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "SetIntegralValue");

	Params::UW_StandardSlider_C_SetIntegralValue_Params Parms{};

	Parms.NewInteger = NewInteger;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function W_StandardSlider.W_StandardSlider_C.SetFloatValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewFloat                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardSlider_C::SetFloatValue(float NewFloat, float* NewValue, float CallFunc_FClamp_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "SetFloatValue");

	Params::UW_StandardSlider_C_SetFloatValue_Params Parms{};

	Parms.NewFloat = NewFloat;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function W_StandardSlider.W_StandardSlider_C.UpdateSliderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetNormalizedValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GenerateFSRQualityString_ReturnValue                    (None)
// class FText                        CallFunc_GenerateDlssQualityString_ReturnValue                   (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_GenerateQualityString_ReturnValue                       (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardSlider_C::UpdateSliderText(float CallFunc_GetNormalizedValue_ReturnValue, class FText CallFunc_GenerateFSRQualityString_ReturnValue, class FText CallFunc_GenerateDlssQualityString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GenerateQualityString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "UpdateSliderText");

	Params::UW_StandardSlider_C_UpdateSliderText_Params Parms{};

	Parms.CallFunc_GetNormalizedValue_ReturnValue = CallFunc_GetNormalizedValue_ReturnValue;
	Parms.CallFunc_GenerateFSRQualityString_ReturnValue = CallFunc_GenerateFSRQualityString_ReturnValue;
	Parms.CallFunc_GenerateDlssQualityString_ReturnValue = CallFunc_GenerateDlssQualityString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GenerateQualityString_ReturnValue = CallFunc_GenerateQualityString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_StandardSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "PreConstruct");

	Params::UW_StandardSlider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_StandardSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardSlider.W_StandardSlider_C.BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_StandardSlider_C_BndEvt__TheSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardSlider_C::BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "BndEvt__TheSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardSlider.W_StandardSlider_C.BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_StandardSlider_C::BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "BndEvt__TheSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_StandardSlider.W_StandardSlider_C.ExecuteUbergraph_W_StandardSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetSupportedScreenResolutions_Resolutions               (ReferenceParm)
// bool                               CallFunc_GetSupportedScreenResolutions_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::ExecuteUbergraph_W_StandardSlider(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_NormalizeToRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetFloatValue_NewValue, int32 CallFunc_SetIntegralValue_NewValue, float CallFunc_NormalizeToRange_ReturnValue_2, const class FString& CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue_3, float K2Node_ComponentBoundEvent_Value, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_6, TArray<class FString>& CallFunc_GetSupportedScreenResolutions_Resolutions, bool CallFunc_GetSupportedScreenResolutions_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_NormalizeToRange_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GridSnap_Float_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_GridSnap_Float_ReturnValue_2, float CallFunc_FClamp_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, float CallFunc_Conv_IntToFloat_ReturnValue_9, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_10, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue_3, int32 CallFunc_Clamp_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "ExecuteUbergraph_W_StandardSlider");

	Params::UW_StandardSlider_C_ExecuteUbergraph_W_StandardSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_NormalizeToRange_ReturnValue_1 = CallFunc_NormalizeToRange_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue_2 = CallFunc_NormalizeToRange_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue_2 = CallFunc_Clamp_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_NormalizeToRange_ReturnValue_3 = CallFunc_NormalizeToRange_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_GetSupportedScreenResolutions_Resolutions = CallFunc_GetSupportedScreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedScreenResolutions_ReturnValue = CallFunc_GetSupportedScreenResolutions_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.CallFunc_NormalizeToRange_ReturnValue_4 = CallFunc_NormalizeToRange_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GridSnap_Float_ReturnValue = CallFunc_GridSnap_Float_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GridSnap_Float_ReturnValue_1 = CallFunc_GridSnap_Float_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GridSnap_Float_ReturnValue_2 = CallFunc_GridSnap_Float_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_10 = CallFunc_Conv_IntToFloat_ReturnValue_10;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue_3 = CallFunc_Round_ReturnValue_3;
	Parms.CallFunc_Clamp_ReturnValue_3 = CallFunc_Clamp_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.OnDlssValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "OnDlssValueChanged__DelegateSignature");

	Params::UW_StandardSlider_C_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.OnResolutionValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewResolutionValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "OnResolutionValueChanged__DelegateSignature");

	Params::UW_StandardSlider_C_OnResolutionValueChanged__DelegateSignature_Params Parms{};

	Parms.NewResolutionValue = NewResolutionValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.OnQualityValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "OnQualityValueChanged__DelegateSignature");

	Params::UW_StandardSlider_C_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.OnIntegralValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "OnIntegralValueChanged__DelegateSignature");

	Params::UW_StandardSlider_C_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_StandardSlider.W_StandardSlider_C.OnFloatValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_StandardSlider_C::OnFloatValueChanged__DelegateSignature(float NewFloatValue, float NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_StandardSlider_C", "OnFloatValueChanged__DelegateSignature");

	Params::UW_StandardSlider_C_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


