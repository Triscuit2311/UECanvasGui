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
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotGameState*                        gs                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UChallenge_ArrestSomeone_C::OnChallengeInit(class AReadyOrNotGameState* gs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88534);
		
		struct
		{
			class AReadyOrNotGameState*                        gs;
		} params;
		params.gs = gs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnCharacterArrested
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AReadyOrNotCharacter*                        ArrestedCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Arrester                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UChallenge_ArrestSomeone_C::OnCharacterArrested(class AReadyOrNotCharacter* ArrestedCharacter, class AReadyOrNotCharacter* Arrester)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88533);
		
		struct
		{
			class AReadyOrNotCharacter*                        ArrestedCharacter;
			class AReadyOrNotCharacter*                        Arrester;
		} params;
		params.ArrestedCharacter = ArrestedCharacter;
		params.Arrester = Arrester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.OnChallengeAchieved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UChallenge_ArrestSomeone_C::OnChallengeAchieved()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88532);
		
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
	 * 		Name   -> Function Challenge_ArrestSomeone.Challenge_ArrestSomeone_C.ExecuteUbergraph_Challenge_ArrestSomeone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UChallenge_ArrestSomeone_C::ExecuteUbergraph_Challenge_ArrestSomeone(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88531);
		
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
	 * 		Name   -> PredefinedFunction UChallenge_ArrestSomeone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UChallenge_ArrestSomeone_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88530);
		return ptr;
	}

}


