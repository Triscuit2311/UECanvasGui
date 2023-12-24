#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x320 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Transcript_Entry.W_Briefing_Transcript_Entry_C
class UW_Briefing_Transcript_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Div_001;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Dialogue;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SpeakerName;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SpeakerTitle;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Timestamp;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Timestamp;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           W_Button;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SpeakerName;                                       // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Dialogue;                                          // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Timestamp;                                         // 0x2D8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            TranscriptEntryClicked;                            // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        EntryID;                                           // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_38E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SpeakerTitle;                                      // 0x308(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_Briefing_Transcript_Entry_C* GetDefaultObj();

	void Construct();
	void BndEvt__W_Button_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Reveal();
	void SetActive();
	void ExecuteUbergraph_W_Briefing_Transcript_Entry(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1);
	void TranscriptEntryClicked__DelegateSignature(float EntryID);
};

}


