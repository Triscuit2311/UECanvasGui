#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModioEx.ModioSubmissionExtensionLibrary
// (None)

class UClass* UModioSubmissionExtensionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSubmissionExtensionLibrary");

	return Clss;
}


// ModioSubmissionExtensionLibrary ModioEx.Default__ModioSubmissionExtensionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSubmissionExtensionLibrary* UModioSubmissionExtensionLibrary::GetDefaultObj()
{
	static class UModioSubmissionExtensionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSubmissionExtensionLibrary*>(UModioSubmissionExtensionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFromMemoryAsync
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioModCreationHandle     Handle                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioCreateModParams       Params                                                           (Parm, NativeAccessSpecifierPublic)
// TArray<uint8>                      PngData                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubmissionExtensionLibrary::K2_SubmitNewModFromMemoryAsync(const struct FModioModCreationHandle& Handle, const struct FModioCreateModParams& Params, const TArray<uint8>& PngData, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubmissionExtensionLibrary", "K2_SubmitNewModFromMemoryAsync");

	Params::UModioSubmissionExtensionLibrary_K2_SubmitNewModFromMemoryAsync_Params Parms{};

	Parms.Handle = Handle;
	Parms.Params = Params;
	Parms.PngData = PngData;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UModioSubsystem*             Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioCreateModFileMemoryParamsParams                                                           (Parm, NativeAccessSpecifierPublic)

void UModioSubmissionExtensionLibrary::K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, const struct FModioModID& Mod, const struct FModioCreateModFileMemoryParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubmissionExtensionLibrary", "K2_SubmitNewModFileForModFromMemory");

	Params::UModioSubmissionExtensionLibrary_K2_SubmitNewModFileForModFromMemory_Params Parms{};

	Parms.Target = Target;
	Parms.Mod = Mod;
	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitModChangesFromMemoryAsync
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 Mod                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioEditModParams         Params                                                           (Parm, NativeAccessSpecifierPublic)
// TArray<uint8>                      PngData                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioSubmissionExtensionLibrary::K2_SubmitModChangesFromMemoryAsync(const struct FModioModID& Mod, const struct FModioEditModParams& Params, const TArray<uint8>& PngData, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubmissionExtensionLibrary", "K2_SubmitModChangesFromMemoryAsync");

	Params::UModioSubmissionExtensionLibrary_K2_SubmitModChangesFromMemoryAsync_Params Parms{};

	Parms.Mod = Mod;
	Parms.Params = Params;
	Parms.PngData = PngData;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UModioSubsystem*             Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ModData                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioSubmissionExtensionLibrary::K2_LoadModFileToMemory(class UModioSubsystem* Target, const struct FModioModID& ModId, TArray<uint8>* ModData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSubmissionExtensionLibrary", "K2_LoadModFileToMemory");

	Params::UModioSubmissionExtensionLibrary_K2_LoadModFileToMemory_Params Parms{};

	Parms.Target = Target;
	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModData != nullptr)
		*ModData = std::move(Parms.ModData);

	return Parms.ReturnValue;

}

}


