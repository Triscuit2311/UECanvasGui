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
	 * WidgetBlueprintGeneratedClass W_PVP_RoundEnd.W_PVP_RoundEnd_C
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class UW_PVP_RoundEnd_C : public URoundEndWidget_PVP
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                          Master_Container;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          MLO_Container;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            MLO_Label_Text;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            MLO_Score_Text;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                PVP_Ribbon_TeamColor;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            RoundStatus_Text;                                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            RoundTagline_Text;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        ScoreInfo_Container;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          SWAT_Container;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            SWAT_Label_Text;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                            SWAT_Score_Text;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_4();
		void SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_3();
		void SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_2();
		void SequenceEvent__ENTRYPOINTW_PVP_RoundEnd_1();
		void GetWinningTaglineText(class FText* ReturnValue);
		void GetMLOScore(int32_t* ReturnValue);
		void GetSWATScore(int32_t* ReturnValue);
		void GetRoundWinningTeamText(class FText* ReturnValue);
		void GetLosingTeamRibbonColor(struct FLinearColor* ReturnValue);
		void GetLosingTeamTextColor(struct FSlateColor* ReturnValue);
		void GetWinningTeamRibbonColor(struct FLinearColor* ReturnValue);
		void GetWinningTeamTextColor(struct FSlateColor* ReturnValue);
		void UpdateRoundColors();
		void UpdateSWATScore();
		void UpdateMLOScore();
		void UpdateRoundTagline();
		void Construct();
		void OnWinsUpdated_Event_1();
		void ExecuteUbergraph_W_PVP_RoundEnd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
