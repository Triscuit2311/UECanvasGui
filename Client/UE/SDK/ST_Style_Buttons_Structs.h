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
	 * UserDefinedStruct ST_Style_Buttons.ST_Style_Buttons
	 * Size -> 0x04F9
	 */
	struct FST_Style_Buttons
	{
	public:
		struct FButtonStyle                                          ButtonStyle_6_BBBACEBF467720A57D9D1B8E5B4F4F1F;          // 0x0000(0x0278) Edit, BlueprintVisible
		struct FST_Style_Buttons_Fonts                               ButtonFontStyle_16_A0777E5A4EE2AFA1C5E16B84B437061B;     // 0x0278(0x0280) Edit, BlueprintVisible, HasGetValueTypeHash
		E_Style_Buttons                                              ActiveButtonStyle_19_D1243A474270481757C35484BED22F09;   // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
