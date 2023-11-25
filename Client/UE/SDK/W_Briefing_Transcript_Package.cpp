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
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.HighlightEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EntryID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::HighlightEntry(float EntryID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54771);
		
		struct
		{
			float                                              EntryID;
		} params;
		params.EntryID = EntryID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.Playing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentPlayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::Playing(float CurrentPlayTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54770);
		
		struct
		{
			float                                              CurrentPlayTime;
		} params;
		params.CurrentPlayTime = CurrentPlayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54769);
		
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
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTranscript>                         TranscriptEvents                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::Initialize(TArray<struct FTranscript> TranscriptEvents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54768);
		
		struct
		{
			TArray<struct FTranscript>                         TranscriptEvents;
		} params;
		params.TranscriptEvents = TranscriptEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.OnTranscriptEntryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EntryID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::OnTranscriptEntryClicked(float EntryID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54767);
		
		struct
		{
			float                                              EntryID;
		} params;
		params.EntryID = EntryID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.ExecuteUbergraph_W_Briefing_Transcript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::ExecuteUbergraph_W_Briefing_Transcript(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54766);
		
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
	 * 		Name   -> Function W_Briefing_Transcript.W_Briefing_Transcript_C.TranscriptClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ClipStartTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Transcript_C::TranscriptClicked__DelegateSignature(float ClipStartTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54765);
		
		struct
		{
			float                                              ClipStartTime;
		} params;
		params.ClipStartTime = ClipStartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Transcript_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_Transcript_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54764);
		return ptr;
	}

}


