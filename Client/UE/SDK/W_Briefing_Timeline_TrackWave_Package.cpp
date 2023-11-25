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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Playing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentPlayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::Playing(float CurrentPlayTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31313);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.EventListener
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::EventListener()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31312);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Scrubbed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::Scrubbed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31311);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.paused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::paused()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31310);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Clear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::Clear()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31309);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Restart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::Restart()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31308);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31307);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31306);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundWave*                                  SoundWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::Initialize(class USoundWave* SoundWave, TMap<float, struct FTimelineEvent> EventEntries)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31305);
		
		struct
		{
			class USoundWave*                                  SoundWave;
			TMap<float, struct FTimelineEvent>                 EventEntries;
		} params;
		params.SoundWave = SoundWave;
		params.EventEntries = EventEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.DemoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::DemoMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31304);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.ExecuteUbergraph_W_Briefing_Timeline_TrackWave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::ExecuteUbergraph_W_Briefing_Timeline_TrackWave(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31303);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.TimelineEventEnded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::TimelineEventEnded__DelegateSignature(float EventId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31302);
		
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
	 * 		Name   -> Function W_Briefing_Timeline_TrackWave.W_Briefing_Timeline_TrackWave_C.TimelineEventFired__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EventId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Timeline_TrackWave_C::TimelineEventFired__DelegateSignature(float EventId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31301);
		
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
	 * 		Name   -> PredefinedFunction UW_Briefing_Timeline_TrackWave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_Timeline_TrackWave_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31300);
		return ptr;
	}

}


