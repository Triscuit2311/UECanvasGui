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
	 * 		Name   -> Function IRadialInput.IRadialInput_C.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickTypes                                     Stick                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                      StickInput                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void IIRadialInput_C::GetJoystickDirection(EJoystickTypes Stick, struct FVector2D* StickInput)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(54196);
		
		struct
		{
			EJoystickTypes                                     Stick;
			unsigned char                                      UnknownData_0000[0x3];
			struct FVector2D                      StickInput;
		} params;
		params.Stick = Stick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StickInput != nullptr)
			*StickInput = params.StickInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IIRadialInput_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IIRadialInput_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(54195);
		return ptr;
	}

}


