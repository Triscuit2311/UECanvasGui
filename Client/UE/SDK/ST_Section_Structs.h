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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_Section.ST_Section
	 * Size -> 0x0028
	 */
	struct FST_Section
	{
	public:
		int32_t                                                      NumberFloors_2_8B3CD4D24CD289543E82F49D302238C1;         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      FacadeType_15_BE0F35A14D9304C0601883A3E490FE90;          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      FacadeVariation_16_644892B44EA85705610C42909C4F35F1;     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_BkBldBorder                                       Border_52_D9DED6954C812D5232D8A3B136C37904;              // 0x000C(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_Offsets                                           Offsets_49_4C3CB19549994FBAD6184BA881A3AAB0;             // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
