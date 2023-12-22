#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass AIAction_AdvancetoEnemy.AIAction_AdvancetoEnemy_C
class UAIAction_AdvancetoEnemy_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAdvanceToEnemyPosition_C*             AdvancetoEnemy;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_AdvancetoEnemy_C* GetDefaultObj();

	bool ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void BeginAction_Blueprint();
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void ExecuteUbergraph_AIAction_AdvancetoEnemy(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class UAdvanceToEnemyPosition_C* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue);
};

}


