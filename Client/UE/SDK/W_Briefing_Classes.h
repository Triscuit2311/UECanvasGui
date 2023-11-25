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
	 * WidgetBlueprintGeneratedClass W_Briefing.W_Briefing_C
	 * Size -> 0x07C8 (FullSize[0x0A98] - InheritedSize[0x02D0])
	 */
	class UW_Briefing_C : public UBriefingWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animHide;                                                // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      Fade;                                                    // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Briefing_Audio_C*                                   Audio;                                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Briefing_Intel_C*                                   Intel;                                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Briefing_Objectives_C*                              Objectives;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPreMissionPlanning*                                   PreMissionPlanning;                                      // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_BriefingTaskButton_C*>                       BriefingTaskButtons;                                     // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FST_Briefing_Evidence>                         DocumentsPlaceholder;                                    // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLevelDataLookupTable                                 LevelData;                                               // 0x0328(0x0770) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetObjectives(TArray<TSoftClassPtr<class AObjective>>* Objectives, TArray<TSoftClassPtr<class UChallenge>>* Challenges);
		void GetBriefingAudio(TArray<struct FMissionAudio>* Audio, TArray<struct FTimelineEvent>* TimelineEvents);
		void Original();
		void SetBriefingTaskButtonsActive(bool Active);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void Hide();
		void Reveal();
		void ExecuteUbergraph_W_Briefing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
