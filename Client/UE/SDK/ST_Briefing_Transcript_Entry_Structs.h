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
	 * UserDefinedStruct ST_Briefing_Transcript_Entry.ST_Briefing_Transcript_Entry
	 * Size -> 0x004C
	 */
	struct FST_Briefing_Transcript_Entry
	{
	public:
		class FText                                                  SpeakerName_18_E86FAEA344EC0CEE0EDA9C969C9B9402;         // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                  Transcription_20_03979F8A41EF9AF10869A9A57A7DF9FF;       // 0x0018(0x0018) Edit, BlueprintVisible
		class FText                                                  FictionalTimestamp_19_DBEA116B4C9AEC7CF0D0868F015AC196;  // 0x0030(0x0018) Edit, BlueprintVisible
		float                                                        TimelineStartinSeconds_15_AE380FA147F0A4186604A89FAC2743CE; // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
