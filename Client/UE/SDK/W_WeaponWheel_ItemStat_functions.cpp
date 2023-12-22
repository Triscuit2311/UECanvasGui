#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C
// (None)

class UClass* UW_WeaponWheel_ItemStat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WeaponWheel_ItemStat_C");

	return Clss;
}


// W_WeaponWheel_ItemStat_C W_WeaponWheel_ItemStat.Default__W_WeaponWheel_ItemStat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WeaponWheel_ItemStat_C* UW_WeaponWheel_ItemStat_C::GetDefaultObj()
{
	static class UW_WeaponWheel_ItemStat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WeaponWheel_ItemStat_C*>(UW_WeaponWheel_ItemStat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.SetupWidgetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::SetupWidgetSize(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "SetupWidgetSize");

	Params::UW_WeaponWheel_ItemStat_C_SetupWidgetSize_Params Parms{};

	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.SetupFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::SetupFontSize(float CallFunc_MapRangeClamped_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "SetupFontSize");

	Params::UW_WeaponWheel_ItemStat_C_SetupFontSize_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::Initialize(float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "Initialize");

	Params::UW_WeaponWheel_ItemStat_C_Initialize_Params Parms{};

	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.StopAnimating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_C::StopAnimating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "StopAnimating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.StartAnimating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_C::StartAnimating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "StartAnimating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WeaponWheel_ItemStat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "PreConstruct");

	Params::UW_WeaponWheel_ItemStat_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "Tick");

	Params::UW_WeaponWheel_ItemStat_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.OnWheelCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_C::OnWheelCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "OnWheelCreated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.OnRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WeaponWheel_ItemStat_C::OnRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "OnRefresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C.ExecuteUbergraph_W_WeaponWheel_ItemStat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WeaponWheel_ItemStat_C::ExecuteUbergraph_W_WeaponWheel_ItemStat(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Ease_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WeaponWheel_ItemStat_C", "ExecuteUbergraph_W_WeaponWheel_ItemStat");

	Params::UW_WeaponWheel_ItemStat_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


