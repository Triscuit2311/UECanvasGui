#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapAudioFunctionLibrary* GetDefaultObj();

	bool SetOnAudioJackUnpluggedDelegate(FDelegateProperty_& ResultDelegate);
	bool SetOnAudioJackPluggedDelegate(FDelegateProperty_& ResultDelegate);
	bool SetMicMute(bool IsMuted);
	bool IsMicMuted();
};

}


