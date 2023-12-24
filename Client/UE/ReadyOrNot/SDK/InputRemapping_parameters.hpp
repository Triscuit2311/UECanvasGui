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

// 0x30 (0x30 - 0x0)
// Function InputRemapping.InputRemappingNodes.RemoveAxisMapping
struct UInputRemappingNodes_RemoveAxisMapping_Params
{
public:
	struct FAxisMappingStruct                    MappingData;                                       // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function InputRemapping.InputRemappingNodes.RemoveActionMapping
struct UInputRemappingNodes_RemoveActionMapping_Params
{
public:
	struct FActionMappingStruct                  MappingData;                                       // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function InputRemapping.InputRemappingNodes.RebindAxisMapping
struct UInputRemappingNodes_RebindAxisMapping_Params
{
public:
	struct FAxisMappingStruct                    AxisMapping;                                       // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FAxisMappingStruct                    NewData;                                           // 0x28(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function InputRemapping.InputRemappingNodes.RebindActionMapping
struct UInputRemappingNodes_RebindActionMapping_Params
{
public:
	struct FActionMappingStruct                  ActionMapping;                                     // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	struct FActionMappingStruct                  NewData;                                           // 0x28(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function InputRemapping.InputRemappingNodes.GetAllAxisMappings
struct UInputRemappingNodes_GetAllAxisMappings_Params
{
public:
	struct FAxisMappingStruct                    FilterData;                                        // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	TArray<enum class EAxisMappingFilter>        Filters;                                           // 0x28(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAxisMappingStruct>            AxisMappings;                                      // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function InputRemapping.InputRemappingNodes.GetAllActionMappings
struct UInputRemappingNodes_GetAllActionMappings_Params
{
public:
	struct FActionMappingStruct                  FilterData;                                        // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	TArray<enum class EActionMappingFilter>      Filters;                                           // 0x28(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActionMappingStruct>          ActionMappings;                                    // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function InputRemapping.InputRemappingNodes.CreateNewAxisMapping
struct UInputRemappingNodes_CreateNewAxisMapping_Params
{
public:
	struct FAxisMappingStruct                    MappingData;                                       // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function InputRemapping.InputRemappingNodes.CreateNewActionMapping
struct UInputRemappingNodes_CreateNewActionMapping_Params
{
public:
	struct FActionMappingStruct                  MappingData;                                       // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping
struct UInputRemappingNodes_AxisMappingNotEqualActionMapping_Params
{
public:
	struct FAxisMappingStruct                    A;                                                 // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAxisMappingStruct                    B;                                                 // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_340[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping
struct UInputRemappingNodes_AxisMappingEqualActionMapping_Params
{
public:
	struct FAxisMappingStruct                    A;                                                 // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAxisMappingStruct                    B;                                                 // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_342[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping
struct UInputRemappingNodes_ActionMappingNotEqualActionMapping_Params
{
public:
	struct FActionMappingStruct                  A;                                                 // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActionMappingStruct                  B;                                                 // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping
struct UInputRemappingNodes_ActionMappingEqualActionMapping_Params
{
public:
	struct FActionMappingStruct                  A;                                                 // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActionMappingStruct                  B;                                                 // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_348[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


