#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x88 - 0x60)
// Class ActorSequence.ActorSequence
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FActorSequenceObjectReferenceMap      ObjectReferences;                                  // 0x68(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UActorSequence* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class ActorSequence.ActorSequenceComponent
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0xB0(0x14)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorSequence*                        Sequence;                                          // 0xC8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorSequencePlayer*                  SequencePlayer;                                    // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UActorSequenceComponent* GetDefaultObj();

};

// 0x0 (0x4E8 - 0x4E8)
// Class ActorSequence.ActorSequencePlayer
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static class UClass* StaticClass();
	static class UActorSequencePlayer* GetDefaultObj();

};

}


