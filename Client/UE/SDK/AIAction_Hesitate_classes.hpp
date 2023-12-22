#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x78 - 0x58)
// BlueprintGeneratedClass AIAction_Hesitate.AIAction_Hesitate_C
class UAIAction_Hesitate_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               HesitateMoveLocation;                              // 0x60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastSeenSwatLocation;                              // 0x6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_Hesitate_C* GetDefaultObj();

	class FName GetMoveStyleOverride(bool Temp_bool_Variable, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName K2Node_Select_Default);
	bool ShouldPerformAction();
	void EndAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void InitAction_Blueprint(class ACyberneticController* Controller);
	void ExecuteUbergraph_AIAction_Hesitate(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_Event_DeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsMovingForRequest_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue);
};

}


