#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C
// (Actor)

class UClass* ABP_AttachedFlashbangTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AttachedFlashbangTrap_C");

	return Clss;
}


// BP_AttachedFlashbangTrap_C BP_AttachedFlashbangTrap.Default__BP_AttachedFlashbangTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AttachedFlashbangTrap_C* ABP_AttachedFlashbangTrap_C::GetDefaultObj()
{
	static class ABP_AttachedFlashbangTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AttachedFlashbangTrap_C*>(ABP_AttachedFlashbangTrap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.CanApplyDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDamageType*                 InDamageType                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStunDamage*                 K2Node_DynamicCast_AsStun_Damage                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AttachedFlashbangTrap_C::CanApplyDamage(class UDamageType* InDamageType, bool* Return_Value, class UClass* CallFunc_GetObjectClass_ReturnValue, class UStunDamage* K2Node_DynamicCast_AsStun_Damage, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "CanApplyDamage");

	Params::ABP_AttachedFlashbangTrap_C_CanApplyDamage_Params Parms{};

	Parms.InDamageType = InDamageType;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsStun_Damage = K2Node_DynamicCast_AsStun_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.OnTrapTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        TriggeredBy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::OnTrapTriggered(class AReadyOrNotCharacter* TriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "OnTrapTriggered");

	Params::ABP_AttachedFlashbangTrap_C_OnTrapTriggered_Params Parms{};

	Parms.TriggeredBy = TriggeredBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.Server_ApplyDamage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotCharacter*        InTriggeredBy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::Server_ApplyDamage(class AReadyOrNotCharacter* InTriggeredBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "Server_ApplyDamage");

	Params::ABP_AttachedFlashbangTrap_C_Server_ApplyDamage_Params Parms{};

	Parms.InTriggeredBy = InTriggeredBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.Explode Trap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AttachedFlashbangTrap_C::Explode_Trap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "Explode Trap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ShotFromDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_AttachedFlashbangTrap_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "ReceivePointDamage");

	Params::ABP_AttachedFlashbangTrap_C_ReceivePointDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = ShotFromDirection;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitInfo = HitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DamageReceived                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AttachedFlashbangTrap_C::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "ReceiveRadialDamage");

	Params::ABP_AttachedFlashbangTrap_C_ReceiveRadialDamage_Params Parms{};

	Parms.DamageReceived = DamageReceived;
	Parms.DamageType = DamageType;
	Parms.Origin = Origin;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AttachedFlashbangTrap.BP_AttachedFlashbangTrap_C.ExecuteUbergraph_BP_AttachedFlashbangTrap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_Event_TriggeredBy                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_CustomEvent_InTriggeredBy                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnSWATTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType_1                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_HitComponent                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_BoneName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ShotFromDirection                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DamageReceived                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Origin                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        K2Node_DynamicCast_AsReady_or_Not_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanApplyDamage_Return_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyRadialDamage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AttachedFlashbangTrap_C::ExecuteUbergraph_BP_AttachedFlashbangTrap(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AReadyOrNotCharacter* K2Node_Event_TriggeredBy, class AReadyOrNotCharacter* K2Node_CustomEvent_InTriggeredBy, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsOnSWATTeam_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType_1, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, class UPrimitiveComponent* K2Node_Event_HitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_ShotFromDirection, class AController* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DamageReceived, class UDamageType* K2Node_Event_DamageType, const struct FVector& K2Node_Event_Origin, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_CanApplyDamage_Return_Value, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_ApplyRadialDamage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AttachedFlashbangTrap_C", "ExecuteUbergraph_BP_AttachedFlashbangTrap");

	Params::ABP_AttachedFlashbangTrap_C_ExecuteUbergraph_BP_AttachedFlashbangTrap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_TriggeredBy = K2Node_Event_TriggeredBy;
	Parms.K2Node_CustomEvent_InTriggeredBy = K2Node_CustomEvent_InTriggeredBy;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsOnSWATTeam_ReturnValue = CallFunc_IsOnSWATTeam_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType_1 = K2Node_Event_DamageType_1;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_HitComponent = K2Node_Event_HitComponent;
	Parms.K2Node_Event_BoneName = K2Node_Event_BoneName;
	Parms.K2Node_Event_ShotFromDirection = K2Node_Event_ShotFromDirection;
	Parms.K2Node_Event_InstigatedBy_1 = K2Node_Event_InstigatedBy_1;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_HitInfo_1 = K2Node_Event_HitInfo_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller = K2Node_DynamicCast_AsReady_or_Not_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character = K2Node_DynamicCast_AsReady_or_Not_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DamageReceived = K2Node_Event_DamageReceived;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_Origin = K2Node_Event_Origin;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1 = K2Node_DynamicCast_AsReady_or_Not_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Character_1 = K2Node_DynamicCast_AsReady_or_Not_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_CanApplyDamage_Return_Value = CallFunc_CanApplyDamage_Return_Value;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_ApplyRadialDamage_ReturnValue = CallFunc_ApplyRadialDamage_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


