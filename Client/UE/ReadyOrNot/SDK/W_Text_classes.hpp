#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x558 - 0x2D8)
// WidgetBlueprintGeneratedClass W_Text.W_Text_C
class UW_Text_C : public UTextWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_TextStyles                      SelectTextStyle;                                   // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x2E8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FST_Style_Text                        TextStyleOld;                                      // 0x300(0xA0)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ShadowOffset;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShadowColor;                                       // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoWrapText;                                      // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SubString;                                         // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SingleWord;                                        // 0x3CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18CB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LetterSpacing;                                     // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Truncate;                                          // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterLimit;                                    // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class FString                                TruncationCharacters;                              // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                        CalculatedSpacing;                                 // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      Justification;                                     // 0x3EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CalculatedWidth;                                   // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentLetterSpacing;                              // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterCount;                                    // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CharacterArray;                                    // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UW_Text_C*>                SpacedCharacterElements;                           // 0x410(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UWrapBoxSlot*, class UW_Text_C*>  WordElements;                                      // 0x460(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        WordCount;                                         // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBox*                        HB_Substring;                                      // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_SingleLine;                                     // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            TextStyleDataTable;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRichText;                                       // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFontOutlineSettings                  Outline_Settings;                                  // 0x4E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  Typeface;                                          // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                      TextRenderTransform;                               // 0x50C(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          TextColor;                                         // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TextStyles                      CurrentTextStyle;                                  // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_18DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorOverride;                                     // 0x53C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FontSizeOverride;                                  // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TextStyle;                                         // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Text_C* GetDefaultObj();

	void SetTextJustification(enum class ETextJustify Justification);
	void SetOutline(const struct FFontOutlineSettings& FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetFont(const struct FSlateFontInfo& Font, const struct FST_Style_Text& K2Node_MakeStruct_ST_Style_Text);
	void SetFontSize(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetTextTransform(enum class ETextTransformPolicy TextTransform);
	void SetTextShadow(const struct FVector2D& ShadowOffset, const struct FLinearColor& ShadowColor);
	void SetTextLetterSpacing(int32 LetterSpacing, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetTextColor(const struct FLinearColor& Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetText(class FText* CurrentText);
	void UpdateText(class FText Text);
	void TruncateText(bool Truncate, int32 CharacterLimit, const class FString& TruncationCharacters, class FText* TruncatedText, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Len_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EndsWith_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default);
	void UpdateFont(const struct FSlateFontInfo& Font);
	void SetStyle(const struct FST_Style_Text& TextStyle);
	void SetText(class FText Text, class FText CallFunc_TruncateText_TruncatedText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_Text(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_RemoveSpacesFromString_ReturnString, class FText CallFunc_RemoveSpacesFromString_ReturnText, class FName CallFunc_RemoveSpacesFromString_ReturnName, const struct FST_Style_Text& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


