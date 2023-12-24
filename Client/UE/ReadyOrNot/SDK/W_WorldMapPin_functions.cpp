#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WorldMapPin.W_WorldMapPin_C
// (None)

class UClass* UW_WorldMapPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WorldMapPin_C");

	return Clss;
}


// W_WorldMapPin_C W_WorldMapPin.Default__W_WorldMapPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WorldMapPin_C* UW_WorldMapPin_C::GetDefaultObj()
{
	static class UW_WorldMapPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WorldMapPin_C*>(UW_WorldMapPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WorldMapPin.W_WorldMapPin_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMapPin_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "PreConstruct");

	Params::UW_WorldMapPin_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapPin.W_WorldMapPin_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapPin_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "Tick");

	Params::UW_WorldMapPin_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_WorldMapPin_C::BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_WorldMapPin_C::BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_WorldMapPin_C::BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "BndEvt__W_WorldMapPin_Button_29_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMapPin.W_WorldMapPin_C.BndEvt__W_WorldMapPin_Locked_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_WorldMapPin_C::BndEvt__W_WorldMapPin_Locked_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "BndEvt__W_WorldMapPin_Locked_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMapPin.W_WorldMapPin_C.ExecuteUbergraph_W_WorldMapPin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesLevelExistInBuild_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUnlocked_OutIsUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_IsLevelUnlocked_OutScoreRequired                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_IsLevelUnlocked_OutLockedUrl                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUnlocked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMapPin_C::ExecuteUbergraph_W_WorldMapPin(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_DoesLevelExistInBuild_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_IsLevelUnlocked_OutIsUnlocked, float CallFunc_IsLevelUnlocked_OutScoreRequired, const class FString& CallFunc_IsLevelUnlocked_OutLockedUrl, bool CallFunc_IsLevelUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "ExecuteUbergraph_W_WorldMapPin");

	Params::UW_WorldMapPin_C_ExecuteUbergraph_W_WorldMapPin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_DoesLevelExistInBuild_ReturnValue = CallFunc_DoesLevelExistInBuild_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_IsLevelUnlocked_OutIsUnlocked = CallFunc_IsLevelUnlocked_OutIsUnlocked;
	Parms.CallFunc_IsLevelUnlocked_OutScoreRequired = CallFunc_IsLevelUnlocked_OutScoreRequired;
	Parms.CallFunc_IsLevelUnlocked_OutLockedUrl = CallFunc_IsLevelUnlocked_OutLockedUrl;
	Parms.CallFunc_IsLevelUnlocked_ReturnValue = CallFunc_IsLevelUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapPin.W_WorldMapPin_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapPin_C::Unhovered__DelegateSignature(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "Unhovered__DelegateSignature");

	Params::UW_WorldMapPin_C_Unhovered__DelegateSignature_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapPin.W_WorldMapPin_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapPin_C::Hovered__DelegateSignature(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "Hovered__DelegateSignature");

	Params::UW_WorldMapPin_C_Hovered__DelegateSignature_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapPin.W_WorldMapPin_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapPin_C::Clicked__DelegateSignature(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapPin_C", "Clicked__DelegateSignature");

	Params::UW_WorldMapPin_C_Clicked__DelegateSignature_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}

}


