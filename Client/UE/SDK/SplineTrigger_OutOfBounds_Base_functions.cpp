#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C
// (Actor)

class UClass* ASplineTrigger_OutOfBounds_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SplineTrigger_OutOfBounds_Base_C");

	return Clss;
}


// SplineTrigger_OutOfBounds_Base_C SplineTrigger_OutOfBounds_Base.Default__SplineTrigger_OutOfBounds_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASplineTrigger_OutOfBounds_Base_C* ASplineTrigger_OutOfBounds_Base_C::GetDefaultObj()
{
	static class ASplineTrigger_OutOfBounds_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASplineTrigger_OutOfBounds_Base_C*>(ASplineTrigger_OutOfBounds_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.PlaySplineExitVoiceLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASplineTrigger_OutOfBounds_Base_C::PlaySplineExitVoiceLine(bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "PlaySplineExitVoiceLine");

	Params::ASplineTrigger_OutOfBounds_Base_C_PlaySplineExitVoiceLine_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.Greyscale_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::Greyscale_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "Greyscale_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.Greyscale_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::Greyscale_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "Greyscale_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.OnSplineEnclosureEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASplineTrigger_OutOfBounds_Base_C::OnSplineEnclosureEntered(class APlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "OnSplineEnclosureEntered");

	Params::ASplineTrigger_OutOfBounds_Base_C_OnSplineEnclosureEntered_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.OnSplineEnclosureExited
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASplineTrigger_OutOfBounds_Base_C::OnSplineEnclosureExited(class APlayerCharacter* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "OnSplineEnclosureExited");

	Params::ASplineTrigger_OutOfBounds_Base_C_OnSplineEnclosureExited_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.HideOutOfBoundsWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::HideOutOfBoundsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "HideOutOfBoundsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::OnAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "OnAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.DestroyOutOfBoundsWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::DestroyOutOfBoundsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "DestroyOutOfBoundsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASplineTrigger_OutOfBounds_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "ReceiveTick");

	Params::ASplineTrigger_OutOfBounds_Base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.StartCountdown_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::StartCountdown_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "StartCountdown_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.StopCountdown_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::StopCountdown_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "StopCountdown_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.Delegate_OnOutOfBoundsTimeLimitEnded_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASplineTrigger_OutOfBounds_Base_C::Delegate_OnOutOfBoundsTimeLimitEnded_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "Delegate_OnOutOfBoundsTimeLimitEnded_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SplineTrigger_OutOfBounds_Base.SplineTrigger_OutOfBounds_Base_C.ExecuteUbergraph_SplineTrigger_OutOfBounds_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class APlayerCharacter*            K2Node_Event_PlayerCharacter_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_Event_PlayerCharacter                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UW_OutOfBounds_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOutOfBoundsEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutOfBoundsEnabled_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOutOfBoundsEnabled_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)

void ASplineTrigger_OutOfBounds_Base_C::ExecuteUbergraph_SplineTrigger_OutOfBounds_Base(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerCharacter* K2Node_Event_PlayerCharacter_1, class APlayerCharacter* K2Node_Event_PlayerCharacter, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UW_OutOfBounds_C* CallFunc_Create_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Variable, bool CallFunc_IsAnyAnimationPlaying_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_1, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_2, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_3, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_4, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_6, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_7, bool CallFunc_IsOutOfBoundsEnabled_ReturnValue, bool CallFunc_IsOutOfBoundsEnabled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsOutOfBoundsEnabled_ReturnValue_2, bool CallFunc_IsDeadOrUnconscious_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SplineTrigger_OutOfBounds_Base_C", "ExecuteUbergraph_SplineTrigger_OutOfBounds_Base");

	Params::ASplineTrigger_OutOfBounds_Base_C_ExecuteUbergraph_SplineTrigger_OutOfBounds_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_PlayerCharacter_1 = K2Node_Event_PlayerCharacter_1;
	Parms.K2Node_Event_PlayerCharacter = K2Node_Event_PlayerCharacter;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue = CallFunc_IsDeadOrUnconscious_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue_1 = CallFunc_IsDeadOrUnconscious_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue_1 = CallFunc_IsAnyAnimationPlaying_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue = CallFunc_GetReadyOrNotLevelScript_ReturnValue;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_1 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_2 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_3 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_3;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_4 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_4;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_5 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_6 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_6;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_7 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_7;
	Parms.CallFunc_IsOutOfBoundsEnabled_ReturnValue = CallFunc_IsOutOfBoundsEnabled_ReturnValue;
	Parms.CallFunc_IsOutOfBoundsEnabled_ReturnValue_1 = CallFunc_IsOutOfBoundsEnabled_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue_8 = CallFunc_GetReadyOrNotLevelScript_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsOutOfBoundsEnabled_ReturnValue_2 = CallFunc_IsOutOfBoundsEnabled_ReturnValue_2;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue_2 = CallFunc_IsDeadOrUnconscious_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


