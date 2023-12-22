#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x280 - 0x270)
// WidgetBlueprintGeneratedClass W_MunitionsOverviewSlot_Element.W_MunitionsOverviewSlot_Element_C
class UW_MunitionsOverviewSlot_Element_C : public UMunitionsSlotElement
{
public:
	class UHorizontalBox*                        ImageBox;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                ImageClass;                                        // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_MunitionsOverviewSlot_Element_C* GetDefaultObj();

	void AddNewImage(class UTexture2D* Texture, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UImage* CallFunc_SpawnObject_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}


