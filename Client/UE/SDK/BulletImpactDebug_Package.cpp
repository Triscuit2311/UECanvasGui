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
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.AddDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBulletImpactDebug_C::AddDebugText(const class FString& NewText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89098);
		
		struct
		{
			class FString                                      NewText;
			int32_t                                            ReturnValue;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.SetDebugTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewTitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBulletImpactDebug_C::SetDebugTitle(const class FString& NewTitle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89097);
		
		struct
		{
			class FString                                      NewTitle;
		} params;
		params.NewTitle = NewTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.SetDebugText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBulletImpactDebug_C::SetDebugText(int32_t ID, const class FString& NewText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89096);
		
		struct
		{
			int32_t                                            ID;
			unsigned char                                      UnknownData_0001[0x4];
			class FString                                      NewText;
		} params;
		params.ID = ID;
		params.NewText = NewText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BulletImpactDebug.BulletImpactDebug_C.ExecuteUbergraph_BulletImpactDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UBulletImpactDebug_C::ExecuteUbergraph_BulletImpactDebug(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89095);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBulletImpactDebug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UBulletImpactDebug_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89094);
		return ptr;
	}

}


