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
	 * 		Name   -> PredefinedFunction UDebugLogLibrarySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDebugLogLibrarySettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(236);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Yo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Yo(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12871);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0000[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0001[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Yes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Yes(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12870);
		
		struct
		{
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0002[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0003[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Wassup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Wassup(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12869);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0004[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0005[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Warning_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Warning_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12868);
		
		struct
		{
			class FString                                      Message;
			bool                                               bCondition;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0006[0x1];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Warning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Warning(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12867);
		
		struct
		{
			class FString                                      Message;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0007[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InVolumeValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogVolumeUnit                                VolumeUnit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Volume(float InVolumeValue, EDebugLogVolumeUnit VolumeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12866);
		
		struct
		{
			float                                              InVolumeValue;
			EDebugLogVolumeUnit                                VolumeUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0008[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0009[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InVolumeValue = InVolumeValue;
		params.VolumeUnit = VolumeUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      InVector2D                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Vector2D(const struct FVector2D& InVector2D, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12865);
		
		struct
		{
			struct FVector2D                      InVector2D;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0010[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0011[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InVector2D = InVector2D;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Vector(const struct FVector& InVector, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12864);
		
		struct
		{
			struct FVector                        InVector;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0012[0x3];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0013[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InVector = InVector;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Valid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Valid(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12863);
		
		struct
		{
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0014[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0015[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.UnImplemented
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ULog::UnImplemented()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12862);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFormat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Transform(const struct FTransform& InTransform, const class FString& Prefix, bool bFormat, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12861);
		
		struct
		{
			struct FTransform                     InTransform;
			class FString                                      Prefix;
			bool                                               bFormat;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0016[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InTransform = InTransform;
		params.Prefix = Prefix;
		params.bFormat = bFormat;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTimeValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogTimeUnit                                  TimeUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Time(float InTimeValue, EDebugLogTimeUnit TimeUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12860);
		
		struct
		{
			float                                              InTimeValue;
			EDebugLogTimeUnit                                  TimeUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0017[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0018[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InTimeValue = InTimeValue;
		params.TimeUnit = TimeUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Temperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTemperatureValue                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogTemperatureUnit                           TemperatureUnit                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Temperature(float InTemperatureValue, EDebugLogTemperatureUnit TemperatureUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12859);
		
		struct
		{
			float                                              InTemperatureValue;
			EDebugLogTemperatureUnit                           TemperatureUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0019[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0020[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InTemperatureValue = InTemperatureValue;
		params.TemperatureUnit = TemperatureUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Success_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Success_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12858);
		
		struct
		{
			class FString                                      Message;
			bool                                               bCondition;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0021[0x1];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Success(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12857);
		
		struct
		{
			class FString                                      Message;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0022[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.StopDebugTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoDetermineTimeUnit                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogTimeUnit                                  DisplayIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULog::StopDebugTimer(bool bAutoDetermineTimeUnit, EDebugLogTimeUnit DisplayIn, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12856);
		
		struct
		{
			bool                                               bAutoDetermineTimeUnit;
			EDebugLogTimeUnit                                  DisplayIn;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0023[0x1];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0024[0x4];
			class UObject*                                     ContextObject;
			float                                              ReturnValue;
		} params;
		params.bAutoDetermineTimeUnit = bAutoDetermineTimeUnit;
		params.DisplayIn = DisplayIn;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.StartDebugTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::StartDebugTimer(const class FString& Description)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12855);
		
		struct
		{
			class FString                                      Description;
		} params;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Speed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSpeedValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogSpeedUnit                                 SpeedUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Speed(float InSpeedValue, EDebugLogSpeedUnit SpeedUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12854);
		
		struct
		{
			float                                              InSpeedValue;
			EDebugLogSpeedUnit                                 SpeedUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0025[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0026[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InSpeedValue = InSpeedValue;
		params.SpeedUnit = SpeedUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       InRotator                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Rotator(const struct FRotator& InRotator, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12853);
		
		struct
		{
			struct FRotator                       InRotator;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0027[0x3];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0028[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InRotator = InRotator;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuat                          Quaternion                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Quat(const struct FQuat& Quaternion, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12852);
		
		struct
		{
			struct FQuat                          Quaternion;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0029[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0030[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Quaternion = Quaternion;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Percent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Percent(float Number, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12851);
		
		struct
		{
			float                                              Number;
			unsigned char                                      UnknownData_0031[0x4];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0032[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Number = Number;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.ObjectValidity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSilenceOnError                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::ObjectValidity(class UObject* InObject, bool bSilenceOnError, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12850);
		
		struct
		{
			class UObject*                                     InObject;
			bool                                               bSilenceOnError;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0033[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InObject = InObject;
		params.bSilenceOnError = bSilenceOnError;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.ObjectName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSilenceOnError                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::ObjectName(class UObject* InObject, bool bSilenceOnError, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12849);
		
		struct
		{
			class UObject*                                     InObject;
			bool                                               bSilenceOnError;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0034[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InObject = InObject;
		params.bSilenceOnError = bSilenceOnError;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Number_Int_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogNumberSystems                             NumberSystem                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Number_Int_Blueprint(int32_t Number, const class FString& Prefix, const class FString& Suffix, EDebugLogNumberSystems NumberSystem, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12848);
		
		struct
		{
			int32_t                                            Number;
			unsigned char                                      UnknownData_0035[0x4];
			class FString                                      Prefix;
			class FString                                      Suffix;
			EDebugLogNumberSystems                             NumberSystem;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0036[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Number = Number;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.NumberSystem = NumberSystem;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Number_Float_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Number_Float_Blueprint(float Number, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12847);
		
		struct
		{
			float                                              Number;
			unsigned char                                      UnknownData_0037[0x4];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0038[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Number = Number;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.No
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::No(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12846);
		
		struct
		{
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0039[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0040[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.MessageInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FontScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::MessageInWorld(const class FString& Message, const struct FVector& WorldLocation, float FontScale, const class FString& Prefix, const class FString& Suffix, float TimeToDisplay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12845);
		
		struct
		{
			class FString                                      Message;
			struct FVector                        WorldLocation;
			float                                              FontScale;
			class FString                                      Prefix;
			class FString                                      Suffix;
			float                                              TimeToDisplay;
		} params;
		params.Message = Message;
		params.WorldLocation = WorldLocation;
		params.FontScale = FontScale;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.TimeToDisplay = TimeToDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Matrix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMatrix                        InMatrix                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Matrix(const struct FMatrix& InMatrix, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12844);
		
		struct
		{
			struct FMatrix                        InMatrix;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0041[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InMatrix = InMatrix;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Mass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InMassValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogMassUnit                                  MassUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Mass(float InMassValue, EDebugLogMassUnit MassUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12843);
		
		struct
		{
			float                                              InMassValue;
			EDebugLogMassUnit                                  MassUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0042[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0043[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InMassValue = InMassValue;
		params.MassUnit = MassUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.LineBreak_Symbol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Symbol                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::LineBreak_Symbol(const class FString& Symbol, ELoggingOptions LoggingOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12842);
		
		struct
		{
			class FString                                      Symbol;
			ELoggingOptions                                    LoggingOption;
		} params;
		params.Symbol = Symbol;
		params.LoggingOption = LoggingOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.LineBreak
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::LineBreak(ELoggingOptions LoggingOption)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12841);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
		} params;
		params.LoggingOption = LoggingOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Light
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLightValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogLightUnit                                 LightUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Light(float InLightValue, EDebugLogLightUnit LightUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12840);
		
		struct
		{
			float                                              InLightValue;
			EDebugLogLightUnit                                 LightUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0044[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0045[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InLightValue = InLightValue;
		params.LightUnit = LightUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Length
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InLengthValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogLengthUnit                                LengthUnit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Length(float InLengthValue, EDebugLogLengthUnit LengthUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12839);
		
		struct
		{
			float                                              InLengthValue;
			EDebugLogLengthUnit                                LengthUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0046[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0047[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InLengthValue = InLengthValue;
		params.LengthUnit = LengthUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Invalid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Invalid(const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12838);
		
		struct
		{
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0048[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0049[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Info_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Info_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12837);
		
		struct
		{
			class FString                                      Message;
			bool                                               bCondition;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0050[0x1];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Info(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12836);
		
		struct
		{
			class FString                                      Message;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0051[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.InBrackets_Text_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText ULog::InBrackets_Text_Blueprint(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12835);
		
		struct
		{
			class FText                                        Text;
			class FText                                        ReturnValue;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.InBrackets_String_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULog::InBrackets_String_Blueprint(const class FString& String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12834);
		
		struct
		{
			class FString                                      String;
			class FString                                      ReturnValue;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.InBrackets_Name_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULog::InBrackets_Name_Blueprint(const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12833);
		
		struct
		{
			class FName                                        Name;
			class FName                                        ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Hey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Hey(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12832);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0052[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0053[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Hello
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Hello(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12831);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0054[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0055[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Goodbye
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Goodbye(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12830);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0056[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0057[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Frequency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFrequencyValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogFrequencyUnit                             FrequencyUnit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Frequency(float InFrequencyValue, EDebugLogFrequencyUnit FrequencyUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12829);
		
		struct
		{
			float                                              InFrequencyValue;
			EDebugLogFrequencyUnit                             FrequencyUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0058[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0059[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InFrequencyValue = InFrequencyValue;
		params.FrequencyUnit = FrequencyUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Force
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InForceValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogForceUnit                                 ForceUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Force(float InForceValue, EDebugLogForceUnit ForceUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12828);
		
		struct
		{
			float                                              InForceValue;
			EDebugLogForceUnit                                 ForceUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0060[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0061[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InForceValue = InForceValue;
		params.ForceUnit = ForceUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Fatal_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Fatal_WithCondition(const class FString& Message, bool bCondition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12827);
		
		struct
		{
			class FString                                      Message;
			bool                                               bCondition;
		} params;
		params.Message = Message;
		params.bCondition = bCondition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Fatal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Fatal(const class FString& Message)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12826);
		
		struct
		{
			class FString                                      Message;
		} params;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Error_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Error_WithCondition(const class FString& Message, bool bCondition, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12825);
		
		struct
		{
			class FString                                      Message;
			bool                                               bCondition;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0062[0x1];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.bCondition = bCondition;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Error
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Error(const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12824);
		
		struct
		{
			class FString                                      Message;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0063[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.EnsureObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysEnsure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::EnsureObject(class UObject* Object, bool bAlwaysEnsure, const class FString& Message)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12823);
		
		struct
		{
			class UObject*                                     Object;
			bool                                               bAlwaysEnsure;
			unsigned char                                      UnknownData_0064[0x7];
			class FString                                      Message;
		} params;
		params.Object = Object;
		params.bAlwaysEnsure = bAlwaysEnsure;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.EnsureCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysEnsure                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::EnsureCondition(bool bCondition, bool bAlwaysEnsure, const class FString& Message)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12822);
		
		struct
		{
			bool                                               bCondition;
			bool                                               bAlwaysEnsure;
			unsigned char                                      UnknownData_0065[0x6];
			class FString                                      Message;
		} params;
		params.bCondition = bCondition;
		params.bAlwaysEnsure = bAlwaysEnsure;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Dollar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDollarValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Dollar(float InDollarValue, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12821);
		
		struct
		{
			float                                              InDollarValue;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0066[0x3];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0067[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InDollarValue = InDollarValue;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.DebugMessage_WithCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebugLogType                                      LogSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::DebugMessage_WithCondition(EDebugLogType LogSeverity, bool bCondition, const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12820);
		
		struct
		{
			EDebugLogType                                      LogSeverity;
			bool                                               bCondition;
			unsigned char                                      UnknownData_0068[0x6];
			class FString                                      Message;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0069[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.LogSeverity = LogSeverity;
		params.bCondition = bCondition;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.DebugMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDebugLogType                                      LogSeverity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAddPrefix                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::DebugMessage(EDebugLogType LogSeverity, const class FString& Message, ELoggingOptions LoggingOption, bool bAddPrefix, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12819);
		
		struct
		{
			EDebugLogType                                      LogSeverity;
			unsigned char                                      UnknownData_0070[0x7];
			class FString                                      Message;
			ELoggingOptions                                    LoggingOption;
			bool                                               bAddPrefix;
			unsigned char                                      UnknownData_0071[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.LogSeverity = LogSeverity;
		params.Message = Message;
		params.LoggingOption = LoggingOption;
		params.bAddPrefix = bAddPrefix;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                      InDateTime                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::DateTime(const struct FDateTime& InDateTime, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12818);
		
		struct
		{
			struct FDateTime                      InDateTime;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0072[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InDateTime = InDateTime;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDataValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogDataUnit                                  DataUnit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Data(float InDataValue, EDebugLogDataUnit DataUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12817);
		
		struct
		{
			float                                              InDataValue;
			EDebugLogDataUnit                                  DataUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0073[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0074[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InDataValue = InDataValue;
		params.DataUnit = DataUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Cya
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Cya(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12816);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0075[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0076[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Crash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FromFunction                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Crash(const class FString& Message, const class FString& FromFunction, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12815);
		
		struct
		{
			class FString                                      Message;
			class FString                                      FromFunction;
			class UObject*                                     ContextObject;
		} params;
		params.Message = Message;
		params.FromFunction = FromFunction;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Color(const struct FLinearColor& InColor, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12814);
		
		struct
		{
			struct FLinearColor                                InColor;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0077[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0078[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InColor = InColor;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::CheckObject(class UObject* Object, const class FString& Message)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12813);
		
		struct
		{
			class UObject*                                     Object;
			class FString                                      Message;
		} params;
		params.Object = Object;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckNoReEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ULog::CheckNoReEntry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12812);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckNoRecursion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ULog::CheckNoRecursion()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12811);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckNoEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void ULog::CheckNoEntry()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12810);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.CheckCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::CheckCondition(bool bCondition, const class FString& Message)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12809);
		
		struct
		{
			bool                                               bCondition;
			unsigned char                                      UnknownData_0079[0x7];
			class FString                                      Message;
		} params;
		params.bCondition = bCondition;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Bye
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Bye(ELoggingOptions LoggingOption, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12808);
		
		struct
		{
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0080[0x3];
			class FName                                        ViewportKeyName;
			unsigned char                                      UnknownData_0081[0x4];
			class UObject*                                     ContextObject;
		} params;
		params.LoggingOption = LoggingOption;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBoolToTest                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Bool(bool bBoolToTest, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12807);
		
		struct
		{
			bool                                               bBoolToTest;
			unsigned char                                      UnknownData_0082[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0083[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.bBoolToTest = bBoolToTest;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertValue_Integer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogComparisonMethod                          ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertValue_Integer(int32_t Actual, int32_t Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12806);
		
		struct
		{
			int32_t                                            Actual;
			int32_t                                            Expected;
			EDebugLogComparisonMethod                          ShouldBe;
			unsigned char                                      UnknownData_0084[0x7];
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0085[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.ShouldBe = ShouldBe;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertValue_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogComparisonMethod                          ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertValue_Float(float Actual, float Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12805);
		
		struct
		{
			float                                              Actual;
			float                                              Expected;
			EDebugLogComparisonMethod                          ShouldBe;
			unsigned char                                      UnknownData_0086[0x7];
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0087[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.ShouldBe = ShouldBe;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertValue_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                      Actual                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                      Expected                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogComparisonMethod                          ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertValue_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, EDebugLogComparisonMethod ShouldBe, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12804);
		
		struct
		{
			struct FDateTime                      Actual;
			struct FDateTime                      Expected;
			EDebugLogComparisonMethod                          ShouldBe;
			unsigned char                                      UnknownData_0088[0x7];
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0089[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.ShouldBe = ShouldBe;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12803);
		
		struct
		{
			struct FVector2D                      Actual;
			struct FVector2D                      Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0090[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12802);
		
		struct
		{
			struct FVector                        Actual;
			struct FVector                        Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0091[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12801);
		
		struct
		{
			struct FTransform                     Actual;
			struct FTransform                     Expected;
			class FString                                      Message;
			bool                                               bNoScale;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0092[0x1];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bNoScale = bNoScale;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Actual                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Expected                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12800);
		
		struct
		{
			class FString                                      Actual;
			class FString                                      Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0093[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12799);
		
		struct
		{
			struct FRotator                       Actual;
			struct FRotator                       Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0094[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuat                          Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FQuat                          Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12798);
		
		struct
		{
			struct FQuat                          Actual;
			struct FQuat                          Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0095[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Object
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12797);
		
		struct
		{
			class UObject*                                     Actual;
			class UObject*                                     Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0096[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Name(const class FName& Actual, const class FName& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12796);
		
		struct
		{
			class FName                                        Actual;
			class FName                                        Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0097[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertNotEqual_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FColor                         Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                         Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertNotEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12795);
		
		struct
		{
			struct FColor                         Actual;
			struct FColor                         Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0098[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12794);
		
		struct
		{
			struct FVector2D                      Actual;
			struct FVector2D                      Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0099[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12793);
		
		struct
		{
			struct FVector                        Actual;
			struct FVector                        Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0100[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const class FString& Message, bool bNoScale, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12792);
		
		struct
		{
			struct FTransform                     Actual;
			struct FTransform                     Expected;
			class FString                                      Message;
			bool                                               bNoScale;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0101[0x1];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bNoScale = bNoScale;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Actual                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Expected                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_String(const class FString& Actual, const class FString& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12791);
		
		struct
		{
			class FString                                      Actual;
			class FString                                      Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0102[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12790);
		
		struct
		{
			struct FRotator                       Actual;
			struct FRotator                       Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0103[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuat                          Actual                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FQuat                          Expected                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Quat(const struct FQuat& Actual, const struct FQuat& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12789);
		
		struct
		{
			struct FQuat                          Actual;
			struct FQuat                          Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0104[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Object
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Object(class UObject* Actual, class UObject* Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12788);
		
		struct
		{
			class UObject*                                     Actual;
			class UObject*                                     Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0105[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Name(const class FName& Actual, const class FName& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12787);
		
		struct
		{
			class FName                                        Actual;
			class FName                                        Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0106[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Integer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Integer(int32_t Actual, int32_t Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12786);
		
		struct
		{
			int32_t                                            Actual;
			int32_t                                            Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0107[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Float(float Actual, float Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12785);
		
		struct
		{
			float                                              Actual;
			float                                              Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0108[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                      Actual                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDateTime                      Expected                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_DateTime(const struct FDateTime& Actual, const struct FDateTime& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12784);
		
		struct
		{
			struct FDateTime                      Actual;
			struct FDateTime                      Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0109[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FColor                         Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                         Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Color(const struct FColor& Actual, const struct FColor& Expected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12783);
		
		struct
		{
			struct FColor                         Actual;
			struct FColor                         Expected;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0110[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Actual = Actual;
		params.Expected = Expected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.AssertEqual_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActual                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExpected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::AssertEqual_Bool(bool bActual, bool bExpected, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12782);
		
		struct
		{
			bool                                               bActual;
			bool                                               bExpected;
			unsigned char                                      UnknownData_0111[0x6];
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0112[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.bActual = bActual;
		params.bExpected = bExpected;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Assert_True
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::Assert_True(bool bCondition, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12781);
		
		struct
		{
			bool                                               bCondition;
			unsigned char                                      UnknownData_0113[0x7];
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0114[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.bCondition = bCondition;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Assert_IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::Assert_IsValid(class UObject* Object, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12780);
		
		struct
		{
			class UObject*                                     Object;
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0115[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.Object = Object;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Assert_False
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCondition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCrashOnFailure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULog::Assert_False(bool bCondition, const class FString& Message, bool bCrashOnFailure, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12779);
		
		struct
		{
			bool                                               bCondition;
			unsigned char                                      UnknownData_0116[0x7];
			class FString                                      Message;
			bool                                               bCrashOnFailure;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0117[0x2];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
			bool                                               ReturnValue;
		} params;
		params.bCondition = bCondition;
		params.Message = Message;
		params.bCrashOnFailure = bCrashOnFailure;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector2D>              inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Vector2D(TArray<struct FVector2D> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12778);
		
		struct
		{
			TArray<struct FVector2D>              inArray;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0118[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0119[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Vector(TArray<struct FVector> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12777);
		
		struct
		{
			TArray<struct FVector>                inArray;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0120[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0121[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Transform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTransform>             inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Transform(TArray<struct FTransform> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12776);
		
		struct
		{
			TArray<struct FTransform>             inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0122[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Text(TArray<class FText> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12775);
		
		struct
		{
			TArray<class FText>                                inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0123[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_String(TArray<class FString> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12774);
		
		struct
		{
			TArray<class FString>                              inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0124[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRotator>               inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Rotator(TArray<struct FRotator> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12773);
		
		struct
		{
			TArray<struct FRotator>               inArray;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0125[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0126[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Quat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FQuat>                  inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Quat(TArray<struct FQuat> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12772);
		
		struct
		{
			TArray<struct FQuat>                  inArray;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0127[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0128[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Name(TArray<class FName> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12771);
		
		struct
		{
			TArray<class FName>                                inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0129[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Matrix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMatrix>                inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Matrix(TArray<struct FMatrix> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12770);
		
		struct
		{
			TArray<struct FMatrix>                inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0130[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Int64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int64_t>                                    inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Int64(TArray<int64_t> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12769);
		
		struct
		{
			TArray<int64_t>                                    inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0131[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Int32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Int32(TArray<int32_t> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12768);
		
		struct
		{
			TArray<int32_t>                                    inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0132[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Float(TArray<float> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12767);
		
		struct
		{
			TArray<float>                                      inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0133[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_DateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FDateTime>              inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_DateTime(TArray<struct FDateTime> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12766);
		
		struct
		{
			TArray<struct FDateTime>              inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0134[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCompact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Color(TArray<struct FLinearColor> inArray, bool bCompact, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12765);
		
		struct
		{
			TArray<struct FLinearColor>                        inArray;
			bool                                               bCompact;
			unsigned char                                      UnknownData_0135[0x7];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0136[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.bCompact = bCompact;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Array_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       inArray                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Array_Bool(TArray<bool> inArray, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12764);
		
		struct
		{
			TArray<bool>                                       inArray;
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0137[0x3];
			float                                              TimeToDisplay;
			class UObject*                                     ContextObject;
		} params;
		params.inArray = inArray;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Debug.Log.Angle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngleValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDebugLogAngularUnit                               AngleUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bConvertValueToInt                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Prefix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Suffix                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELoggingOptions                                    LoggingOption                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TimeToDisplay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ViewportKeyName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ContextObject                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULog::Angle(float InAngleValue, EDebugLogAngularUnit AngleUnit, bool bConvertValueToInt, const class FString& Prefix, const class FString& Suffix, ELoggingOptions LoggingOption, float TimeToDisplay, const class FName& ViewportKeyName, class UObject* ContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12763);
		
		struct
		{
			float                                              InAngleValue;
			EDebugLogAngularUnit                               AngleUnit;
			bool                                               bConvertValueToInt;
			unsigned char                                      UnknownData_0138[0x2];
			class FString                                      Prefix;
			class FString                                      Suffix;
			ELoggingOptions                                    LoggingOption;
			unsigned char                                      UnknownData_0139[0x3];
			float                                              TimeToDisplay;
			class FName                                        ViewportKeyName;
			class UObject*                                     ContextObject;
		} params;
		params.InAngleValue = InAngleValue;
		params.AngleUnit = AngleUnit;
		params.bConvertValueToInt = bConvertValueToInt;
		params.Prefix = Prefix;
		params.Suffix = Suffix;
		params.LoggingOption = LoggingOption;
		params.TimeToDisplay = TimeToDisplay;
		params.ViewportKeyName = ViewportKeyName;
		params.ContextObject = ContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULog::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(237);
		return ptr;
	}

}


