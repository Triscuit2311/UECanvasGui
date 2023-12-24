#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonInputType : uint8
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct CommonInput.CommonInputPlatformBaseData
struct FCommonInputPlatformBaseData
{
public:
	uint8                                        Pad_F67[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupported;                                        // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECommonInputType                  DefaultInputType;                                  // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0xB(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DefaultGamepadName;                                // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F69[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UCommonInputBaseControllerData>> ControllerData;                                    // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct FCommonInputKeySetBrushConfiguration
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x10(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct FCommonInputKeyBrushConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x18(0x88)(Edit, NativeAccessSpecifierPublic)
};

}


