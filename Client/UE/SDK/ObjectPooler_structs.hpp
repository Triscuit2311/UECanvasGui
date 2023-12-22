#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EObjectPoolRetrieveActorResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	EObjectPoolRetrieveActorResult_MAX = 2,
};

enum class EObjectPoolReuseSetting : uint8
{
	Reuse                          = 0,
	DoNotReuse                     = 1,
	CreateNewActor                 = 2,
	EObjectPoolReuseSetting_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct ObjectPooler.PlatformPoolSettings
struct FPlatformPoolSettings
{
public:
	int32                                        PoolSize;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActorMaxLifetime;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EObjectPoolReuseSetting           ReuseSetting;                                      // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnToPoolAfterPhysicsHit;                      // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C6[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ObjectPooler.ObjectPoolWarmUpSetting
struct FObjectPoolWarmUpSetting
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_55 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7CB[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       WarmUpAcross;                                      // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7CC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ObjectPooler.ObjectPoolManager
struct FObjectPoolManager
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_56 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ManagerName;                                       // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UObjectPoolBase>>   ObjectPools;                                       // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  Note;                                              // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

}


