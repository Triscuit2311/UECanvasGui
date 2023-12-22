#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
struct UDLSSLibrary_SetDLSSSharpness_Params
{
public:
	float                                        Sharpness;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
struct UDLSSLibrary_SetDLSSMode_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
struct UDLSSLibrary_QueryDLSSSupport_Params
{
public:
	enum class EUDLSSSupport                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
struct UDLSSLibrary_IsDLSSSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
struct UDLSSLibrary_IsDLSSModeSupported_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
struct UDLSSLibrary_IsDLAAEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
struct UDLSSLibrary_GetSupportedDLSSModes_Params
{
public:
	TArray<enum class EUDLSSMode>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
struct UDLSSLibrary_GetDLSSSharpness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
struct UDLSSLibrary_GetDLSSScreenPercentageRange_Params
{
public:
	float                                        MinScreenPercentage;                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxScreenPercentage;                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
struct UDLSSLibrary_GetDLSSModeInformation_Params
{
public:
	enum class EUDLSSMode                        DLSSMode;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenResolution;                                  // 0x4(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSupported;                                      // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OptimalScreenPercentage;                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFixedScreenPercentage;                          // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinScreenPercentage;                               // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxScreenPercentage;                               // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OptimalSharpness;                                  // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
struct UDLSSLibrary_GetDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
struct UDLSSLibrary_GetDLSSMinimumDriverVersion_Params
{
public:
	int32                                        MinDriverVersionMajor;                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinDriverVersionMinor;                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
struct UDLSSLibrary_GetDefaultDLSSMode_Params
{
public:
	enum class EUDLSSMode                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
struct UDLSSLibrary_EnableDLAA_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


