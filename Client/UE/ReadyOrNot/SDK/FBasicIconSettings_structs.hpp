#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// UserDefinedStruct FBasicIconSettings.FBasicIconSettings
struct FFBasicIconSettings
{
public:
	enum class EIconAnimationStyles              AnimationStyle_2_C5857E2F4AC7D5363326C8B5363D9ADD; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          HighlightColor_7_FCF133C849CA59F3A456E984F1122433; // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnhighlightColor_9_20CEE6F940EC3C0A462D609528F7D138; // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ColorTransitionSpeed_12_2636B2604C9B6A366DD018A588954C28; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


