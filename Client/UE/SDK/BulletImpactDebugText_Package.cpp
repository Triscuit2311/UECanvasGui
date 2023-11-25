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
	 * 		Name   -> Function BulletImpactDebugText.BulletImpactDebugText_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UBulletImpactDebugText_C::SetData(int32_t ID, const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(88996);
		
		struct
		{
			int32_t                                            ID;
			unsigned char                                      UnknownData_0000[0x4];
			class FText                                        Text;
		} params;
		params.ID = ID;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBulletImpactDebugText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBulletImpactDebugText_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88995);
		return ptr;
	}

}


