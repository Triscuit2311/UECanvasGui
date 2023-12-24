#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_IsStunned.AG_IsStunned_C
class UAG_IsStunned_C : public UAIActionGate
{
public:
	TArray<enum class EStunType>                 Stun_Type;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAG_IsStunned_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, int32 Temp_int_Array_Index_Variable, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsStunned_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EStunType CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsStunnedWith_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
};

}


