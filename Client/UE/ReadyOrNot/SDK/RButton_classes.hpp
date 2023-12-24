#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x309 - 0x260)
// WidgetBlueprintGeneratedClass RButton.RButton_C
class URButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn;                                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_68;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FLinearColor                          SelectedColor;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ButtonImage;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ButtonAlpha;                                       // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextHoveredColor;                                  // 0x2CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          TextUnhoveredColor;                                // 0x2DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ETextJustify                      TextJustification;                                 // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EStretch                          TextScale;                                         // 0x2ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EStretchDirection                 TextStretchDirection;                              // 0x2EE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4043[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HoveredText;                                       // 0x2F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         InvertHoverColors;                                 // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class URButton_C* GetDefaultObj();

	void ShouldInvertHoverColors_(bool Invert_, bool CallFunc_IsHovered_ReturnValue);
	void SetDefaultColor();
	void SetSelectedColor();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void OnHovered();
	void OnUnhovered();
	void ExecuteUbergraph_RButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_TextIsEmpty_ReturnValue);
};

}


