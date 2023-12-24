#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xF8 - 0xE8)
// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertySection* GetDefaultObj();

};

// 0x8 (0xC8 - 0xC0)
// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_1A85[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertyTrack* GetDefaultObj();

};

// 0x30 (0x118 - 0xE8)
// Class MediaCompositing.MovieSceneMediaSection
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          StartFrameOffset;                                  // 0xF4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                         MediaTexture;                                      // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x100(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExternalMediaPlayer;                           // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaPlayer*                          ExternalMediaPlayer;                               // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneMediaSection* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class MediaCompositing.MovieSceneMediaTrack
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_1A8B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            MediaSections;                                     // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneMediaTrack* GetDefaultObj();

};

}


