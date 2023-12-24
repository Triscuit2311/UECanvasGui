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
// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct IMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InConstraintBindingID;                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
public:
	struct FFrameNumber                          InStartOffset;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
public:
	class USoundBase*                            InSound;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
public:
	struct FFrameNumber                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InCameraBindingID;                                 // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
public:
	class FString                                InShotDisplayName;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
public:
	enum class ELevelVisibility                  InVisibility;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
public:
	TArray<class FName>                          InLevelNames;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
public:
	enum class ELevelVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct UMovieSceneParameterSection_RemoveVectorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct UMovieSceneParameterSection_RemoveTransformParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct UMovieSceneParameterSection_RemoveScalarParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct UMovieSceneParameterSection_RemoveColorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct UMovieSceneParameterSection_RemoveBoolParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct UMovieSceneParameterSection_GetParameterNames_Params
{
public:
	TSet<class FName>                            ParameterNames;                                    // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct UMovieSceneParameterSection_AddVectorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InValue;                                           // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InValue;                                           // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct UMovieSceneParameterSection_AddTransformParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InValue;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct UMovieSceneParameterSection_AddScalarParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct UMovieSceneParameterSection_AddColorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InValue;                                           // 0xC(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct UMovieSceneParameterSection_AddBoolParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InValue;                                           // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


