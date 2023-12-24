#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x469 - 0x440)
// WidgetBlueprintGeneratedClass ModioSearchResultsViewWidget.ModioSearchResultsViewWidget_C
class UModioSearchResultsViewWidget_C : public UModioSearchResultsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UModioOverlay*                         ModioOverlay_1;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRoundedImage*                    ModioRoundedImage_150;                             // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRichTextBlock*                   NoResultsHeading;                                  // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRichTextBlock*                   SearchResultsTitle;                                // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bHasFocus;                                         // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UModioSearchResultsViewWidget_C* GetDefaultObj();

	void BndEvt__ModioSearchResultsViewWidget_ResultsTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void ExecuteUbergraph_ModioSearchResultsViewWidget(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget);
};

}


