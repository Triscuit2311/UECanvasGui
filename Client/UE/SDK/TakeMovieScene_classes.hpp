#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x380 (0x468 - 0xE8)
// Class TakeMovieScene.MovieSceneTakeSection
class UMovieSceneTakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneIntegerChannel             HoursCurve;                                        // 0xE8(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel             MinutesCurve;                                      // 0x178(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel             SecondsCurve;                                      // 0x208(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel             FramesCurve;                                       // 0x298(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               SubFramesCurve;                                    // 0x328(0xA0)(NativeAccessSpecifierPublic)
	struct FMovieSceneStringChannel              Slate;                                             // 0x3C8(0xA0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSection* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class TakeMovieScene.MovieSceneTakeSettings
class UMovieSceneTakeSettings : public UObject
{
public:
	class FString                                HoursName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MinutesName;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecondsName;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesName;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubFramesName;                                     // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SlateName;                                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSettings* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class TakeMovieScene.MovieSceneTakeTrack
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x90(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneTakeTrack* GetDefaultObj();

};

}


