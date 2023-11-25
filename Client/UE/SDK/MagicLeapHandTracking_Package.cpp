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
	 * 		Name   -> PredefinedFunction ULiveLinkMagicLeapHandTrackingSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(747);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapHandTrackingGesture                      Gesture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Confidence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14281);
		
		struct
		{
			EMagicLeapHandTrackingGesture                      Gesture;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              Confidence;
		} params;
		params.Gesture = Gesture;
		params.Confidence = Confidence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapHandTrackingGesture>              StaticGesturesToActivate                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingKeypointFilterLevel          KeypointsFilterLevel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingGestureFilterLevel           GestureFilterLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrackingEnabled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(TArray<EMagicLeapHandTrackingGesture> StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14280);
		
		struct
		{
			TArray<EMagicLeapHandTrackingGesture>              StaticGesturesToActivate;
			EMagicLeapHandTrackingKeypointFilterLevel          KeypointsFilterLevel;
			EMagicLeapHandTrackingGestureFilterLevel           GestureFilterLevel;
			bool                                               bTrackingEnabled;
			bool                                               ReturnValue;
		} params;
		params.StaticGesturesToActivate = StaticGesturesToActivate;
		params.KeypointsFilterLevel = KeypointsFilterLevel;
		params.GestureFilterLevel = GestureFilterLevel;
		params.bTrackingEnabled = bTrackingEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(EControllerHand hand)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14279);
		
		struct
		{
			EControllerHand                                    hand;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMagicLeapHandTrackingGesture                      Gesture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14278);
		
		struct
		{
			EMagicLeapHandTrackingGesture                      Gesture;
			unsigned char                                      UnknownData_0001[0x3];
			float                                              ReturnValue;
		} params;
		params.Gesture = Gesture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingKeypoint                     Keypoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutMotionSource                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14277);
		
		struct
		{
			EControllerHand                                    hand;
			EMagicLeapHandTrackingKeypoint                     Keypoint;
			unsigned char                                      UnknownData_0002[0x2];
			class FName                                        OutMotionSource;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		params.Keypoint = Keypoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMotionSource != nullptr)
			*OutMotionSource = params.OutMotionSource;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14276);
		
		struct
		{
			struct FLiveLinkSourceHandle                       SourceHandle;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapGestureTransformSpace                    TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct PCoreUObject_FTransform                     Secondary                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct PCoreUObject_FTransform* Secondary)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14275);
		
		struct
		{
			EControllerHand                                    hand;
			EMagicLeapGestureTransformSpace                    TransformSpace;
			unsigned char                                      UnknownData_0003[0xE];
			struct PCoreUObject_FTransform                     Secondary;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		params.TransformSpace = TransformSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Secondary != nullptr)
			*Secondary = params.Secondary;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingKeypoint                     OutKeyPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(const class FName& MotionSource, EMagicLeapHandTrackingKeypoint* OutKeyPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14274);
		
		struct
		{
			class FName                                        MotionSource;
			EMagicLeapHandTrackingKeypoint                     OutKeyPoint;
			bool                                               ReturnValue;
		} params;
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeyPoint != nullptr)
			*OutKeyPoint = params.OutKeyPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapGestureTransformSpace                    TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct PCoreUObject_FTransform                     Pointer                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, struct PCoreUObject_FTransform* Pointer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14273);
		
		struct
		{
			EControllerHand                                    hand;
			EMagicLeapGestureTransformSpace                    TransformSpace;
			unsigned char                                      UnknownData_0004[0xE];
			struct PCoreUObject_FTransform                     Pointer;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		params.TransformSpace = TransformSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pointer != nullptr)
			*Pointer = params.Pointer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        HandCenterNormalized                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(EControllerHand hand, struct FVector* HandCenterNormalized)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14272);
		
		struct
		{
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0005[0x3];
			struct FVector                        HandCenterNormalized;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandCenterNormalized != nullptr)
			*HandCenterNormalized = params.HandCenterNormalized;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct PCoreUObject_FTransform                     HandCenter                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(EControllerHand hand, struct PCoreUObject_FTransform* HandCenter)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14271);
		
		struct
		{
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0006[0xF];
			struct PCoreUObject_FTransform                     HandCenter;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HandCenter != nullptr)
			*HandCenter = params.HandCenter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingKeypoint                     Keypoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapGestureTransformSpace                    TransformSpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct PCoreUObject_FTransform                     Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, struct PCoreUObject_FTransform* Transform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14270);
		
		struct
		{
			EControllerHand                                    hand;
			EMagicLeapHandTrackingKeypoint                     Keypoint;
			EMagicLeapGestureTransformSpace                    TransformSpace;
			unsigned char                                      UnknownData_0007[0xD];
			struct PCoreUObject_FTransform                     Transform;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		params.Keypoint = Keypoint;
		params.TransformSpace = TransformSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct PCoreUObject_FTransform>             Keypoints                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(EControllerHand hand, TArray<struct PCoreUObject_FTransform>* Keypoints)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14269);
		
		struct
		{
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0008[0x7];
			TArray<struct PCoreUObject_FTransform>             Keypoints;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keypoints != nullptr)
			*Keypoints = params.Keypoints;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Confidence                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(EControllerHand hand, float* Confidence)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14268);
		
		struct
		{
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0009[0x3];
			float                                              Confidence;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Confidence != nullptr)
			*Confidence = params.Confidence;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingGesture                      Gesture                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture* Gesture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14267);
		
		struct
		{
			EControllerHand                                    hand;
			EMagicLeapHandTrackingGesture                      Gesture;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gesture != nullptr)
			*Gesture = params.Gesture;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EMagicLeapHandTrackingGesture>              ActiveStaticGestures                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingKeypointFilterLevel          KeypointsFilterLevel                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMagicLeapHandTrackingGestureFilterLevel           GestureFilterLevel                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrackingEnabled                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14266);
		
		struct
		{
			TArray<EMagicLeapHandTrackingGesture>              ActiveStaticGestures;
			EMagicLeapHandTrackingKeypointFilterLevel          KeypointsFilterLevel;
			EMagicLeapHandTrackingGestureFilterLevel           GestureFilterLevel;
			bool                                               bTrackingEnabled;
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveStaticGestures != nullptr)
			*ActiveStaticGestures = params.ActiveStaticGestures;
		if (KeypointsFilterLevel != nullptr)
			*KeypointsFilterLevel = params.KeypointsFilterLevel;
		if (GestureFilterLevel != nullptr)
			*GestureFilterLevel = params.GestureFilterLevel;
		if (bTrackingEnabled != nullptr)
			*bTrackingEnabled = params.bTrackingEnabled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapHandTrackingFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapHandTrackingFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(748);
		return ptr;
	}

}


