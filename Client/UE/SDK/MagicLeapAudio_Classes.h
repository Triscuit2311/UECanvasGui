#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SetOnAudioJackUnpluggedDelegate(const class FScriptDelegate& ResultDelegate);
		bool SetOnAudioJackPluggedDelegate(const class FScriptDelegate& ResultDelegate);
		bool SetMicMute(bool IsMuted);
		bool IsMicMuted();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
