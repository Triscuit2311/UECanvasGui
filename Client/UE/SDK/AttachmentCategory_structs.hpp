#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// UserDefinedStruct AttachmentCategory.AttachmentCategory
struct FAttachmentCategory
{
public:
	enum class EWeaponAttachmentType             AttachmentType_21_297159FC4C987F7742FCA1808ADFABED; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F41[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        AttachmentClasses_24_63C8556E4413D0C7117B57A99EF9D0C9; // 0x8(0x10)(Edit, BlueprintVisible)
	class FText                                  Tooltip_27_A6F610EC4EB0DCF6D1F280A7E16867DA;       // 0x18(0x18)(Edit, BlueprintVisible)
};

}


