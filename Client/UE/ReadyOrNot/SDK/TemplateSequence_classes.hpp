#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x108 - 0x60)
// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  BoundActorClass;                                   // 0x68(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 BoundPreviewActor;                                 // 0x90(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, class FName>              BoundActorComponents;                              // 0xB8(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTemplateSequence* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class TemplateSequence.CameraAnimationSequence
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSequence* GetDefaultObj();

};

// 0x648 (0x670 - 0x28)
// Class TemplateSequence.SequenceCameraShakeCameraStandIn
class USequenceCameraShakeCameraStandIn : public UObject
{
public:
	uint8                                        Pad_95A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FieldOfView;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_59 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_95C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AspectRatio;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_95D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x40(0x560)(NativeAccessSpecifierPublic)
	float                                        PostProcessBlendWeight;                            // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings               Filmback;                                          // 0x5A4(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0x5B0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                  FocusSettings;                                     // 0x5C8(0x58)(NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_960[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USequenceCameraShakeCameraStandIn* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class TemplateSequence.SequenceCameraShakePattern
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendoutTime;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSegmentDuration;                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSegment;                                    // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USequenceCameraShakeSequencePlayer*    Player;                                            // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USequenceCameraShakeCameraStandIn*     CameraStandIn;                                     // 0x50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USequenceCameraShakePattern* GetDefaultObj();

};

// 0x400 (0x428 - 0x28)
// Class TemplateSequence.SequenceCameraShakeSequencePlayer
class USequenceCameraShakeSequencePlayer : public UObject
{
public:
	uint8                                        Pad_96F[0x2A8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               BoundObjectOverride;                               // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                   Sequence;                                          // 0x2D8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2E0(0xE8)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_971[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USequenceCameraShakeSequencePlayer* GetDefaultObj();

};

// 0x58 (0x278 - 0x220)
// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public AActor
{
public:
	uint8                                        Pad_98E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x230(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_990[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTemplateSequencePlayer*               SequencePlayer;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       TemplateSequence;                                  // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTemplateSequenceBindingOverrideData  BindingOverride;                                   // 0x268(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_994[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ATemplateSequenceActor* GetDefaultObj();

	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class AActor* Actor, bool bOverridesDefault);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};

// 0x8 (0x4F0 - 0x4E8)
// Class TemplateSequence.TemplateSequencePlayer
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_9AA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequencePlayer* GetDefaultObj();

	class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
};

// 0x18 (0x180 - 0x168)
// Class TemplateSequence.TemplateSequenceSection
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	uint8                                        Pad_9AF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTemplateSectionPropertyScale> PropertyScales;                                    // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTemplateSequenceSection* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class TemplateSequence.TemplateSequenceSystem
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_9B4[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequenceSystem* GetDefaultObj();

};

// 0x58 (0x98 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_9BB[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_9C0[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class TemplateSequence.TemplateSequenceTrack
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UTemplateSequenceTrack* GetDefaultObj();

};

}


