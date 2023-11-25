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
	 * 		Name   -> PredefinedFunction UFixedFrameRateCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFixedFrameRateCustomTimeStep::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1792);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenlockedCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGenlockedCustomTimeStep::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1793);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenlockedFixedRateCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGenlockedFixedRateCustomTimeStep::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1794);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenlockedTimecodeProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGenlockedTimecodeProvider::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1796);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  SourceTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SourceRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  DestinationRate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameTime                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17310);
		
		struct
		{
			struct FFrameTime                                  SourceTime;
			struct FFrameRate                                  SourceRate;
			struct FFrameRate                                  DestinationRate;
			struct FFrameTime                                  ReturnValue;
		} params;
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.DestinationRate = DestinationRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17309);
		
		struct
		{
			struct FFrameNumber                                A;
			int32_t                                            B;
			struct FFrameNumber                                ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17308);
		
		struct
		{
			struct FFrameNumber                                A;
			struct FFrameNumber                                B;
			struct FFrameNumber                                ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameTime                                  SourceTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SourceRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SnapToRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameTime                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17307);
		
		struct
		{
			struct FFrameTime                                  SourceTime;
			struct FFrameRate                                  SourceRate;
			struct FFrameRate                                  SnapToRate;
			struct FFrameTime                                  ReturnValue;
		} params;
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.SnapToRate = SnapToRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameTime                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17306);
		
		struct
		{
			float                                              TimeInSeconds;
			struct FFrameRate                                  FrameRate;
			struct FFrameTime                                  ReturnValue;
		} params;
		params.TimeInSeconds = TimeInSeconds;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17305);
		
		struct
		{
			struct FFrameNumber                                A;
			int32_t                                            B;
			struct FFrameNumber                                ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  OtherFramerate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17304);
		
		struct
		{
			struct FFrameRate                                  InFrameRate;
			struct FFrameRate                                  OtherFramerate;
			bool                                               ReturnValue;
		} params;
		params.InFrameRate = InFrameRate;
		params.OtherFramerate = OtherFramerate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTimeManagementBlueprintLibrary::IsValid_Framerate(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17303);
		
		struct
		{
			struct FFrameRate                                  InFrameRate;
			bool                                               ReturnValue;
		} params;
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17302);
		
		struct
		{
			struct FFrameRate                                  ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimecode                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17301);
		
		struct
		{
			struct FTimecode                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17300);
		
		struct
		{
			struct FFrameNumber                                A;
			int32_t                                            B;
			struct FFrameNumber                                ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimecode                                   InTimecode                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceSignDisplay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17299);
		
		struct
		{
			struct FTimecode                                   InTimecode;
			bool                                               bForceSignDisplay;
			unsigned char                                      UnknownData_0000[0x3];
			class FString                                      ReturnValue;
		} params;
		params.InTimecode = InTimecode;
		params.bForceSignDisplay = bForceSignDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InFrameTime                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17298);
		
		struct
		{
			struct FQualifiedFrameTime                         InFrameTime;
			float                                              ReturnValue;
		} params;
		params.InFrameTime = InFrameTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17297);
		
		struct
		{
			struct FFrameRate                                  InFrameRate;
			float                                              ReturnValue;
		} params;
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                InFrameNumber                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17296);
		
		struct
		{
			struct FFrameNumber                                InFrameNumber;
			int32_t                                            ReturnValue;
		} params;
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17295);
		
		struct
		{
			struct FFrameNumber                                A;
			int32_t                                            B;
			struct FFrameNumber                                ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17294);
		
		struct
		{
			struct FFrameNumber                                A;
			struct FFrameNumber                                B;
			struct FFrameNumber                                ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeManagementBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTimeManagementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1797);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynchronizationSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTimeSynchronizationSource::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1798);
		return ptr;
	}

}


