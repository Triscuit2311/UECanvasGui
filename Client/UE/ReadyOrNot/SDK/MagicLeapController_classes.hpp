#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapController.MagicLeapControllerFunctionLibrary
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapControllerFunctionLibrary* GetDefaultObj();

	bool SetMotionSourceForHand(enum class EControllerHand Hand, class FName MotionSource);
	bool SetControllerTrackingMode(enum class EMagicLeapControllerTrackingMode TrackingMode);
	bool PlayLEDPattern(class FName MotionSource, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayLEDEffect(class FName MotionSource, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayHapticPattern(class FName MotionSource, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity);
	bool PlayControllerLEDEffect(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDEffect LEDEffect, enum class EMagicLeapControllerLEDSpeed LEDSpeed, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayControllerLED(enum class EControllerHand Hand, enum class EMagicLeapControllerLEDPattern LEDPattern, enum class EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
	bool PlayControllerHapticFeedback(enum class EControllerHand Hand, enum class EMagicLeapControllerHapticPattern HapticPattern, enum class EMagicLeapControllerHapticIntensity Intensity);
	int32 MaxSupportedMagicLeapControllers();
	bool IsMLControllerConnected(class FName MotionSource);
	void InvertControllerMapping();
	class FName GetMotionSourceForHand(enum class EControllerHand Hand);
	enum class EMagicLeapControllerType GetMLControllerType(enum class EControllerHand Hand);
	enum class EControllerHand GetHandForMotionSource(class FName MotionSource);
	enum class EMagicLeapControllerType GetControllerType(class FName MotionSource);
	enum class EMagicLeapControllerTrackingMode GetControllerTrackingMode();
	bool GetControllerMapping(int32 ControllerIndex, enum class EControllerHand* Hand);
};

// 0x90 (0x140 - 0xB0)
// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:
	uint8                                        Pad_18FD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTouchpadGestureStart;                            // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTouchpadGestureContinue;                         // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTouchpadGestureEnd;                              // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FE[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapTouchpadGesturesComponent* GetDefaultObj();

};

}


