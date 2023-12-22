#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C
class URebindFieldFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URebindFieldFunctionLibrary_C* GetDefaultObj();

	void Using_Modifier_Key_(TArray<struct FKey>& Key_List, TArray<enum class EKeyModifiers>& Modifiers, class UObject* __WorldContext, bool* Return_Value, bool Has_Key_, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_Key_IsModifierKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Key_list_has_Non_Modifier_Key(TArray<struct FKey>& Key_List, class UObject* __WorldContext, bool* Return_Value, bool Has_Key_, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_Key_is_Non_Modifier_Key__Return_Value, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Abbreviate_Key(const struct FKey& Key, class UObject* __WorldContext, class FString* Abreviated_Name, const class FString& Temp_Abbreviation, const class FString& Temp_Abbreviated_Name, const struct FKey& Temp_Key, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, class FText CallFunc_Key_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void Key_is_Non_Modifier_Key_(const struct FKey& Key, class UObject* __WorldContext, bool* Return_Value, bool CallFunc_Key_IsModifierKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


