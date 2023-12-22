#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapIdentity.MagicLeapIdentity
// (None)

class UClass* UMagicLeapIdentity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapIdentity");

	return Clss;
}


// MagicLeapIdentity MagicLeapIdentity.Default__MagicLeapIdentity
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapIdentity* UMagicLeapIdentity::GetDefaultObj()
{
	static class UMagicLeapIdentity* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapIdentity*>(UMagicLeapIdentity::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// enum class EMagicLeapIdentityError ResultCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapIdentityAttribute>AttributeValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute>& AttributeValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "RequestIdentityAttributeValueDelegate__DelegateSignature");

	Params::UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params Parms{};

	Parms.ResultCode = ResultCode;
	Parms.AttributeValue = AttributeValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapIdentityKey>RequestedAttributeList                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapIdentityError ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<enum class EMagicLeapIdentityKey>& RequestedAttributeList, FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "RequestAttributeValueAsync");

	Params::UMagicLeapIdentity_RequestAttributeValueAsync_Params Parms{};

	Parms.RequestedAttributeList = RequestedAttributeList;
	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapIdentityKey>RequestedAttributeList                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMagicLeapIdentityAttribute>RequestedAttributeValues                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapIdentityError ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<enum class EMagicLeapIdentityKey>& RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "RequestAttributeValue");

	Params::UMagicLeapIdentity_RequestAttributeValue_Params Parms{};

	Parms.RequestedAttributeList = RequestedAttributeList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RequestedAttributeValues != nullptr)
		*RequestedAttributeValues = std::move(Parms.RequestedAttributeValues);

	return Parms.ReturnValue;

}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// enum class EMagicLeapIdentityError ResultCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EMagicLeapIdentityKey>AttributesUpdatedSuccessfully                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey>& AttributesUpdatedSuccessfully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "ModifyIdentityAttributeValueDelegate__DelegateSignature");

	Params::UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params Parms{};

	Parms.ResultCode = ResultCode;
	Parms.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMagicLeapIdentity::GetAllAvailableAttributesAsync(FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "GetAllAvailableAttributesAsync");

	Params::UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params Parms{};

	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapIdentityKey>AvailableAttributes                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapIdentityError ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<enum class EMagicLeapIdentityKey>* AvailableAttributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "GetAllAvailableAttributes");

	Params::UMagicLeapIdentity_GetAllAvailableAttributes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AvailableAttributes != nullptr)
		*AvailableAttributes = std::move(Parms.AvailableAttributes);

	return Parms.ReturnValue;

}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// enum class EMagicLeapIdentityError ResultCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EMagicLeapIdentityKey>AvailableAttributes                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey>& AvailableAttributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapIdentity", "AvailableIdentityAttributesDelegate__DelegateSignature");

	Params::UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params Parms{};

	Parms.ResultCode = ResultCode;
	Parms.AvailableAttributes = AvailableAttributes;

	UObject::ProcessEvent(Func, &Parms);

}

}


