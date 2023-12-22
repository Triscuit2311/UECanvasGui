#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x8A0 - 0x860)
// Class FacialAnimation.AudioCurveSourceComponent
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	uint8                                        Pad_1700[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurveSourceBindingName;                            // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveSyncOffset;                                   // 0x870(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1702[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCurveSourceComponent* GetDefaultObj();

};

}


