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

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct ATemplateSequenceActor_SetSequence_Params
{
public:
	class UTemplateSequence*                     InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct ATemplateSequenceActor_SetBinding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct ATemplateSequenceActor_LoadSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct ATemplateSequenceActor_GetSequencePlayer_Params
{
public:
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct ATemplateSequenceActor_GetSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequence*                     TemplateSequence;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings   Settings;                                          // 0x10(0x14)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATemplateSequenceActor*                OutActor;                                          // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


