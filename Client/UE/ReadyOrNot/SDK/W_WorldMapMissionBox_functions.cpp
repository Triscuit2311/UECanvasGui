#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WorldMapMissionBox.W_WorldMapMissionBox_C
// (None)

class UClass* UW_WorldMapMissionBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WorldMapMissionBox_C");

	return Clss;
}


// W_WorldMapMissionBox_C W_WorldMapMissionBox.Default__W_WorldMapMissionBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WorldMapMissionBox_C* UW_WorldMapMissionBox_C::GetDefaultObj()
{
	static class UW_WorldMapMissionBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WorldMapMissionBox_C*>(UW_WorldMapMissionBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_WorldMapMissionBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "PreConstruct");

	Params::UW_WorldMapMissionBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "Tick");

	Params::UW_WorldMapMissionBox_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UW_WorldMapMissionBox_C_BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_WorldMapMissionBox_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "OnAddedToFocusPath");

	Params::UW_WorldMapMissionBox_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_WorldMapMissionBox_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "OnRemovedFromFocusPath");

	Params::UW_WorldMapMissionBox_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_WorldMapMissionBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UW_WorldMapMissionBox_C_BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_WorldMapMissionBox_C::BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "BndEvt__W_WorldMapMissionBox_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.ExecuteUbergraph_W_WorldMapMissionBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesLevelExistInBuild_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUnlocked_OutIsUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_IsLevelUnlocked_OutScoreRequired                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_IsLevelUnlocked_OutLockedUrl                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelUnlocked_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUserFocus_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::ExecuteUbergraph_W_WorldMapMissionBox(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_DoesLevelExistInBuild_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, bool CallFunc_IsLevelUnlocked_OutIsUnlocked, float CallFunc_IsLevelUnlocked_OutScoreRequired, const class FString& CallFunc_IsLevelUnlocked_OutLockedUrl, bool CallFunc_IsLevelUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "ExecuteUbergraph_W_WorldMapMissionBox");

	Params::UW_WorldMapMissionBox_C_ExecuteUbergraph_W_WorldMapMissionBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_DoesLevelExistInBuild_ReturnValue = CallFunc_DoesLevelExistInBuild_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_IsLevelUnlocked_OutIsUnlocked = CallFunc_IsLevelUnlocked_OutIsUnlocked;
	Parms.CallFunc_IsLevelUnlocked_OutScoreRequired = CallFunc_IsLevelUnlocked_OutScoreRequired;
	Parms.CallFunc_IsLevelUnlocked_OutLockedUrl = CallFunc_IsLevelUnlocked_OutLockedUrl;
	Parms.CallFunc_IsLevelUnlocked_ReturnValue = CallFunc_IsLevelUnlocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HasUserFocus_ReturnValue = CallFunc_HasUserFocus_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::Unhovered__DelegateSignature(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "Unhovered__DelegateSignature");

	Params::UW_WorldMapMissionBox_C_Unhovered__DelegateSignature_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::Hovered__DelegateSignature(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "Hovered__DelegateSignature");

	Params::UW_WorldMapMissionBox_C_Hovered__DelegateSignature_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WorldMapMissionBox.W_WorldMapMissionBox_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MissionName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WorldMapMissionBox_C::Clicked__DelegateSignature(class FName MissionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WorldMapMissionBox_C", "Clicked__DelegateSignature");

	Params::UW_WorldMapMissionBox_C_Clicked__DelegateSignature_Params Parms{};

	Parms.MissionName = MissionName;

	UObject::ProcessEvent(Func, &Parms);

}

}


