#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
// (None)

class UClass* UMagicLeapPrivilegesFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapPrivilegesFunctionLibrary");

	return Clss;
}


// MagicLeapPrivilegesFunctionLibrary MagicLeapPrivileges.Default__MagicLeapPrivilegesFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapPrivilegesFunctionLibrary* UMagicLeapPrivilegesFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapPrivilegesFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapPrivilegesFunctionLibrary*>(UMagicLeapPrivilegesFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilegeAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EMagicLeapPrivilege     Privilege                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 ResultDelegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilegeAsync(enum class EMagicLeapPrivilege Privilege, FDelegateProperty_& ResultDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPrivilegesFunctionLibrary", "RequestPrivilegeAsync");

	Params::UMagicLeapPrivilegesFunctionLibrary_RequestPrivilegeAsync_Params Parms{};

	Parms.Privilege = Privilege;
	Parms.ResultDelegate = ResultDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.RequestPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapPrivilege     Privilege                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPrivilegesFunctionLibrary::RequestPrivilege(enum class EMagicLeapPrivilege Privilege)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPrivilegesFunctionLibrary", "RequestPrivilege");

	Params::UMagicLeapPrivilegesFunctionLibrary_RequestPrivilege_Params Parms{};

	Parms.Privilege = Privilege;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary.CheckPrivilege
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapPrivilege     Privilege                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapPrivilegesFunctionLibrary::CheckPrivilege(enum class EMagicLeapPrivilege Privilege)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapPrivilegesFunctionLibrary", "CheckPrivilege");

	Params::UMagicLeapPrivilegesFunctionLibrary_CheckPrivilege_Params Parms{};

	Parms.Privilege = Privilege;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


