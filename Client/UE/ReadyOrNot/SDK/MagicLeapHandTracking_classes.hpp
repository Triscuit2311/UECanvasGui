#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkMagicLeapHandTrackingSourceFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapHandTrackingFunctionLibrary* GetDefaultObj();

	void SetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture, float Confidence);
	bool SetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, enum class EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
	bool IsHoldingControl(enum class EControllerHand Hand);
	float GetStaticGestureConfidenceThreshold(enum class EMagicLeapHandTrackingGesture Gesture);
	bool GetMotionSourceForHandKeypoint(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, class FName* OutMotionSource);
	bool GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
	bool GetHandThumbTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Secondary);
	bool GetHandKeypointForMotionSource(class FName MotionSource, enum class EMagicLeapHandTrackingKeypoint* OutKeyPoint);
	bool GetHandIndexFingerTip(enum class EControllerHand Hand, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Pointer);
	bool GetHandCenterNormalized(enum class EControllerHand Hand, struct FVector* HandCenterNormalized);
	bool GetHandCenter(enum class EControllerHand Hand, struct FTransform* HandCenter);
	bool GetGestureKeypointTransform(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingKeypoint Keypoint, enum class EMagicLeapGestureTransformSpace TransformSpace, struct FTransform* Transform);
	bool GetGestureKeypoints(enum class EControllerHand Hand, TArray<struct FTransform>* Keypoints);
	bool GetCurrentGestureConfidence(enum class EControllerHand Hand, float* Confidence);
	bool GetCurrentGesture(enum class EControllerHand Hand, enum class EMagicLeapHandTrackingGesture* Gesture);
	bool GetConfiguration(TArray<enum class EMagicLeapHandTrackingGesture>* ActiveStaticGestures, enum class EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, enum class EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
};

}


