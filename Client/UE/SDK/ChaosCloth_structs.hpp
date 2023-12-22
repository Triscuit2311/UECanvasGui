#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EChaosClothTetherMode : uint8
{
	FastTetherFastLength           = 0,
	AccurateTetherFastLength       = 1,
	AccurateTetherAccurateLength   = 2,
	MaxChaosClothTetherMode        = 3,
	EChaosClothTetherMode_MAX      = 4,
};

enum class EChaosWeightMapTarget : uint8
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	AnimDriveDamping               = 5,
	TetherStiffness                = 6,
	EChaosWeightMapTarget_MAX      = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ChaosCloth.ChaosClothWeightedValue
struct FChaosClothWeightedValue
{
public:
	float                                        Low;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        High;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


