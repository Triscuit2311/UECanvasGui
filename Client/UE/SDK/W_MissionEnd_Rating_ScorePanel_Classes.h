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
	 * WidgetBlueprintGeneratedClass W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C
	 * Size -> 0x018C (FullSize[0x03EC] - InheritedSize[0x0260])
	 */
	class UW_MissionEnd_Rating_ScorePanel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                       HeaderSwitcher;                                          // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Minus;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Penalties;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Plus;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_Scores;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            txt_debug;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_Header_Penalties;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_Header_Scores;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_ScoreList;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_MissionEnd_RatingScoreEntry_C*                      W_MissionEnd_RatingScoreEntry;                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_MissionEnd_RatingScoreEntry_C*                      W_MissionEnd_RatingScoreEntry_2;                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                         PenaltyScores;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         ScoresComplete;                                          // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x6];                                   // 0x02C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScoreGroup                                           ScoreGroup;                                              // 0x02C8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UW_MissionEnd_RatingScoreEntry_C*, struct FScoreGroup> ScoreEntries;                                            // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_MissionEnd_Rating_Progress_C*                       RatingProgressMeter;                                     // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TMap<class UW_MissionEnd_RatingScoreEntry_C*, struct FScorePenaltyData> PenaltyEntries;                                          // 0x0358(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FScorePenaltyData                                     PenaltyData;                                             // 0x03A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               AllScoresAdded;                                          // 0x03C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x03C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         PenaltiesComplete;                                       // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0002[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               AllPenaltiesAdded;                                       // 0x03D8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x03D9(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		int32_t                                                      DEBUGCOUNT;                                              // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void AddScores(TArray<struct FScoreGroup> Scores);
		void NextScore();
		void AddToProgress(class UW_MissionEnd_RatingScoreEntry_C* EntryWidget, int32_t Score);
		void AddPenalties(TArray<struct FScorePenaltyData> Scores);
		void NextPenalty();
		void PenalizeProgress(class UW_MissionEnd_RatingScoreEntry_C* EntryWidget, int32_t Score);
		void ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel(int32_t EntryPoint);
		void AllPenaltiesAdded__DelegateSignature();
		void AllScoresAdded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
