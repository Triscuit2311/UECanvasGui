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
	 * 		Name   -> PredefinedFunction UMatineeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMatineeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(508);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraShakeBase*                            CameraShake                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMatineeCameraShake*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13889);
		
		struct
		{
			class UCameraShakeBase*                            CameraShake;
			class UMatineeCameraShake*                         ReturnValue;
		} params;
		params.CameraShake = CameraShake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShakeFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMatineeCameraShakeFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(512);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USimpleCameraShakePattern::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(503);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConstantCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UConstantCameraShakePattern::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(504);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerlinNoiseCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPerlinNoiseCameraShakePattern::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(513);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaveOscillatorCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UWaveOscillatorCameraShakePattern::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(514);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositeCameraShakePattern.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCompositeCameraShakePattern::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(505);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTestCameraShake::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(502);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneMatineeCameraShakeEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneMatineeCameraShakeEvaluator::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(511);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDefaultCameraShakeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UDefaultCameraShakeBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(506);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMatineeCameraShake*                         ShakeClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCameraShakeSourceComponent*                 SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMatineeCameraShake*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UMatineeCameraShake* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13888);
		
		struct
		{
			class APlayerCameraManager*                        PlayerCameraManager;
			class UMatineeCameraShake*                         ShakeClass;
			class UCameraShakeSourceComponent*                 SourceComponent;
			float                                              Scale;
			ECameraShakePlaySpace                              PlaySpace;
			unsigned char                                      UnknownData_0000[0x3];
			struct FRotator                       UserPlaySpaceRot;
			unsigned char                                      UnknownData_0001[0x4];
			class UMatineeCameraShake*                         ReturnValue;
		} params;
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.SourceComponent = SourceComponent;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMatineeCameraShake*                         ShakeClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECameraShakePlaySpace                              PlaySpace                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       UserPlaySpaceRot                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMatineeCameraShake*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UMatineeCameraShake* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13887);
		
		struct
		{
			class APlayerCameraManager*                        PlayerCameraManager;
			class UMatineeCameraShake*                         ShakeClass;
			float                                              Scale;
			ECameraShakePlaySpace                              PlaySpace;
			unsigned char                                      UnknownData_0002[0x3];
			struct FRotator                       UserPlaySpaceRot;
			unsigned char                                      UnknownData_0003[0x4];
			class UMatineeCameraShake*                         ReturnValue;
		} params;
		params.PlayerCameraManager = PlayerCameraManager;
		params.ShakeClass = ShakeClass;
		params.Scale = Scale;
		params.PlaySpace = PlaySpace;
		params.UserPlaySpaceRot = UserPlaySpaceRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bImmediately                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13886);
		
		struct
		{
			bool                                               bImmediately;
		} params;
		params.bImmediately = bImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMatineeCameraShake::ReceivePlayShake(float Scale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13885);
		
		struct
		{
			float                                              Scale;
		} params;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMatineeCameraShake::ReceiveIsFinished()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13884);
		
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
	 * 		Name   -> Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            POV                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FMinimalViewInfo                            ModifiedPOV                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13883);
		
		struct
		{
			float                                              DeltaTime;
			float                                              Alpha;
			unsigned char                                      UnknownData_0004[0x8];
			struct FMinimalViewInfo                            POV;
			struct FMinimalViewInfo                            ModifiedPOV;
		} params;
		params.DeltaTime = DeltaTime;
		params.Alpha = Alpha;
		params.POV = POV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifiedPOV != nullptr)
			*ModifiedPOV = params.ModifiedPOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatineeCameraShake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMatineeCameraShake::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(507);
		return ptr;
	}

}


