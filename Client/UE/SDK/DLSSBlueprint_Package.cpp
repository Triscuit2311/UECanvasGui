/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12898);
		
		struct
		{
			float                                              Sharpness;
		} params;
		params.Sharpness = Sharpness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDLSSLibrary::SetDLSSMode(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12897);
		
		struct
		{
			EUDLSSMode                                         DLSSMode;
		} params;
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSSupport                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12896);
		
		struct
		{
			EUDLSSSupport                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDLSSLibrary::IsDLSSSupported()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12895);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDLSSLibrary::IsDLSSModeSupported(EUDLSSMode DLSSMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12894);
		
		struct
		{
			EUDLSSMode                                         DLSSMode;
			bool                                               ReturnValue;
		} params;
		params.DLSSMode = DLSSMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDLSSLibrary::IsDLAAEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12893);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EUDLSSMode>                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12892);
		
		struct
		{
			TArray<EUDLSSMode>                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDLSSLibrary::GetDLSSSharpness()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12891);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12890);
		
		struct
		{
			float                                              MinScreenPercentage;
			float                                              MaxScreenPercentage;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ScreenResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSupported                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFixedScreenPercentage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptimalSharpness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDLSSLibrary::GetDLSSModeInformation(EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12889);
		
		struct
		{
			EUDLSSMode                                         DLSSMode;
			unsigned char                                      UnknownData_0000[0x3];
			struct FVector2D                      ScreenResolution;
			bool                                               bIsSupported;
			unsigned char                                      UnknownData_0001[0x3];
			float                                              OptimalScreenPercentage;
			bool                                               bIsFixedScreenPercentage;
			unsigned char                                      UnknownData_0002[0x3];
			float                                              MinScreenPercentage;
			float                                              MaxScreenPercentage;
			float                                              OptimalSharpness;
		} params;
		params.DLSSMode = DLSSMode;
		params.ScreenResolution = ScreenResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSupported != nullptr)
			*bIsSupported = params.bIsSupported;
		if (OptimalScreenPercentage != nullptr)
			*OptimalScreenPercentage = params.OptimalScreenPercentage;
		if (bIsFixedScreenPercentage != nullptr)
			*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
		if (MinScreenPercentage != nullptr)
			*MinScreenPercentage = params.MinScreenPercentage;
		if (MaxScreenPercentage != nullptr)
			*MaxScreenPercentage = params.MaxScreenPercentage;
		if (OptimalSharpness != nullptr)
			*OptimalSharpness = params.OptimalSharpness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUDLSSMode UDLSSLibrary::GetDLSSMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12888);
		
		struct
		{
			EUDLSSMode                                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinDriverVersionMajor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinDriverVersionMinor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32_t* MinDriverVersionMajor, int32_t* MinDriverVersionMinor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12887);
		
		struct
		{
			int32_t                                            MinDriverVersionMajor;
			int32_t                                            MinDriverVersionMinor;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinDriverVersionMajor != nullptr)
			*MinDriverVersionMajor = params.MinDriverVersionMajor;
		if (MinDriverVersionMinor != nullptr)
			*MinDriverVersionMinor = params.MinDriverVersionMinor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDLSSMode                                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12886);
		
		struct
		{
			EUDLSSMode                                         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DLSSBlueprint.DLSSLibrary.EnableDLAA
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UDLSSLibrary::EnableDLAA(bool bEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12885);
		
		struct
		{
			bool                                               bEnabled;
		} params;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDLSSLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDLSSLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(268);
		return ptr;
	}

}


