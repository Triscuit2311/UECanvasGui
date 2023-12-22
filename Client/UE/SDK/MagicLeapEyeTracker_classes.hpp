#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapEyeTrackerFunctionLibrary* GetDefaultObj();

	bool GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);
	enum class EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
};

}


