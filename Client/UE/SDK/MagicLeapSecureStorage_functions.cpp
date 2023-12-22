#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// (None)

class UClass* UMagicLeapSecureStorage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapSecureStorage");

	return Clss;
}


// MagicLeapSecureStorage MagicLeapSecureStorage.Default__MagicLeapSecureStorage
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapSecureStorage* UMagicLeapSecureStorage::GetDefaultObj()
{
	static class UMagicLeapSecureStorage* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapSecureStorage*>(UMagicLeapSecureStorage::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DataToStore                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureVector(const class FString& Key, struct FVector& DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureVector");

	Params::UMagicLeapSecureStorage_PutSecureVector_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  DataToStore                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureTransform(const class FString& Key, struct FTransform& DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureTransform");

	Params::UMagicLeapSecureStorage_PutSecureTransform_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DataToStore                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureString(const class FString& Key, const class FString& DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureString");

	Params::UMagicLeapSecureStorage_PutSecureString_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGame*                   ObjectToStore                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureSaveGame(const class FString& Key, class USaveGame* ObjectToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureSaveGame");

	Params::UMagicLeapSecureStorage_PutSecureSaveGame_Params Parms{};

	Parms.Key = Key;
	Parms.ObjectToStore = ObjectToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DataToStore                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureRotator(const class FString& Key, struct FRotator& DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureRotator");

	Params::UMagicLeapSecureStorage_PutSecureRotator_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              DataToStore                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureInt64(const class FString& Key, int64 DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureInt64");

	Params::UMagicLeapSecureStorage_PutSecureInt64_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataToStore                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureInt(const class FString& Key, int32 DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureInt");

	Params::UMagicLeapSecureStorage_PutSecureInt_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DataToStore                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureFloat(const class FString& Key, float DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureFloat");

	Params::UMagicLeapSecureStorage_PutSecureFloat_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              DataToStore                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureByte(const class FString& Key, uint8 DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureByte");

	Params::UMagicLeapSecureStorage_PutSecureByte_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DataToStore                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureBool(const class FString& Key, bool DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureBool");

	Params::UMagicLeapSecureStorage_PutSecureBool_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      DataToStore                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::PutSecureArray(const class FString& Key, TArray<int32>& DataToStore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "PutSecureArray");

	Params::UMagicLeapSecureStorage_PutSecureArray_Params Parms{};

	Parms.Key = Key;
	Parms.DataToStore = DataToStore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureVector(const class FString& Key, struct FVector* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureVector");

	Params::UMagicLeapSecureStorage_GetSecureVector_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = std::move(Parms.DataToRetrieve);

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  DataToRetrieve                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureTransform(const class FString& Key, struct FTransform* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureTransform");

	Params::UMagicLeapSecureStorage_GetSecureTransform_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = std::move(Parms.DataToRetrieve);

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureString(const class FString& Key, class FString* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureString");

	Params::UMagicLeapSecureStorage_GetSecureString_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = std::move(Parms.DataToRetrieve);

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGame*                   ObjectToRetrieve                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureSaveGame(const class FString& Key, class USaveGame** ObjectToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureSaveGame");

	Params::UMagicLeapSecureStorage_GetSecureSaveGame_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObjectToRetrieve != nullptr)
		*ObjectToRetrieve = Parms.ObjectToRetrieve;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureRotator(const class FString& Key, struct FRotator* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureRotator");

	Params::UMagicLeapSecureStorage_GetSecureRotator_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = std::move(Parms.DataToRetrieve);

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureInt64(const class FString& Key, int64* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureInt64");

	Params::UMagicLeapSecureStorage_GetSecureInt64_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = Parms.DataToRetrieve;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureInt(const class FString& Key, int32* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureInt");

	Params::UMagicLeapSecureStorage_GetSecureInt_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = Parms.DataToRetrieve;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureFloat(const class FString& Key, float* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureFloat");

	Params::UMagicLeapSecureStorage_GetSecureFloat_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = Parms.DataToRetrieve;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureByte(const class FString& Key, uint8* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureByte");

	Params::UMagicLeapSecureStorage_GetSecureByte_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = Parms.DataToRetrieve;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureBool(const class FString& Key, bool* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureBool");

	Params::UMagicLeapSecureStorage_GetSecureBool_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = Parms.DataToRetrieve;

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      DataToRetrieve                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::GetSecureArray(const class FString& Key, TArray<int32>* DataToRetrieve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "GetSecureArray");

	Params::UMagicLeapSecureStorage_GetSecureArray_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = std::move(Parms.DataToRetrieve);

	return Parms.ReturnValue;

}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapSecureStorage::DeleteSecureData(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapSecureStorage", "DeleteSecureData");

	Params::UMagicLeapSecureStorage_DeleteSecureData_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


