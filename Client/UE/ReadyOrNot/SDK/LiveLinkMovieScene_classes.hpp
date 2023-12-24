#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x228 - 0xE8)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0xE8(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 ChannelMask;                                       // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneLiveLinkSubSection*> SubSections;                                       // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_629[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SubjectName;                                       // 0x150(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0x158(0x90)(Deprecated, NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x1E8(0x20)(Deprecated, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x208(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>       PropertyFloatChannels;                             // 0x218(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSection* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData               SubSectionData;                                    // 0x28(0x10)(NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             SubjectRole;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSection* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_62E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionAnimation* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_62F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionBasicRole* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_632[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionProperties* GetDefaultObj();

};

// 0x10 (0xD0 - 0xC0)
// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_634[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULiveLinkRole>             TrackRole;                                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkTrack* GetDefaultObj();

};

}


