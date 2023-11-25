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
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapIdentityError                            ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMagicLeapIdentityAttribute>         AttributeValue                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5470);
		
		struct
		{
			EMagicLeapIdentityError                            ResultCode;
			unsigned char                                      UnknownData_0000[0x7];
			TArray<struct FMagicLeapIdentityAttribute>         AttributeValue;
		} params;
		params.ResultCode = ResultCode;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapIdentityKey>                      RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapIdentityError                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey> RequestedAttributeList, const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5469);
		
		struct
		{
			TArray<EMagicLeapIdentityKey>                      RequestedAttributeList;
			class FScriptDelegate                              ResultDelegate;
			EMagicLeapIdentityError                            ReturnValue;
		} params;
		params.RequestedAttributeList = RequestedAttributeList;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapIdentityKey>                      RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapIdentityError                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5467);
		
		struct
		{
			TArray<EMagicLeapIdentityKey>                      RequestedAttributeList;
			TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues;
			EMagicLeapIdentityError                            ReturnValue;
		} params;
		params.RequestedAttributeList = RequestedAttributeList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RequestedAttributeValues != nullptr)
			*RequestedAttributeValues = params.RequestedAttributeValues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapIdentityError                            ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EMagicLeapIdentityKey>                      AttributesUpdatedSuccessfully                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5466);
		
		struct
		{
			EMagicLeapIdentityError                            ResultCode;
			unsigned char                                      UnknownData_0001[0x7];
			TArray<EMagicLeapIdentityKey>                      AttributesUpdatedSuccessfully;
		} params;
		params.ResultCode = ResultCode;
		params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const class FScriptDelegate& ResultDelegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5465);
		
		struct
		{
			class FScriptDelegate                              ResultDelegate;
		} params;
		params.ResultDelegate = ResultDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapIdentityKey>                      AvailableAttributes                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapIdentityError                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>* AvailableAttributes)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5464);
		
		struct
		{
			TArray<EMagicLeapIdentityKey>                      AvailableAttributes;
			EMagicLeapIdentityError                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableAttributes != nullptr)
			*AvailableAttributes = params.AvailableAttributes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapIdentityError                            ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EMagicLeapIdentityKey>                      AvailableAttributes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AvailableAttributes)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5461);
		
		struct
		{
			EMagicLeapIdentityError                            ResultCode;
			unsigned char                                      UnknownData_0002[0x7];
			TArray<EMagicLeapIdentityKey>                      AvailableAttributes;
		} params;
		params.ResultCode = ResultCode;
		params.AvailableAttributes = AvailableAttributes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapIdentity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapIdentity::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(750);
		return ptr;
	}

}


