#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x60 - 0x58)
// BlueprintGeneratedClass AIAction_ReturnToSpawn.AIAction_ReturnToSpawn_C
class UAIAction_ReturnToSpawn_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIAction_ReturnToSpawn_C* GetDefaultObj();

	bool ShouldPerformAction();
	void BeginAction_Blueprint();
	void OnMoveComplete_Blueprint(class AAIController* Controller, int32 RequestID);
	void ExecuteUbergraph_AIAction_ReturnToSpawn(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AAIController* K2Node_Event_Controller, int32 K2Node_Event_RequestID);
};

}


