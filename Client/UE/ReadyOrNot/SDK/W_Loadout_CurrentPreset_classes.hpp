#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass W_Loadout_CurrentPreset.W_Loadout_CurrentPreset_C
class UW_Loadout_CurrentPreset_C : public UUserWidget
{
public:
	class UCommonTextBlock*                      Txt_PresetName;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_CurrentPreset_C* GetDefaultObj();

	void SetPresetName(class FText Name);
};

}


