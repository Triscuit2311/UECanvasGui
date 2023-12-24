#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class CommonInput.CommonUIInputData
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                   DefaultClickAction;                                // 0x28(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultBackAction;                                 // 0x38(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonUIInputData* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class CommonInput.CommonInputBaseControllerData
class UCommonInputBaseControllerData : public UObject
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GamepadName;                                       // 0x2C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             ControllerTexture;                                 // 0x38(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ControllerButtonMaskTexture;                       // 0x60(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;                                 // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                 // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonInputBaseControllerData* GetDefaultObj();

	TArray<class FName> GetRegisteredGamepads();
};

// 0xD8 (0x100 - 0x28)
// Class CommonInput.CommonInputSettings
class UCommonInputSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonUIInputData>      InputData;                                         // 0x28(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;                           // 0x50(0x50)(Edit, EditFixedSize, Config, NativeAccessSpecifierPrivate)
	bool                                         bEnableInputMethodThrashingProtection;             // 0xA0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputMethodThrashingLimit;                         // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       InputMethodThrashingWindowInSeconds;               // 0xA8(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       InputMethodThrashingCooldownInSeconds;             // 0xB0(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowOutOfFocusDeviceInput;                       // 0xB8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F07[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonUIInputData>        InputDataClass;                                    // 0xC0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformBaseData          CurrentPlatform;                                   // 0xC8(0x38)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonInputSettings* GetDefaultObj();

	TArray<class FName> GetRegisteredPlatforms();
};

// 0xC8 (0xF8 - 0x30)
// Class CommonInput.CommonInputSubsystem
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_F49[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	int32                                        NumberOfInputMethodChangesRecently;                // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F4C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastInputMethodChangeTime;                         // 0x68(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       LastTimeInputMethodThrashingBegan;                 // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  LastInputType;                                     // 0x78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  CurrentInputType;                                  // 0x79(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F52[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GamepadInputType;                                  // 0x7C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class ECommonInputType> CurrentInputLocks;                                 // 0x88(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F58[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsGamepadSimulatedClick;                          // 0xF0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F59[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonInputSubsystem* GetDefaultObj();

	bool ShouldShowInputKeys();
	void SetGamepadInputType(class FName& InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	bool IsInputMethodActive(enum class ECommonInputType InputMethod);
	enum class ECommonInputType GetDefaultInputType();
	enum class ECommonInputType GetCurrentInputType();
	class FName GetCurrentGamepadName();
};

}


