#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A8 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_Preset_Preview_SubItem.W_Loadout_Preset_Preview_SubItem_C
class UW_Loadout_Preset_Preview_SubItem_C : public UUserWidget
{
public:
	class UCommonBorder*                         SubItem;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Name;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Subtext;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Subtext;                                           // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_Loadout_Preset_Preview_SubItem_C* GetDefaultObj();

};

}


