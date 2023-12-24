#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EXsensRetargetNamingConvention : uint8
{
	Default                        = 0,
	Custom                         = 1,
	Maya                           = 2,
	XSens                          = 3,
	Manual                         = 4,
	EXsensRetargetNamingConvention_MAX = 5,
};

enum class EXsensMapping : uint8
{
	Root                           = 0,
	Pelvis                         = 1,
	L5                             = 2,
	L3                             = 3,
	T12                            = 4,
	T8                             = 5,
	Neck                           = 6,
	Head                           = 7,
	RightShoulder                  = 8,
	RightUpperArm                  = 9,
	RightForeArm                   = 10,
	RightHand                      = 11,
	LeftShoulder                   = 12,
	LeftUpperArm                   = 13,
	LeftForeArm                    = 14,
	LeftHand                       = 15,
	RightUpperLeg                  = 16,
	RightLowerLeg                  = 17,
	RightFoot                      = 18,
	RightToe                       = 19,
	LeftUpperLeg                   = 20,
	LeftLowerLeg                   = 21,
	LeftFoot                       = 22,
	LeftToe                        = 23,
	Prop1                          = 24,
	Prop2                          = 25,
	Prop3                          = 26,
	Prop4                          = 27,
	LeftCarpus                     = 28,
	LeftFirstMC                    = 29,
	LeftFirstPP                    = 30,
	LeftFirstDP                    = 31,
	LeftSecondMC                   = 32,
	LeftSecondPP                   = 33,
	LeftSecondMP                   = 34,
	LeftSecondDP                   = 35,
	LeftThirdMC                    = 36,
	LeftThirdPP                    = 37,
	LeftThirdMP                    = 38,
	LeftThirdDP                    = 39,
	LeftFourthMC                   = 40,
	LeftFourthPP                   = 41,
	LeftFourthMP                   = 42,
	LeftFourthDP                   = 43,
	LeftFifthMC                    = 44,
	LeftFifthPP                    = 45,
	LeftFifthMP                    = 46,
	LeftFifthDP                    = 47,
	RightCarpus                    = 48,
	RightFirstMC                   = 49,
	RightFirstPP                   = 50,
	RightFirstDP                   = 51,
	RightSecondMC                  = 52,
	RightSecondPP                  = 53,
	RightSecondMP                  = 54,
	RightSecondDP                  = 55,
	RightThirdMC                   = 56,
	RightThirdPP                   = 57,
	RightThirdMP                   = 58,
	RightThirdDP                   = 59,
	RightFourthMC                  = 60,
	RightFourthPP                  = 61,
	RightFourthMP                  = 62,
	RightFourthDP                  = 63,
	RightFifthMC                   = 64,
	RightFifthPP                   = 65,
	RightFifthMP                   = 66,
	RightFifthDP                   = 67,
	EXsensMapping_MAX              = 68,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x8 - 0x8)
// ScriptStruct LiveLinkMvnPlugin.RemappingRow
struct FRemappingRow : public FTableRowBase
{
public:
};

// 0x10 (0x20 - 0x10)
// ScriptStruct LiveLinkMvnPlugin.RemappingRowHandle
struct FRemappingRowHandle : public FDataTableRowHandle
{
public:
	enum class EXsensMapping                     XsensRemapId;                                      // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F61[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RemapId;                                           // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F62[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


