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
	 * BlueprintGeneratedClass CommonHUDFunctions.CommonHUDFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCommonHUDFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void CenterPrint(const class FName& MessageType, class APlayerCharacter* Other, class UTextBlock* CenterprintText, class AGameStateBase* GameState, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
