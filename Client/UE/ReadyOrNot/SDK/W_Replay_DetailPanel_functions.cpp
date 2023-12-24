#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Replay_DetailPanel.W_Replay_DetailPanel_C
// (None)

class UClass* UW_Replay_DetailPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Replay_DetailPanel_C");

	return Clss;
}


// W_Replay_DetailPanel_C W_Replay_DetailPanel.Default__W_Replay_DetailPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Replay_DetailPanel_C* UW_Replay_DetailPanel_C::GetDefaultObj()
{
	static class UW_Replay_DetailPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Replay_DetailPanel_C*>(UW_Replay_DetailPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_DetailPanel_C::SetImage(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "SetImage");

	Params::UW_Replay_DetailPanel_C_SetImage_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.ClearPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Replay_DetailPanel_C::ClearPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "ClearPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.UpdateFileName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewFileName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_Replay_DetailPanel_C::UpdateFileName(const class FString& NewFileName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "UpdateFileName");

	Params::UW_Replay_DetailPanel_C_UpdateFileName_Params Parms{};

	Parms.NewFileName = NewFileName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.GetReplayTimeFormat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReplayLength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Duration                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)

void UW_Replay_DetailPanel_C::GetReplayTimeFormat(float ReplayLength, class FString* Duration, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_AppendMultiple_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_1, const class FString& CallFunc_AppendMultiple_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "GetReplayTimeFormat");

	Params::UW_Replay_DetailPanel_C_GetReplayTimeFormat_Params Parms{};

	Parms.ReplayLength = ReplayLength;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_AppendMultiple_ReturnValue = CallFunc_AppendMultiple_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue_1 = CallFunc_AppendMultiple_ReturnValue_1;
	Parms.CallFunc_AppendMultiple_ReturnValue_2 = CallFunc_AppendMultiple_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = std::move(Parms.Duration);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.UpdateReplayInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Filename                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FReplayData                 ReplayData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_GetProjectVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FString                      CallFunc_GetReplayTimeFormat_Duration                            (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_DetailPanel_C::UpdateReplayInfo(const class FString& Filename, const struct FReplayData& ReplayData, const class FString& CallFunc_GetProjectVersion_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_GetReplayTimeFormat_Duration, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "UpdateReplayInfo");

	Params::UW_Replay_DetailPanel_C_UpdateReplayInfo_Params Parms{};

	Parms.Filename = Filename;
	Parms.ReplayData = ReplayData;
	Parms.CallFunc_GetProjectVersion_ReturnValue = CallFunc_GetProjectVersion_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_GetReplayTimeFormat_Duration = CallFunc_GetReplayTimeFormat_Duration;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.BndEvt__W_Replay_DetailPanel_btn_Rename_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_DetailPanel_C::BndEvt__W_Replay_DetailPanel_btn_Rename_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "BndEvt__W_Replay_DetailPanel_btn_Rename_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_Replay_DetailPanel_C_BndEvt__W_Replay_DetailPanel_btn_Rename_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.BndEvt__W_Replay_DetailPanel_btn_Delete_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_DetailPanel_C::BndEvt__W_Replay_DetailPanel_btn_Delete_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "BndEvt__W_Replay_DetailPanel_btn_Delete_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_Replay_DetailPanel_C_BndEvt__W_Replay_DetailPanel_btn_Delete_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.ExecuteUbergraph_W_Replay_DetailPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_DetailPanel_C::ExecuteUbergraph_W_Replay_DetailPanel(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "ExecuteUbergraph_W_Replay_DetailPanel");

	Params::UW_Replay_DetailPanel_C_ExecuteUbergraph_W_Replay_DetailPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.OnDeleteReplayClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Replay_DetailPanel_C::OnDeleteReplayClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "OnDeleteReplayClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Replay_DetailPanel.W_Replay_DetailPanel_C.OnRenameFileClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Replay_DetailPanel_C::OnRenameFileClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_DetailPanel_C", "OnRenameFileClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


