#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OpenColorIO.OpenColorIOBlueprintLibrary
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenColorIOBlueprintLibrary* GetDefaultObj();

	bool ApplyColorSpaceTransform(class UObject* WorldContextObject, struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
};

// 0x70 (0x98 - 0x28)
// Class OpenColorIO.OpenColorIOColorTransform
class UOpenColorIOColorTransform : public UObject
{
public:
	class UOpenColorIOConfiguration*             ConfigurationOwner;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceColorSpace;                                  // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DestinationColorSpace;                             // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154E[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIOColorTransform* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class OpenColorIO.OpenColorIOConfiguration
class UOpenColorIOConfiguration : public UObject
{
public:
	struct FFilePath                             ConfigurationFile;                                 // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FOpenColorIOColorSpace>        DesiredColorSpaces;                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UOpenColorIOColorTransform*>    ColorTransforms;                                   // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1551[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIOConfiguration* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OpenColorIO.OpenColorIODisplayExtensionWrapper
class UOpenColorIODisplayExtensionWrapper : public UObject
{
public:
	uint8                                        Pad_1569[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenColorIODisplayExtensionWrapper* GetDefaultObj();

	void SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
	void SetSceneExtensionIsActiveFunction(struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
	void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
	void RemoveSceneExtension();
	class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
};

}


