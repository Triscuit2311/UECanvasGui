﻿#pragma once

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
	 * BlueprintGeneratedClass Primary_MP510.Primary_MP510_C
	 * Size -> 0x0008 (FullSize[0x1298] - InheritedSize[0x1290])
	 */
	class APrimary_MP510_C : public ABaseMagazineWeapon
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1290(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Primary_MP510(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif