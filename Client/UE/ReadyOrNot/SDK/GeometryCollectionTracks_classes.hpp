#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x118 - 0xE8)
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCollectionParams   Params;                                            // 0xE8(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCollectionSection* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_37B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneGeometryCollectionTrack* GetDefaultObj();

};

}


