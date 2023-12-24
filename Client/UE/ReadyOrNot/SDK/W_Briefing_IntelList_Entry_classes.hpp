#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C
class UW_Briefing_IntelList_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                              IntelContainer;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           W_Header;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Briefing_Intel_Types            DocumentType;                                      // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3A5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCharacterBio>                 Bios;                                              // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Briefing_Evidence>         Media;                                             // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentColumn;                                     // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentRow;                                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BioIntelClicked;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            MediaIntelClicked;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Briefing_Intel_Entry_C*             CurrentActiveEntry;                                // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_IntelList_Entry_C* GetDefaultObj();

	void ClearActive(bool CallFunc_IsValid_ReturnValue);
	void AddToGrid(class UWidget* Content, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void InitMedia(TArray<struct FST_Briefing_Evidence>& Media, int32 CurrentColumn, int32 CurrentRow, class UW_Briefing_Intel_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FST_Briefing_Evidence& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, uint8 CallFunc_MakeLiteralByte_ReturnValue);
	void InitBios(TArray<struct FCharacterBio>& Bios, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCharacterBio& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Briefing_Intel_Entry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ForceClick(int32 Index);
	void MediaClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media);
	void BioClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio);
	void ExecuteUbergraph_W_Briefing_IntelList_Entry(int32 EntryPoint, enum class E_Briefing_Intel_Types Temp_byte_Variable, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Index, class UW_Briefing_Intel_Entry_C* K2Node_CustomEvent_ClickedEntry_1, const struct FST_Briefing_Evidence& K2Node_CustomEvent_Media, class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_Briefing_Intel_Entry_C* K2Node_DynamicCast_AsW_Briefing_Intel_Entry, bool K2Node_DynamicCast_bSuccess, class UW_Briefing_Intel_Entry_C* K2Node_CustomEvent_ClickedEntry, const struct FCharacterBio& K2Node_CustomEvent_Bio, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_1);
	void MediaIntelClicked__DelegateSignature(const struct FST_Briefing_Evidence& Media);
	void BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio);
};

}


