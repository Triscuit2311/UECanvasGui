#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x164 (0x3EC - 0x288)
// WidgetBlueprintGeneratedClass W_LoadoutInformationElement.W_LoadoutInformationElement_C
class UW_LoadoutInformationElement_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Type;                                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  AttachmentName;                                    // 0x2A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AttachmentType;                                    // 0x2C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EffectsName;                                       // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  EffectsType;                                       // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          BorderColorAttachment;                             // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BorderColorEffects;                                // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           TypeTextColorAttachment;                           // 0x328(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TypeTextColorEffects;                              // 0x350(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TypeTextColorEffectsPos;                           // 0x378(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TypeTextColorEffectsNeg;                           // 0x3A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsEffect;                                         // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2044[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BorderColorEffectsPos;                             // 0x3CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BorderColorEffectsNeg;                             // 0x3DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_LoadoutInformationElement_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_LoadoutInformationElement(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


