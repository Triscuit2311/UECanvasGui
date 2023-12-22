#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass AIAction_SeekPlayer.AIAction_SeekPlayer_C
class UAIAction_SeekPlayer_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USeekPlayerCombatMove_C*               SeekPlayerCombatMove;                              // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_SeekPlayer_C* GetDefaultObj();

	bool ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void BeginAction_Blueprint();
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void ExecuteUbergraph_AIAction_SeekPlayer(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class USeekPlayerCombatMove_C* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue);
};

}


