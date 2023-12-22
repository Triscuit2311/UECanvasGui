#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Debug.DebugLogLibrarySettings
// (None)

class UClass* UDebugLogLibrarySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugLogLibrarySettings");

	return Clss;
}


// DebugLogLibrarySettings Debug.Default__DebugLogLibrarySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDebugLogLibrarySettings* UDebugLogLibrarySettings::GetDefaultObj()
{
	static class UDebugLogLibrarySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDebugLogLibrarySettings*>(UDebugLogLibrarySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Debug.Log
// (None)

class UClass* ULog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Log");

	return Clss;
}


// Log Debug.Default__Log
// (Public, ClassDefaultObject, ArchetypeObject)

class ULog* ULog::GetDefaultObj()
{
	static class ULog* Default = nullptr;

	if (!Default)
		Default = static_cast<ULog*>(ULog::StaticClass()->DefaultObject);

	return Default;
}


// Function Debug.Log.Yo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Yo(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Yo");

	Params::ULog_Yo_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Yes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Yes(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Yes");

	Params::ULog_Yes_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Wassup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Wassup(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Wassup");

	Params::ULog_Wassup_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Warning_WithCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Warning_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Warning_WithCondition");

	Params::ULog_Warning_WithCondition_Params Parms{};

	Parms.Message = Message;
	Parms.bCondition = bCondition;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Warning
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Warning(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Warning");

	Params::ULog_Warning_Params Parms{};

	Parms.Message = Message;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Volume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InVolumeValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogVolumeUnit     VolumeUnit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Volume(float InVolumeValue, enum class EDebugLogVolumeUnit VolumeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Volume");

	Params::ULog_Volume_Params Parms{};

	Parms.InVolumeValue = InVolumeValue;
	Parms.VolumeUnit = VolumeUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Vector2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InVector2D                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Vector2D(struct FVector2D& InVector2D, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Vector2D");

	Params::ULog_Vector2D_Params Parms{};

	Parms.InVector2D = InVector2D;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Vector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Vector(struct FVector& InVector, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Vector");

	Params::ULog_Vector_Params Parms{};

	Parms.InVector = InVector;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Valid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Valid(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Valid");

	Params::ULog_Valid_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.UnImplemented
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:

void ULog::UnImplemented()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "UnImplemented");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Transform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFormat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Transform(struct FTransform& InTransform, const class FString& Prefix, bool bFormat, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Transform");

	Params::ULog_Transform_Params Parms{};

	Parms.InTransform = InTransform;
	Parms.Prefix = Prefix;
	Parms.bFormat = bFormat;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Time
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InTimeValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogTimeUnit       TimeUnit                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Time(float InTimeValue, enum class EDebugLogTimeUnit TimeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Time");

	Params::ULog_Time_Params Parms{};

	Parms.InTimeValue = InTimeValue;
	Parms.TimeUnit = TimeUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Temperature
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InTemperatureValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogTemperatureUnitTemperatureUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Temperature(float InTemperatureValue, enum class EDebugLogTemperatureUnit TemperatureUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Temperature");

	Params::ULog_Temperature_Params Parms{};

	Parms.InTemperatureValue = InTemperatureValue;
	Parms.TemperatureUnit = TemperatureUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Success_WithCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Success_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Success_WithCondition");

	Params::ULog_Success_WithCondition_Params Parms{};

	Parms.Message = Message;
	Parms.bCondition = bCondition;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Success
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Success(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Success");

	Params::ULog_Success_Params Parms{};

	Parms.Message = Message;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.StopDebugTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bAutoDetermineTimeUnit                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogTimeUnit       DisplayIn                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULog::StopDebugTimer(bool bAutoDetermineTimeUnit, enum class EDebugLogTimeUnit DisplayIn, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "StopDebugTimer");

	Params::ULog_StopDebugTimer_Params Parms{};

	Parms.bAutoDetermineTimeUnit = bAutoDetermineTimeUnit;
	Parms.DisplayIn = DisplayIn;
	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.StartDebugTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::StartDebugTimer(const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "StartDebugTimer");

	Params::ULog_StartDebugTimer_Params Parms{};

	Parms.Description = Description;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Speed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InSpeedValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogSpeedUnit      SpeedUnit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Speed(float InSpeedValue, enum class EDebugLogSpeedUnit SpeedUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Speed");

	Params::ULog_Speed_Params Parms{};

	Parms.InSpeedValue = InSpeedValue;
	Parms.SpeedUnit = SpeedUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Rotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    InRotator                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Rotator(struct FRotator& InRotator, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Rotator");

	Params::ULog_Rotator_Params Parms{};

	Parms.InRotator = InRotator;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Quat
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       Quaternion                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Quat(struct FQuat& Quaternion, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Quat");

	Params::ULog_Quat_Params Parms{};

	Parms.Quaternion = Quaternion;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Percent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Percent(float Number, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Percent");

	Params::ULog_Percent_Params Parms{};

	Parms.Number = Number;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.ObjectValidity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObject                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilenceOnError                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::ObjectValidity(class UObject* InObject, bool bSilenceOnError, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "ObjectValidity");

	Params::ULog_ObjectValidity_Params Parms{};

	Parms.InObject = InObject;
	Parms.bSilenceOnError = bSilenceOnError;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.ObjectName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObject                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilenceOnError                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::ObjectName(class UObject* InObject, bool bSilenceOnError, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "ObjectName");

	Params::ULog_ObjectName_Params Parms{};

	Parms.InObject = InObject;
	Parms.bSilenceOnError = bSilenceOnError;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Number_Int_Blueprint
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// int32                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogNumberSystems  NumberSystem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Number_Int_Blueprint(int32 Number, const class FString& Prefix, const class FString& Suffix, enum class EDebugLogNumberSystems NumberSystem, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Number_Int_Blueprint");

	Params::ULog_Number_Int_Blueprint_Params Parms{};

	Parms.Number = Number;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.NumberSystem = NumberSystem;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Number_Float_Blueprint
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// float                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Number_Float_Blueprint(float Number, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Number_Float_Blueprint");

	Params::ULog_Number_Float_Blueprint_Params Parms{};

	Parms.Number = Number;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.No
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::No(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "No");

	Params::ULog_No_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.MessageInWorld
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FontScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::MessageInWorld(const class FString& Message, struct FVector& WorldLocation, float FontScale, const class FString& Prefix, const class FString& Suffix, float TimeToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "MessageInWorld");

	Params::ULog_MessageInWorld_Params Parms{};

	Parms.Message = Message;
	Parms.WorldLocation = WorldLocation;
	Parms.FontScale = FontScale;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.TimeToDisplay = TimeToDisplay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Matrix
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMatrix                     InMatrix                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Matrix(struct FMatrix& InMatrix, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Matrix");

	Params::ULog_Matrix_Params Parms{};

	Parms.InMatrix = InMatrix;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Mass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InMassValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogMassUnit       MassUnit                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Mass(float InMassValue, enum class EDebugLogMassUnit MassUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Mass");

	Params::ULog_Mass_Params Parms{};

	Parms.InMassValue = InMassValue;
	Parms.MassUnit = MassUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.LineBreak_Symbol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Symbol                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::LineBreak_Symbol(const class FString& Symbol, enum class ELoggingOptions LoggingOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "LineBreak_Symbol");

	Params::ULog_LineBreak_Symbol_Params Parms{};

	Parms.Symbol = Symbol;
	Parms.LoggingOption = LoggingOption;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.LineBreak
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::LineBreak(enum class ELoggingOptions LoggingOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "LineBreak");

	Params::ULog_LineBreak_Params Parms{};

	Parms.LoggingOption = LoggingOption;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Light
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InLightValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogLightUnit      LightUnit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Light(float InLightValue, enum class EDebugLogLightUnit LightUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Light");

	Params::ULog_Light_Params Parms{};

	Parms.InLightValue = InLightValue;
	Parms.LightUnit = LightUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Length
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InLengthValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogLengthUnit     LengthUnit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Length(float InLengthValue, enum class EDebugLogLengthUnit LengthUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Length");

	Params::ULog_Length_Params Parms{};

	Parms.InLengthValue = InLengthValue;
	Parms.LengthUnit = LengthUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Invalid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Invalid(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Invalid");

	Params::ULog_Invalid_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Info_WithCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Info_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Info_WithCondition");

	Params::ULog_Info_WithCondition_Params Parms{};

	Parms.Message = Message;
	Parms.bCondition = bCondition;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Info
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Info(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Info");

	Params::ULog_Info_Params Parms{};

	Parms.Message = Message;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.InBrackets_Text_Blueprint
// (Final, Native, Static, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ULog::InBrackets_Text_Blueprint(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "InBrackets_Text_Blueprint");

	Params::ULog_InBrackets_Text_Blueprint_Params Parms{};

	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.InBrackets_String_Blueprint
// (Final, Native, Static, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULog::InBrackets_String_Blueprint(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "InBrackets_String_Blueprint");

	Params::ULog_InBrackets_String_Blueprint_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.InBrackets_Name_Blueprint
// (Final, Native, Static, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULog::InBrackets_Name_Blueprint(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "InBrackets_Name_Blueprint");

	Params::ULog_InBrackets_Name_Blueprint_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.Hey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Hey(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Hey");

	Params::ULog_Hey_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Hello
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Hello(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Hello");

	Params::ULog_Hello_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Goodbye
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Goodbye(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Goodbye");

	Params::ULog_Goodbye_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Frequency
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InFrequencyValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogFrequencyUnit  FrequencyUnit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Frequency(float InFrequencyValue, enum class EDebugLogFrequencyUnit FrequencyUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Frequency");

	Params::ULog_Frequency_Params Parms{};

	Parms.InFrequencyValue = InFrequencyValue;
	Parms.FrequencyUnit = FrequencyUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Force
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InForceValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogForceUnit      ForceUnit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Force(float InForceValue, enum class EDebugLogForceUnit ForceUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Force");

	Params::ULog_Force_Params Parms{};

	Parms.InForceValue = InForceValue;
	Parms.ForceUnit = ForceUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Fatal_WithCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Fatal_WithCondition(const class FString& Message, bool bCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Fatal_WithCondition");

	Params::ULog_Fatal_WithCondition_Params Parms{};

	Parms.Message = Message;
	Parms.bCondition = bCondition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Fatal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Fatal(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Fatal");

	Params::ULog_Fatal_Params Parms{};

	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Error_WithCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Error_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Error_WithCondition");

	Params::ULog_Error_WithCondition_Params Parms{};

	Parms.Message = Message;
	Parms.bCondition = bCondition;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Error
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Error(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Error");

	Params::ULog_Error_Params Parms{};

	Parms.Message = Message;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.EnsureObject
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAlwaysEnsure                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::EnsureObject(class UObject* Object, bool bAlwaysEnsure, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "EnsureObject");

	Params::ULog_EnsureObject_Params Parms{};

	Parms.Object = Object;
	Parms.bAlwaysEnsure = bAlwaysEnsure;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.EnsureCondition
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAlwaysEnsure                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::EnsureCondition(bool bCondition, bool bAlwaysEnsure, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "EnsureCondition");

	Params::ULog_EnsureCondition_Params Parms{};

	Parms.bCondition = bCondition;
	Parms.bAlwaysEnsure = bAlwaysEnsure;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Dollar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InDollarValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Dollar(float InDollarValue, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Dollar");

	Params::ULog_Dollar_Params Parms{};

	Parms.InDollarValue = InDollarValue;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.DebugMessage_WithCondition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EDebugLogType           LogSeverity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::DebugMessage_WithCondition(enum class EDebugLogType LogSeverity, bool bCondition, const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "DebugMessage_WithCondition");

	Params::ULog_DebugMessage_WithCondition_Params Parms{};

	Parms.LogSeverity = LogSeverity;
	Parms.bCondition = bCondition;
	Parms.Message = Message;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.DebugMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EDebugLogType           LogSeverity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddPrefix                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::DebugMessage(enum class EDebugLogType LogSeverity, const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "DebugMessage");

	Params::ULog_DebugMessage_Params Parms{};

	Parms.LogSeverity = LogSeverity;
	Parms.Message = Message;
	Parms.LoggingOption = LoggingOption;
	Parms.bAddPrefix = bAddPrefix;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.DateTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::DateTime(struct FDateTime& InDateTime, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "DateTime");

	Params::ULog_DateTime_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Data
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InDataValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogDataUnit       DataUnit                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Data(float InDataValue, enum class EDebugLogDataUnit DataUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Data");

	Params::ULog_Data_Params Parms{};

	Parms.InDataValue = InDataValue;
	Parms.DataUnit = DataUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Cya
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Cya(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Cya");

	Params::ULog_Cya_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Crash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FromFunction                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Crash(const class FString& Message, const class FString& FromFunction, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Crash");

	Params::ULog_Crash_Params Parms{};

	Parms.Message = Message;
	Parms.FromFunction = FromFunction;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Color
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Color(struct FLinearColor& InColor, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Color");

	Params::ULog_Color_Params Parms{};

	Parms.InColor = InColor;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.CheckObject
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::CheckObject(class UObject* Object, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "CheckObject");

	Params::ULog_CheckObject_Params Parms{};

	Parms.Object = Object;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.CheckNoReEntry
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:

void ULog::CheckNoReEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "CheckNoReEntry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.CheckNoRecursion
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:

void ULog::CheckNoRecursion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "CheckNoRecursion");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.CheckNoEntry
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:

void ULog::CheckNoEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "CheckNoEntry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.CheckCondition
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::CheckCondition(bool bCondition, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "CheckCondition");

	Params::ULog_CheckCondition_Params Parms{};

	Parms.bCondition = bCondition;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Bye
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Bye(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Bye");

	Params::ULog_Bye_Params Parms{};

	Parms.LoggingOption = LoggingOption;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bBoolToTest                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Bool(bool bBoolToTest, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Bool");

	Params::ULog_Bool_Params Parms{};

	Parms.bBoolToTest = bBoolToTest;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.AssertValue_Integer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogComparisonMethodShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertValue_Integer(int32 Actual, int32 Expected, enum class EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertValue_Integer");

	Params::ULog_AssertValue_Integer_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.ShouldBe = ShouldBe;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertValue_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogComparisonMethodShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertValue_Float(float Actual, float Expected, enum class EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertValue_Float");

	Params::ULog_AssertValue_Float_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.ShouldBe = ShouldBe;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertValue_DateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   Actual                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   Expected                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogComparisonMethodShouldBe                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertValue_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, enum class EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertValue_DateTime");

	Params::ULog_AssertValue_DateTime_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.ShouldBe = ShouldBe;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Vector2D");

	Params::ULog_AssertNotEqual_Vector2D_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Vector");

	Params::ULog_AssertNotEqual_Vector_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Transform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Actual                                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Expected                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Transform");

	Params::ULog_AssertNotEqual_Transform_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bNoScale = bNoScale;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Actual                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Expected                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_String");

	Params::ULog_AssertNotEqual_String_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Rotator");

	Params::ULog_AssertNotEqual_Rotator_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Quat
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       Actual                                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat                       Expected                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Quat");

	Params::ULog_AssertNotEqual_Quat_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Object
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Object");

	Params::ULog_AssertNotEqual_Object_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Name
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Name(class FName Actual, class FName Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Name");

	Params::ULog_AssertNotEqual_Name_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertNotEqual_Color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertNotEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertNotEqual_Color");

	Params::ULog_AssertNotEqual_Color_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Vector2D");

	Params::ULog_AssertEqual_Vector2D_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Vector");

	Params::ULog_AssertEqual_Vector_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Transform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Actual                                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Expected                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Transform");

	Params::ULog_AssertEqual_Transform_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bNoScale = bNoScale;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Actual                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Expected                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_String");

	Params::ULog_AssertEqual_String_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Rotator");

	Params::ULog_AssertEqual_Rotator_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Quat
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       Actual                                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FQuat                       Expected                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Quat");

	Params::ULog_AssertEqual_Quat_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Object
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Object");

	Params::ULog_AssertEqual_Object_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Name
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Name(class FName Actual, class FName Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Name");

	Params::ULog_AssertEqual_Name_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Integer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Integer(int32 Actual, int32 Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Integer");

	Params::ULog_AssertEqual_Integer_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Float(float Actual, float Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Float");

	Params::ULog_AssertEqual_Float_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_DateTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   Actual                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   Expected                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_DateTime");

	Params::ULog_AssertEqual_DateTime_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      Actual                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      Expected                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Color");

	Params::ULog_AssertEqual_Color_Params Parms{};

	Parms.Actual = Actual;
	Parms.Expected = Expected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.AssertEqual_Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bActual                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExpected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::AssertEqual_Bool(bool bActual, bool bExpected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "AssertEqual_Bool");

	Params::ULog_AssertEqual_Bool_Params Parms{};

	Parms.bActual = bActual;
	Parms.bExpected = bExpected;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.Assert_True
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::Assert_True(bool bCondition, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Assert_True");

	Params::ULog_Assert_True_Params Parms{};

	Parms.bCondition = bCondition;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.Assert_IsValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::Assert_IsValid(class UObject* Object, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Assert_IsValid");

	Params::ULog_Assert_IsValid_Params Parms{};

	Parms.Object = Object;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.Assert_False
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bCondition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCrashOnFailure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULog::Assert_False(bool bCondition, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Assert_False");

	Params::ULog_Assert_False_Params Parms{};

	Parms.bCondition = bCondition;
	Parms.Message = Message;
	Parms.bCrashOnFailure = bCrashOnFailure;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Debug.Log.Array_Vector2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Vector2D(const TArray<struct FVector2D>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Vector2D");

	Params::ULog_Array_Vector2D_Params Parms{};

	Parms.InArray = InArray;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Vector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Vector(const TArray<struct FVector>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Vector");

	Params::ULog_Array_Vector_Params Parms{};

	Parms.InArray = InArray;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Transform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>          InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Transform(const TArray<struct FTransform>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Transform");

	Params::ULog_Array_Transform_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Text
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FText>                InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Text(const TArray<class FText>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Text");

	Params::ULog_Array_Text_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_String(const TArray<class FString>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_String");

	Params::ULog_Array_String_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Rotator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRotator>            InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Rotator(const TArray<struct FRotator>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Rotator");

	Params::ULog_Array_Rotator_Params Parms{};

	Parms.InArray = InArray;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Quat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FQuat>               InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Quat(const TArray<struct FQuat>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Quat");

	Params::ULog_Array_Quat_Params Parms{};

	Parms.InArray = InArray;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Object
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Object(TArray<class UObject*>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Object");

	Params::ULog_Array_Object_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Name
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Name(const TArray<class FName>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Name");

	Params::ULog_Array_Name_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Matrix
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMatrix>             InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Matrix(const TArray<struct FMatrix>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Matrix");

	Params::ULog_Array_Matrix_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Int64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int64>                      InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Int64(const TArray<int64>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Int64");

	Params::ULog_Array_Int64_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Int32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Int32(const TArray<int32>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Int32");

	Params::ULog_Array_Int32_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Float(const TArray<float>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Float");

	Params::ULog_Array_Float_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_DateTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDateTime>           InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_DateTime(const TArray<struct FDateTime>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_DateTime");

	Params::ULog_Array_DateTime_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Color
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>        InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bCompact                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Color(const TArray<struct FLinearColor>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Color");

	Params::ULog_Array_Color_Params Parms{};

	Parms.InArray = InArray;
	Parms.bCompact = bCompact;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Array_Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<bool>                       InArray                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Array_Bool(const TArray<bool>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Array_Bool");

	Params::ULog_Array_Bool_Params Parms{};

	Parms.InArray = InArray;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Debug.Log.Angle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InAngleValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDebugLogAngularUnit    AngleUnit                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConvertValueToInt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Suffix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELoggingOptions         LoggingOption                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeToDisplay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ViewportKeyName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULog::Angle(float InAngleValue, enum class EDebugLogAngularUnit AngleUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Log", "Angle");

	Params::ULog_Angle_Params Parms{};

	Parms.InAngleValue = InAngleValue;
	Parms.AngleUnit = AngleUnit;
	Parms.bConvertValueToInt = bConvertValueToInt;
	Parms.Prefix = Prefix;
	Parms.Suffix = Suffix;
	Parms.LoggingOption = LoggingOption;
	Parms.TimeToDisplay = TimeToDisplay;
	Parms.ViewportKeyName = ViewportKeyName;
	Parms.ContextObject = ContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


