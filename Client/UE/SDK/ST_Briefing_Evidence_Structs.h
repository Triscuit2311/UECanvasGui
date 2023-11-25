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
	 * UserDefinedStruct ST_Briefing_Evidence.ST_Briefing_Evidence
	 * Size -> 0x00A0
	 */
	struct FST_Briefing_Evidence
	{
	public:
		class FString                                                Name_2_E14F10114B0E6B5A7D73598C69811AD7;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FSlateBrush                                           Thumbnail_5_830FD1DC4306FD25A46DCF85185A595A;            // 0x0010(0x0088) Edit, BlueprintVisible
		class UTexture2D*                                            MediaPlaceholder_11_2FB2F5134C04065C3EE5F7908D147D86;    // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
