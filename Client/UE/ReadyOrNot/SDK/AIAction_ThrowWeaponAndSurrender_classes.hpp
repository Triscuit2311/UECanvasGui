#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass AIAction_ThrowWeaponAndSurrender.AIAction_ThrowWeaponAndSurrender_C
class UAIAction_ThrowWeaponAndSurrender_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ThrowWeaponAndSurrender_C* GetDefaultObj();

	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void ExecuteUbergraph_AIAction_ThrowWeaponAndSurrender(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class UAnimMontage* CallFunc_PlayMontageFromTable_ReturnValue);
};

}


