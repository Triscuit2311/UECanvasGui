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
	 * 		Name   -> Function BP_QuakeColorCodes.BP_QuakeColorCodes_C.Quake_ConvertColorCodes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StrIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      StrOut                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBP_QuakeColorCodes_C::Quake_ConvertColorCodes(const class FString& StrIn, class UObject* __WorldContext, class FString* StrOut)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30483);
		
		struct
		{
			class FString                                      StrIn;
			class UObject*                                     __WorldContext;
			class FString                                      StrOut;
		} params;
		params.StrIn = StrIn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StrOut != nullptr)
			*StrOut = params.StrOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_QuakeColorCodes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBP_QuakeColorCodes_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30482);
		return ptr;
	}

}


