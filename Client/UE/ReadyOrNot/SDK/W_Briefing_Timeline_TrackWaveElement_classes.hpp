#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x294 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWaveElement.W_Briefing_Timeline_TrackWaveElement_C
class UW_Briefing_Timeline_TrackWaveElement_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_WaveLine;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_cap;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_line;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Line;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Wavelength;                                        // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsTimelineEvent;                                  // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_38B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Spacing;                                           // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Timeline_TrackWaveElement_C* GetDefaultObj();

	void SetStyle(bool IsTimelineEvent);
	void SetWaveLength(float Length, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement(int32 EntryPoint, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
};

}


