#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SoundVisualizations.SoundVisualizationStatics
class USoundVisualizationStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USoundVisualizationStatics* GetDefaultObj();

	void GetAmplitude(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 AmplitudeBuckets, TArray<float>* OutAmplitudes);
	void CalculateFrequencySpectrum(class USoundWave* SoundWave, int32 Channel, float StartTime, float TimeLength, int32 SpectrumWidth, TArray<float>* OutSpectrum);
};

}


