#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAxisMappingFilter : uint8
{
	Name                           = 0,
	Key                            = 1,
	Scale                          = 2,
	IsNotGamepad                   = 3,
	IsNotKeyboard                  = 4,
	IsNotMouse                     = 5,
	IsNotAxis                      = 6,
	EAxisMappingFilter_MAX         = 7,
};

enum class EActionMappingFilter : uint8
{
	Name                           = 0,
	Key                            = 1,
	Shift                          = 2,
	Ctrl                           = 3,
	Alt                            = 4,
	Cmd                            = 5,
	IsNotGamepad                   = 6,
	IsNotKeyboard                  = 7,
	IsNotMouse                     = 8,
	EActionMappingFilter_MAX       = 9,
};

enum class EMappingType : uint8
{
	Axis                           = 0,
	Action                         = 1,
	Auto                           = 2,
	EMappingType_MAX               = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct InputRemapping.AxisMappingStruct
struct FAxisMappingStruct
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct InputRemapping.ActionMappingStruct
struct FActionMappingStruct
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Shift;                                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ctrl;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Alt;                                               // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Cmd;                                               // 0x23(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


