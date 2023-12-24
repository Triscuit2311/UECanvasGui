#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2C0 - 0x2B0)
// WidgetBlueprintGeneratedClass W_SubtitlesOverlay.W_SubtitlesOverlay_C
class UW_SubtitlesOverlay_C : public USubtitlesWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             SubtitleScaleBox;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SubtitlesOverlay_C* GetDefaultObj();

	void SetSubtitlesSize(enum class ESubtitlesSize Size);
	void ExecuteUbergraph_W_SubtitlesOverlay(int32 EntryPoint, enum class ESubtitlesSize K2Node_Event_Size, enum class ESubtitlesSize Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default);
};

}


