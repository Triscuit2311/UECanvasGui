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
	 * 		Name   -> Function W_MinimizedBriefing.W_MinimizedBriefing_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_MinimizedBriefing_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54762);
		
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
	 * 		Name   -> Function W_MinimizedBriefing.W_MinimizedBriefing_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMissionAudio                               MissionAudio                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_MinimizedBriefing_C::Initialize(const struct FMissionAudio& MissionAudio, TMap<float, struct FTimelineEvent> EventEntries)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54761);
		
		struct
		{
			struct FMissionAudio                               MissionAudio;
			TMap<float, struct FTimelineEvent>                 EventEntries;
		} params;
		params.MissionAudio = MissionAudio;
		params.EventEntries = EventEntries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MinimizedBriefing.W_MinimizedBriefing_C.ExecuteUbergraph_W_MinimizedBriefing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_MinimizedBriefing_C::ExecuteUbergraph_W_MinimizedBriefing(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54760);
		
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
	 * 		Name   -> PredefinedFunction UW_MinimizedBriefing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_MinimizedBriefing_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54759);
		return ptr;
	}

}


