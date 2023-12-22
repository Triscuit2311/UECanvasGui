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

// 0x68 (0x68 - 0x0)
// UserDefinedStruct LoadoutCategory.LoadoutCategory
struct FLoadoutCategory
{
public:
	bool                                         Enabled__56_57929C134BE3AF4A5C9507892D5652E6;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadoutCategoryName_2_297159FC4C987F7742FCA1808ADFABED; // 0x8(0x18)(Edit, BlueprintVisible)
	enum class EItemType                         ItemType_60_27803F284309426AAC88FA87F43507C9;      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemClass                        LoadoutClass_5_63C8556E4413D0C7117B57A99EF9D0C9;   // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoadoutScrollBehaviour           ScrollBehaviour_17_A27C1597429B3D6590C8AA8A6286C7C9; // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41F4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CameraTag_26_DEC1E94D47A76905551A97ABCEFCF820;     // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PreviewAnimation_25_863F4D0541CC198B8FAF4580D5A79C50; // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsTactical__54_A54B1F11475811C01916A0989533AE6E;   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TacticalSlot_10_DF87D74B48F4114F7B5E55A15E7D92A4;  // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMultipleTacticalSlots__57_BADB792147BFFAA77B2387867167C625; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StartingTacticalSlot_53_ECD80FCD42BC7033BE63B2BB2865D366; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Tooltip_20_D7AE8D294E32DC8F3E6C92AF4A164C87;       // 0x50(0x18)(Edit, BlueprintVisible)
};

}


