#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xDC - 0xD8)
// BlueprintGeneratedClass AC_NumAITrackingLastTrackedTarget.AC_NumAITrackingLastTrackedTarget_C
class UAC_NumAITrackingLastTrackedTarget_C : public UAIActionConsideration
{
public:
	int32                                        TeamType;                                          // 0xD8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_NumAITrackingLastTrackedTarget_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, int32 Num, int32 Temp_int_Array_Index_Variable, class AReadyOrNotCharacter* CallFunc_GetLastTrackedTarget_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_DoesCharacterMatchTargetType_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue);
};

}


