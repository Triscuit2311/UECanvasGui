#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyAccessCopyBatch : uint8
{
	InternalUnbatched              = 0,
	ExternalUnbatched              = 1,
	InternalBatched                = 2,
	ExternalBatched                = 3,
	Count                          = 4,
	EPropertyAccessCopyBatch_MAX   = 5,
};

enum class EPropertyAccessCopyType : uint8
{
	None                           = 0,
	Plain                          = 1,
	Complex                        = 2,
	Bool                           = 3,
	Struct                         = 4,
	Object                         = 5,
	Name                           = 6,
	Array                          = 7,
	PromoteBoolToByte              = 8,
	PromoteBoolToInt32             = 9,
	PromoteBoolToInt64             = 10,
	PromoteBoolToFloat             = 11,
	PromoteByteToInt32             = 12,
	PromoteByteToInt64             = 13,
	PromoteByteToFloat             = 14,
	PromoteInt32ToInt64            = 15,
	PromoteInt32ToFloat            = 16,
	EPropertyAccessCopyType_MAX    = 17,
};

enum class EPropertyAccessObjectType : uint8
{
	None                           = 0,
	Object                         = 1,
	WeakObject                     = 2,
	SoftObject                     = 3,
	EPropertyAccessObjectType_MAX  = 4,
};

enum class EPropertyAccessIndirectionType : uint8
{
	Offset                         = 0,
	Object                         = 1,
	Array                          = 2,
	ScriptFunction                 = 3,
	NativeFunction                 = 4,
	EPropertyAccessIndirectionType_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessSegment
struct FPropertyAccessSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                               Struct;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFunction*                             Function;                                          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ArrayIndex;                                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       Flags;                                             // 0x3C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessPath
struct FPropertyAccessPath
{
public:
	int32                                        PathSegmentStartIndex;                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        PathSegmentCount;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHasEvents : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E34[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessCopy
struct FPropertyAccessCopy
{
public:
	int32                                        AccessIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DestAccessStartIndex;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DestAccessEndIndex;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPropertyAccessCopyType           Type;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E35[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
struct FPropertyAccessCopyBatch
{
public:
	TArray<struct FPropertyAccessCopy>           Copies;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
struct FPropertyAccessIndirectionChain
{
public:
	FFieldPathProperty_                          Property;                                          // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        IndirectionStartIndex;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        IndirectionEndIndex;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EventId;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E3B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessIndirection
struct FPropertyAccessIndirection
{
public:
	FFieldPathProperty_                          ArrayProperty;                                     // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFunction*                             Function;                                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ReturnBufferSize;                                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ReturnBufferAlignment;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ArrayIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       Offset;                                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPropertyAccessObjectType         ObjectType;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EPropertyAccessIndirectionType    Type;                                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E42[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct PropertyAccess.PropertyAccessLibrary
struct FPropertyAccessLibrary
{
public:
	TArray<struct FPropertyAccessSegment>        PathSegments;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessPath>           SrcPaths;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessPath>           DestPaths;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPropertyAccessCopyBatch              CopyBatches[0x4];                                  // 0x30(0x40)(NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessIndirectionChain> SrcAccesses;                                       // 0x70(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessIndirectionChain> DestAccesses;                                      // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessIndirection>    Indirections;                                      // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<int32>                                EventAccessIndices;                                // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E45[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


