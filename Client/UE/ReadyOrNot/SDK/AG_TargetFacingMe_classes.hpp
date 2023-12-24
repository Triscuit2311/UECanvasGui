#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x34 - 0x28)
// BlueprintGeneratedClass AG_TargetFacingMe.AG_TargetFacingMe_C
class UAG_TargetFacingMe_C : public UAIActionGate
{
public:
	int32                                        TargetType;                                        // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bAllowLastTracked;                                 // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_427D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Threshold;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_TargetFacingMe_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class AReadyOrNotCharacter* Target, bool CallFunc_DoesCharacterMatchTargetType_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_DoesCharacterMatchTargetType_ReturnValue_1);
};

}


