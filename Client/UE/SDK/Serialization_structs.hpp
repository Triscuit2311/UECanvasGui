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

// 0x30 (0x30 - 0x0)
// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct
{
public:
	int8                                         Int8;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        Int16;                                             // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int32;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Int64;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UInt8;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       UInt16;                                            // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UInt32;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UInt64;                                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Double;                                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct
{
public:
	bool                                         BoolFalse;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolTrue;                                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield0 : 1;                                     // Mask: 0x1, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield1 : 1;                                     // Mask: 0x2, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield2Set : 1;                                  // Mask: 0x4, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield3 : 1;                                     // Mask: 0x8, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield4Set : 1;                                  // Mask: 0x10, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield5Set : 1;                                  // Mask: 0x20, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield6 : 1;                                     // Mask: 0x40, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield7Set : 1;                                  // Mask: 0x80, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMetaData>                 SubClass;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UMetaData>               SoftClass;                                         // 0x10(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMetaData>              WeakObject;                                        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMetaData>              SoftObject;                                        // 0x48(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        ClassPath;                                         // 0x70(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ObjectPath;                                        // 0x88(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x28(0x18)(NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Vector4;                                           // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quat;                                              // 0x70(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D4[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct
{
public:
	TArray<int32>                                Int32Array;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ByteArray;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StaticSingleElement;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaticInt32Array[0x3];                             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaticFloatArray[0x3];                             // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       VectorArray;                                       // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStructSerializerBuiltinTestStruct> StructArray;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct
{
public:
	TMap<int32, class FString>                   IntToStr;                                          // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           StrToStr;                                          // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                       // 0xF0(0x50)(NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct
{
public:
	TSet<class FString>                          StrSet;                                            // 0x0(0x50)(NativeAccessSpecifierPublic)
	TSet<int32>                                  IntSet;                                            // 0x50(0x50)(NativeAccessSpecifierPublic)
	TSet<class FName>                            NameSet;                                           // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TSet<struct FStructSerializerBuiltinTestStruct> StructSet;                                         // 0xF0(0x50)(NativeAccessSpecifierPublic)
};

// 0x450 (0x450 - 0x0)
// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct
{
public:
	struct FStructSerializerNumericTestStruct    Numerics;                                          // 0x0(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStructSerializerBooleanTestStruct    Booleans;                                          // 0x30(0x3)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructSerializerObjectTestStruct     Objects;                                           // 0x38(0xA0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_16E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructSerializerBuiltinTestStruct    Builtins;                                          // 0xE0(0x90)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructSerializerArrayTestStruct      Arrays;                                            // 0x170(0x60)(NativeAccessSpecifierPublic)
	struct FStructSerializerMapTestStruct        Maps;                                              // 0x1D0(0x140)(NativeAccessSpecifierPublic)
	struct FStructSerializerSetTestStruct        Sets;                                              // 0x310(0x140)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray
{
public:
	int32                                        Dummy1;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ByteArray;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Dummy2;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int8>                                 Int8Array;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Dummy3;                                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


