#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_MessageDisplayBox.BP_MessageDisplayBox_C
// (None)

class UClass* UBP_MessageDisplayBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MessageDisplayBox_C");

	return Clss;
}


// BP_MessageDisplayBox_C BP_MessageDisplayBox.Default__BP_MessageDisplayBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MessageDisplayBox_C* UBP_MessageDisplayBox_C::GetDefaultObj()
{
	static class UBP_MessageDisplayBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MessageDisplayBox_C*>(UBP_MessageDisplayBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Get_MessageTxt_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UBP_MessageDisplayBox_C::Get_MessageTxt_Text_0(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MessageDisplayBox_C", "Get_MessageTxt_Text_0");

	Params::UBP_MessageDisplayBox_C_Get_MessageTxt_Text_0_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MessageDisplayBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MessageDisplayBox_C", "Tick");

	Params::UBP_MessageDisplayBox_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_MessageDisplayBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MessageDisplayBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_MessageDisplayBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MessageDisplayBox_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.BndEvt__BP_MessageDisplayBox_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MessageDisplayBox_C::BndEvt__BP_MessageDisplayBox_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MessageDisplayBox_C", "BndEvt__BP_MessageDisplayBox_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UBP_MessageDisplayBox_C_BndEvt__BP_MessageDisplayBox_Button_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MessageDisplayBox.BP_MessageDisplayBox_C.ExecuteUbergraph_BP_MessageDisplayBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StringIsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MessageDisplayBox_C::ExecuteUbergraph_BP_MessageDisplayBox(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_StringIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MessageDisplayBox_C", "ExecuteUbergraph_BP_MessageDisplayBox");

	Params::UBP_MessageDisplayBox_C_ExecuteUbergraph_BP_MessageDisplayBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_StringIsEmpty_ReturnValue = CallFunc_StringIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


