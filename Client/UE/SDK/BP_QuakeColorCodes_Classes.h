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
	 * BlueprintGeneratedClass BP_QuakeColorCodes.BP_QuakeColorCodes_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_QuakeColorCodes_C : public UBlueprintFunctionLibrary
	{
	public:
		void Quake_ConvertColorCodes(const class FString& StrIn, class UObject* __WorldContext, class FString* StrOut);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
