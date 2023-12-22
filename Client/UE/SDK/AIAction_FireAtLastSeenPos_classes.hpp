#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass AIAction_FireAtLastSeenPos.AIAction_FireAtLastSeenPos_C
class UAIAction_FireAtLastSeenPos_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_FireAtLastSeenPos_C* GetDefaultObj();

	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void ExecuteUbergraph_AIAction_FireAtLastSeenPos(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue);
};

}


