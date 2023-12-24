#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C
// (None)

class UClass* UW_PreMission_Tablet_Legend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Legend_C");

	return Clss;
}


// W_PreMission_Tablet_Legend_C W_PreMission_Tablet_Legend.Default__W_PreMission_Tablet_Legend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Legend_C* UW_PreMission_Tablet_Legend_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Legend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Legend_C*>(UW_PreMission_Tablet_Legend_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Toggle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PreMission_Tablet_Legend_C::Toggle(bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Legend_C", "Toggle");

	Params::UW_PreMission_Tablet_Legend_C_Toggle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Legend_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Legend_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Legend_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Legend_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Legend.W_PreMission_Tablet_Legend_C.ExecuteUbergraph_W_PreMission_Tablet_Legend
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Legend_C::ExecuteUbergraph_W_PreMission_Tablet_Legend(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Legend_C", "ExecuteUbergraph_W_PreMission_Tablet_Legend");

	Params::UW_PreMission_Tablet_Legend_C_ExecuteUbergraph_W_PreMission_Tablet_Legend_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


