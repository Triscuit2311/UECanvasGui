#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass W_Briefing_IntelList_Entry.W_Briefing_IntelList_Entry_C
	 * Size -> 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
	 */
	class UW_Briefing_IntelList_Entry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWrapBox*                                              IntelContainer;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           W_Header;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_Briefing_Intel_Types                                       DocumentType;                                            // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterBio>                                 Bios;                                                    // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FST_Briefing_Evidence>                         Media;                                                   // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                      CurrentColumn;                                           // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      CurrentRow;                                              // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMulticastInlineDelegate                               BioIntelClicked;                                         // 0x02A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x02A9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               MediaIntelClicked;                                       // 0x02B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x02B9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UW_Briefing_Intel_Entry_C*                             CurrentActiveEntry;                                      // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearActive();
		void AddToGrid(class UWidget* Content);
		void InitMedia(TArray<struct FST_Briefing_Evidence>* Media);
		void InitBios(TArray<struct FCharacterBio>* Bios);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ForceClick(int32_t Index);
		void MediaClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FST_Briefing_Evidence& Media);
		void BioClicked(class UW_Briefing_Intel_Entry_C* ClickedEntry, const struct FCharacterBio& Bio);
		void ExecuteUbergraph_W_Briefing_IntelList_Entry(int32_t EntryPoint);
		void MediaIntelClicked__DelegateSignature(const struct FST_Briefing_Evidence& Media);
		void BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
