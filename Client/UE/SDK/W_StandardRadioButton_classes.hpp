#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x584 - 0x56C)
// WidgetBlueprintGeneratedClass W_StandardRadioButton.W_StandardRadioButton_C
class UW_StandardRadioButton_C : public UW_StandardButton_C
{
public:
	uint8                                        Pad_20B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_RadioContainer_C*                   ParentContainer;                                   // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TabControlIndex;                                   // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_StandardRadioButton_C* GetDefaultObj();

	void Equals(TScriptInterface<class IIRadioWidget_C> Other, bool* Result, class UW_StandardRadioButton_C* K2Node_DynamicCast_AsW_Standard_Radio_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	int32 GetTabControlIndex();
	void GetParentContainerSlow(class UW_RadioContainer_C** RadioContainer, class UWidget* CurrentWidget, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UW_RadioContainer_C* K2Node_DynamicCast_AsW_Radio_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnClicked_Derived();
	void Construct();
	void OnRadioSelected();
	void OnRadioDeselected();
	void EventReconstruct();
	void ExecuteUbergraph_W_StandardRadioButton(int32 EntryPoint, TScriptInterface<class IIRadioWidget_C> K2Node_DynamicCast_AsIRadio_Widget, bool K2Node_DynamicCast_bSuccess, class UW_RadioContainer_C* CallFunc_GetParentContainerSlow_RadioContainer, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IIRadioWidget_C> K2Node_DynamicCast_AsIRadio_Widget_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


