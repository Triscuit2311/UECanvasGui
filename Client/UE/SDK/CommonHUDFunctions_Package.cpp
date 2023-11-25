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
	 * 		Name   -> Function CommonHUDFunctions.CommonHUDFunctions_C.CenterPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerCharacter*                            Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  CenterprintText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGameStateBase*                              GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UCommonHUDFunctions_C::CenterPrint(const class FName& MessageType, class APlayerCharacter* Other, class UTextBlock* CenterprintText, class AGameStateBase* GameState, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88393);
		
		struct
		{
			class FName                                        MessageType;
			class APlayerCharacter*                            Other;
			class UTextBlock*                                  CenterprintText;
			class AGameStateBase*                              GameState;
			class UObject*                                     __WorldContext;
		} params;
		params.MessageType = MessageType;
		params.Other = Other;
		params.CenterprintText = CenterprintText;
		params.GameState = GameState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonHUDFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCommonHUDFunctions_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88392);
		return ptr;
	}

}


