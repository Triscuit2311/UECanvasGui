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
	 * UserDefinedStruct ST_Briefing_Entry.ST_Briefing_Entry
	 * Size -> 0x0028
	 */
	struct FST_Briefing_Entry
	{
	public:
		class USoundWave*                                            AudioAsset_18_AE380FA147F0A4186604A89FAC2743CE;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTimelineEvent>                                Events_30_03979F8A41EF9AF10869A9A57A7DF9FF;              // 0x0008(0x0010) Edit, BlueprintVisible
		TArray<struct FST_Briefing_Transcript_Entry>                 Transcript_29_8D885E2649115827BEA8FEA92B9D41AD;          // 0x0018(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
