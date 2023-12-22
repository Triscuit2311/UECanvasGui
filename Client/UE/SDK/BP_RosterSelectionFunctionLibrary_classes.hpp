#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_RosterSelectionFunctionLibrary.BP_RosterSelectionFunctionLibrary_C
class UBP_RosterSelectionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_RosterSelectionFunctionLibrary_C* GetDefaultObj();

	void GetStressLevelColor(float StressLevel, class UObject* __WorldContext, struct FSlateColor* Color, TMap<struct FVector2D, struct FSlateColor> StressColorsMap, TMap<struct FVector2D, class FText> StressLevelsMap, const struct FVector2D& CurrentRange, TMap<struct FVector2D, class FText> K2Node_MakeVariable_MakeVariableOutput, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVector2D>& CallFunc_Map_Keys_Keys, TMap<struct FVector2D, struct FSlateColor> K2Node_MakeVariable_MakeVariableOutput_1, const struct FVector2D& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue);
	void GetStressLevelText(float StressLevel, class UObject* __WorldContext, class FText* Text, TMap<struct FVector2D, class FText> StressLevelsMap, const struct FVector2D& CurrentRange, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TMap<struct FVector2D, class FText> K2Node_MakeVariable_MakeVariableOutput, TArray<struct FVector2D>& CallFunc_Map_Keys_Keys, const struct FVector2D& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue);
	void GetRosterCharacterStateText(class URosterCharacter* RosterCharacter, class UObject* __WorldContext, class FText* Text, enum class ERosterCharacterState Temp_byte_Variable, class FText CallFunc_StressPercentageAsStatus_StatusText, const struct FSlateColor& CallFunc_StressPercentageAsStatus_StatusColor, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default);
	void FormatBio(class URosterCharacter* Character, class UObject* __WorldContext, class FText* OutText, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void StressPercentageAsStatus(class URosterCharacter* Character, class UObject* __WorldContext, class FText* StatusText, struct FSlateColor* StatusColor, enum class ERosterCharacterState Temp_byte_Variable, const struct FSlateColor& CallFunc_GetStressLevelColor_Color, class FText CallFunc_GetStressLevelText_Text, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_Select_Default);
	void StressPercentageAsText(class URosterCharacter* Character, class UObject* __WorldContext, class FText* Text, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void SquadPositionToColor(enum class ERosterSquadPosition SquadPosition, class UObject* __WorldContext, struct FLinearColor* OutColor, enum class ERosterSquadPosition Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& K2Node_Select_Default);
	void FormatName(class URosterCharacter* Character, class UObject* __WorldContext, class FText* OutText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue);
};

}


