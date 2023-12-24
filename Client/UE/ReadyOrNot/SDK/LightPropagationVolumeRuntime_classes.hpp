#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
class ULightPropagationVolumeBlendable : public UObject
{
public:
	uint8                                        Pad_15B2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLightPropagationVolumeSettings       Settings;                                          // 0x30(0x40)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                        BlendWeight;                                       // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightPropagationVolumeBlendable* GetDefaultObj();

};

}


