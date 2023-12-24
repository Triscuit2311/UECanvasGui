#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC0 - 0xB0)
// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
class UMagicLeapLightingTrackingComponent : public UActorComponent
{
public:
	bool                                         UseGlobalAmbience;                                 // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseColorTemp;                                      // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D8[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapLightingTrackingComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
class UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapLightEstimationFunctionLibrary* GetDefaultObj();

	bool IsTrackerValid();
	bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState* ColorTemperatureState);
	bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState* GlobalAmbientState);
	void DestroyTracker();
	bool CreateTracker();
};

}


