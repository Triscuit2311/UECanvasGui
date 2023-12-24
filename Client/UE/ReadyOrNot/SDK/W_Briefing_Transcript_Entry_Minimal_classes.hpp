#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Transcript_Entry_Minimal.W_Briefing_Transcript_Entry_Minimal_C
class UW_Briefing_Transcript_Entry_Minimal_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Dialogue;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Name;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           W_Button;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SpeakerName;                                       // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Dialogue;                                          // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Timestamp;                                         // 0x2B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            TranscriptEntryClicked;                            // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        EntryID;                                           // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_38E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SpeakerTitle;                                      // 0x2E8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_Briefing_Transcript_Entry_Minimal_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Reveal();
	void SetActive();
	void ExecuteUbergraph_W_Briefing_Transcript_Entry_Minimal(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void TranscriptEntryClicked__DelegateSignature(float EntryID);
};

}


