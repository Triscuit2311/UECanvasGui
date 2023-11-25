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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct AttachmentCategory.AttachmentCategory
	 * Size -> 0x0030
	 */
	struct FAttachmentCategory
	{
	public:
		EWeaponAttachmentType                                        AttachmentType_21_297159FC4C987F7742FCA1808ADFABED;      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWeaponAttachment*>                             AttachmentClasses_24_63C8556E4413D0C7117B57A99EF9D0C9;   // 0x0008(0x0010) Edit, BlueprintVisible
		class FText                                                  Tooltip_27_A6F610EC4EB0DCF6D1F280A7E16867DA;             // 0x0018(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
