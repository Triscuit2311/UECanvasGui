#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass W_PersonalizationCategory.W_PersonalizationCategory_C
class UW_PersonalizationCategory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_StandardButton_C*                   Button;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridPanel;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SelectedItemInfo_Container;                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CategoryName;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Category;                                          // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EStandardButtonStyles             ButtonStyle;                                       // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_43BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PersonalizationCategory_C* GetDefaultObj();

	void Transform_Into_Custom_Button();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_PersonalizationCategory_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_StandardButton_C* CallingButton);
	void ExecuteUbergraph_W_PersonalizationCategory(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UW_StandardButton_C* K2Node_ComponentBoundEvent_CallingButton);
	void OnClicked__DelegateSignature(class UW_PersonalizationCategory_C* PersonalizationCategory);
};

}


