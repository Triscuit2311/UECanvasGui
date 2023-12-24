#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2C0 - 0x298)
// WidgetBlueprintGeneratedClass ModioTagListWidget.ModioTagListWidget_C
class UModioTagListWidget_C : public UModioTagListWidgetBase
{
public:
	class UModioInputBindingImage*               ModioInputBindingImage;                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioInputBindingImage*               ModioInputBindingImage_25;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioSelectableTagWidget_C*           ModioSelectableTagWidget;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioTagSelectorWidget_C*             ModioTagSelectorWidget;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UModioTagSelectorWidget_C*             ModioTagSelectorWidget_127;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UModioTagListWidget_C* GetDefaultObj();

	enum class ESlateVisibility GetVisibility_0(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue);
};

}


