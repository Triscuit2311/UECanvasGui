#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// Class AudioCapture.AudioCapture
class UAudioCapture : public UAudioGenerator
{
public:
	uint8                                        Pad_1AE2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCapture* GetDefaultObj();

	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
};

// 0x0 (0x28 - 0x28)
// Class AudioCapture.AudioCaptureFunctionLibrary
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioCaptureFunctionLibrary* GetDefaultObj();

	class UAudioCapture* CreateAudioCapture();
};

// 0xC0 (0x780 - 0x6C0)
// Class AudioCapture.AudioCaptureComponent
class UAudioCaptureComponent : public USynthComponent
{
public:
	int32                                        JitterLatencyFrames;                               // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE6[0xBC];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioCaptureComponent* GetDefaultObj();

};

}


