#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xC8 - 0x88)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProxyOverride;                                     // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        SequencePath;                                      // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetSequencePath(const class FString& Path);
	void SetMipLevelDistance(float Distance);
	void RemoveTargetObject(class AActor* InActor);
	void RemoveGlobalCamera(class AActor* InActor);
	class FString GetSequencePath();
	void GetProxies(TArray<class FString>* OutProxies);
	void AddTargetObject(class AActor* InActor, float Width);
	void AddGlobalCamera(class AActor* InActor);
};

}


