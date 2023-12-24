#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x70 - 0x58)
// BlueprintGeneratedClass AIAction_SurrenderExitStandard.AIAction_SurrenderExitStandard_C
class UAIAction_SurrenderExitStandard_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bChosenExitType;                                   // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESurrenderExitType                SurrenderExitType;                                 // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2185[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FocalPoint;                                        // 0x64(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_SurrenderExitStandard_C* GetDefaultObj();

	void IsFakeExit(enum class ESurrenderExitType ExitType, bool* Return_Value, bool K2Node_SwitchEnum_CmpSuccess);
	bool ShouldPerformAction(bool CallFunc_Not_PreBool_ReturnValue);
	void BeginAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void ExecuteUbergraph_AIAction_SurrenderExitStandard(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, bool CallFunc_IsFakeExit_Return_Value, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_SurrenderExit_ReturnValue, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


