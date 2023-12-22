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

// 0x40 (0x40 - 0x0)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheParams
{
public:
	class UGeometryCache*                        GeometryCacheAsset;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_78 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_CBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartOffset;                                       // 0x1C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0x20(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GeometryCache;                                     // 0x28(0x18)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x48 - 0x40)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndTime;                                    // 0x44(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x68 - 0x20)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x20(0x48)(NativeAccessSpecifierPublic)
};

}


