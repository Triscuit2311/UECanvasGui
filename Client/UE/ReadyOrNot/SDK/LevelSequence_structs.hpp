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

// 0x2 (0x2 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct FLevelSequenceCameraSettings
{
public:
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct FBoundActorProxy
{
public:
	uint8                                        Pad_5F5[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct FLevelSequenceAnimSequenceLinkItem
{
public:
	struct FGuid                                 SkelTrackGuid;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       PathToAnimSequence;                                // 0x10(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportTransforms;                                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportCurves;                                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecordInWorldSpace;                               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FA[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct FLevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       ExternalObjectPath;                                // 0x10(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ObjectPath;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct FLevelSequenceBindingReferenceArray
{
public:
	TArray<struct FLevelSequenceBindingReference> References;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct FLevelSequenceBindingReferences
{
public:
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                           AnimSequenceInstances;                             // 0x50(0x50)(NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct FLevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_5FB[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct FLevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_5FC[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct FLevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x1C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ComponentName;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
struct FLevelSequenceSnapshotSettings
{
public:
	uint8                                        ZeroPadAmount;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            FrameRate;                                         // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct FLevelSequencePlayerSnapshot
{
public:
	class FString                                MasterName;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   MasterTime;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   SourceTime;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   CurrentShotLocalTime;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   CurrentShotSourceTime;                             // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceSnapshotSettings        Settings;                                          // 0x98(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_600[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ActiveShot;                                        // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 ShotID;                                            // 0xB0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_601[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


