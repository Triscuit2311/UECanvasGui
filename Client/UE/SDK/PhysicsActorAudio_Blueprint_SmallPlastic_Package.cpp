﻿/**
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
	 * 		Name   -> PredefinedFunction APhysicsActorAudio_Blueprint_SmallPlastic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APhysicsActorAudio_Blueprint_SmallPlastic_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(128401);
		return ptr;
	}

}

