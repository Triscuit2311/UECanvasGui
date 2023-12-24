#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RadialSelectionBase.W_RadialSelectionBase_C
// (None)

class UClass* UW_RadialSelectionBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RadialSelectionBase_C");

	return Clss;
}


// W_RadialSelectionBase_C W_RadialSelectionBase.Default__W_RadialSelectionBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RadialSelectionBase_C* UW_RadialSelectionBase_C::GetDefaultObj()
{
	static class UW_RadialSelectionBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RadialSelectionBase_C*>(UW_RadialSelectionBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 InBrush                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_RadialSelectionBase_C::UpdateIcon(int32 SelectionIndex, const struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "UpdateIcon");

	Params::UW_RadialSelectionBase_C_UpdateIcon_Params Parms{};

	Parms.SelectionIndex = SelectionIndex;
	Parms.InBrush = InBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RadialSelectionBase_C::Select(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "Select");

	Params::UW_RadialSelectionBase_C_Select_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.Previous
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSucceeded                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadialSelectionBase_C::Previous(bool* bSuccess, bool bSucceeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "Previous");

	Params::UW_RadialSelectionBase_C_Previous_Params Parms{};

	Parms.bSucceeded = bSucceeded;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.Next
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadialSelectionBase_C::Next(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "Next");

	Params::UW_RadialSelectionBase_C_Next_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteRadial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RadialSelectionBase_C::ExecuteRadial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "ExecuteRadial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnDeselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Animation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadialSelectionBase_C::OnDeselected(bool Play_Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "OnDeselected");

	Params::UW_RadialSelectionBase_C_OnDeselected_Params Parms{};

	Parms.Play_Animation = Play_Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.OnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Play_Animation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadialSelectionBase_C::OnSelected(bool Play_Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "OnSelected");

	Params::UW_RadialSelectionBase_C_OnSelected_Params Parms{};

	Parms.Play_Animation = Play_Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadialSelectionBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "PreConstruct");

	Params::UW_RadialSelectionBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.On Wheel Created
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_RadialSelectionBase_C::On_Wheel_Created()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "On Wheel Created");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RadialSelectionBase.W_RadialSelectionBase_C.ExecuteUbergraph_W_RadialSelectionBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABasePlayer_C*               K2Node_DynamicCast_AsBase_Player                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_RadialSelectionBase_C::ExecuteUbergraph_W_RadialSelectionBase(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RadialSelectionBase_C", "ExecuteUbergraph_W_RadialSelectionBase");

	Params::UW_RadialSelectionBase_C_ExecuteUbergraph_W_RadialSelectionBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Player = K2Node_DynamicCast_AsBase_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


