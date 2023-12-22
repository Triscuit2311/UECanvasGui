#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1D8 - 0x1C8)
// BlueprintGeneratedClass AdvanceToEnemyPosition.AdvanceToEnemyPosition_C
class UAdvanceToEnemyPosition_C : public UBaseCombatMoveActivity
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AReadyOrNotCharacter*                  SeekingPlayer;                                     // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAdvanceToEnemyPosition_C* GetDefaultObj();

	void RequestCombatMove_Blueprint(float DeltaTime);
	void ExecuteUbergraph_AdvanceToEnemyPosition(int32 EntryPoint, float K2Node_Event_DeltaTime, class ACyberneticController* CallFunc_GetOwningController_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


