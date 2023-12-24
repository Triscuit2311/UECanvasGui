#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Zeuzsdk.ZeuzApiAccount
// (None)

class UClass* UZeuzApiAccount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiAccount");

	return Clss;
}


// ZeuzApiAccount Zeuzsdk.Default__ZeuzApiAccount
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiAccount* UZeuzApiAccount::GetDefaultObj()
{
	static class UZeuzApiAccount* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiAccount*>(UZeuzApiAccount::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountTeamupdateBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamupdateBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamupdateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamupdateBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamupdateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamupdateBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzTeam                   Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamgetBPS__DelegateSignature(const struct FZeuzTeam& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzTeam                   Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamgetBP__DelegateSignature(const struct FZeuzTeam& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountTeamdeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamdeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamdeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamdeleteBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamdeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamdeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamdeleteBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamdeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamcreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamcreateBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamcreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamcreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamcreateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamcreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountTeamcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountTeamcreateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountTeamcreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAccountQuotaInfo       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountQuotasetBPS__DelegateSignature(struct FZeuzAccountQuotaInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountQuotasetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountQuotasetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountQuotasetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountQuotasetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountQuotasetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAccountQuotaInfo       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountQuotasetBP__DelegateSignature(struct FZeuzAccountQuotaInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountQuotasetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountQuotasetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAccountQuotaInfo       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountQuotagetBPS__DelegateSignature(struct FZeuzAccountQuotaInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountQuotagetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountQuotagetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountQuotagetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountQuotagetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountQuotagetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAccountQuotaInfo       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountQuotagetBP__DelegateSignature(struct FZeuzAccountQuotaInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountQuotagetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountQuotagetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountProjectupdateBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectupdateBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectupdateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectupdateBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectupdateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectupdateBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzProj>           Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectsgetBPS__DelegateSignature(TArray<struct FZeuzProj>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectsgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectsgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectsgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectsgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectsgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzProj>           Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectsgetBP__DelegateSignature(TArray<struct FZeuzProj>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectsgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectsgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzProj                   Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectgetBPS__DelegateSignature(const struct FZeuzProj& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzProj                   Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectgetBP__DelegateSignature(const struct FZeuzProj& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountProjectdeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectdeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectdeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectdeleteBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectdeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectdeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectdeleteBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectdeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectcreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectcreateBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectcreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectcreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectcreateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectcreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountProjectcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountProjectcreateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountProjectcreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountEnvupdateBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvupdateBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvupdateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvupdateBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvupdateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvupdateBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzEnv>            Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvsgetBPS__DelegateSignature(TArray<struct FZeuzEnv>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvsgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvsgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvsgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvsgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvsgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzEnv>            Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvsgetBP__DelegateSignature(TArray<struct FZeuzEnv>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvsgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvsgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountEnvserviceupdateBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvserviceupdateBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvserviceupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvserviceupdateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvserviceupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvserviceupdateBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvserviceupdateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvserviceupdateBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountEnvservicedeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvservicedeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvservicedeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvservicedeleteBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvservicedeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvservicedeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvservicedeleteBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvservicedeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzEnv                    Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvgetBPS__DelegateSignature(const struct FZeuzEnv& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzEnv                    Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvgetBP__DelegateSignature(const struct FZeuzEnv& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountEnvdeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvdeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvdeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvdeleteBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvdeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvdeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvdeleteBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvdeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvcreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvcreateBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvcreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvcreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvcreateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvcreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountEnvcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountEnvcreateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountEnvcreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAccountDevQuickSetupOutResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevquicksetupBPS__DelegateSignature(struct FZeuzAccountDevQuickSetupOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevquicksetupBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevquicksetupBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevquicksetupBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevquicksetupBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevquicksetupBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAccountDevQuickSetupOutResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevquicksetupBP__DelegateSignature(struct FZeuzAccountDevQuickSetupOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevquicksetupBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevquicksetupBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountDeveloperupdateBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperupdateBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperupdateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperupdateBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperupdateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperupdateBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzDeveloper>      Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopersgetBPS__DelegateSignature(TArray<struct FZeuzDeveloper>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopersgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopersgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopersgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopersgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopersgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzDeveloper>      Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopersgetBP__DelegateSignature(TArray<struct FZeuzDeveloper>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopersgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopersgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzDeveloper              Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopersetpwhashBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopersetpwhashBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopersetpwhashBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopersetpwhashBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzDeveloper              Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopersetpwhashBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopersetpwhashBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountDeveloperrevokeBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperrevokeBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperrevokeBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperrevokeBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperrevokeBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperrevokeBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperrevokeBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperrevokeBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperpasswordresetBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperpasswordresetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperpasswordresetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature(bool Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperinviteBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperinviteBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperinviteBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperinviteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperinviteBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperinviteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDeveloperinviteBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDeveloperinviteBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDeveloperinviteBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzDeveloper              Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopergetBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopergetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopergetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopergetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopergetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopergetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzDeveloper              Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopergetBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopergetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopergetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzDeveloper              Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopercreatepwhashBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopercreatepwhashBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzDeveloper              Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopercreatepwhashBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopercreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopercreateBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopercreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopercreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopercreateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopercreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountDevelopercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountDevelopercreateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountDevelopercreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAccount::DelegateAccountAccountupdateBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountupdateBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountupdateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountupdateBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountupdateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountupdateBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAccount                Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountgetBPS__DelegateSignature(const struct FZeuzAccount& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountgetBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountgetBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAccount                Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountgetBP__DelegateSignature(const struct FZeuzAccount& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountgetBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountcreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountcreateBPS__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountcreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountcreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountcreateBPF__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountcreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAccount::DelegateAccountAccountcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "DelegateAccountAccountcreateBP__DelegateSignature");

	Params::UZeuzApiAccount_DelegateAccountAccountcreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiAccount.AccountTeamupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzTeam                   In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountTeamupdateBP(const struct FZeuzTeam& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountTeamupdateBP");

	Params::UZeuzApiAccount_AccountTeamupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountTeamgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountTeamgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountTeamgetBP");

	Params::UZeuzApiAccount_AccountTeamgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountTeamdeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountTeamDeleteIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountTeamdeleteBP(struct FZeuzAccountTeamDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountTeamdeleteBP");

	Params::UZeuzApiAccount_AccountTeamdeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountTeamcreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountTeamCreateIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountTeamcreateBP(struct FZeuzAccountTeamCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountTeamcreateBP");

	Params::UZeuzApiAccount_AccountTeamcreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountQuotasetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountQuotaInfo       In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountQuotasetBP(struct FZeuzAccountQuotaInfo& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountQuotasetBP");

	Params::UZeuzApiAccount_AccountQuotasetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountQuotagetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountQuotagetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountQuotagetBP");

	Params::UZeuzApiAccount_AccountQuotagetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountProjectupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProj                   In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountProjectupdateBP(const struct FZeuzProj& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountProjectupdateBP");

	Params::UZeuzApiAccount_AccountProjectupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountProjectsgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountProjectsgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountProjectsgetBP");

	Params::UZeuzApiAccount_AccountProjectsgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountProjectgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountProjectgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountProjectgetBP");

	Params::UZeuzApiAccount_AccountProjectgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountProjectdeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountProjectDeleteIn In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountProjectdeleteBP(struct FZeuzAccountProjectDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountProjectdeleteBP");

	Params::UZeuzApiAccount_AccountProjectdeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountProjectcreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountProjectCreateIn In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountProjectcreateBP(struct FZeuzAccountProjectCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountProjectcreateBP");

	Params::UZeuzApiAccount_AccountProjectcreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzEnv                    In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvupdateBP(const struct FZeuzEnv& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvupdateBP");

	Params::UZeuzApiAccount_AccountEnvupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvsgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvsgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvsgetBP");

	Params::UZeuzApiAccount_AccountEnvsgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvserviceupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzServiceCfg             In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvserviceupdateBP(const struct FZeuzServiceCfg& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvserviceupdateBP");

	Params::UZeuzApiAccount_AccountEnvserviceupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvservicedeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvservicedeleteBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvservicedeleteBP");

	Params::UZeuzApiAccount_AccountEnvservicedeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvgetBP");

	Params::UZeuzApiAccount_AccountEnvgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvdeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountEnvDeleteIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvdeleteBP(struct FZeuzAccountEnvDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvdeleteBP");

	Params::UZeuzApiAccount_AccountEnvdeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountEnvcreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountEnvCreateIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountEnvcreateBP(struct FZeuzAccountEnvCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountEnvcreateBP");

	Params::UZeuzApiAccount_AccountEnvcreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDevquicksetupBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDevQuickSetupIn In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDevquicksetupBP(struct FZeuzAccountDevQuickSetupIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDevquicksetupBP");

	Params::UZeuzApiAccount_AccountDevquicksetupBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzDeveloper              In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDeveloperupdateBP(const struct FZeuzDeveloper& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDeveloperupdateBP");

	Params::UZeuzApiAccount_AccountDeveloperupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDevelopersgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDevelopersgetBP");

	Params::UZeuzApiAccount_AccountDevelopersgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersetpwhashBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDeveloperSetPwHashInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDevelopersetpwhashBP(struct FZeuzAccountDeveloperSetPwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDevelopersetpwhashBP");

	Params::UZeuzApiAccount_AccountDevelopersetpwhashBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperrevokeBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDeveloperrevokeBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDeveloperrevokeBP");

	Params::UZeuzApiAccount_AccountDeveloperrevokeBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetrequestBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDeveloperPasswordResetInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDeveloperpasswordresetrequestBP(struct FZeuzAccountDeveloperPasswordResetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDeveloperpasswordresetrequestBP");

	Params::UZeuzApiAccount_AccountDeveloperpasswordresetrequestBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDeveloperPasswordResetExecuteRequestInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDeveloperpasswordresetBP(struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDeveloperpasswordresetBP");

	Params::UZeuzApiAccount_AccountDeveloperpasswordresetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperispasswordresethashexpiredBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDeveloperispasswordresethashexpiredBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDeveloperispasswordresethashexpiredBP");

	Params::UZeuzApiAccount_AccountDeveloperispasswordresethashexpiredBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperinviteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDeveloperCreateInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDeveloperinviteBP(struct FZeuzAccountDeveloperCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDeveloperinviteBP");

	Params::UZeuzApiAccount_AccountDeveloperinviteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDevelopergetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDevelopergetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDevelopergetBP");

	Params::UZeuzApiAccount_AccountDevelopergetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreatepwhashBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDeveloperCreatePwHashInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDevelopercreatepwhashBP(struct FZeuzAccountDeveloperCreatePwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDevelopercreatepwhashBP");

	Params::UZeuzApiAccount_AccountDevelopercreatepwhashBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountDeveloperCreateInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountDevelopercreateBP(struct FZeuzAccountDeveloperCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountDevelopercreateBP");

	Params::UZeuzApiAccount_AccountDevelopercreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountAccountupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccount                In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountAccountupdateBP(const struct FZeuzAccount& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountAccountupdateBP");

	Params::UZeuzApiAccount_AccountAccountupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountAccountgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountAccountgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountAccountgetBP");

	Params::UZeuzApiAccount_AccountAccountgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAccount.AccountAccountcreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAccountCreateIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAccount::AccountAccountcreateBP(struct FZeuzAccountCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAccount", "AccountAccountcreateBP");

	Params::UZeuzApiAccount_AccountAccountcreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiAdmin
// (None)

class UClass* UZeuzApiAdmin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiAdmin");

	return Clss;
}


// ZeuzApiAdmin Zeuzsdk.Default__ZeuzApiAdmin
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiAdmin* UZeuzApiAdmin::GetDefaultObj()
{
	static class UZeuzApiAdmin* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiAdmin*>(UZeuzApiAdmin::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAdminStatsOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminStatsBPS__DelegateSignature(struct FZeuzAdminStatsOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminStatsBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminStatsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminStatsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminStatsBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminStatsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAdminStatsOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminStatsBP__DelegateSignature(struct FZeuzAdminStatsOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminStatsBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminStatsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzProj>           Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminProjectsBPS__DelegateSignature(TArray<struct FZeuzProj>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminProjectsBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminProjectsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminProjectsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminProjectsBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminProjectsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzProj>           Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminProjectsBP__DelegateSignature(TArray<struct FZeuzProj>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminProjectsBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminProjectsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzLogsearchOut           Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminLogsBPS__DelegateSignature(const struct FZeuzLogsearchOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminLogsBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminLogsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminLogsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminLogsBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminLogsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzLogsearchOut           Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminLogsBP__DelegateSignature(const struct FZeuzLogsearchOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminLogsBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminLogsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAdminItemsOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminItemsBPS__DelegateSignature(struct FZeuzAdminItemsOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminItemsBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminItemsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminItemsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminItemsBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminItemsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAdminItemsOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminItemsBP__DelegateSignature(struct FZeuzAdminItemsOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminItemsBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminItemsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminGetquotaBPS__DelegateSignature(int32 Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminGetquotaBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminGetquotaBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminGetquotaBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminGetquotaBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminGetquotaBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminGetquotaBP__DelegateSignature(int32 Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminGetquotaBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminGetquotaBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzEnv>            Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminEnvironmentsBPS__DelegateSignature(TArray<struct FZeuzEnv>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminEnvironmentsBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminEnvironmentsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminEnvironmentsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminEnvironmentsBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminEnvironmentsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzEnv>            Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminEnvironmentsBP__DelegateSignature(TArray<struct FZeuzEnv>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminEnvironmentsBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminEnvironmentsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzDeveloper>      Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminDevelopersBPS__DelegateSignature(TArray<struct FZeuzDeveloper>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminDevelopersBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminDevelopersBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminDevelopersBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminDevelopersBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminDevelopersBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzDeveloper>      Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminDevelopersBP__DelegateSignature(TArray<struct FZeuzDeveloper>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminDevelopersBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminDevelopersBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAdminCountResoucesPerAccountOut>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBPS__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminCountresourcesperaccBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminCountresourcesperaccBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminCountresourcesperaccBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminCountresourcesperaccBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAdminCountResoucesPerAccountOut>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBP__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminCountresourcesperaccBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminCountresourcesperaccBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminCountresourcesBPS__DelegateSignature(int32 Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminCountresourcesBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminCountresourcesBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminCountresourcesBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminCountresourcesBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminCountresourcesBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminCountresourcesBP__DelegateSignature(int32 Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminCountresourcesBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminCountresourcesBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAccount>        Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminAccountsBPS__DelegateSignature(TArray<struct FZeuzAccount>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminAccountsBPS__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminAccountsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminAccountsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminAccountsBPF__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminAccountsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAccount>        Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::DelegateAdminAccountsBP__DelegateSignature(TArray<struct FZeuzAccount>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "DelegateAdminAccountsBP__DelegateSignature");

	Params::UZeuzApiAdmin_DelegateAdminAccountsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminStatsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminStatsIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminStatsBP(struct FZeuzAdminStatsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminStatsBP");

	Params::UZeuzApiAdmin_AdminStatsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminProjectsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminAccountIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminProjectsBP(struct FZeuzAdminAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminProjectsBP");

	Params::UZeuzApiAdmin_AdminProjectsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminLogsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminLogsIn            In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminLogsBP(struct FZeuzAdminLogsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminLogsBP");

	Params::UZeuzApiAdmin_AdminLogsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminItemsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminItemsIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminItemsBP(struct FZeuzAdminItemsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminItemsBP");

	Params::UZeuzApiAdmin_AdminItemsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminGetquotaBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminTestpoolIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminGetquotaBP(struct FZeuzAdminTestpoolIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminGetquotaBP");

	Params::UZeuzApiAdmin_AdminGetquotaBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminEnvironmentsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminEnvIn             In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminEnvironmentsBP(struct FZeuzAdminEnvIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminEnvironmentsBP");

	Params::UZeuzApiAdmin_AdminEnvironmentsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminDevelopersBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminAccountIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminDevelopersBP(struct FZeuzAdminAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminDevelopersBP");

	Params::UZeuzApiAdmin_AdminDevelopersBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesperaccBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminTestpoolIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminCountresourcesperaccBP(struct FZeuzAdminTestpoolIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminCountresourcesperaccBP");

	Params::UZeuzApiAdmin_AdminCountresourcesperaccBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminCountResoucesIn   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminCountresourcesBP(struct FZeuzAdminCountResoucesIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminCountresourcesBP");

	Params::UZeuzApiAdmin_AdminCountresourcesBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAdmin.AdminAccountsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAdminAccountsIn        In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAdmin::AdminAccountsBP(struct FZeuzAdminAccountsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAdmin", "AdminAccountsBP");

	Params::UZeuzApiAdmin_AdminAccountsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiAllocation
// (None)

class UClass* UZeuzApiAllocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiAllocation");

	return Clss;
}


// ZeuzApiAllocation Zeuzsdk.Default__ZeuzApiAllocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiAllocation* UZeuzApiAllocation::GetDefaultObj()
{
	static class UZeuzApiAllocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiAllocation*>(UZeuzApiAllocation::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAllocationInfo         Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationUpdateBPS__DelegateSignature(struct FZeuzAllocationInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationUpdateBPS__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationUpdateBPF__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAllocationInfo         Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationUpdateBP__DelegateSignature(struct FZeuzAllocationInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationUpdateBP__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAllocationPayloadInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationRequestServicesBPS__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationRequestServicesBPS__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationRequestServicesBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationRequestServicesBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationRequestServicesBPF__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationRequestServicesBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAllocationPayloadInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationRequestServicesBP__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationRequestServicesBP__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationRequestServicesBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAllocationGetOut       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationGetBPS__DelegateSignature(struct FZeuzAllocationGetOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationGetBPS__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationGetBPF__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAllocationGetOut       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationGetBP__DelegateSignature(struct FZeuzAllocationGetOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationGetBP__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAllocationInfo         Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationCreateBPS__DelegateSignature(struct FZeuzAllocationInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationCreateBPS__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationCreateBPF__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzAllocationInfo         Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::DelegateAllocationCreateBP__DelegateSignature(struct FZeuzAllocationInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "DelegateAllocationCreateBP__DelegateSignature");

	Params::UZeuzApiAllocation_DelegateAllocationCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiAllocation.AllocationUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAllocationUpdateIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::AllocationUpdateBP(struct FZeuzAllocationUpdateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "AllocationUpdateBP");

	Params::UZeuzApiAllocation_AllocationUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAllocation.AllocationRequestServicesBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAllocationRequestServiceInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::AllocationRequestServicesBP(struct FZeuzAllocationRequestServiceIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "AllocationRequestServicesBP");

	Params::UZeuzApiAllocation_AllocationRequestServicesBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAllocation.AllocationGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAllocationGetIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::AllocationGetBP(struct FZeuzAllocationGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "AllocationGetBP");

	Params::UZeuzApiAllocation_AllocationGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAllocation.AllocationCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAllocationCreateIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAllocation::AllocationCreateBP(struct FZeuzAllocationCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAllocation", "AllocationCreateBP");

	Params::UZeuzApiAllocation_AllocationCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiApikey
// (None)

class UClass* UZeuzApiApikey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiApikey");

	return Clss;
}


// ZeuzApiApikey Zeuzsdk.Default__ZeuzApiApikey
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiApikey* UZeuzApiApikey::GetDefaultObj()
{
	static class UZeuzApiApikey* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiApikey*>(UZeuzApiApikey::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyUpdateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyUpdateBPS__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyUpdateBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyUpdateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyUpdateBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeySetpwhashBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeySetpwhashBPS__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeySetpwhashBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeySetpwhashBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeySetpwhashBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeySetpwhashBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeySetpwhashBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeySetpwhashBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeySetpwhashBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiApikey::DelegateApikeyRevokeBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyRevokeBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyRevokeBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyRevokeBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyRevokeBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyRevokeBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyRevokeBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyRevokeBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAPIKey>         Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGetBPS__DelegateSignature(TArray<struct FZeuzAPIKey>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGetBPS__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGetBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAPIKey>         Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGetBP__DelegateSignature(TArray<struct FZeuzAPIKey>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGetBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAPIKey>         Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGetallBPS__DelegateSignature(TArray<struct FZeuzAPIKey>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGetallBPS__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGetallBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGetallBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGetallBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGetallBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzAPIKey>         Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGetallBP__DelegateSignature(TArray<struct FZeuzAPIKey>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGetallBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGetallBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGenerateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGenerateBPS__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGenerateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGenerateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGenerateBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGenerateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyGenerateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyGenerateBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyGenerateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiApikey::DelegateApikeyDeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyDeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyDeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyDeleteBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyDeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyDeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyDeleteBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyDeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyCreateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyCreateBPS__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyCreateBPF__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAPIKey                 Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiApikey::DelegateApikeyCreateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "DelegateApikeyCreateBP__DelegateSignature");

	Params::UZeuzApiApikey_DelegateApikeyCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKey                 In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyUpdateBP(const struct FZeuzAPIKey& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyUpdateBP");

	Params::UZeuzApiApikey_ApikeyUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeySetpwhashBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKeyPwHashIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeySetpwhashBP(struct FZeuzAPIKeyPwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeySetpwhashBP");

	Params::UZeuzApiApikey_ApikeySetpwhashBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyRevokeBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKeyDeleteIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyRevokeBP(struct FZeuzAPIKeyDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyRevokeBP");

	Params::UZeuzApiApikey_ApikeyRevokeBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyGetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyGetBP");

	Params::UZeuzApiApikey_ApikeyGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyGetallBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKeyGetIn            In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyGetallBP(struct FZeuzAPIKeyGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyGetallBP");

	Params::UZeuzApiApikey_ApikeyGetallBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyGenerateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKeyGenerateIn       In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyGenerateBP(struct FZeuzAPIKeyGenerateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyGenerateBP");

	Params::UZeuzApiApikey_ApikeyGenerateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyDeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKeyDeleteIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyDeleteBP(struct FZeuzAPIKeyDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyDeleteBP");

	Params::UZeuzApiApikey_ApikeyDeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiApikey.ApikeyCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAPIKey                 In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiApikey::ApikeyCreateBP(const struct FZeuzAPIKey& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiApikey", "ApikeyCreateBP");

	Params::UZeuzApiApikey_ApikeyCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiAuth
// (None)

class UClass* UZeuzApiAuth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiAuth");

	return Clss;
}


// ZeuzApiAuth Zeuzsdk.Default__ZeuzApiAuth
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiAuth* UZeuzApiAuth::GetDefaultObj()
{
	static class UZeuzApiAuth* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiAuth*>(UZeuzApiAuth::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAuth::DelegateAuthSessiondelBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthSessiondelBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthSessiondelBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthSessiondelBPF__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthSessiondelBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthSessiondelBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthSessiondelBP__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthSessiondelBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiAuth::DelegateAuthLogoutBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthLogoutBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthLogoutBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthLogoutBPF__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthLogoutBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthLogoutBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthLogoutBP__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthLogoutBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAuthLoginResult        Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzAuthLoginResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthLoginBPS__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthLoginBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthLoginBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthLoginBPF__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthLoginBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzAuthLoginResult        Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthLoginBP__DelegateSignature(const struct FZeuzAuthLoginResult& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthLoginBP__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthLoginBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzTimestamp              Result                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthCheckBPS__DelegateSignature(const struct FZeuzTimestamp& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthCheckBPS__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthCheckBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthCheckBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthCheckBPF__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthCheckBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzTimestamp              Result                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthCheckBP__DelegateSignature(const struct FZeuzTimestamp& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthCheckBP__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthCheckBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzSession>        Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthActivesessionsgetBPS__DelegateSignature(TArray<struct FZeuzSession>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthActivesessionsgetBPS__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthActivesessionsgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthActivesessionsgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthActivesessionsgetBPF__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthActivesessionsgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzSession>        Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiAuth::DelegateAuthActivesessionsgetBP__DelegateSignature(TArray<struct FZeuzSession>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "DelegateAuthActivesessionsgetBP__DelegateSignature");

	Params::UZeuzApiAuth_DelegateAuthActivesessionsgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiAuth.AuthSessiondelBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::AuthSessiondelBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "AuthSessiondelBP");

	Params::UZeuzApiAuth_AuthSessiondelBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAuth.AuthLogoutBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::AuthLogoutBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "AuthLogoutBP");

	Params::UZeuzApiAuth_AuthLogoutBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAuth.AuthLoginBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzAuthLoginIn            In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::AuthLoginBP(struct FZeuzAuthLoginIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "AuthLoginBP");

	Params::UZeuzApiAuth_AuthLoginBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAuth.AuthCheckBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::AuthCheckBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "AuthCheckBP");

	Params::UZeuzApiAuth_AuthCheckBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiAuth.AuthActivesessionsgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiAuth::AuthActivesessionsgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiAuth", "AuthActivesessionsgetBP");

	Params::UZeuzApiAuth_AuthActivesessionsgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiEcho
// (None)

class UClass* UZeuzApiEcho::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiEcho");

	return Clss;
}


// ZeuzApiEcho Zeuzsdk.Default__ZeuzApiEcho
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiEcho* UZeuzApiEcho::GetDefaultObj()
{
	static class UZeuzApiEcho* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiEcho*>(UZeuzApiEcho::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiEcho.Echo4BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::Echo4BP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "Echo4BP");

	Params::UZeuzApiEcho_Echo4BP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiEcho.Echo3BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzEcho3In                In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::Echo3BP(struct FZeuzEcho3In& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "Echo3BP");

	Params::UZeuzApiEcho_Echo3BP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiEcho.Echo2BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzEcho2In                In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::Echo2BP(struct FZeuzEcho2In& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "Echo2BP");

	Params::UZeuzApiEcho_Echo2BP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiEcho.Echo1BP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzEchoIn                 In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::Echo1BP(struct FZeuzEchoIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "Echo1BP");

	Params::UZeuzApiEcho_Echo1BP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho4BPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho4BPS__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho4BPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho4BPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho4BPF__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho4BPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho4BP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho4BP__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho4BP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzEchoOut                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho3BPS__DelegateSignature(struct FZeuzEchoOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho3BPS__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho3BPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho3BPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho3BPF__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho3BPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzEchoOut                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho3BP__DelegateSignature(struct FZeuzEchoOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho3BP__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho3BP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzEcho2Out               Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho2BPS__DelegateSignature(struct FZeuzEcho2Out& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho2BPS__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho2BPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho2BPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho2BPF__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho2BPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzEcho2Out               Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho2BP__DelegateSignature(struct FZeuzEcho2Out& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho2BP__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho2BP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzEchoOut                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho1BPS__DelegateSignature(struct FZeuzEchoOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho1BPS__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho1BPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho1BPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho1BPF__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho1BPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzEchoOut                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiEcho::DelegateEcho1BP__DelegateSignature(struct FZeuzEchoOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiEcho", "DelegateEcho1BP__DelegateSignature");

	Params::UZeuzApiEcho_DelegateEcho1BP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiImagemanager
// (None)

class UClass* UZeuzApiImagemanager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiImagemanager");

	return Clss;
}


// ZeuzApiImagemanager Zeuzsdk.Default__ZeuzApiImagemanager
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiImagemanager* UZeuzApiImagemanager::GetDefaultObj()
{
	static class UZeuzApiImagemanager* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiImagemanager*>(UZeuzApiImagemanager::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushFileUrlBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzImageManagerPresignedFileUrlInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerPushFileUrlBP(struct FZeuzImageManagerPresignedFileUrlIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerPushFileUrlBP");

	Params::UZeuzApiImagemanager_ImagemanagerPushFileUrlBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzImageManagerManifest   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerPushBP(struct FZeuzImageManagerManifest& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerPushBP");

	Params::UZeuzApiImagemanager_ImagemanagerPushBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullFileUrlBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzImageManagerPresignedFileUrlInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerPullFileUrlBP(struct FZeuzImageManagerPresignedFileUrlIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerPullFileUrlBP");

	Params::UZeuzApiImagemanager_ImagemanagerPullFileUrlBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzImageManagerPullInput  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerPullBP(struct FZeuzImageManagerPullInput& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerPullBP");

	Params::UZeuzApiImagemanager_ImagemanagerPullBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPublishBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzImageManagerPublishInputIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerPublishBP(struct FZeuzImageManagerPublishInput& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerPublishBP");

	Params::UZeuzApiImagemanager_ImagemanagerPublishBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerListBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerListBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerListBP");

	Params::UZeuzApiImagemanager_ImagemanagerListBP_Params Parms{};

	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerGetpublishstateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerGetpublishstateBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerGetpublishstateBP");

	Params::UZeuzApiImagemanager_ImagemanagerGetpublishstateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerDiscardBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::ImagemanagerDiscardBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "ImagemanagerDiscardBP");

	Params::UZeuzApiImagemanager_ImagemanagerDiscardBP_Params Parms{};

	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPushFileUrlBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPushFileUrlBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPushFileUrlBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImageManagerPushPullOutputResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPushBPS__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPushBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPushBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPushBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPushBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPushBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImageManagerPushPullOutputResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPushBP__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPushBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPushBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPullFileUrlBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPullFileUrlBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPullFileUrlBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImageManagerPushPullOutputResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPullBPS__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPullBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPullBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPullBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPullBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPullBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImageManagerPushPullOutputResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPullBP__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPullBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPullBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImagemanagerPublishStateResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPublishBPS__DelegateSignature(struct FZeuzImagemanagerPublishState& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPublishBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPublishBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPublishBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPublishBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPublishBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImagemanagerPublishStateResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerPublishBP__DelegateSignature(struct FZeuzImagemanagerPublishState& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerPublishBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerPublishBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzImageManagerListEntry>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerListBPS__DelegateSignature(TArray<struct FZeuzImageManagerListEntry>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerListBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerListBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerListBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerListBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerListBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzImageManagerListEntry>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerListBP__DelegateSignature(TArray<struct FZeuzImageManagerListEntry>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerListBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerListBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImagemanagerPublishStateResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBPS__DelegateSignature(struct FZeuzImagemanagerPublishState& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerGetpublishstateBPS__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerGetpublishstateBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzImagemanagerPublishStateResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBP__DelegateSignature(struct FZeuzImagemanagerPublishState& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerGetpublishstateBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiImagemanager::DelegateImagemanagerDiscardBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerDiscardBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerDiscardBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerDiscardBPF__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerDiscardBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiImagemanager::DelegateImagemanagerDiscardBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiImagemanager", "DelegateImagemanagerDiscardBP__DelegateSignature");

	Params::UZeuzApiImagemanager_DelegateImagemanagerDiscardBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiKVStore
// (None)

class UClass* UZeuzApiKVStore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiKVStore");

	return Clss;
}


// ZeuzApiKVStore Zeuzsdk.Default__ZeuzApiKVStore
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiKVStore* UZeuzApiKVStore::GetDefaultObj()
{
	static class UZeuzApiKVStore* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiKVStore*>(UZeuzApiKVStore::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiKVStore.KVStorePutBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzKVStorePutIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::KVStorePutBP(struct FZeuzKVStorePutIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "KVStorePutBP");

	Params::UZeuzApiKVStore_KVStorePutBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiKVStore.KVStoreGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzKVStoreKey             In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::KVStoreGetBP(struct FZeuzKVStoreKey& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "KVStoreGetBP");

	Params::UZeuzApiKVStore_KVStoreGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiKVStore.KVStoreDelBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzKVStoreDelIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::KVStoreDelBP(struct FZeuzKVStoreDelIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "KVStoreDelBP");

	Params::UZeuzApiKVStore_KVStoreDelBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiKVStore::DelegateKVStorePutBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStorePutBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStorePutBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStorePutBPF__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStorePutBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStorePutBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStorePutBP__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStorePutBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzKVStoreKVEntry         Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStoreGetBPS__DelegateSignature(struct FZeuzKVStoreKVEntry& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStoreGetBPS__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStoreGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStoreGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStoreGetBPF__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStoreGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzKVStoreKVEntry         Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStoreGetBP__DelegateSignature(struct FZeuzKVStoreKVEntry& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStoreGetBP__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStoreGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiKVStore::DelegateKVStoreDelBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStoreDelBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStoreDelBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStoreDelBPF__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStoreDelBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiKVStore::DelegateKVStoreDelBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiKVStore", "DelegateKVStoreDelBP__DelegateSignature");

	Params::UZeuzApiKVStore_DelegateKVStoreDelBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiLobby
// (None)

class UClass* UZeuzApiLobby::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiLobby");

	return Clss;
}


// ZeuzApiLobby Zeuzsdk.Default__ZeuzApiLobby
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiLobby* UZeuzApiLobby::GetDefaultObj()
{
	static class UZeuzApiLobby* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiLobby*>(UZeuzApiLobby::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiLobby.LobbyUserBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyUserIn            In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyUserBP(struct FZeuzLobbyUserIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyUserBP");

	Params::UZeuzApiLobby_LobbyUserBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyStateIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyUpdateBP(struct FZeuzLobbyStateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyUpdateBP");

	Params::UZeuzApiLobby_LobbyUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyStartBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyStartDestroy      In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyStartBP(struct FZeuzLobbyStartDestroy& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyStartBP");

	Params::UZeuzApiLobby_LobbyStartBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyRefreshBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyRefresh           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyRefreshBP(struct FZeuzLobbyRefresh& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyRefreshBP");

	Params::UZeuzApiLobby_LobbyRefreshBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyQueryBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyQueryIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyQueryBP(struct FZeuzLobbyQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyQueryBP");

	Params::UZeuzApiLobby_LobbyQueryBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyLeaveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyJoin              In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyLeaveBP(struct FZeuzLobbyJoin& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyLeaveBP");

	Params::UZeuzApiLobby_LobbyLeaveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyKickBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyKick              In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyKickBP(struct FZeuzLobbyKick& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyKickBP");

	Params::UZeuzApiLobby_LobbyKickBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyJoinBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyJoin              In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyJoinBP(struct FZeuzLobbyJoin& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyJoinBP");

	Params::UZeuzApiLobby_LobbyJoinBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyDestroyBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyStartDestroy      In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyDestroyBP(struct FZeuzLobbyStartDestroy& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyDestroyBP");

	Params::UZeuzApiLobby_LobbyDestroyBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLobby.LobbyCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLobbyStateIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::LobbyCreateBP(struct FZeuzLobbyStateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "LobbyCreateBP");

	Params::UZeuzApiLobby_LobbyCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyUserBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyUserBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyUserBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyUserBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyUserBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyUserBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyUserBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyUserBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyUserBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyUpdateBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyUpdateBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyUpdateBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyUpdateBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyUpdateBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyServerConnect     Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyStartBPS__DelegateSignature(struct FZeuzLobbyServerConnect& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyStartBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyStartBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyStartBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyStartBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyStartBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyServerConnect     Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyStartBP__DelegateSignature(struct FZeuzLobbyServerConnect& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyStartBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyStartBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyRefreshBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyRefreshBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyRefreshBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyRefreshBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyRefreshBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyRefreshBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyRefreshBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyRefreshBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyRefreshBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyQueryOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyQueryBPS__DelegateSignature(struct FZeuzLobbyQueryOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyQueryBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyQueryBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyQueryBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyQueryBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyQueryBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyQueryOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyQueryBP__DelegateSignature(struct FZeuzLobbyQueryOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyQueryBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyQueryBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiLobby::DelegateLobbyLeaveBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyLeaveBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyLeaveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyLeaveBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyLeaveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyLeaveBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyLeaveBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyLeaveBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiLobby::DelegateLobbyKickBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyKickBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyKickBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyKickBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyKickBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyKickBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyKickBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyKickBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyJoinBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyJoinBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyJoinBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyJoinBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyJoinBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyJoinBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyJoinBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyJoinBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyJoinBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiLobby::DelegateLobbyDestroyBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyDestroyBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyDestroyBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyDestroyBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyDestroyBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyDestroyBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyDestroyBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyDestroyBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyCreateBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyCreateBPS__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyCreateBPF__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLobbyUsersOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLobby::DelegateLobbyCreateBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLobby", "DelegateLobbyCreateBP__DelegateSignature");

	Params::UZeuzApiLobby_DelegateLobbyCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiLocality
// (None)

class UClass* UZeuzApiLocality::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiLocality");

	return Clss;
}


// ZeuzApiLocality Zeuzsdk.Default__ZeuzApiLocality
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiLocality* UZeuzApiLocality::GetDefaultObj()
{
	static class UZeuzApiLocality* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiLocality*>(UZeuzApiLocality::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiLocality.LocalityRegionUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzRegion                 In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityRegionUpdateBP(const struct FZeuzRegion& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityRegionUpdateBP");

	Params::UZeuzApiLocality_LocalityRegionUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityRegionRemoveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityRegionRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityRegionRemoveBP");

	Params::UZeuzApiLocality_LocalityRegionRemoveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityRegionGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLocalityRegionGetIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityRegionGetBP(struct FZeuzLocalityRegionGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityRegionGetBP");

	Params::UZeuzApiLocality_LocalityRegionGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityRegionCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzRegion                 In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityRegionCreateBP(const struct FZeuzRegion& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityRegionCreateBP");

	Params::UZeuzApiLocality_LocalityRegionCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityProviderUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProvider               In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityProviderUpdateBP(const struct FZeuzProvider& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityProviderUpdateBP");

	Params::UZeuzApiLocality_LocalityProviderUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityProviderRemoveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityProviderRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityProviderRemoveBP");

	Params::UZeuzApiLocality_LocalityProviderRemoveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityProviderGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLocalityProviderGetIn  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityProviderGetBP(struct FZeuzLocalityProviderGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityProviderGetBP");

	Params::UZeuzApiLocality_LocalityProviderGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityProviderCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProvider               In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityProviderCreateBP(const struct FZeuzProvider& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityProviderCreateBP");

	Params::UZeuzApiLocality_LocalityProviderCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityLocationUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLocation               In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityLocationUpdateBP(const struct FZeuzLocation& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityLocationUpdateBP");

	Params::UZeuzApiLocality_LocalityLocationUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityLocationRemoveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityLocationRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityLocationRemoveBP");

	Params::UZeuzApiLocality_LocalityLocationRemoveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityLocationGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLocalityLocationGetIn  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityLocationGetBP(struct FZeuzLocalityLocationGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityLocationGetBP");

	Params::UZeuzApiLocality_LocalityLocationGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLocality.LocalityLocationCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLocation               In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::LocalityLocationCreateBP(const struct FZeuzLocation& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "LocalityLocationCreateBP");

	Params::UZeuzApiLocality_LocalityLocationCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzRegion                 Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionUpdateBPS__DelegateSignature(const struct FZeuzRegion& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionUpdateBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionUpdateBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzRegion                 Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionUpdateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionUpdateBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiLocality::DelegateLocalityRegionRemoveBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionRemoveBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionRemoveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionRemoveBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionRemoveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionRemoveBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionRemoveBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionRemoveBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzRegion>         Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionGetBPS__DelegateSignature(TArray<struct FZeuzRegion>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionGetBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionGetBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzRegion>         Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionGetBP__DelegateSignature(TArray<struct FZeuzRegion>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionGetBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzRegion                 Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionCreateBPS__DelegateSignature(const struct FZeuzRegion& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionCreateBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionCreateBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzRegion                 Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityRegionCreateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityRegionCreateBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityRegionCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzProvider               Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderUpdateBPS__DelegateSignature(const struct FZeuzProvider& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderUpdateBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderUpdateBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzProvider               Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderUpdateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderUpdateBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiLocality::DelegateLocalityProviderRemoveBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderRemoveBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderRemoveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderRemoveBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderRemoveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderRemoveBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderRemoveBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderRemoveBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzProvider>       Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderGetBPS__DelegateSignature(TArray<struct FZeuzProvider>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderGetBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderGetBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzProvider>       Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderGetBP__DelegateSignature(TArray<struct FZeuzProvider>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderGetBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzProvider               Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderCreateBPS__DelegateSignature(const struct FZeuzProvider& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderCreateBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderCreateBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzProvider               Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityProviderCreateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityProviderCreateBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityProviderCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzLocation               Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationUpdateBPS__DelegateSignature(const struct FZeuzLocation& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationUpdateBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationUpdateBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzLocation               Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationUpdateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationUpdateBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiLocality::DelegateLocalityLocationRemoveBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationRemoveBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationRemoveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationRemoveBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationRemoveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationRemoveBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationRemoveBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationRemoveBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzLocation>       Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationGetBPS__DelegateSignature(TArray<struct FZeuzLocation>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationGetBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationGetBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzLocation>       Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationGetBP__DelegateSignature(TArray<struct FZeuzLocation>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationGetBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzLocation               Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationCreateBPS__DelegateSignature(const struct FZeuzLocation& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationCreateBPS__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationCreateBPF__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzLocation               Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLocality::DelegateLocalityLocationCreateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLocality", "DelegateLocalityLocationCreateBP__DelegateSignature");

	Params::UZeuzApiLocality_DelegateLocalityLocationCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiLogsearch
// (None)

class UClass* UZeuzApiLogsearch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiLogsearch");

	return Clss;
}


// ZeuzApiLogsearch Zeuzsdk.Default__ZeuzApiLogsearch
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiLogsearch* UZeuzApiLogsearch::GetDefaultObj()
{
	static class UZeuzApiLogsearch* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiLogsearch*>(UZeuzApiLogsearch::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiLogsearch.LogsearchStartexportBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLogsearchAccountIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::LogsearchStartexportBP(struct FZeuzLogsearchAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "LogsearchStartexportBP");

	Params::UZeuzApiLogsearch_LogsearchStartexportBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLogsearch.LogsearchDownloadexportBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::LogsearchDownloadexportBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "LogsearchDownloadexportBP");

	Params::UZeuzApiLogsearch_LogsearchDownloadexportBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLogsearch.LogsearchCheckexportBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::LogsearchCheckexportBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "LogsearchCheckexportBP");

	Params::UZeuzApiLogsearch_LogsearchCheckexportBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiLogsearch.LogsearchAccountBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzLogsearchAccountIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::LogsearchAccountBP(struct FZeuzLogsearchAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "LogsearchAccountBP");

	Params::UZeuzApiLogsearch_LogsearchAccountBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchStartexportBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchStartexportBPS__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchStartexportBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchStartexportBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchStartexportBPF__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchStartexportBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchStartexportBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchStartexportBP__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchStartexportBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchDownloadexportBPS__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchDownloadexportBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchDownloadexportBPF__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchDownloadexportBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchDownloadexportBP__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchDownloadexportBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLogsearchLogsStatus    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchCheckexportBPS__DelegateSignature(struct FZeuzLogsearchLogsStatus& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchCheckexportBPS__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchCheckexportBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchCheckexportBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchCheckexportBPF__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchCheckexportBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLogsearchLogsStatus    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchCheckexportBP__DelegateSignature(struct FZeuzLogsearchLogsStatus& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchCheckexportBP__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchCheckexportBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLogsearchAccountOut    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchAccountBPS__DelegateSignature(struct FZeuzLogsearchAccountOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchAccountBPS__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchAccountBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchAccountBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchAccountBPF__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchAccountBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzLogsearchAccountOut    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiLogsearch::DelegateLogsearchAccountBP__DelegateSignature(struct FZeuzLogsearchAccountOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiLogsearch", "DelegateLogsearchAccountBP__DelegateSignature");

	Params::UZeuzApiLogsearch_DelegateLogsearchAccountBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiMachine
// (None)

class UClass* UZeuzApiMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiMachine");

	return Clss;
}


// ZeuzApiMachine Zeuzsdk.Default__ZeuzApiMachine
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiMachine* UZeuzApiMachine::GetDefaultObj()
{
	static class UZeuzApiMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiMachine*>(UZeuzApiMachine::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiMachine.MachineUpdateresourceBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourceUpdateInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineUpdateresourceBP(struct FZeuzMachineResourceUpdateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineUpdateresourceBP");

	Params::UZeuzApiMachine_MachineUpdateresourceBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineSettagsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FZeuzMachineTagsSetIn>In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineSettagsBP(TArray<struct FZeuzMachineTagsSetIn>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineSettagsBP");

	Params::UZeuzApiMachine_MachineSettagsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineResourcedeprovisionBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourceDeprovisionInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineResourcedeprovisionBP(struct FZeuzMachineResourceDeprovisionIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineResourcedeprovisionBP");

	Params::UZeuzApiMachine_MachineResourcedeprovisionBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineGettagsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineGettagsBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineGettagsBP");

	Params::UZeuzApiMachine_MachineGettagsBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineGetresourcesBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourceGetIn   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineGetresourcesBP(struct FZeuzMachineResourceGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineGetresourcesBP");

	Params::UZeuzApiMachine_MachineGetresourcesBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineGetinfoBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineGetinfoBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineGetinfoBP");

	Params::UZeuzApiMachine_MachineGetinfoBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineGetIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineGetBP(struct FZeuzMachineGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineGetBP");

	Params::UZeuzApiMachine_MachineGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineDeallocateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourceDeallocateInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineDeallocateBP(struct FZeuzMachineResourceDeallocateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineDeallocateBP");

	Params::UZeuzApiMachine_MachineDeallocateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineCountresourcesBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourcesCountInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineCountresourcesBP(struct FZeuzMachineResourcesCountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineCountresourcesBP");

	Params::UZeuzApiMachine_MachineCountresourcesBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineAllocateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourceAllocateInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineAllocateBP(struct FZeuzMachineResourceAllocateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineAllocateBP");

	Params::UZeuzApiMachine_MachineAllocateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMachine.MachineAddresourceBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMachineResourceDataIn  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::MachineAddresourceBP(struct FZeuzMachineResourceDataIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "MachineAddresourceBP");

	Params::UZeuzApiMachine_MachineAddresourceBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMachineResourceInfo    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineUpdateresourceBPS__DelegateSignature(struct FZeuzMachineResourceInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineUpdateresourceBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineUpdateresourceBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineUpdateresourceBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineUpdateresourceBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineUpdateresourceBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMachineResourceInfo    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineUpdateresourceBP__DelegateSignature(struct FZeuzMachineResourceInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineUpdateresourceBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineUpdateresourceBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineTagsSetIn>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineSettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineSettagsBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineSettagsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineSettagsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineSettagsBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineSettagsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineTagsSetIn>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineSettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineSettagsBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineSettagsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiMachine::DelegateMachineResourcedeprovisionBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineResourcedeprovisionBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineResourcedeprovisionBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineResourcedeprovisionBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineResourcedeprovisionBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineResourcedeprovisionBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineResourcedeprovisionBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineResourcedeprovisionBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineTagsSetIn>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGettagsBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGettagsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGettagsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGettagsBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGettagsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineTagsSetIn>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGettagsBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGettagsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineResourceInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetresourcesBPS__DelegateSignature(TArray<struct FZeuzMachineResourceInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetresourcesBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetresourcesBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetresourcesBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetresourcesBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetresourcesBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineResourceInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetresourcesBP__DelegateSignature(TArray<struct FZeuzMachineResourceInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetresourcesBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetresourcesBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineInfo>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetinfoBPS__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetinfoBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetinfoBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetinfoBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetinfoBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetinfoBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineInfo>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetinfoBP__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetinfoBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetinfoBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMachineGetOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetBPS__DelegateSignature(struct FZeuzMachineGetOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMachineGetOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineGetBP__DelegateSignature(struct FZeuzMachineGetOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineGetBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class FString>              Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineDeallocateBPS__DelegateSignature(TArray<class FString>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineDeallocateBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineDeallocateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineDeallocateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineDeallocateBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineDeallocateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class FString>              Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineDeallocateBP__DelegateSignature(TArray<class FString>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineDeallocateBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineDeallocateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineCountresourcesBPS__DelegateSignature(int32 Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineCountresourcesBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineCountresourcesBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineCountresourcesBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineCountresourcesBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineCountresourcesBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineCountresourcesBP__DelegateSignature(int32 Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineCountresourcesBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineCountresourcesBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineInfo>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineAllocateBPS__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineAllocateBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineAllocateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineAllocateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineAllocateBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineAllocateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzMachineInfo>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineAllocateBP__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineAllocateBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineAllocateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMachineResourceInfo    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineAddresourceBPS__DelegateSignature(struct FZeuzMachineResourceInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineAddresourceBPS__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineAddresourceBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineAddresourceBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineAddresourceBPF__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineAddresourceBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMachineResourceInfo    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMachine::DelegateMachineAddresourceBP__DelegateSignature(struct FZeuzMachineResourceInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMachine", "DelegateMachineAddresourceBP__DelegateSignature");

	Params::UZeuzApiMachine_DelegateMachineAddresourceBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiMatchmaking
// (None)

class UClass* UZeuzApiMatchmaking::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiMatchmaking");

	return Clss;
}


// ZeuzApiMatchmaking Zeuzsdk.Default__ZeuzApiMatchmaking
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiMatchmaking* UZeuzApiMatchmaking::GetDefaultObj()
{
	static class UZeuzApiMatchmaking* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiMatchmaking*>(UZeuzApiMatchmaking::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingUpdateBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingUpdateBP");

	Params::UZeuzApiMatchmaking_MatchmakingUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingStatsBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingStatsBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingStatsBP");

	Params::UZeuzApiMatchmaking_MatchmakingStatsBP_Params Parms{};

	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerrefreshBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMatchMakingServerInfo  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingServerrefreshBP(struct FZeuzMatchMakingServerInfo& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingServerrefreshBP");

	Params::UZeuzApiMatchmaking_MatchmakingServerrefreshBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerdestroyBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMatchMakingServerInfo  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingServerdestroyBP(struct FZeuzMatchMakingServerInfo& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingServerdestroyBP");

	Params::UZeuzApiMatchmaking_MatchmakingServerdestroyBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreatepartyBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMatchMakingPartyInit   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingCreatepartyBP(struct FZeuzMatchMakingPartyInit& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingCreatepartyBP");

	Params::UZeuzApiMatchmaking_MatchmakingCreatepartyBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMatchMakingInit        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingCreateBP(struct FZeuzMatchMakingInit& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingCreateBP");

	Params::UZeuzApiMatchmaking_MatchmakingCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCloseBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::MatchmakingCloseBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "MatchmakingCloseBP");

	Params::UZeuzApiMatchmaking_MatchmakingCloseBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStatus      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBPS__DelegateSignature(struct FZeuzMatchMakingStatus& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingUpdateBPS__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingUpdateBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStatus      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBP__DelegateSignature(struct FZeuzMatchMakingStatus& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingUpdateBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStats       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingStatsBPS__DelegateSignature(struct FZeuzMatchMakingStats& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingStatsBPS__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingStatsBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingStatsBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingStatsBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingStatsBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStats       Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingStatsBP__DelegateSignature(struct FZeuzMatchMakingStats& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingStatsBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingStatsBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingServerrefreshBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingServerrefreshBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingServerrefreshBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingServerdestroyBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingServerdestroyBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingServerdestroyBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStatus      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBPS__DelegateSignature(struct FZeuzMatchMakingStatus& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCreatepartyBPS__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCreatepartyBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStatus      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBP__DelegateSignature(struct FZeuzMatchMakingStatus& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCreatepartyBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStatus      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCreateBPS__DelegateSignature(struct FZeuzMatchMakingStatus& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCreateBPS__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCreateBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzMatchMakingStatus      Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCreateBP__DelegateSignature(struct FZeuzMatchMakingStatus& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCreateBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiMatchmaking::DelegateMatchmakingCloseBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCloseBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCloseBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCloseBPF__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCloseBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMatchmaking::DelegateMatchmakingCloseBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMatchmaking", "DelegateMatchmakingCloseBP__DelegateSignature");

	Params::UZeuzApiMatchmaking_DelegateMatchmakingCloseBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiMetrics
// (None)

class UClass* UZeuzApiMetrics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiMetrics");

	return Clss;
}


// ZeuzApiMetrics Zeuzsdk.Default__ZeuzApiMetrics
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiMetrics* UZeuzApiMetrics::GetDefaultObj()
{
	static class UZeuzApiMetrics* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiMetrics*>(UZeuzApiMetrics::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworksentBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsPayloadnetworksentBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsPayloadnetworksentBP");

	Params::UZeuzApiMetrics_MetricsPayloadnetworksentBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworkreceivedBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsPayloadnetworkreceivedBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsPayloadnetworkreceivedBP");

	Params::UZeuzApiMetrics_MetricsPayloadnetworkreceivedBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadmemoryusageBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsPayloadmemoryusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsPayloadmemoryusageBP");

	Params::UZeuzApiMetrics_MetricsPayloadmemoryusageBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcpuusageBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsPayloadcpuusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsPayloadcpuusageBP");

	Params::UZeuzApiMetrics_MetricsPayloadcpuusageBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcountBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsPayloadcountBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsPayloadcountBP");

	Params::UZeuzApiMetrics_MetricsPayloadcountBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworksentBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsMachinenetworksentBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsMachinenetworksentBP");

	Params::UZeuzApiMetrics_MetricsMachinenetworksentBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworkreceivedBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsMachinenetworkreceivedBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsMachinenetworkreceivedBP");

	Params::UZeuzApiMetrics_MetricsMachinenetworkreceivedBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinememoryusageBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsMachinememoryusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsMachinememoryusageBP");

	Params::UZeuzApiMetrics_MetricsMachinememoryusageBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinecpuusageBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzMetricsQueryIn         In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::MetricsMachinecpuusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "MetricsMachinecpuusageBP");

	Params::UZeuzApiMetrics_MetricsMachinecpuusageBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadnetworksentBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadnetworksentBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadnetworksentBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadmemoryusageBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadmemoryusageBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadmemoryusageBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadcpuusageBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadcpuusageBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadcpuusageBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadcountBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadcountBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadcountBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadcountBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadcountBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadcountBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsPayloadcountBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsPayloadcountBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsPayloadcountBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinenetworksentBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinenetworksentBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinenetworksentBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinenetworksentBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinenetworksentBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinenetworksentBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinenetworkreceivedBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinememoryusageBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinememoryusageBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinememoryusageBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinememoryusageBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinememoryusageBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinememoryusageBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBPS__DelegateSignature(struct FZeuzVariant& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinecpuusageBPS__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinecpuusageBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinecpuusageBPF__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinecpuusageBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzVariant                Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiMetrics", "DelegateMetricsMachinecpuusageBP__DelegateSignature");

	Params::UZeuzApiMetrics_DelegateMetricsMachinecpuusageBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiPayload
// (None)

class UClass* UZeuzApiPayload::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiPayload");

	return Clss;
}


// ZeuzApiPayload Zeuzsdk.Default__ZeuzApiPayload
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiPayload* UZeuzApiPayload::GetDefaultObj()
{
	static class UZeuzApiPayload* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiPayload*>(UZeuzApiPayload::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiPayload.PayloadUpdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadUpdateIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadUpdateBP(struct FZeuzPayloadUpdateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadUpdateBP");

	Params::UZeuzApiPayload_PayloadUpdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadUnreserveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadUnreserveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadUnreserveBP");

	Params::UZeuzApiPayload_PayloadUnreserveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadStateupdateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadStateGetIn      In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadStateupdateBP(struct FZeuzPayloadStateGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadStateupdateBP");

	Params::UZeuzApiPayload_PayloadStateupdateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadStateinfoBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadStateGetIn      In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadStateinfoBP(struct FZeuzPayloadStateGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadStateinfoBP");

	Params::UZeuzApiPayload_PayloadStateinfoBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadResumeBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadResumeIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadResumeBP(struct FZeuzPayloadResumeIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadResumeBP");

	Params::UZeuzApiPayload_PayloadResumeBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadRestartBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadRestartBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadRestartBP");

	Params::UZeuzApiPayload_PayloadRestartBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadReserveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadReserveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadReserveBP");

	Params::UZeuzApiPayload_PayloadReserveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadRemoveBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadRemoveBP");

	Params::UZeuzApiPayload_PayloadRemoveBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadGetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadGetIn           In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadGetBP(struct FZeuzPayloadGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadGetBP");

	Params::UZeuzApiPayload_PayloadGetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadCreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadCreateIn        In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadCreateBP(struct FZeuzPayloadCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadCreateBP");

	Params::UZeuzApiPayload_PayloadCreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiPayload.PayloadAllocateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzPayloadAllocateIn      In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::PayloadAllocateBP(struct FZeuzPayloadAllocateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "PayloadAllocateBP");

	Params::UZeuzApiPayload_PayloadAllocateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadUpdateBPS__DelegateSignature(struct FZeuzPayloadInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadUpdateBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadUpdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadUpdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadUpdateBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadUpdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadUpdateBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadUpdateBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadUpdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadUnreserveBPS__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadUnreserveBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadUnreserveBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadUnreserveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadUnreserveBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadUnreserveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadUnreserveBP__DelegateSignature(bool Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadUnreserveBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadUnreserveBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzPayloadStateInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadStateupdateBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadStateupdateBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadStateupdateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadStateupdateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadStateupdateBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadStateupdateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzPayloadStateInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadStateupdateBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadStateupdateBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadStateupdateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzPayloadStateInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadStateinfoBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadStateinfoBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadStateinfoBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadStateinfoBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadStateinfoBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadStateinfoBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzPayloadStateInfo>Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadStateinfoBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadStateinfoBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadStateinfoBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadResumeBPS__DelegateSignature(struct FZeuzPayloadInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadResumeBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadResumeBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadResumeBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadResumeBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadResumeBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadResumeBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadResumeBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadResumeBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadRestartBPS__DelegateSignature(struct FZeuzPayloadInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadRestartBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadRestartBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadRestartBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadRestartBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadRestartBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadRestartBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadRestartBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadRestartBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadReserveBPS__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadReserveBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadReserveBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadReserveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadReserveBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadReserveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadReserveBP__DelegateSignature(bool Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadReserveBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadReserveBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiPayload::DelegatePayloadRemoveBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadRemoveBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadRemoveBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadRemoveBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadRemoveBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadRemoveBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadRemoveBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadRemoveBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadGetOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadGetBPS__DelegateSignature(struct FZeuzPayloadGetOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadGetBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadGetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadGetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadGetBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadGetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadGetOut          Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadGetBP__DelegateSignature(struct FZeuzPayloadGetOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadGetBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadGetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadCreateBPS__DelegateSignature(struct FZeuzPayloadInfo& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadCreateBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadCreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadCreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadCreateBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadCreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzPayloadInfo            Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadCreateBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadCreateBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadCreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzPayloadInfo>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadAllocateBPS__DelegateSignature(TArray<struct FZeuzPayloadInfo>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadAllocateBPS__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadAllocateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadAllocateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadAllocateBPF__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadAllocateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzPayloadInfo>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPayload::DelegatePayloadAllocateBP__DelegateSignature(TArray<struct FZeuzPayloadInfo>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPayload", "DelegatePayloadAllocateBP__DelegateSignature");

	Params::UZeuzApiPayload_DelegatePayloadAllocateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiProfile
// (None)

class UClass* UZeuzApiProfile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiProfile");

	return Clss;
}


// ZeuzApiProfile Zeuzsdk.Default__ZeuzApiProfile
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiProfile* UZeuzApiProfile::GetDefaultObj()
{
	static class UZeuzApiProfile* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiProfile*>(UZeuzApiProfile::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUserslookupBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FZeuzProfileUserLookupIn>In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUserslookupBP(TArray<struct FZeuzProfileUserLookupIn>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUserslookupBP");

	Params::UZeuzApiProfile_ProfileUserslookupBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUserslistBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileUsersListIn     In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUserslistBP(struct FZeuzProfileUsersListIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUserslistBP");

	Params::UZeuzApiProfile_ProfileUserslistBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUsersgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUsersgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUsersgetBP");

	Params::UZeuzApiProfile_ProfileUsersgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetpwhashBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileUserPwHashIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUsersetpwhashBP(struct FZeuzProfileUserPwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUsersetpwhashBP");

	Params::UZeuzApiProfile_ProfileUsersetpwhashBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzUser                   In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUsersetBP(const struct FZeuzUser& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUsersetBP");

	Params::UZeuzApiProfile_ProfileUsersetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUserlookupBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileUserLookupIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUserlookupBP(struct FZeuzProfileUserLookupIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUserlookupBP");

	Params::UZeuzApiProfile_ProfileUserlookupBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetpwhashBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUsergetpwhashBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUsergetpwhashBP");

	Params::UZeuzApiProfile_ProfileUsergetpwhashBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUsergetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUsergetBP");

	Params::UZeuzApiProfile_ProfileUsergetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUserdeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUserdeleteBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUserdeleteBP");

	Params::UZeuzApiProfile_ProfileUserdeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileUsercreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileUserCreateIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileUsercreateBP(struct FZeuzProfileUserCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileUsercreateBP");

	Params::UZeuzApiProfile_ProfileUsercreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              In                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileProfilesgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileProfilesgetBP");

	Params::UZeuzApiProfile_ProfileProfilesgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzUserProfile            In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileProfilesetBP(const struct FZeuzUserProfile& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileProfilesetBP");

	Params::UZeuzApiProfile_ProfileProfilesetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileProfilegetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileProfilegetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileProfilegetBP");

	Params::UZeuzApiProfile_ProfileProfilegetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileProfiledeleteBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileProfiledeleteBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileProfiledeleteBP");

	Params::UZeuzApiProfile_ProfileProfiledeleteBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemtransferBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemTransferIn  In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemtransferBP(struct FZeuzProfileItemTransferIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemtransferBP");

	Params::UZeuzApiProfile_ProfileItemtransferBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemsetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzInvItem                In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemsetBP(const struct FZeuzInvItem& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemsetBP");

	Params::UZeuzApiProfile_ProfileItemsetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemrembynameBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemRemByNameIn In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemrembynameBP(struct FZeuzProfileItemRemByNameIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemrembynameBP");

	Params::UZeuzApiProfile_ProfileItemrembynameBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemremBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemRemIn       In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemremBP(struct FZeuzProfileItemRemIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemremBP");

	Params::UZeuzApiProfile_ProfileItemremBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemlistBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemlistBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemlistBP");

	Params::UZeuzApiProfile_ProfileItemlistBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetbynameBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemUserName    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemgetbynameBP(struct FZeuzProfileItemUserName& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemgetbynameBP");

	Params::UZeuzApiProfile_ProfileItemgetbynameBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemgetBP");

	Params::UZeuzApiProfile_ProfileItemgetBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemcreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzInvItem                In                                                               (Parm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemcreateBP(const struct FZeuzInvItem& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemcreateBP");

	Params::UZeuzApiProfile_ProfileItemcreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemconfiggetBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemconfiggetBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemconfiggetBP");

	Params::UZeuzApiProfile_ProfileItemconfiggetBP_Params Parms{};

	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItembuyBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemAddIn       In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItembuyBP(struct FZeuzProfileItemAddIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItembuyBP");

	Params::UZeuzApiProfile_ProfileItembuyBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItembarterBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemBarterIn    In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItembarterBP(struct FZeuzProfileItemBarterIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItembarterBP");

	Params::UZeuzApiProfile_ProfileItembarterBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiProfile.ProfileItemaddBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzProfileItemAddIn       In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::ProfileItemaddBP(struct FZeuzProfileItemAddIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "ProfileItemaddBP");

	Params::UZeuzApiProfile_ProfileItemaddBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class FString>              Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserslookupBPS__DelegateSignature(TArray<class FString>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserslookupBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserslookupBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserslookupBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserslookupBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserslookupBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<class FString>              Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserslookupBP__DelegateSignature(TArray<class FString>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserslookupBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserslookupBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzProfileUsersListOut    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserslistBPS__DelegateSignature(struct FZeuzProfileUsersListOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserslistBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserslistBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserslistBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserslistBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserslistBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzProfileUsersListOut    Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserslistBP__DelegateSignature(struct FZeuzProfileUsersListOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserslistBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserslistBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzUser>           Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersgetBPS__DelegateSignature(TArray<struct FZeuzUser>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersgetBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersgetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzUser>           Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersgetBP__DelegateSignature(TArray<struct FZeuzUser>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersgetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileUsersetpwhashBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersetpwhashBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersetpwhashBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersetpwhashBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersetpwhashBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersetpwhashBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersetpwhashBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersetpwhashBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileUsersetBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersetBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsersetBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsersetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsersetBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserlookupBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserlookupBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserlookupBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserlookupBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserlookupBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserlookupBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserlookupBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserlookupBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserlookupBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsergetpwhashBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsergetpwhashBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsergetpwhashBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsergetpwhashBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsergetpwhashBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsergetpwhashBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsergetpwhashBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsergetpwhashBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsergetpwhashBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzUser                   Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsergetBPS__DelegateSignature(const struct FZeuzUser& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsergetBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsergetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsergetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsergetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsergetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzUser                   Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsergetBP__DelegateSignature(const struct FZeuzUser& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsergetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsergetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileUserdeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserdeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserdeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserdeleteBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserdeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUserdeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUserdeleteBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUserdeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsercreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsercreateBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsercreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsercreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsercreateBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsercreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileUsercreateBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileUsercreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzUserProfile>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilesgetBPS__DelegateSignature(TArray<struct FZeuzUserProfile>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilesgetBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilesgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilesgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilesgetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilesgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzUserProfile>    Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilesgetBP__DelegateSignature(TArray<struct FZeuzUserProfile>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilesgetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilesgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileProfilesetBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilesetBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilesetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilesetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilesetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilesetBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilesetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilesetBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzUserProfile            Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilegetBPS__DelegateSignature(const struct FZeuzUserProfile& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilegetBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilegetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilegetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilegetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilegetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzUserProfile            Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfilegetBP__DelegateSignature(const struct FZeuzUserProfile& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfilegetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfilegetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileProfiledeleteBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfiledeleteBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfiledeleteBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfiledeleteBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfiledeleteBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileProfiledeleteBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileProfiledeleteBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileProfiledeleteBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileItemtransferBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemtransferBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemtransferBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemtransferBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemtransferBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemtransferBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemtransferBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemtransferBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileItemsetBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemsetBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemsetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemsetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemsetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemsetBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemsetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemsetBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemrembynameBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemrembynameBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemrembynameBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemrembynameBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemrembynameBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemrembynameBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemrembynameBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemrembynameBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemrembynameBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileItemremBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemremBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemremBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemremBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemremBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemremBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemremBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemremBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzInvItem>        Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemlistBPS__DelegateSignature(TArray<struct FZeuzInvItem>& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemlistBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemlistBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemlistBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemlistBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemlistBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FZeuzInvItem>        Result                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemlistBP__DelegateSignature(TArray<struct FZeuzInvItem>& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemlistBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemlistBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzInvItem                Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemgetbynameBPS__DelegateSignature(const struct FZeuzInvItem& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemgetbynameBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemgetbynameBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemgetbynameBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemgetbynameBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemgetbynameBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzInvItem                Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemgetbynameBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemgetbynameBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemgetbynameBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzInvItem                Result                                                           (Parm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemgetBPS__DelegateSignature(const struct FZeuzInvItem& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemgetBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemgetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemgetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemgetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemgetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzInvItem                Result                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemgetBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemgetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemgetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemcreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemcreateBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemcreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemcreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemcreateBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemcreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemcreateBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemcreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzProfileItemConfigGetOutResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemconfiggetBPS__DelegateSignature(struct FZeuzProfileItemConfigGetOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemconfiggetBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemconfiggetBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemconfiggetBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemconfiggetBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemconfiggetBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzProfileItemConfigGetOutResult                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemconfiggetBP__DelegateSignature(struct FZeuzProfileItemConfigGetOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemconfiggetBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemconfiggetBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItembuyBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItembuyBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItembuyBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItembuyBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItembuyBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItembuyBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItembuyBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItembuyBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItembuyBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiProfile::DelegateProfileItembarterBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItembarterBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItembarterBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItembarterBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItembarterBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItembarterBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItembarterBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItembarterBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemaddBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemaddBPS__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemaddBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemaddBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemaddBPF__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemaddBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiProfile::DelegateProfileItemaddBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiProfile", "DelegateProfileItemaddBP__DelegateSignature");

	Params::UZeuzApiProfile_DelegateProfileItemaddBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiServerbrowser
// (None)

class UClass* UZeuzApiServerbrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiServerbrowser");

	return Clss;
}


// ZeuzApiServerbrowser Zeuzsdk.Default__ZeuzApiServerbrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiServerbrowser* UZeuzApiServerbrowser::GetDefaultObj()
{
	static class UZeuzApiServerbrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiServerbrowser*>(UZeuzApiServerbrowser::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserRefreshBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzServerBrowserStateIn   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::ServerbrowserRefreshBP(struct FZeuzServerBrowserStateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "ServerbrowserRefreshBP");

	Params::UZeuzApiServerbrowser_ServerbrowserRefreshBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserQueryBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzServerBrowserQueryIn   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::ServerbrowserQueryBP(struct FZeuzServerBrowserQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "ServerbrowserQueryBP");

	Params::UZeuzApiServerbrowser_ServerbrowserQueryBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserDestroyBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::ServerbrowserDestroyBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "ServerbrowserDestroyBP");

	Params::UZeuzApiServerbrowser_ServerbrowserDestroyBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserRefreshBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserRefreshBPF__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserRefreshBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserRefreshBP__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserRefreshBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPS__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzServerBrowserQueryOut  Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserQueryBPS__DelegateSignature(struct FZeuzServerBrowserQueryOut& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserQueryBPS__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserQueryBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserQueryBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserQueryBPF__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserQueryBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBP__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FZeuzServerBrowserQueryOut  Result                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserQueryBP__DelegateSignature(struct FZeuzServerBrowserQueryOut& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserQueryBP__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserQueryBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPS__DelegateSignature
// (Public, Delegate)
// Parameters:

void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBPS__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserDestroyBPS__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserDestroyBPF__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserDestroyBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBP__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiServerbrowser", "DelegateServerbrowserDestroyBP__DelegateSignature");

	Params::UZeuzApiServerbrowser_DelegateServerbrowserDestroyBP__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiSimpleAuth
// (None)

class UClass* UZeuzApiSimpleAuth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiSimpleAuth");

	return Clss;
}


// ZeuzApiSimpleAuth Zeuzsdk.Default__ZeuzApiSimpleAuth
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiSimpleAuth* UZeuzApiSimpleAuth::GetDefaultObj()
{
	static class UZeuzApiSimpleAuth* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiSimpleAuth*>(UZeuzApiSimpleAuth::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiSimpleAuth.StringHash
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Val                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UZeuzApiSimpleAuth::StringHash(const class FString& Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "StringHash");

	Params::UZeuzApiSimpleAuth_StringHash_Params Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiSimpleAuth.SimpleProfileUsercreateBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzSimpleProfileUserCreateInIn                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::SimpleProfileUsercreateBP(struct FZeuzSimpleProfileUserCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "SimpleProfileUsercreateBP");

	Params::UZeuzApiSimpleAuth_SimpleProfileUsercreateBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateSimpleProfileUsercreateBPS__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateSimpleProfileUsercreateBPF__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateSimpleProfileUsercreateBP__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzContext                Context                                                          (Parm, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateAuthLoginBPS__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateAuthLoginBPS__DelegateSignature_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateAuthLoginBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateAuthLoginBPF__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateAuthLoginBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzContext                Context                                                          (Parm, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateAuthLoginBP__DelegateSignature(const struct FZeuzContext& Context, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateAuthLoginBP__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateAuthLoginBP__DelegateSignature_Params Parms{};

	Parms.Context = Context;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzTimestamp              Expires                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBPS__DelegateSignature(const struct FZeuzTimestamp& Expires)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateAuthCheckSessionBPS__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateAuthCheckSessionBPS__DelegateSignature_Params Parms{};

	Parms.Expires = Expires;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateAuthCheckSessionBPF__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateAuthCheckSessionBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FZeuzTimestamp              Expires                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBP__DelegateSignature(const struct FZeuzTimestamp& Expires, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "DelegateAuthCheckSessionBP__DelegateSignature");

	Params::UZeuzApiSimpleAuth_DelegateAuthCheckSessionBP__DelegateSignature_Params Parms{};

	Parms.Expires = Expires;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiSimpleAuth.CalcPWHash
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Login                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Password                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UZeuzApiSimpleAuth::CalcPWHash(const class FString& Login, const class FString& Password)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "CalcPWHash");

	Params::UZeuzApiSimpleAuth_CalcPWHash_Params Parms{};

	Parms.Login = Login;
	Parms.Password = Password;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiSimpleAuth.AuthLoginBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzSimpleAuthLoginIn      In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               SaveDefaultContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::AuthLoginBP(struct FZeuzSimpleAuthLoginIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx, bool SaveDefaultContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "AuthLoginBP");

	Params::UZeuzApiSimpleAuth_AuthLoginBP_Params Parms{};

	Parms.In = In;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;
	Parms.SaveDefaultContext = SaveDefaultContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiSimpleAuth.AuthCheckSessionBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, NativeAccessSpecifierPublic)

void UZeuzApiSimpleAuth::AuthCheckSessionBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, const struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiSimpleAuth", "AuthCheckSessionBP");

	Params::UZeuzApiSimpleAuth_AuthCheckSessionBP_Params Parms{};

	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiContext
// (None)

class UClass* UZeuzApiContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiContext");

	return Clss;
}


// ZeuzApiContext Zeuzsdk.Default__ZeuzApiContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiContext* UZeuzApiContext::GetDefaultObj()
{
	static class UZeuzApiContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiContext*>(UZeuzApiContext::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiContext.SetDefaultContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiContext::SetDefaultContext(struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiContext", "SetDefaultContext");

	Params::UZeuzApiContext_SetDefaultContext_Params Parms{};

	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Zeuzsdk.ZeuzApiContext.GetDefaultContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzContext                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FZeuzContext UZeuzApiContext::GetDefaultContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiContext", "GetDefaultContext");

	Params::UZeuzApiContext_GetDefaultContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Zeuzsdk.ZeuzID
// (None)

class UClass* UZeuzID::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzID");

	return Clss;
}


// ZeuzID Zeuzsdk.Default__ZeuzID
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzID* UZeuzID::GetDefaultObj()
{
	static class UZeuzID* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzID*>(UZeuzID::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzID.IsValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzID::IsValid(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzID", "IsValid");

	Params::UZeuzID_IsValid_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzID.IsType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EZeuzIDType             Typ                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzID::IsType(const class FString& ID, enum class EZeuzIDType Typ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzID", "IsType");

	Params::UZeuzID_IsType_Params Parms{};

	Parms.ID = ID;
	Parms.Typ = Typ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzID.GetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EZeuzIDType             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EZeuzIDType UZeuzID::GetType(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzID", "GetType");

	Params::UZeuzID_GetType_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Zeuzsdk.ZeuzApiPing
// (None)

class UClass* UZeuzApiPing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiPing");

	return Clss;
}


// ZeuzApiPing Zeuzsdk.Default__ZeuzApiPing
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiPing* UZeuzApiPing::GetDefaultObj()
{
	static class UZeuzApiPing* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiPing*>(UZeuzApiPing::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiPing.DoPingBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Target                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPing::DoPingBP(const class FString& Target, float Timeout, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPing", "DoPingBP");

	Params::UZeuzApiPing_DoPingBP_Params Parms{};

	Parms.Target = Target;
	Parms.Timeout = Timeout;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Target                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Resolved                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPing::DelegateDoPingBPS__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPing", "DelegateDoPingBPS__DelegateSignature");

	Params::UZeuzApiPing_DelegateDoPingBPS__DelegateSignature_Params Parms{};

	Parms.Target = Target;
	Parms.Duration = Duration;
	Parms.Resolved = Resolved;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPing::DelegateDoPingBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPing", "DelegateDoPingBPF__DelegateSignature");

	Params::UZeuzApiPing_DelegateDoPingBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Target                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Resolved                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPing::DelegateDoPingBP__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPing", "DelegateDoPingBP__DelegateSignature");

	Params::UZeuzApiPing_DelegateDoPingBP__DelegateSignature_Params Parms{};

	Parms.Target = Target;
	Parms.Duration = Duration;
	Parms.Resolved = Resolved;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzApiPubIP
// (None)

class UClass* UZeuzApiPubIP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiPubIP");

	return Clss;
}


// ZeuzApiPubIP Zeuzsdk.Default__ZeuzApiPubIP
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiPubIP* UZeuzApiPubIP::GetDefaultObj()
{
	static class UZeuzApiPubIP* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiPubIP*>(UZeuzApiPubIP::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiPubIP.GetPublicIPBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               V6                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSuccess                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailure                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FZeuzContext                Ctx                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UZeuzApiPubIP::GetPublicIPBP(bool V6, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPubIP", "GetPublicIPBP");

	Params::UZeuzApiPubIP_GetPublicIPBP_Params Parms{};

	Parms.V6 = V6;
	Parms.Callback = Callback;
	Parms.OnSuccess = OnSuccess;
	Parms.OnFailure = OnFailure;
	Parms.Ctx = Ctx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPubIP::DelegateGetPublicIPBPS__DelegateSignature(const class FString& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPubIP", "DelegateGetPublicIPBPS__DelegateSignature");

	Params::UZeuzApiPubIP_DelegateGetPublicIPBPS__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPF__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPubIP::DelegateGetPublicIPBPF__DelegateSignature(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPubIP", "DelegateGetPublicIPBPF__DelegateSignature");

	Params::UZeuzApiPubIP_DelegateGetPublicIPBPF__DelegateSignature_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBP__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Result                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiPubIP::DelegateGetPublicIPBP__DelegateSignature(const class FString& Result, const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiPubIP", "DelegateGetPublicIPBP__DelegateSignature");

	Params::UZeuzApiPubIP_DelegateGetPublicIPBP__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Zeuzsdk.ZeuzTagsUtil
// (None)

class UClass* UZeuzTagsUtil::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzTagsUtil");

	return Clss;
}


// ZeuzTagsUtil Zeuzsdk.Default__ZeuzTagsUtil
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzTagsUtil* UZeuzTagsUtil::GetDefaultObj()
{
	static class UZeuzTagsUtil* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzTagsUtil*>(UZeuzTagsUtil::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzTagsUtil.TagsToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzTags                   In                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UZeuzTagsUtil::TagsToString(struct FZeuzTags& In)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzTagsUtil", "TagsToString");

	Params::UZeuzTagsUtil_TagsToString_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzTagsUtil.StringToTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      In                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzTags                   Out                                                              (Parm, OutParm, NativeAccessSpecifierPublic)

void UZeuzTagsUtil::StringToTags(const class FString& In, struct FZeuzTags* Out)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzTagsUtil", "StringToTags");

	Params::UZeuzTagsUtil_StringToTags_Params Parms{};

	Parms.In = In;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Class Zeuzsdk.ZeuzApiTime
// (None)

class UClass* UZeuzApiTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiTime");

	return Clss;
}


// ZeuzApiTime Zeuzsdk.Default__ZeuzApiTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiTime* UZeuzApiTime::GetDefaultObj()
{
	static class UZeuzApiTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiTime*>(UZeuzApiTime::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiTime.ToDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzTimestamp              T                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UZeuzApiTime::ToDateTime(const struct FZeuzTimestamp& T)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiTime", "ToDateTime");

	Params::UZeuzApiTime_ToDateTime_Params Parms{};

	Parms.T = T;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiTime.Now
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Adjusted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzTimestamp              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FZeuzTimestamp UZeuzApiTime::Now(bool Adjusted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiTime", "Now");

	Params::UZeuzApiTime_Now_Params Parms{};

	Parms.Adjusted = Adjusted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiTime.IsZero
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzTimestamp              T                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiTime::IsZero(const struct FZeuzTimestamp& T)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiTime", "IsZero");

	Params::UZeuzApiTime_IsZero_Params Parms{};

	Parms.T = T;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiTime.GetOffset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzTimestamp              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FZeuzTimestamp UZeuzApiTime::GetOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiTime", "GetOffset");

	Params::UZeuzApiTime_GetOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiTime.FromDateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   T                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Adjusted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzTimestamp              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FZeuzTimestamp UZeuzApiTime::FromDateTime(const struct FDateTime& T, bool Adjusted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiTime", "FromDateTime");

	Params::UZeuzApiTime_FromDateTime_Params Parms{};

	Parms.T = T;
	Parms.Adjusted = Adjusted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiTime.AdjustOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FZeuzTimestamp              Ofs                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiTime::AdjustOffset(const struct FZeuzTimestamp& Ofs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiTime", "AdjustOffset");

	Params::UZeuzApiTime_AdjustOffset_Params Parms{};

	Parms.Ofs = Ofs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Zeuzsdk.ZeuzApiUtil
// (None)

class UClass* UZeuzApiUtil::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZeuzApiUtil");

	return Clss;
}


// ZeuzApiUtil Zeuzsdk.Default__ZeuzApiUtil
// (Public, ClassDefaultObject, ArchetypeObject)

class UZeuzApiUtil* UZeuzApiUtil::GetDefaultObj()
{
	static class UZeuzApiUtil* Default = nullptr;

	if (!Default)
		Default = static_cast<UZeuzApiUtil*>(UZeuzApiUtil::StaticClass()->DefaultObject);

	return Default;
}


// Function Zeuzsdk.ZeuzApiUtil.TimerWithString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiUtil::TimerWithString(FDelegateProperty_& Event, float Time, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "TimerWithString");

	Params::UZeuzApiUtil_TimerWithString_Params Parms{};

	Parms.Event = Event;
	Parms.Time = Time;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Zeuzsdk.ZeuzApiUtil.TimerDynamicDelegateS__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UZeuzApiUtil::TimerDynamicDelegateS__DelegateSignature(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "TimerDynamicDelegateS__DelegateSignature");

	Params::UZeuzApiUtil_TimerDynamicDelegateS__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zeuzsdk.ZeuzApiUtil.StructToVariant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProperty*                   AnyStruct                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzVariant                Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StructToVariant(class UProperty* AnyStruct, struct FZeuzVariant* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StructToVariant");

	Params::UZeuzApiUtil_StructToVariant_Params Parms{};

	Parms.AnyStruct = AnyStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayJSON
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProperty*                   AnyStruct                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzByteArray              Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StructToByteArrayJSON(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StructToByteArrayJSON");

	Params::UZeuzApiUtil_StructToByteArrayJSON_Params Parms{};

	Parms.AnyStruct = AnyStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayBin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProperty*                   AnyStruct                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzByteArray              Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StructToByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StructToByteArrayBin");

	Params::UZeuzApiUtil_StructToByteArrayBin_Params Parms{};

	Parms.AnyStruct = AnyStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StructFromVariant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProperty*                   AnyStruct                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzVariant                Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StructFromVariant(class UProperty** AnyStruct, struct FZeuzVariant& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StructFromVariant");

	Params::UZeuzApiUtil_StructFromVariant_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnyStruct != nullptr)
		*AnyStruct = Parms.AnyStruct;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayJSON
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProperty*                   AnyStruct                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzByteArray              Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StructFromByteArrayJSON(class UProperty** AnyStruct, struct FZeuzByteArray& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StructFromByteArrayJSON");

	Params::UZeuzApiUtil_StructFromByteArrayJSON_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnyStruct != nullptr)
		*AnyStruct = Parms.AnyStruct;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayBin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProperty*                   AnyStruct                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzByteArray              Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StructFromByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StructFromByteArrayBin");

	Params::UZeuzApiUtil_StructFromByteArrayBin_Params Parms{};

	Parms.AnyStruct = AnyStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StringNotEmpty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StringNotEmpty(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StringNotEmpty");

	Params::UZeuzApiUtil_StringNotEmpty_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.StringIsEmpty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::StringIsEmpty(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "StringIsEmpty");

	Params::UZeuzApiUtil_StringIsEmpty_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.SaveGameToByteArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzByteArray              Value                                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::SaveGameToByteArray(const class FString& Filename, struct FZeuzByteArray* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "SaveGameToByteArray");

	Params::UZeuzApiUtil_SaveGameToByteArray_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.SaveGameFromByteArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzByteArray              Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::SaveGameFromByteArray(struct FZeuzByteArray& Value, const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "SaveGameFromByteArray");

	Params::UZeuzApiUtil_SaveGameFromByteArray_Params Parms{};

	Parms.Value = Value;
	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.JsonToVariant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Json                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FZeuzVariant                Variant                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::JsonToVariant(const class FString& Json, struct FZeuzVariant* Variant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "JsonToVariant");

	Params::UZeuzApiUtil_JsonToVariant_Params Parms{};

	Parms.Json = Json;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Variant != nullptr)
		*Variant = std::move(Parms.Variant);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.JsonFromVariant
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FZeuzVariant                Variant                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Json                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UZeuzApiUtil::JsonFromVariant(struct FZeuzVariant& Variant, class FString* Json)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "JsonFromVariant");

	Params::UZeuzApiUtil_JsonFromVariant_Params Parms{};

	Parms.Variant = Variant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Json != nullptr)
		*Json = std::move(Parms.Json);

	return Parms.ReturnValue;

}


// Function Zeuzsdk.ZeuzApiUtil.GetSaveGamePath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UZeuzApiUtil::GetSaveGamePath(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZeuzApiUtil", "GetSaveGamePath");

	Params::UZeuzApiUtil_GetSaveGamePath_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


