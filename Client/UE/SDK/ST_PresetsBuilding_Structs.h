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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_PresetsBuilding.ST_PresetsBuilding
	 * Size -> 0x000F
	 */
	struct FST_PresetsBuilding
	{
	public:
		float                                                        TopOffsetUV_6_7BB09E864F25EF659E27C7BC366B5BF8;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        HeightOffsetUV_7_9EDB1B194EDD9EED6755CA8594F2CB1A;       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        LateralOffsetUV_8_907FB8CB4874C482A9312A86DD3EE8A1;      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         BorderOn_11_C144643548C3B87489D2738DFF408692;            // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         OfficeStyle_13_2AF3B3C841DCE10B101464B2B0E3C7A0;         // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         ResidentialStyle_15_2F439FFE48539795767AF492CF1388DF;    // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
