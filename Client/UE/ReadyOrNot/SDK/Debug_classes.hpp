#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF0 - 0x28)
// Class Debug.DebugLogLibrarySettings
class UDebugLogLibrarySettings : public UObject
{
public:
	uint8                                        bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers : 1; // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCrashGameInShippingBuildConfiguration : 1;        // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSaveLogMessagesToCustomLogFile : 1;               // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3E : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_625[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                InfoColor;                                         // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                ErrorColor;                                        // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                WarningColor;                                      // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                SuccessColor;                                      // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_626[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     ViewportLogKeys;                                   // 0x40(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	uint8                                        bEnableSpecifiers : 1;                             // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ELoggingOptions                   DisplaySpecifiersIn;                               // 0x91(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EDebugLogType, class FString> LogCategorySpecifiers;                             // 0x98(0x50)(Edit, EditFixedSize, Config, NativeAccessSpecifierPublic)
	uint8                                        bLogContext : 1;                                   // Mask: 0x1, PropSize: 0x10xE8(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_40 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ELoggingOptions                   DisplayContextIn;                                  // 0xE9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDebugLogLibrarySettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Debug.Log
class ULog : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULog* GetDefaultObj();

	void Yo(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Yes(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Wassup(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Warning_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Warning(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Volume(float InVolumeValue, enum class EDebugLogVolumeUnit VolumeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Vector2D(struct FVector2D& InVector2D, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Vector(struct FVector& InVector, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Valid(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void UnImplemented();
	void Transform(struct FTransform& InTransform, const class FString& Prefix, bool bFormat, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Time(float InTimeValue, enum class EDebugLogTimeUnit TimeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Temperature(float InTemperatureValue, enum class EDebugLogTemperatureUnit TemperatureUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Success_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Success(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	float StopDebugTimer(bool bAutoDetermineTimeUnit, enum class EDebugLogTimeUnit DisplayIn, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void StartDebugTimer(const class FString& Description);
	void Speed(float InSpeedValue, enum class EDebugLogSpeedUnit SpeedUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Rotator(struct FRotator& InRotator, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Quat(struct FQuat& Quaternion, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Percent(float Number, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void ObjectValidity(class UObject* InObject, bool bSilenceOnError, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void ObjectName(class UObject* InObject, bool bSilenceOnError, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Number_Int_Blueprint(int32 Number, const class FString& Prefix, const class FString& Suffix, enum class EDebugLogNumberSystems NumberSystem, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Number_Float_Blueprint(float Number, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void No(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void MessageInWorld(const class FString& Message, struct FVector& WorldLocation, float FontScale, const class FString& Prefix, const class FString& Suffix, float TimeToDisplay);
	void Matrix(struct FMatrix& InMatrix, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Mass(float InMassValue, enum class EDebugLogMassUnit MassUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void LineBreak_Symbol(const class FString& Symbol, enum class ELoggingOptions LoggingOption);
	void LineBreak(enum class ELoggingOptions LoggingOption);
	void Light(float InLightValue, enum class EDebugLogLightUnit LightUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Length(float InLengthValue, enum class EDebugLogLengthUnit LengthUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Invalid(const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Info_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Info(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	class FText InBrackets_Text_Blueprint(class FText Text);
	class FString InBrackets_String_Blueprint(const class FString& String);
	class FName InBrackets_Name_Blueprint(class FName Name);
	void Hey(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Hello(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Goodbye(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Frequency(float InFrequencyValue, enum class EDebugLogFrequencyUnit FrequencyUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Force(float InForceValue, enum class EDebugLogForceUnit ForceUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Fatal_WithCondition(const class FString& Message, bool bCondition);
	void Fatal(const class FString& Message);
	void Error_WithCondition(const class FString& Message, bool bCondition, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Error(const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void EnsureObject(class UObject* Object, bool bAlwaysEnsure, const class FString& Message);
	void EnsureCondition(bool bCondition, bool bAlwaysEnsure, const class FString& Message);
	void Dollar(float InDollarValue, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void DebugMessage_WithCondition(enum class EDebugLogType LogSeverity, bool bCondition, const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void DebugMessage(enum class EDebugLogType LogSeverity, const class FString& Message, enum class ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void DateTime(struct FDateTime& InDateTime, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Data(float InDataValue, enum class EDebugLogDataUnit DataUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Cya(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Crash(const class FString& Message, const class FString& FromFunction, class UObject* ContextObject);
	void Color(struct FLinearColor& InColor, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void CheckObject(class UObject* Object, const class FString& Message);
	void CheckNoReEntry();
	void CheckNoRecursion();
	void CheckNoEntry();
	void CheckCondition(bool bCondition, const class FString& Message);
	void Bye(enum class ELoggingOptions LoggingOption, class FName ViewportKeyName, class UObject* ContextObject);
	void Bool(bool bBoolToTest, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertValue_Integer(int32 Actual, int32 Expected, enum class EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertValue_Float(float Actual, float Expected, enum class EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertValue_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, enum class EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Name(class FName Actual, class FName Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertNotEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Name(class FName Actual, class FName Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Integer(int32 Actual, int32 Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Float(float Actual, float Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool AssertEqual_Bool(bool bActual, bool bExpected, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool Assert_True(bool bCondition, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool Assert_IsValid(class UObject* Object, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	bool Assert_False(bool bCondition, const class FString& Message, bool bCrashOnFailure, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
	void Array_Vector2D(const TArray<struct FVector2D>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Vector(const TArray<struct FVector>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Transform(const TArray<struct FTransform>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Text(const TArray<class FText>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_String(const TArray<class FString>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Rotator(const TArray<struct FRotator>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Quat(const TArray<struct FQuat>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Object(TArray<class UObject*>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Name(const TArray<class FName>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Matrix(const TArray<struct FMatrix>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Int64(const TArray<int64>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Int32(const TArray<int32>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Float(const TArray<float>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_DateTime(const TArray<struct FDateTime>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Color(const TArray<struct FLinearColor>& InArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Array_Bool(const TArray<bool>& InArray, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
	void Angle(float InAngleValue, enum class EDebugLogAngularUnit AngleUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, enum class ELoggingOptions LoggingOption, float TimeToDisplay, class FName ViewportKeyName, class UObject* ContextObject);
};

}


