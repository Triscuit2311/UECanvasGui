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
	 * UserDefinedStruct ST_Style_Buttons_Fonts.ST_Style_Buttons_Fonts
	 * Size -> 0x0280
	 */
	struct FST_Style_Buttons_Fonts
	{
	public:
		struct FST_Style_Text                                        NormalFont_13_A392AE454CEDE936EA30FF8489E8DC2A;          // 0x0000(0x00A0) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Style_Text                                        HoveredFont_15_548BC9714B44E9CC5E3873A4419A8B82;         // 0x00A0(0x00A0) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Style_Text                                        PressedFont_17_5964A64045B10C5274974A9D98BC7936;         // 0x0140(0x00A0) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FST_Style_Text                                        DisabledFont_19_7B7C38904B3B853E31370ABA55210B82;        // 0x01E0(0x00A0) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
