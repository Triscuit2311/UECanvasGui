#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destructible_Vehicle_Base.BP_Destructible_Vehicle_Base_C
// (Actor)

class UClass* ABP_Destructible_Vehicle_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destructible_Vehicle_Base_C");

	return Clss;
}


// BP_Destructible_Vehicle_Base_C BP_Destructible_Vehicle_Base.Default__BP_Destructible_Vehicle_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Destructible_Vehicle_Base_C* ABP_Destructible_Vehicle_Base_C::GetDefaultObj()
{
	static class ABP_Destructible_Vehicle_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Destructible_Vehicle_Base_C*>(ABP_Destructible_Vehicle_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Destructible_Vehicle_Base.BP_Destructible_Vehicle_Base_C.SetupCar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CarColors             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Letters_Types         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_LicesPlate_Types      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Letters_Types         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Destructible_Vehicle_Base_C::SetupCar(const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, const struct FVector& Temp_struct_Variable_5, const struct FVector& Temp_struct_Variable_6, const struct FVector& Temp_struct_Variable_7, const struct FVector& Temp_struct_Variable_8, const struct FVector& Temp_struct_Variable_9, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, const struct FVector& Temp_struct_Variable_12, const struct FVector& Temp_struct_Variable_13, const struct FVector& Temp_struct_Variable_14, const struct FVector& Temp_struct_Variable_15, class UMaterialInterface* Temp_object_Variable, enum class E_CarColors Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, enum class E_Letters_Types Temp_byte_Variable_1, enum class E_LicesPlate_Types Temp_byte_Variable_2, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, enum class E_Letters_Types Temp_byte_Variable_3, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, const struct FVector& K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Destructible_Vehicle_Base_C", "SetupCar");

	Params::ABP_Destructible_Vehicle_Base_C_SetupCar_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Destructible_Vehicle_Base.BP_Destructible_Vehicle_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Destructible_Vehicle_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Destructible_Vehicle_Base_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Destructible_Vehicle_Base.BP_Destructible_Vehicle_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Destructible_Vehicle_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Destructible_Vehicle_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Destructible_Vehicle_Base.BP_Destructible_Vehicle_Base_C.ExecuteUbergraph_BP_Destructible_Vehicle_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Destructible_Vehicle_Base_C::ExecuteUbergraph_BP_Destructible_Vehicle_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Destructible_Vehicle_Base_C", "ExecuteUbergraph_BP_Destructible_Vehicle_Base");

	Params::ABP_Destructible_Vehicle_Base_C_ExecuteUbergraph_BP_Destructible_Vehicle_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


