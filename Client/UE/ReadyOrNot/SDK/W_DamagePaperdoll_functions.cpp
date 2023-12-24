#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_DamagePaperdoll.W_DamagePaperdoll_C
// (None)

class UClass* UW_DamagePaperdoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_DamagePaperdoll_C");

	return Clss;
}


// W_DamagePaperdoll_C W_DamagePaperdoll.Default__W_DamagePaperdoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DamagePaperdoll_C* UW_DamagePaperdoll_C::GetDefaultObj()
{
	static class UW_DamagePaperdoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DamagePaperdoll_C*>(UW_DamagePaperdoll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdatePartsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetTorsoDmgVisibility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetLegDmgRightVisibility_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetLegDmgLeftVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetArmDmgRightVisibility_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetHeadDmgVisibility_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetArmDmgLeftVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DamagePaperdoll_C::UpdatePartsVisibility(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, class UImage* CallFunc_Array_Get_Item, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UImage* CallFunc_Array_Get_Item_2, class UImage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UImage* CallFunc_Array_Get_Item_4, class UImage* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, enum class ESlateVisibility CallFunc_GetTorsoDmgVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetLegDmgRightVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetLegDmgLeftVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetArmDmgRightVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetHeadDmgVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetArmDmgLeftVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "UpdatePartsVisibility");

	Params::UW_DamagePaperdoll_C_UpdatePartsVisibility_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetTorsoDmgVisibility_ReturnValue = CallFunc_GetTorsoDmgVisibility_ReturnValue;
	Parms.CallFunc_GetLegDmgRightVisibility_ReturnValue = CallFunc_GetLegDmgRightVisibility_ReturnValue;
	Parms.CallFunc_GetLegDmgLeftVisibility_ReturnValue = CallFunc_GetLegDmgLeftVisibility_ReturnValue;
	Parms.CallFunc_GetArmDmgRightVisibility_ReturnValue = CallFunc_GetArmDmgRightVisibility_ReturnValue;
	Parms.CallFunc_GetHeadDmgVisibility_ReturnValue = CallFunc_GetHeadDmgVisibility_ReturnValue;
	Parms.CallFunc_GetArmDmgLeftVisibility_ReturnValue = CallFunc_GetArmDmgLeftVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Apply Damage State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      InImage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDamagedLimb                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               bFlashingLimb                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                              LimbHealth                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetLimbDamaged_bNewlyDamaged                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UW_DamagePaperdoll_C::Apply_Damage_State(class UImage* InImage, bool& bDamagedLimb, bool& bFlashingLimb, float LimbHealth, FDelegateProperty_ Event, float CallFunc_FClamp_ReturnValue, bool CallFunc_SetLimbDamaged_bNewlyDamaged, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Apply Damage State");

	Params::UW_DamagePaperdoll_C_Apply_Damage_State_Params Parms{};

	Parms.InImage = InImage;
	Parms.bDamagedLimb = bDamagedLimb;
	Parms.bFlashingLimb = bFlashingLimb;
	Parms.LimbHealth = LimbHealth;
	Parms.Event = Event;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SetLimbDamaged_bNewlyDamaged = CallFunc_SetLimbDamaged_bNewlyDamaged;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetLimbDamaged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLimb                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               bNewlyDamaged                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DamagePaperdoll_C::SetLimbDamaged(bool& bLimb, bool* bNewlyDamaged, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "SetLimbDamaged");

	Params::UW_DamagePaperdoll_C_SetLimbDamaged_Params Parms{};

	Parms.bLimb = bLimb;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bNewlyDamaged != nullptr)
		*bNewlyDamaged = Parms.bNewlyDamaged;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdatePaperdollPartToHealedColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRightArm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LeftArm                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Torso                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Right_Leg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Left_Leg                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)

void UW_DamagePaperdoll_C::UpdatePaperdollPartToHealedColor(bool bRightArm, bool LeftArm, bool Torso, bool Head, bool Right_Leg, bool Left_Leg, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "UpdatePaperdollPartToHealedColor");

	Params::UW_DamagePaperdoll_C_UpdatePaperdollPartToHealedColor_Params Parms{};

	Parms.bRightArm = bRightArm;
	Parms.LeftArm = LeftArm;
	Parms.Torso = Torso;
	Parms.Head = Head;
	Parms.Right_Leg = Right_Leg;
	Parms.Left_Leg = Left_Leg;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetDamageState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHeadHit                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bBodyHit                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLeftArmHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRightArmHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLeftLegHit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRightLegHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLimbHealthData             CallFunc_GetLimbHealth_ReturnValue                               (NoDestructor)
// struct FLimbHealthData             CallFunc_GetLimbHealth_ReturnValue_1                             (NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLimbHealthData             CallFunc_GetLimbHealth_ReturnValue_2                             (NoDestructor)
// struct FLimbHealthData             CallFunc_GetLimbHealth_ReturnValue_3                             (NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLimbHealthData             CallFunc_GetLimbHealth_ReturnValue_4                             (NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedResource_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UW_DamagePaperdoll_C::SetDamageState(bool bHeadHit, bool bBodyHit, bool bLeftArmHit, bool bRightArmHit, bool bLeftLegHit, bool bRightLegHit, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable, class UImage* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, class UImage* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_5, class UImage* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, class UImage* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UImage* CallFunc_Array_Get_Item_5, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_2, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_7, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_GetNormalizedResource_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_9, float CallFunc_Divide_FloatFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "SetDamageState");

	Params::UW_DamagePaperdoll_C_SetDamageState_Params Parms{};

	Parms.bHeadHit = bHeadHit;
	Parms.bBodyHit = bBodyHit;
	Parms.bLeftArmHit = bLeftArmHit;
	Parms.bRightArmHit = bRightArmHit;
	Parms.bLeftLegHit = bLeftLegHit;
	Parms.bRightLegHit = bRightLegHit;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetLimbHealth_ReturnValue = CallFunc_GetLimbHealth_ReturnValue;
	Parms.CallFunc_GetLimbHealth_ReturnValue_1 = CallFunc_GetLimbHealth_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetLimbHealth_ReturnValue_2 = CallFunc_GetLimbHealth_ReturnValue_2;
	Parms.CallFunc_GetLimbHealth_ReturnValue_3 = CallFunc_GetLimbHealth_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_7 = CallFunc_Conv_IntToFloat_ReturnValue_7;
	Parms.CallFunc_GetLimbHealth_ReturnValue_4 = CallFunc_GetLimbHealth_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_8 = CallFunc_Conv_IntToFloat_ReturnValue_8;
	Parms.CallFunc_GetNormalizedResource_ReturnValue = CallFunc_GetNormalizedResource_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_9 = CallFunc_Conv_IntToFloat_ReturnValue_9;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetTorsoDmgVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_DamagePaperdoll_C::GetTorsoDmgVisibility(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "GetTorsoDmgVisibility");

	Params::UW_DamagePaperdoll_C_GetTorsoDmgVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgRightVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_DamagePaperdoll_C::GetLegDmgRightVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "GetLegDmgRightVisibility");

	Params::UW_DamagePaperdoll_C_GetLegDmgRightVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgLeftVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_DamagePaperdoll_C::GetLegDmgLeftVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "GetLegDmgLeftVisibility");

	Params::UW_DamagePaperdoll_C_GetLegDmgLeftVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetHeadDmgVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_DamagePaperdoll_C::GetHeadDmgVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "GetHeadDmgVisibility");

	Params::UW_DamagePaperdoll_C_GetHeadDmgVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgRightVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_DamagePaperdoll_C::GetArmDmgRightVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "GetArmDmgRightVisibility");

	Params::UW_DamagePaperdoll_C_GetArmDmgRightVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgLeftVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UW_DamagePaperdoll_C::GetArmDmgLeftVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "GetArmDmgLeftVisibility");

	Params::UW_DamagePaperdoll_C_GetArmDmgLeftVisibility_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Head
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Stop_Flashing_Head()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Stop Flashing Head");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Leg
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Stop_Flashing_Left_Leg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Stop Flashing Left Leg");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Leg
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Stop_Flashing_Right_Leg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Stop Flashing Right Leg");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Arm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Stop_Flashing_Left_Arm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Stop Flashing Left Arm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Arm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Stop_Flashing_Right_Arm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Stop Flashing Right Arm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Torso
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Stop_Flashing_Torso()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Stop Flashing Torso");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdateHealthBP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DamagePaperdoll_C::UpdateHealthBP(float Health)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "UpdateHealthBP");

	Params::UW_DamagePaperdoll_C_UpdateHealthBP_Params Parms{};

	Parms.Health = Health;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.bodyPartDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHeadDamaged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bBodyDamaged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLeftArmDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRightArmDamaged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLeftLegDamaged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRightLegDamaged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLeftFootDamaged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRightFootDamaged                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DamagePaperdoll_C::bodyPartDamaged(bool bHeadDamaged, bool bBodyDamaged, bool bLeftArmDamaged, bool bRightArmDamaged, bool bLeftLegDamaged, bool bRightLegDamaged, bool bLeftFootDamaged, bool bRightFootDamaged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "bodyPartDamaged");

	Params::UW_DamagePaperdoll_C_bodyPartDamaged_Params Parms{};

	Parms.bHeadDamaged = bHeadDamaged;
	Parms.bBodyDamaged = bBodyDamaged;
	Parms.bLeftArmDamaged = bLeftArmDamaged;
	Parms.bRightArmDamaged = bRightArmDamaged;
	Parms.bLeftLegDamaged = bLeftLegDamaged;
	Parms.bRightLegDamaged = bRightLegDamaged;
	Parms.bLeftFootDamaged = bLeftFootDamaged;
	Parms.bRightFootDamaged = bRightFootDamaged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnItemAddedToInventory_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DamagePaperdoll_C::OnItemAddedToInventory_Event_0(class ABaseItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "OnItemAddedToInventory_Event_0");

	Params::UW_DamagePaperdoll_C_OnItemAddedToInventory_Event_0_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnCrouch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::OnCrouch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "OnCrouch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnCrouchEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::OnCrouchEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "OnCrouchEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DamagePaperdoll_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "Tick");

	Params::UW_DamagePaperdoll_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.CarryingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_DamagePaperdoll_C::CarryingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "CarryingChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DamagePaperdoll.W_DamagePaperdoll_C.ExecuteUbergraph_W_DamagePaperdoll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_4                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_5                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UImage*>              K2Node_MakeArray_Array_6                                         (ReferenceParm, ContainsInstancedReference)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABasePlayer_C*               K2Node_DynamicCast_AsBase_Player                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bHeadDamaged                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bBodyDamaged                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLeftArmDamaged                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bRightArmDamaged                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLeftLegDamaged                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bRightLegDamaged                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bLeftFootDamaged                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bRightFootDamaged                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowHealthIconSetting_bShowHealthIcons              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseItem*                   K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNormalizedResource_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_DamagePaperdoll_C::ExecuteUbergraph_W_DamagePaperdoll(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, float K2Node_CustomEvent_Health, enum class ESlateVisibility Temp_byte_Variable, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, TArray<class UImage*>& K2Node_MakeArray_Array, TArray<class UImage*>& K2Node_MakeArray_Array_1, TArray<class UImage*>& K2Node_MakeArray_Array_2, TArray<class UImage*>& K2Node_MakeArray_Array_3, TArray<class UImage*>& K2Node_MakeArray_Array_4, TArray<class UImage*>& K2Node_MakeArray_Array_5, TArray<class UImage*>& K2Node_MakeArray_Array_6, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_bHeadDamaged, bool K2Node_CustomEvent_bBodyDamaged, bool K2Node_CustomEvent_bLeftArmDamaged, bool K2Node_CustomEvent_bRightArmDamaged, bool K2Node_CustomEvent_bLeftLegDamaged, bool K2Node_CustomEvent_bRightLegDamaged, bool K2Node_CustomEvent_bLeftFootDamaged, bool K2Node_CustomEvent_bRightFootDamaged, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, bool CallFunc_LoadShowHealthIconSetting_bShowHealthIcons, bool CallFunc_LoadShowHealthIconSetting_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class ABaseItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNormalizedResource_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable_6, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UImage* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UImage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UImage* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, class UImage* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class UImage* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DamagePaperdoll_C", "ExecuteUbergraph_W_DamagePaperdoll");

	Params::UW_DamagePaperdoll_C_ExecuteUbergraph_W_DamagePaperdoll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_CustomEvent_Health = K2Node_CustomEvent_Health;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBase_Player = K2Node_DynamicCast_AsBase_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_bHeadDamaged = K2Node_CustomEvent_bHeadDamaged;
	Parms.K2Node_CustomEvent_bBodyDamaged = K2Node_CustomEvent_bBodyDamaged;
	Parms.K2Node_CustomEvent_bLeftArmDamaged = K2Node_CustomEvent_bLeftArmDamaged;
	Parms.K2Node_CustomEvent_bRightArmDamaged = K2Node_CustomEvent_bRightArmDamaged;
	Parms.K2Node_CustomEvent_bLeftLegDamaged = K2Node_CustomEvent_bLeftLegDamaged;
	Parms.K2Node_CustomEvent_bRightLegDamaged = K2Node_CustomEvent_bRightLegDamaged;
	Parms.K2Node_CustomEvent_bLeftFootDamaged = K2Node_CustomEvent_bLeftFootDamaged;
	Parms.K2Node_CustomEvent_bRightFootDamaged = K2Node_CustomEvent_bRightFootDamaged;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.CallFunc_LoadShowHealthIconSetting_bShowHealthIcons = CallFunc_LoadShowHealthIconSetting_bShowHealthIcons;
	Parms.CallFunc_LoadShowHealthIconSetting_ReturnValue = CallFunc_LoadShowHealthIconSetting_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character_1 = K2Node_DynamicCast_AsPlayer_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNormalizedResource_ReturnValue = CallFunc_GetNormalizedResource_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


