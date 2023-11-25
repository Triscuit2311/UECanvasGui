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
	 * UserDefinedStruct ST_Briefing_Intel.ST_Briefing_Intel
	 * Size -> 0x0030
	 */
	struct FST_Briefing_Intel
	{
	public:
		TArray<struct FCharacterBio>                                 Suspects_3_1F38882143647E72B7710E9F998A769A;             // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<struct FCharacterBio>                                 Civilians_5_58A8BC4A4E76733A82B552B28318CEFE;            // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<struct FST_Briefing_Evidence>                         Media_8_C98182884A05C6FF2067789E80449206;                // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
