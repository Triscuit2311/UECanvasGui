#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C
// (Actor)

class UClass* ASound_StarterAmbience_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sound_StarterAmbience_BP_C");

	return Clss;
}


// Sound_StarterAmbience_BP_C Sound_StarterAmbience_BP.Default__Sound_StarterAmbience_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASound_StarterAmbience_BP_C* ASound_StarterAmbience_BP_C::GetDefaultObj()
{
	static class ASound_StarterAmbience_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASound_StarterAmbience_BP_C*>(ASound_StarterAmbience_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C.FMODInitializer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASound_StarterAmbience_BP_C::FMODInitializer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sound_StarterAmbience_BP_C", "FMODInitializer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C.ReverbInitializer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASound_StarterAmbience_BP_C::ReverbInitializer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sound_StarterAmbience_BP_C", "ReverbInitializer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASound_StarterAmbience_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sound_StarterAmbience_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C.InitialOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASound_StarterAmbience_BP_C::InitialOverlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sound_StarterAmbience_BP_C", "InitialOverlap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Sound_StarterAmbience_BP.Sound_StarterAmbience_BP_C.ExecuteUbergraph_Sound_StarterAmbience_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFMODEventInstance>  CallFunc_FindEventInstances_ReturnValue                          (ReferenceParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ASound_StarterAmbience_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASound_StarterAmbience_BP_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotLevelScript*      CallFunc_GetReadyOrNotLevelScript_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AllAudioVolumesTicked_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASound_StarterAmbience_BP_C::ExecuteUbergraph_Sound_StarterAmbience_BP(int32 EntryPoint, bool CallFunc_NotEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, int32 Temp_int_Array_Index_Variable, TArray<struct FFMODEventInstance>& CallFunc_FindEventInstances_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class ASound_StarterAmbience_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class ASound_StarterAmbience_BP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, class AReadyOrNotLevelScript* CallFunc_GetReadyOrNotLevelScript_ReturnValue, bool CallFunc_AllAudioVolumesTicked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Sound_StarterAmbience_BP_C", "ExecuteUbergraph_Sound_StarterAmbience_BP");

	Params::ASound_StarterAmbience_BP_C_ExecuteUbergraph_Sound_StarterAmbience_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_FindEventInstances_ReturnValue = CallFunc_FindEventInstances_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_2 = CallFunc_NotEqual_NameName_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotLevelScript_ReturnValue = CallFunc_GetReadyOrNotLevelScript_ReturnValue;
	Parms.CallFunc_AllAudioVolumesTicked_ReturnValue = CallFunc_AllAudioVolumesTicked_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


