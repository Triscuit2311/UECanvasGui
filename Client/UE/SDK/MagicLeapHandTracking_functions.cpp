#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// (None)

class UClass* ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMagicLeapHandTrackingSourceFactory");

	return Clss;
}


// LiveLinkMagicLeapHandTrackingSourceFactory MagicLeapHandTracking.Default__LiveLinkMagicLeapHandTrackingSourceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMagicLeapHandTrackingSourceFactory* ULiveLinkMagicLeapHandTrackingSourceFactory::GetDefaultObj()
{
	static class ULiveLinkMagicLeapHandTrackingSourceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMagicLeapHandTrackingSourceFactory*>(ULiveLinkMagicLeapHandTrackingSourceFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// (None)

class UClass* UMagicLeapHandTrackingFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagicLeapHandTrackingFunctionLibrary");

	return Clss;
}


// MagicLeapHandTrackingFunctionLibrary MagicLeapHandTracking.Default__MagicLeapHandTrackingFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMagicLeapHandTrackingFunctionLibrary* UMagicLeapHandTrackingFunctionLibrary::GetDefaultObj()
{
	static class UMagicLeapHandTrackingFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagicLeapHandTrackingFunctionLibrary*>(UMagicLeapHandTrackingFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetStaticGestureConfidenceThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapHandTrackingGestureGesture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Confidence                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture, float Confidence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "SetStaticGestureConfidenceThreshold");

	Params::UMagicLeapHandTrackingFunctionLibrary_SetStaticGestureConfidenceThreshold_Params Parms{};

	Parms.Gesture = Gesture;
	Parms.Confidence = Confidence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.SetConfiguration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapHandTrackingGesture>StaticGesturesToActivate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingKeypointFilterLevelKeypointsFilterLevel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingGestureFilterLevelGestureFilterLevel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTrackingEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "SetConfiguration");

	Params::UMagicLeapHandTrackingFunctionLibrary_SetConfiguration_Params Parms{};

	Parms.StaticGesturesToActivate = StaticGesturesToActivate;
	Parms.KeypointsFilterLevel = KeypointsFilterLevel;
	Parms.GestureFilterLevel = GestureFilterLevel;
	Parms.bTrackingEnabled = bTrackingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.IsHoldingControl
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(enum class EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "IsHoldingControl");

	Params::UMagicLeapHandTrackingFunctionLibrary_IsHoldingControl_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetStaticGestureConfidenceThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EMagicLeapHandTrackingGestureGesture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetStaticGestureConfidenceThreshold");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetStaticGestureConfidenceThreshold_Params Parms{};

	Parms.Gesture = Gesture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMotionSourceForHandKeypoint
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingKeypointKeypoint                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OutMotionSource                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetMotionSourceForHandKeypoint");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetMotionSourceForHandKeypoint_Params Parms{};

	Parms.Hand = Hand;
	Parms.Keypoint = Keypoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMotionSource != nullptr)
		*OutMotionSource = Parms.OutMotionSource;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetMagicLeapHandTrackingLiveLinkSource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetMagicLeapHandTrackingLiveLinkSource");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetMagicLeapHandTrackingLiveLinkSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SourceHandle != nullptr)
		*SourceHandle = std::move(Parms.SourceHandle);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandThumbTip
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapGestureTransformSpaceTransformSpace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Secondary                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetHandThumbTip");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetHandThumbTip_Params Parms{};

	Parms.Hand = Hand;
	Parms.TransformSpace = TransformSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Secondary != nullptr)
		*Secondary = std::move(Parms.Secondary);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandKeypointForMotionSource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MotionSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingKeypointOutKeyPoint                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(class FName MotionSource, enum class EMagicLeapHandTrackingKeypoint* OutKeyPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetHandKeypointForMotionSource");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetHandKeypointForMotionSource_Params Parms{};

	Parms.MotionSource = MotionSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutKeyPoint != nullptr)
		*OutKeyPoint = Parms.OutKeyPoint;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandIndexFingerTip
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapGestureTransformSpaceTransformSpace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Pointer                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetHandIndexFingerTip");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetHandIndexFingerTip_Params Parms{};

	Parms.Hand = Hand;
	Parms.TransformSpace = TransformSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pointer != nullptr)
		*Pointer = std::move(Parms.Pointer);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenterNormalized
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HandCenterNormalized                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(enum class EControllerHand Hand, struct FVector* HandCenterNormalized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetHandCenterNormalized");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetHandCenterNormalized_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HandCenterNormalized != nullptr)
		*HandCenterNormalized = std::move(Parms.HandCenterNormalized);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetHandCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  HandCenter                                                       (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(enum class EControllerHand Hand, struct FTransform* HandCenter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetHandCenter");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetHandCenter_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HandCenter != nullptr)
		*HandCenter = std::move(Parms.HandCenter);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypointTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingKeypointKeypoint                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapGestureTransformSpaceTransformSpace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetGestureKeypointTransform");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypointTransform_Params Parms{};

	Parms.Hand = Hand;
	Parms.Keypoint = Keypoint;
	Parms.TransformSpace = TransformSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetGestureKeypoints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Keypoints                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(enum class EControllerHand Hand, TArray<struct FTransform>* Keypoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetGestureKeypoints");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetGestureKeypoints_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Keypoints != nullptr)
		*Keypoints = std::move(Parms.Keypoints);

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGestureConfidence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Confidence                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(enum class EControllerHand Hand, float* Confidence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetCurrentGestureConfidence");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetCurrentGestureConfidence_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Confidence != nullptr)
		*Confidence = Parms.Confidence;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetCurrentGesture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingGestureGesture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingGesture* Gesture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetCurrentGesture");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetCurrentGesture_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Gesture != nullptr)
		*Gesture = Parms.Gesture;

	return Parms.ReturnValue;

}


// Function MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary.GetConfiguration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class EMagicLeapHandTrackingGesture>ActiveStaticGestures                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingKeypointFilterLevelKeypointsFilterLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMagicLeapHandTrackingGestureFilterLevelGestureFilterLevel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTrackingEnabled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture>* ActiveStaticGestures, enum class EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MagicLeapHandTrackingFunctionLibrary", "GetConfiguration");

	Params::UMagicLeapHandTrackingFunctionLibrary_GetConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActiveStaticGestures != nullptr)
		*ActiveStaticGestures = std::move(Parms.ActiveStaticGestures);

	if (KeypointsFilterLevel != nullptr)
		*KeypointsFilterLevel = Parms.KeypointsFilterLevel;

	if (GestureFilterLevel != nullptr)
		*GestureFilterLevel = Parms.GestureFilterLevel;

	if (bTrackingEnabled != nullptr)
		*bTrackingEnabled = Parms.bTrackingEnabled;

	return Parms.ReturnValue;

}

}


