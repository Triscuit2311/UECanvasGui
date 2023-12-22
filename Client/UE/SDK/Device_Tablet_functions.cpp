#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Device_Tablet.Device_Tablet_C
// (Actor)

class UClass* ADevice_Tablet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Device_Tablet_C");

	return Clss;
}


// Device_Tablet_C Device_Tablet.Default__Device_Tablet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADevice_Tablet_C* ADevice_Tablet_C::GetDefaultObj()
{
	static class ADevice_Tablet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADevice_Tablet_C*>(ADevice_Tablet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Device_Tablet.Device_Tablet_C.SleepScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void ADevice_Tablet_C::SleepScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "SleepScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Tablet.Device_Tablet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADevice_Tablet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Tablet.Device_Tablet_C.PlayNotificationEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_Tablet_C::PlayNotificationEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "PlayNotificationEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Tablet.Device_Tablet_C.PlayVibrationEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADevice_Tablet_C::PlayVibrationEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "PlayVibrationEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Tablet.Device_Tablet_C.PlaySoundEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Tablet_C::PlaySoundEvent(class UFMODEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "PlaySoundEvent");

	Params::ADevice_Tablet_C_PlaySoundEvent_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Device_Tablet.Device_Tablet_C.WakeScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void ADevice_Tablet_C::WakeScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "WakeScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Device_Tablet.Device_Tablet_C.ExecuteUbergraph_Device_Tablet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_C*      K2Node_DynamicCast_AsW_Pre_Mission_Tablet                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_Event_Event                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetLevelData_ReturnValue                                (None)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PreMission_Tablet_C*      K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADevice_Tablet_C::ExecuteUbergraph_Device_Tablet(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UW_PreMission_Tablet_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet, bool K2Node_DynamicCast_bSuccess, class UFMODEvent* K2Node_Event_Event, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetLevelData_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UW_PreMission_Tablet_C* K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1, bool K2Node_DynamicCast_bSuccess_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Device_Tablet_C", "ExecuteUbergraph_Device_Tablet");

	Params::ADevice_Tablet_C_ExecuteUbergraph_Device_Tablet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Pre_Mission_Tablet = K2Node_DynamicCast_AsW_Pre_Mission_Tablet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Event = K2Node_Event_Event;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_GetLevelData_ReturnValue = CallFunc_GetLevelData_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1 = K2Node_DynamicCast_AsW_Pre_Mission_Tablet_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


