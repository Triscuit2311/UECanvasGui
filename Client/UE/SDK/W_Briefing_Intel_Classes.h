#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * WidgetBlueprintGeneratedClass W_Briefing_Intel.W_Briefing_Intel_C
	 * Size -> 0x00A4 (FullSize[0x0304] - InheritedSize[0x0260])
	 */
	class UW_Briefing_Intel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UW_Briefing_IntelList_Entry_C*                         CivilianIntelList;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Briefing_IntelList_Entry_C*                         MediaIntelList;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Briefing_IntelList_Entry_C*                         SuspectIntelList;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_DocumentationLists;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Briefing_Dossier_C*                                 W_Briefing_Dossier;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           W_Header;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FST_Briefing_Intel                                    IntelPlaceholder;                                        // 0x0298(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                         bHasSuspects;                                            // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHasCivilians;                                           // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bHasMedia;                                               // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharacterBio>                                 MissionSuspects;                                         // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCharacterBio>                                 MissionCivilians;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FST_Briefing_Evidence>                         MissionMedia;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                        Spacing;                                                 // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitMedia(TArray<struct FST_Briefing_Evidence>* MediaIntel);
		void InitCivilians(TArray<struct FCharacterBio>* CivilianBios);
		void InitSuspects(TArray<struct FCharacterBio>* SuspectBios);
		void UpdateBioIntel(const struct FCharacterBio& Bio);
		void UpdateMediaIntel(const struct FST_Briefing_Evidence& Media);
		void AddToList(class UWidget* Content);
		void CreateLists();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Initialize(const struct FST_Briefing_Intel& Intel);
		void BndEvt__SuspectIntelList_K2Node_ComponentBoundEvent_0_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio);
		void BndEvt__CivilianIntelList_K2Node_ComponentBoundEvent_1_BioIntelClicked__DelegateSignature(const struct FCharacterBio& Bio);
		void ExecuteUbergraph_W_Briefing_Intel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
