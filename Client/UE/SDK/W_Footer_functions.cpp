#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Footer.W_Footer_C
// (None)

class UClass* UW_Footer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Footer_C");

	return Clss;
}


// W_Footer_C W_Footer.Default__W_Footer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Footer_C* UW_Footer_C::GetDefaultObj()
{
	static class UW_Footer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Footer_C*>(UW_Footer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Footer.W_Footer_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Footer_C::RefreshWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Footer_C", "RefreshWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Footer.W_Footer_C.BP_OnDismissInputAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Footer_C::BP_OnDismissInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Footer_C", "BP_OnDismissInputAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Footer.W_Footer_C.BP_DismissInputActionProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HeldTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Footer_C::BP_DismissInputActionProgress(float HeldTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Footer_C", "BP_DismissInputActionProgress");

	Params::UW_Footer_C_BP_DismissInputActionProgress_Params Parms{};

	Parms.HeldTime = HeldTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Footer.W_Footer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Footer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Footer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Footer.W_Footer_C.ExecuteUbergraph_W_Footer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFooterText_ReturnValue                               (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HeldTime                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Footer_C::ExecuteUbergraph_W_Footer(int32 EntryPoint, class FText CallFunc_GetFooterText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, float K2Node_Event_HeldTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Footer_C", "ExecuteUbergraph_W_Footer");

	Params::UW_Footer_C_ExecuteUbergraph_W_Footer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFooterText_ReturnValue = CallFunc_GetFooterText_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Event_HeldTime = K2Node_Event_HeldTime;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


