#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Station_Screen_Triggerable.BP_Station_Screen_Triggerable_C
// (Actor)

class UClass* ABP_Station_Screen_Triggerable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Station_Screen_Triggerable_C");

	return Clss;
}


// BP_Station_Screen_Triggerable_C BP_Station_Screen_Triggerable.Default__BP_Station_Screen_Triggerable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Station_Screen_Triggerable_C* ABP_Station_Screen_Triggerable_C::GetDefaultObj()
{
	static class ABP_Station_Screen_Triggerable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Station_Screen_Triggerable_C*>(ABP_Station_Screen_Triggerable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Station_Screen_Triggerable.BP_Station_Screen_Triggerable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Station_Screen_Triggerable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Station_Screen_Triggerable_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Station_Screen_Triggerable.BP_Station_Screen_Triggerable_C.Deactivate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Station_Screen_Triggerable_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Station_Screen_Triggerable_C", "Deactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Station_Screen_Triggerable.BP_Station_Screen_Triggerable_C.Activate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Station_Screen_Triggerable_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Station_Screen_Triggerable_C", "Activate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Station_Screen_Triggerable.BP_Station_Screen_Triggerable_C.ExecuteUbergraph_BP_Station_Screen_Triggerable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASceneCapture2D*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASceneCapture2D*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Station_Screen_Triggerable_C::ExecuteUbergraph_BP_Station_Screen_Triggerable(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ASceneCapture2D*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ASceneCapture2D* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Station_Screen_Triggerable_C", "ExecuteUbergraph_BP_Station_Screen_Triggerable");

	Params::ABP_Station_Screen_Triggerable_C_ExecuteUbergraph_BP_Station_Screen_Triggerable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


