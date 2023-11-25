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
	 * BlueprintGeneratedClass Null_AmmunitionAttachment.Null_AmmunitionAttachment_C
	 * Size -> 0x0008 (FullSize[0x1000] - InheritedSize[0x0FF8])
	 */
	class UNull_AmmunitionAttachment_C : public UWeaponAttachment
	{
	public:
		unsigned char                                                UnknownData_0000[0x8];                                   // 0x0FF8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
