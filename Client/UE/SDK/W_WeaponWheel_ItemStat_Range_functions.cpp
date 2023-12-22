#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C
// (None)

class UClass* UW_WeaponWheel_ItemStat_Range_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_ItemStat_Range_C");

	return Clss;
}


// W_WeaponWheel_ItemStat_Range_C W_WeaponWheel_ItemStat_Range.Default__W_WeaponWheel_ItemStat_Range_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_ItemStat_Range_C* UW_WeaponWheel_ItemStat_Range_C::GetDefaultObj()
{
	static class UW_WeaponWheel_ItemStat_Range_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_ItemStat_Range_C*>(UW_WeaponWheel_ItemStat_Range_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_Range_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Range_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_Range_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Range_C", "Tick");

	Params::UW_WeaponWheel_ItemStat_Range_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_Range_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Range_C", "OnRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.OnWheelCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_Range_C::OnWheelCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Range_C", "OnWheelCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_ItemStat_Range_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Range_C", "PreConstruct");

	Params::UW_WeaponWheel_ItemStat_Range_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat_Range.W_WeaponWheel_ItemStat_Range_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_Range
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_Range_C::ExecuteUbergraph_W_WeaponWheel_ItemStat_Range(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_Range_C", "ExecuteUbergraph_W_WeaponWheel_ItemStat_Range");

	Params::UW_WeaponWheel_ItemStat_Range_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Range_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


