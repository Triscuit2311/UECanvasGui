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
	 * UserDefinedStruct ST_RandomOptions.ST_RandomOptions
	 * Size -> 0x000E
	 */
	struct FST_RandomOptions
	{
	public:
		bool                                                         FacadeMaterial_1_0767B031405F9366DCC91ABA827453FE;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         GroundFloorMaterial_4_78B6A6FA4E2ACD66141B1BADD3DE2DBF;  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         OrnamentsType_5_F43229E34D327846FBA9B4B1022EB176;        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RoofMaterial_10_02B67E5949FFBEABFF7EEE8255FDD620;        // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         RoofDimensions_11_B5ACE26C4B521C6C0D294290DDBF1BD5;      // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         NumberOfFloors_12_8201F74E4DA3CA4D18D4F19EA32A315B;      // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                      MaxNumberFloors_15_2B5B683C476B6C5CE89EFA930AA0A0BF;     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         UsePresets_17_C0AE73B24455356E0B1362BE7BB64EB9;          // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         OnlyOneTypeSections_19_E8C562D3406EA9BD4ED9D0AE99CCB7D3; // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
