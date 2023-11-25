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
	 * 		Name   -> Function Library_UI_BriefingFunctions.Library_UI_BriefingFunctions_C.GetTimelineEventTestData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundWave*                                  AudioAsset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FTimelineEvent>                      Events                                                     (Parm, OutParm)
	 * 		TMap<float, struct FTimelineEvent>                 EventEntries                                               (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void ULibrary_UI_BriefingFunctions_C::GetTimelineEventTestData(class UObject* __WorldContext, class USoundWave** AudioAsset, TArray<struct FTimelineEvent>* Events, TMap<float, struct FTimelineEvent>* EventEntries)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31358);
		
		struct
		{
			class UObject*                                     __WorldContext;
			class USoundWave*                                  AudioAsset;
			TArray<struct FTimelineEvent>                      Events;
			TMap<float, struct FTimelineEvent>                 EventEntries;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AudioAsset != nullptr)
			*AudioAsset = params.AudioAsset;
		if (Events != nullptr)
			*Events = params.Events;
		if (EventEntries != nullptr)
			*EventEntries = params.EventEntries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibrary_UI_BriefingFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULibrary_UI_BriefingFunctions_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31357);
		return ptr;
	}

}


