#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass ModioFeaturedViewWidget.ModioFeaturedViewWidget_C
class UModioFeaturedViewWidget_C : public UModioFeaturedView
{
public:
	class UModioLoadingSpinner*                  ModioLoadingSpinner_101;                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioRichTextBlock*                   ModioRichTextBlock_71;                             // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UModioFeaturedViewWidget_C* GetDefaultObj();

	class UWidget* DoCustomNavigation_0(enum class EUINavigation Navigation);
};

}


