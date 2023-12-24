#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x430 - 0x418)
// WidgetBlueprintGeneratedClass ModioCollectionViewWidget.ModioCollectionViewWidget_C
class UModioCollectionViewWidget_C : public UModioCollectionView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FModioModID>                   ModEnabledStatuses;                                // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UModioCollectionViewWidget_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_ModioCollectionViewWidget(int32 EntryPoint);
};

}


