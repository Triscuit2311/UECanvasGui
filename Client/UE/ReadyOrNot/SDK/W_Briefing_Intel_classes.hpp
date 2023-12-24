#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x304 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_Intel.W_Briefing_Intel_C
class UW_Briefing_Intel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Briefing_IntelList_Entry_C*         CivilianIntelList;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_IntelList_Entry_C*         MediaIntelList;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_IntelList_Entry_C*         SuspectIntelList;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_DocumentationLists;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Dossier_C*                 W_Briefing_Dossier;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           W_Header;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_Briefing_Intel                    IntelPlaceholder;                                  // 0x298(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bHasSuspects;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasCivilians;                                     // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasMedia;                                         // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3972[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterBio>                 MissionSuspects;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FCharacterBio>                 MissionCivilians;                                  // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Briefing_Evidence>         MissionMedia;                                      // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Spacing;                                           // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Intel_C* GetDefaultObj();

	void InitMedia(TArray<struct FST_Briefing_Evidence>& MediaIntel, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitCivilians(TArray<struct FCharacterBio>& CivilianBios, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitSuspects(TArray<struct FCharacterBio>& SuspectBios, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateBioIntel(const struct FCharacterBio& Bio);
	void UpdateMediaIntel(const struct FST_Briefing_Evidence& Media);
	void AddToList(class UWidget* Content, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void CreateLists(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_Briefing_IntelList_Entry_C* CallFunc_Create_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Initialize(const struct FST_Briefing_Intel& Intel);
	void BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio);
	void BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio);
	void ExecuteUbergraph_W_Briefing_Intel(int32 EntryPoint, const struct FST_Briefing_Intel& K2Node_CustomEvent_Intel, bool K2Node_Event_IsDesignTime, const struct FCharacterBio& K2Node_ComponentBoundEvent_Bio_1, const struct FCharacterBio& K2Node_ComponentBoundEvent_Bio);
};

}


