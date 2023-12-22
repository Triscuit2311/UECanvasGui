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

// 0xF0 (0xF0 - 0x0)
// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFromMemoryAsync
struct UModioSubmissionExtensionLibrary_K2_SubmitNewModFromMemoryAsync_Params
{
public:
	struct FModioModCreationHandle               Handle;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FModioCreateModParams                 Params;                                            // 0x8(0xC8)(Parm, NativeAccessSpecifierPublic)
	TArray<uint8>                                PngData;                                           // 0xD0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xE0(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
struct UModioSubmissionExtensionLibrary_K2_SubmitNewModFileForModFromMemory_Params
{
public:
	class UModioSubsystem*                       Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           Mod;                                               // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioCreateModFileMemoryParams       Params;                                            // 0x10(0x60)(Parm, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitModChangesFromMemoryAsync
struct UModioSubmissionExtensionLibrary_K2_SubmitModChangesFromMemoryAsync_Params
{
public:
	struct FModioModID                           Mod;                                               // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioEditModParams                   Params;                                            // 0x8(0xD0)(Parm, NativeAccessSpecifierPublic)
	TArray<uint8>                                PngData;                                           // 0xD8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0xE8(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
struct UModioSubmissionExtensionLibrary_K2_LoadModFileToMemory_Params
{
public:
	class UModioSubsystem*                       Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModioModID                           ModId;                                             // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ModData;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


