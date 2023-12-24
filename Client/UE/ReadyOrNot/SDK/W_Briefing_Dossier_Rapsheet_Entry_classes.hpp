#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Dossier_Rapsheet_Entry.W_Briefing_Dossier_Rapsheet_Entry_C
class UW_Briefing_Dossier_Rapsheet_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CrimeCode;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CrimeDate;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_CrimeName;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  CrimeNameText;                                     // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                CrimeCode;                                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CrimeCodeTableID;                                  // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCriminalRecord                       Crime;                                             // 0x2B8(0x38)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                CrimeDate;                                         // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Dossier_Rapsheet_Entry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Reveal();
	void Hide();
	void ExecuteUbergraph_W_Briefing_Dossier_Rapsheet_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue);
};

}


