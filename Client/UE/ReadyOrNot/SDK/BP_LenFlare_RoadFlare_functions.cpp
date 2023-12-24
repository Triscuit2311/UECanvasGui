#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C
// (Actor)

class UClass* ABP_LenFlare_RoadFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LenFlare_RoadFlare_C");

	return Clss;
}


// BP_LenFlare_RoadFlare_C BP_LenFlare_RoadFlare.Default__BP_LenFlare_RoadFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LenFlare_RoadFlare_C* ABP_LenFlare_RoadFlare_C::GetDefaultObj()
{
	static class ABP_LenFlare_RoadFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LenFlare_RoadFlare_C*>(ABP_LenFlare_RoadFlare_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.InitFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::InitFlare(float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "InitFlare");

	Params::ABP_LenFlare_RoadFlare_C_InitFlare_Params Parms{};

	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMaterialSpriteElement      K2Node_MakeStruct_MaterialSpriteElement                          (NoDestructor)
// TArray<struct FMaterialSpriteElement>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)

void ABP_LenFlare_RoadFlare_C::UserConstructionScript(const struct FMaterialSpriteElement& K2Node_MakeStruct_MaterialSpriteElement, TArray<struct FMaterialSpriteElement>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "UserConstructionScript");

	Params::ABP_LenFlare_RoadFlare_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_MakeStruct_MaterialSpriteElement = K2Node_MakeStruct_MaterialSpriteElement;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LenFlare_RoadFlare_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "ReceiveTick");

	Params::ABP_LenFlare_RoadFlare_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LenFlare_RoadFlare.BP_LenFlare_RoadFlare_C.ExecuteUbergraph_BP_LenFlare_RoadFlare
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABaseItem*>           CallFunc_GetInventoryItems_ReturnValue                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LenFlare_RoadFlare_C::ExecuteUbergraph_BP_LenFlare_RoadFlare(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_2, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_Add_IntInt_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class ABaseItem*>& CallFunc_GetInventoryItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LenFlare_RoadFlare_C", "ExecuteUbergraph_BP_LenFlare_RoadFlare");

	Params::ABP_LenFlare_RoadFlare_C_ExecuteUbergraph_BP_LenFlare_RoadFlare_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue_1 = CallFunc_Divide_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetViewportSize_ReturnValue_2 = CallFunc_GetViewportSize_ReturnValue_2;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue_2 = CallFunc_Divide_Vector2DVector2D_ReturnValue_2;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue_1 = CallFunc_Conv_Vector2DToVector_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetInventoryItems_ReturnValue = CallFunc_GetInventoryItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


