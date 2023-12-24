#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0xC0 - 0x30)
// BlueprintGeneratedClass PDA_UI_Styleguide.PDA_UI_Styleguide_C
class UPDA_UI_Styleguide_C : public UPrimaryDataAsset
{
public:
	struct FLinearColor                          White;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Dark;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Red;                                               // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Yellow;                                            // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Blue;                                              // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Green;                                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RedTeam;                                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BlueTeam;                                          // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GoldTeam;                                          // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPDA_UI_Styleguide_C* GetDefaultObj();

	void GetColorByName(class FName ColorName, float Opacity, struct FLinearColor* LinearColor, struct FSlateColor* SlateColor, const struct FLinearColor& SelectedColor, bool K2Node_SwitchName_CmpSuccess, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetTeamColors(float Opacity, struct FLinearColor* Gold, struct FLinearColor* Red, struct FLinearColor* Blue, const struct FLinearColor& CallFunc_GetGoldTeamColor_RedTeam, const struct FLinearColor& CallFunc_GetBlueTeamColor_BlueTeam, const struct FLinearColor& CallFunc_GetRedTeamColor_RedTeam);
	void GetBlueTeamColor(float Opacity, struct FLinearColor* BlueTeam, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void GetRedTeamColor(float Opacity, struct FLinearColor* RedTeam, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void GetGoldTeamColor(float Opacity, struct FLinearColor* RedTeam, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void GetAllColors(float Opacity, struct FLinearColor* White, struct FLinearColor* Dark, struct FLinearColor* Red, struct FLinearColor* Yellow, struct FLinearColor* Blue, struct FLinearColor* Green, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue_5);
};

}


