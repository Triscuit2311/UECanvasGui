#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EImpactDamageOverride : uint8
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct ApexDestruction.DestructibleChunkParameters
struct FDestructibleChunkParameters
{
public:
	bool                                         bIsSupportChunk;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotFracture;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotDamage;                                      // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotCrumble;                                     // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct ApexDestruction.FractureMaterial
struct FFractureMaterial
{
public:
	struct FVector2D                             UVScale;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVOffset;                                          // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Tangent;                                           // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UAngle;                                            // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteriorElementIndex;                              // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ApexDestruction.DestructibleDamageParameters
struct FDestructibleDamageParameters
{
public:
	float                                        DamageThreshold;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSpread;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableImpactDamage;                               // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactDamage;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultImpactDamageDepth;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomImpactResistance;                           // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_700[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ImpactResistance;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ApexDestruction.DestructibleDebrisParameters
struct FDestructibleDebrisParameters
{
public:
	float                                        DebrisLifetimeMin;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisLifetimeMax;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisMaxSeparationMin;                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisMaxSeparationMax;                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                  ValidBounds;                                       // 0x10(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
struct FDestructibleAdvancedParameters
{
public:
	float                                        DamageCap;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactVelocityThreshold;                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxChunkSpeed;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractureImpulseScale;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
struct FDestructibleSpecialHierarchyDepths
{
public:
	int32                                        SupportDepth;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumFractureDepth;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebris;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_708[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DebrisDepth;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EssentialDepth;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ApexDestruction.DestructibleDepthParameters
struct FDestructibleDepthParameters
{
public:
	enum class EImpactDamageOverride             ImpactDamageOverride;                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ApexDestruction.DestructibleParametersFlag
struct FDestructibleParametersFlag
{
public:
	uint8                                        bAccumulateDamage : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAssetDefinedSupport : 1;                          // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWorldSupport : 1;                                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebrisTimeout : 1;                                // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebrisMaxSeparation : 1;                          // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCrumbleSmallestChunks : 1;                        // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAccurateRaycasts : 1;                             // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseValidBounds : 1;                               // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFormExtendedStructures : 1;                       // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_711[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ApexDestruction.DestructibleParameters
struct FDestructibleParameters
{
public:
	struct FDestructibleDamageParameters         DamageParameters;                                  // 0x0(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleDebrisParameters         DebrisParameters;                                  // 0x1C(0x2C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleAdvancedParameters       AdvancedParameters;                                // 0x48(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FDestructibleSpecialHierarchyDepths   SpecialHierarchyDepths;                            // 0x58(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_716[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDestructibleDepthParameters>  DepthParameters;                                   // 0x70(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDestructibleParametersFlag           Flags;                                             // 0x80(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_717[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


