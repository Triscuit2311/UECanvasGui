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
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Finished_CEF1E049428EE21AB58B96A8441038EA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_TimelineEvents_C::Finished_CEF1E049428EE21AB58B96A8441038EA()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31409);
		
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
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_TimelineEvents_C::Initialize(TMap<float, struct FTimelineEvent> EventEntries)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31408);
		
		struct
		{
			TMap<float, struct FTimelineEvent>                 EventEntries;
		} params;
		params.EventEntries = EventEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.AddEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_TimelineEvents_C::AddEvent(float EventId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31407);
		
		struct
		{
			float                                              EventId;
		} params;
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.EventClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventAudioStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EventAudioDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_TimelineEvents_C::EventClicked(float EventAudioStart, float EventAudioDuration)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31406);
		
		struct
		{
			float                                              EventAudioStart;
			float                                              EventAudioDuration;
		} params;
		params.EventAudioStart = EventAudioStart;
		params.EventAudioDuration = EventAudioDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.ExecuteUbergraph_W_Briefing_TimelineEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_TimelineEvents_C::ExecuteUbergraph_W_Briefing_TimelineEvents(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31405);
		
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
	 * 		Name   -> Function W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C.OnEventClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventAudioStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EventAudioDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_TimelineEvents_C::OnEventClicked__DelegateSignature(float EventAudioStart, float EventAudioDuration)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31404);
		
		struct
		{
			float                                              EventAudioStart;
			float                                              EventAudioDuration;
		} params;
		params.EventAudioStart = EventAudioStart;
		params.EventAudioDuration = EventAudioDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_TimelineEvents_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_TimelineEvents_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31403);
		return ptr;
	}

}


