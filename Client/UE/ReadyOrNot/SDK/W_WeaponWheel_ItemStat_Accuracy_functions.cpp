#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C
// (None)

class UClass* UW_WeaponWheel_ItemStat_Accuracy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_ItemStat_Accuracy_C");

	return Clss;
}


// W_WeaponWheel_ItemStat_Accuracy_C W_WeaponWheel_ItemStat_Accuracy.Default__W_WeaponWheel_ItemStat_Accuracy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_ItemStat_Accuracy_C* UW_WeaponWheel_ItemStat_Accuracy_C::GetDefaultObj()
{
	static class UW_WeaponWheel_ItemStat_Accuracy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_ItemStat_Accuracy_C*>(UW_WeaponWheel_ItemStat_Accuracy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_Accuracy_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Accuracy_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_Accuracy_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Accuracy_C", "Tick");

	Params::UW_WeaponWheel_ItemStat_Accuracy_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_Accuracy_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Accuracy_C", "OnRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.OnWheelCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_Accuracy_C::OnWheelCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Accuracy_C", "OnWheelCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_ItemStat_Accuracy_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Accuracy_C", "PreConstruct");

	Params::UW_WeaponWheel_ItemStat_Accuracy_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat_Accuracy.W_WeaponWheel_ItemStat_Accuracy_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_Accuracy_C::ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Accuracy_C", "ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy");

	Params::UW_WeaponWheel_ItemStat_Accuracy_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Accuracy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


