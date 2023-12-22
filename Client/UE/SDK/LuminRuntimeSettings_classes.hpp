#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x148 - 0x28)
// Class LuminRuntimeSettings.LuminRuntimeSettings
class ULuminRuntimeSettings : public UObject
{
public:
	class FString                                PackageName;                                       // 0x28(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApplicationDisplayName;                            // 0x38(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELuminFrameTimingHint             FrameTimingHint;                                   // 0x48(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProtectedContent;                                 // 0x49(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualCallToAppReady;                             // 0x4A(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMobileRendering;                               // 0x4B(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVulkan;                                        // 0x4C(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilePath                             Certificate;                                       // 0x50(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        IconModelPath;                                     // 0x60(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        IconPortalPath;                                    // 0x70(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	struct FLocalizedIconInfos                   LocalizedIconInfos;                                // 0x80(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	int32                                        VersionCode;                                       // 0x90(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumAPILevel;                                   // 0x94(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ELuminPrivilege>           AppPrivileges;                                     // 0x98(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentSubElement>     ExtraComponentSubElements;                         // 0xA8(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	TArray<struct FLuminComponentElement>        ExtraComponentElements;                            // 0xB8(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	class FString                                SpatializationPlugin;                              // 0xC8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReverbPlugin;                                      // 0xD8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OcclusionPlugin;                                   // 0xE8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoundCueCookQualityIndex;                          // 0xF8(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveDebugInfo;                                  // 0xFC(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        VulkanValidationLayerLibs;                         // 0x100(0x10)(Edit, Config, GlobalConfig, NativeAccessSpecifierPublic)
	bool                                         bFrameVignette;                                    // 0x110(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLocalizedAppName>             LocalizedAppNames;                                 // 0x118(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	uint8                                        Pad_71[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminRuntimeSettings* GetDefaultObj();

};

}


