#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerAsset
class UAudioAnalyzerAsset : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRTSettings
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{
public:

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRTSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AudioAnalyzer.AudioAnalyzerNRT
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{
public:
	class USoundWave*                            Sound;                                             // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationInSeconds;                                 // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioAnalyzerNRT* GetDefaultObj();

};

}


