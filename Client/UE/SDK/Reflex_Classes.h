#pragma once

/**
 * Name: ron
 * Version: 25346
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
	 * Class Reflex.ReflexBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetReflexMode(EReflexMode Mode);
		void SetFlashIndicatorEnabled(bool bEnabled);
		float GetRenderLatencyInMs();
		EReflexMode GetReflexMode();
		bool GetReflexAvailable();
		float GetGameToRenderLatencyInMs();
		float GetGameLatencyInMs();
		bool GetFlashIndicatorEnabled();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
