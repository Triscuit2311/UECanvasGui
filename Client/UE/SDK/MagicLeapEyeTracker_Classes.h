#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * Class MagicLeapEyeTracker.MagicLeapEyeTrackerFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool GetEyeBlinkState(struct FMagicLeapEyeBlinkState* BlinkState);
		EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
