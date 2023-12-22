#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMagicLeapLightEstimationCamera : uint8
{
	Left                           = 0,
	Right                          = 1,
	FarLeft                        = 2,
	FarRight                       = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
struct FMagicLeapLightEstimationColorTemperatureState
{
public:
	float                                        ColorTemperatureKelvin;                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AmbientColor;                                      // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             Timestamp;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
struct FMagicLeapLightEstimationAmbientGlobalState
{
public:
	TArray<float>                                AmbientIntensityNits;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                             Timestamp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


