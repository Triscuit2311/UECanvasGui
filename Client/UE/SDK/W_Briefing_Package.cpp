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
	 * 		Name   -> Function W_Briefing.W_Briefing_C.GetObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<TSoftClassPtr<class AObjective>>            Objectives                                                 (Parm, OutParm)
	 * 		TArray<TSoftClassPtr<class UChallenge>>            Challenges                                                 (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::GetObjectives(TArray<TSoftClassPtr<class AObjective>>* Objectives, TArray<TSoftClassPtr<class UChallenge>>* Challenges)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39710);
		
		struct
		{
			TArray<TSoftClassPtr<class AObjective>>            Objectives;
			TArray<TSoftClassPtr<class UChallenge>>            Challenges;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Objectives != nullptr)
			*Objectives = params.Objectives;
		if (Challenges != nullptr)
			*Challenges = params.Challenges;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing.W_Briefing_C.GetBriefingAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMissionAudio>                       Audio                                                      (Parm, OutParm)
	 * 		TArray<struct FTimelineEvent>                      TimelineEvents                                             (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::GetBriefingAudio(TArray<struct FMissionAudio>* Audio, TArray<struct FTimelineEvent>* TimelineEvents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39709);
		
		struct
		{
			TArray<struct FMissionAudio>                       Audio;
			TArray<struct FTimelineEvent>                      TimelineEvents;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio != nullptr)
			*Audio = params.Audio;
		if (TimelineEvents != nullptr)
			*TimelineEvents = params.TimelineEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing.W_Briefing_C.Original
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::Original()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39708);
		
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
	 * 		Name   -> Function W_Briefing.W_Briefing_C.SetBriefingTaskButtonsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::SetBriefingTaskButtonsActive(bool Active)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39707);
		
		struct
		{
			bool                                               Active;
		} params;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing.W_Briefing_C.OnMouseButtonDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
	 */
	struct FEventReply UW_Briefing_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39706);
		
		struct
		{
			struct FGeometry                                   InMyGeometry;
			struct FPointerEvent                               InMouseEvent;
			struct FEventReply                                 ReturnValue;
		} params;
		params.InMyGeometry = InMyGeometry;
		params.InMouseEvent = InMouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing.W_Briefing_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39705);
		
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
	 * 		Name   -> Function W_Briefing.W_Briefing_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39704);
		
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
	 * 		Name   -> Function W_Briefing.W_Briefing_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::Hide()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39703);
		
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
	 * 		Name   -> Function W_Briefing.W_Briefing_C.Reveal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::Reveal()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39702);
		
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
	 * 		Name   -> Function W_Briefing.W_Briefing_C.ExecuteUbergraph_W_Briefing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_C::ExecuteUbergraph_W_Briefing(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(39701);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(39700);
		return ptr;
	}

}


