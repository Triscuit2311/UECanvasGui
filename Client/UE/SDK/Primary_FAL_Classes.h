﻿#pragma once

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
	 * BlueprintGeneratedClass Primary_FAL.Primary_FAL_C
	 * Size -> 0x0008 (FullSize[0x1298] - InheritedSize[0x1290])
	 */
	class APrimary_FAL_C : public ABaseMagazineWeapon
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1290(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Primary_FAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
