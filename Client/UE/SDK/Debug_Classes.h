#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Debug.DebugLogLibrarySettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UDebugLogLibrarySettings : public UObject
	{
	public:
		bool                                                         bUseTwosComplimentForDecimalToHexConversionOnNegativeNumbers : 1; // 0x0028(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bCrashGameInShippingBuildConfiguration : 1;              // 0x0028(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bSaveLogMessagesToCustomLogFile : 1;                     // 0x0028(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                   InfoColor;                                               // 0x002C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                   ErrorColor;                                              // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                   WarningColor;                                            // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                   SuccessColor;                                            // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, int32_t>                                   ViewportLogKeys;                                         // 0x0040(0x0050) Edit, Config, NativeAccessSpecifierPublic
		bool                                                         bEnableSpecifiers : 1;                                   // 0x0090(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoggingOptions                                              DisplaySpecifiersIn;                                     // 0x0091(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x6];                                   // 0x0092(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EDebugLogType, class FString>                           LogCategorySpecifiers;                                   // 0x0098(0x0050) Edit, EditFixedSize, Config, NativeAccessSpecifierPublic
		bool                                                         bLogContext : 1;                                         // 0x00E8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoggingOptions                                              DisplayContextIn;                                        // 0x00E9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Debug.Log
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULog : public UBlueprintFunctionLibrary
	{
	public:
		void Yo(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Yes(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Wassup(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Warning_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Warning(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Volume(float InVolumeValue, EDebugLogVolumeUnit VolumeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Vector2D(const struct FVector2D& InVector2D, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Vector(const struct FVector& InVector, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Valid(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void UnImplemented();
		void Transform(const struct FTransform& InTransform, const class FString& Prefix, bool bFormat, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Time(float InTimeValue, EDebugLogTimeUnit TimeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Temperature(float InTemperatureValue, EDebugLogTemperatureUnit TemperatureUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Success_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Success(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		float StopDebugTimer(bool bAutoDetermineTimeUnit, EDebugLogTimeUnit DisplayIn, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void StartDebugTimer(const class FString& Description);
		void Speed(float InSpeedValue, EDebugLogSpeedUnit SpeedUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Rotator(const struct FRotator& InRotator, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Quat(const struct FQuat& Quaternion, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Percent(float Number, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void ObjectValidity(class UObject* InObject, bool bSilenceOnError, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void ObjectName(class UObject* InObject, bool bSilenceOnError, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Number_Int_Blueprint(int32_t Number, const class FString& Prefix, const class FString& Suffix, EDebugLogNumberSystems NumberSystem, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Number_Float_Blueprint(float Number, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void No(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void MessageInWorld(const class FString& Message, const struct FVector& WorldLocation, float FontScale, const class FString& Prefix, const class FString& Suffix, float TimeToDisplay);
		void Matrix(const struct FMatrix& InMatrix, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Mass(float InMassValue, EDebugLogMassUnit MassUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void LineBreak_Symbol(const class FString& Symbol, ELoggingOptions LoggingOption);
		void LineBreak(ELoggingOptions LoggingOption);
		void Light(float InLightValue, EDebugLogLightUnit LightUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Length(float InLengthValue, EDebugLogLengthUnit LengthUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Invalid(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Info_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Info(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		class FText InBrackets_Text_Blueprint(const class FText& Text);
		class FString InBrackets_String_Blueprint(const class FString& String);
		class FName InBrackets_Name_Blueprint(const class FName& Name);
		void Hey(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Hello(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Goodbye(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Frequency(float InFrequencyValue, EDebugLogFrequencyUnit FrequencyUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Force(float InForceValue, EDebugLogForceUnit ForceUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Fatal_WithCondition(const class FString& Message, bool bCondition);
		void Fatal(const class FString& Message);
		void Error_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Error(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void EnsureObject(class UObject* Object, bool bAlwaysEnsure, const class FString& Message);
		void EnsureCondition(bool bCondition, bool bAlwaysEnsure, const class FString& Message);
		void Dollar(float InDollarValue, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void DebugMessage_WithCondition(EDebugLogType LogSeverity, bool bCondition, const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void DebugMessage(EDebugLogType LogSeverity, const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void DateTime(const struct FDateTime& InDateTime, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Data(float InDataValue, EDebugLogDataUnit DataUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Cya(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Crash(const class FString& Message, const class FString& FromFunction, class UObject* ContextObject);
		void Color(const struct FLinearColor& InColor, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void CheckObject(class UObject* Object, const class FString& Message);
		void CheckNoReEntry();
		void CheckNoRecursion();
		void CheckNoEntry();
		void CheckCondition(bool bCondition, const class FString& Message);
		void Bye(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Bool(bool bBoolToTest, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertValue_Integer(int32_t Actual, int32_t Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertValue_Float(float Actual, float Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertValue_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Name(const class FName& Actual, const class FName& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertNotEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Name(const class FName& Actual, const class FName& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Integer(int32_t Actual, int32_t Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Float(float Actual, float Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool AssertEqual_Bool(bool bActual, bool bExpected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool Assert_True(bool bCondition, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool Assert_IsValid(class UObject* Object, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		bool Assert_False(bool bCondition, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		void Array_Vector2D(TArray<struct FVector2D> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Vector(TArray<struct FVector> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Transform(TArray<struct FTransform> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Text(TArray<class FText> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_String(TArray<class FString> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Rotator(TArray<struct FRotator> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Quat(TArray<struct FQuat> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Name(TArray<class FName> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Matrix(TArray<struct FMatrix> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Int64(TArray<int64_t> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Int32(TArray<int32_t> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Float(TArray<float> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_DateTime(TArray<struct FDateTime> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Color(TArray<struct FLinearColor> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Array_Bool(TArray<bool> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject);
		void Angle(float InAngleValue, EDebugLogAngularUnit AngleUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
