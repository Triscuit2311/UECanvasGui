#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2B8 - 0x2A8)
// BlueprintGeneratedClass Vote_EndRound.Vote_EndRound_C
class AVote_EndRound_C : public AReferendum
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVote_EndRound_C* GetDefaultObj();

	void OnReferendumPassed();
	void ExecuteUbergraph_Vote_EndRound(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotGameMode_PVP* K2Node_DynamicCast_AsReady_or_Not_Game_Mode_PVP, bool K2Node_DynamicCast_bSuccess, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess_1);
};

}


