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
	 * UserDefinedStruct LoadoutCategory.LoadoutCategory
	 * Size -> 0x0068
	 */
	struct FLoadoutCategory
	{
	public:
		bool                                                         Enabled_56_57929C134BE3AF4A5C9507892D5652E6;             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  LoadoutCategoryName_2_297159FC4C987F7742FCA1808ADFABED;  // 0x0008(0x0018) Edit, BlueprintVisible
		EItemType                                                    ItemType_60_27803F284309426AAC88FA87F43507C9;            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemClass                                                   LoadoutClass_5_63C8556E4413D0C7117B57A99EF9D0C9;         // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ELoadoutScrollBehaviour                                      ScrollBehaviour_17_A27C1597429B3D6590C8AA8A6286C7C9;     // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  CameraTag_26_DEC1E94D47A76905551A97ABCEFCF820;           // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                                PreviewAnimation_25_863F4D0541CC198B8FAF4580D5A79C50;    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                         IsTactical_54_A54B1F11475811C01916A0989533AE6E;          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0003[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      TacticalSlot_10_DF87D74B48F4114F7B5E55A15E7D92A4;        // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         IsMultipleTacticalSlots_57_BADB792147BFFAA77B2387867167C625; // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      StartingTacticalSlot_53_ECD80FCD42BC7033BE63B2BB2865D366; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                  Tooltip_20_D7AE8D294E32DC8F3E6C92AF4A164C87;             // 0x0050(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
