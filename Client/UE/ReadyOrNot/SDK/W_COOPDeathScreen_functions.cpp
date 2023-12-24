#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_COOPDeathScreen.W_COOPDeathScreen_C
// (None)

class UClass* UW_COOPDeathScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_COOPDeathScreen_C");

	return Clss;
}


// W_COOPDeathScreen_C W_COOPDeathScreen.Default__W_COOPDeathScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_COOPDeathScreen_C* UW_COOPDeathScreen_C::GetDefaultObj()
{
	static class UW_COOPDeathScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_COOPDeathScreen_C*>(UW_COOPDeathScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_COOPDeathScreen.W_COOPDeathScreen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_COOPDeathScreen_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPDeathScreen_C", "BP_GetDesiredFocusTarget");

	Params::UW_COOPDeathScreen_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_COOPDeathScreen.W_COOPDeathScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_COOPDeathScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPDeathScreen_C", "Tick");

	Params::UW_COOPDeathScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_COOPDeathScreen.W_COOPDeathScreen_C.BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_COOPDeathScreen_C::BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPDeathScreen_C", "BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_COOPDeathScreen_C_BndEvt__W_COOPDeathScreen_btn_Close_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_COOPDeathScreen.W_COOPDeathScreen_C.ExecuteUbergraph_W_COOPDeathScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRenderOpacity_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommanderGM*                K2Node_DynamicCast_AsCommander_GM                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_COOPDeathScreen_C::ExecuteUbergraph_W_COOPDeathScreen(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UW_Button_C* K2Node_ComponentBoundEvent_Button, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPDeathScreen_C", "ExecuteUbergraph_W_COOPDeathScreen");

	Params::UW_COOPDeathScreen_C_ExecuteUbergraph_W_COOPDeathScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue_1 = CallFunc_GetRenderOpacity_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCommander_GM = K2Node_DynamicCast_AsCommander_GM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_COOPDeathScreen.W_COOPDeathScreen_C.OnSpectateButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_COOPDeathScreen_C::OnSpectateButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_COOPDeathScreen_C", "OnSpectateButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


