#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x450 - 0x428)
// WidgetBlueprintGeneratedClass ModioModDetailsViewWidget.ModioModDetailsViewWidget_C
class UModioModDetailsViewWidget_C : public UModioModDetailsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UModioLoadingSpinner*                  ModioLoadingSpinner_102;                           // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRichTextBlock*                   ModioRichTextBlock;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRichTextBlock*                   ModioRichTextBlock_138;                            // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRichTextBlock*                   ModioRichTextBlock_354;                            // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UModioModDetailsViewWidget_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_ModioModDetailsViewWidget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


