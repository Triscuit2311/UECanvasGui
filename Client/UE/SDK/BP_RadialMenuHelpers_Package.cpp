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
	 * 		Name   -> Function BP_RadialMenuHelpers.BP_RadialMenuHelpers_C.CenterMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBP_RadialMenuHelpers_C::CenterMousePosition(int32_t PlayerIndex, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30756);
		
		struct
		{
			int32_t                                            PlayerIndex;
			unsigned char                                      UnknownData_0000[0x4];
			class UObject*                                     __WorldContext;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RadialMenuHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBP_RadialMenuHelpers_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30755);
		return ptr;
	}

}


