/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::SequenceEvent__ENTRYPOINTW_MissionEnd_Rating_Progress_1()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88625);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdateSound()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88624);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.SetDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DebugText1                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DebugText2                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        DebugText3                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::SetDebug(const class FText& DebugText1, const class FText& DebugText2, const class FText& DebugText3)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88623);
		
		struct
		{
			class FText                                        DebugText1;
			class FText                                        DebugText2;
			class FText                                        DebugText3;
		} params;
		params.DebugText1 = DebugText1;
		params.DebugText2 = DebugText2;
		params.DebugText3 = DebugText3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.AddToScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::AddToScore()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88622);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateProgressMeter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdateProgressMeter(int32_t CurrentScore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88621);
		
		struct
		{
			int32_t                                            CurrentScore;
		} params;
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.gradeSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::gradeSound()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88620);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88619);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88618);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88617);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdateScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScoreGroup                                 ScoreData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdateScore(const struct FScoreGroup& ScoreData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88616);
		
		struct
		{
			struct FScoreGroup                                 ScoreData;
		} params;
		params.ScoreData = ScoreData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.UpdatePenalty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FScorePenaltyData                           PenaltyData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::UpdatePenalty(const struct FScorePenaltyData& PenaltyData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88615);
		
		struct
		{
			struct FScorePenaltyData                           PenaltyData;
		} params;
		params.PenaltyData = PenaltyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.RevealGrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::RevealGrade(const class FString& Grade)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88614);
		
		struct
		{
			class FString                                      Grade;
		} params;
		params.Grade = Grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.Destruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::Destruct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88613);
		
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
	 * 		Name   -> Function W_MissionEnd_Rating_Progress.W_MissionEnd_Rating_Progress_C.ExecuteUbergraph_W_MissionEnd_Rating_Progress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MissionEnd_Rating_Progress_C::ExecuteUbergraph_W_MissionEnd_Rating_Progress(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88612);
		
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
	 * 		Name   -> PredefinedFunction UW_MissionEnd_Rating_Progress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_MissionEnd_Rating_Progress_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88611);
		return ptr;
	}

}


