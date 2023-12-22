#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass AIAction_NonCompliant.AIAction_NonCompliant_C
class UAIAction_NonCompliant_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_NonCompliant_C* GetDefaultObj();

	void CanBeNonCompliant(bool* Return_Value, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsWearingExplosiveVest_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BeginAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void ExecuteUbergraph_AIAction_NonCompliant(int32 EntryPoint, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_PlayRawVO_ReturnValue, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_CanBeNonCompliant_Return_Value, bool CallFunc_IsSuspect_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, const class FString& K2Node_Select_Default, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue, float CallFunc_GetFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


