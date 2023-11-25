/**
 * Name: ReadyOrNot
 * Version: 2
 */

#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88595);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88594);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddScores
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FScoreGroup>                         Scores                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AddScores(TArray<struct FScoreGroup> Scores)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88593);
		
		struct
		{
			TArray<struct FScoreGroup>                         Scores;
		} params;
		params.Scores = Scores;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::NextScore()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88592);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddToProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_MissionEnd_RatingScoreEntry_C*            EntryWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AddToProgress(class UW_MissionEnd_RatingScoreEntry_C* EntryWidget, int32_t Score)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88591);
		
		struct
		{
			class UW_MissionEnd_RatingScoreEntry_C*            EntryWidget;
			int32_t                                            Score;
		} params;
		params.EntryWidget = EntryWidget;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AddPenalties
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FScorePenaltyData>                   Scores                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AddPenalties(TArray<struct FScorePenaltyData> Scores)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88590);
		
		struct
		{
			TArray<struct FScorePenaltyData>                   Scores;
		} params;
		params.Scores = Scores;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.NextPenalty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::NextPenalty()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88589);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.PenalizeProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_MissionEnd_RatingScoreEntry_C*            EntryWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::PenalizeProgress(class UW_MissionEnd_RatingScoreEntry_C* EntryWidget, int32_t Score)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88588);
		
		struct
		{
			class UW_MissionEnd_RatingScoreEntry_C*            EntryWidget;
			int32_t                                            Score;
		} params;
		params.EntryWidget = EntryWidget;
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::ExecuteUbergraph_W_MissionEnd_Rating_ScorePanel(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88587);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllPenaltiesAdded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AllPenaltiesAdded__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88586);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_ScorePanel.W_MissionEnd_Rating_ScorePanel_C.AllScoresAdded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_ScorePanel_C::AllScoresAdded__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88585);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MissionEnd_Rating_ScorePanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_MissionEnd_Rating_ScorePanel_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88584);
		return ptr;
	}

}


