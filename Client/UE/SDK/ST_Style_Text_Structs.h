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
	 * UserDefinedStruct ST_Style_Text.ST_Style_Text
	 * Size -> 0x00A0
	 */
	struct FST_Style_Text
	{
	public:
		struct FLinearColor                                          FontColor_11_A392AE454CEDE936EA30FF8489E8DC2A;           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateFontInfo                                        Font_12_BBBACEBF467720A57D9D1B8E5B4F4F1F;                // 0x0010(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		ETextTransformPolicy                                         TextTransformPolicy_27_A06FF18E49094B148369F69487E381D7; // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETextJustify                                                 Justification_37_691D0CF8474E5E0F0FA727BDBE44A4E3;       // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                ShadowOffset_30_D57920BE4AFEDB45E8AA06A18138355A;        // 0x006C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                          ShadowColor_33_01D3BA6E45949A8E4D308592728468B0;         // 0x0074(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWidgetTransform                                      RenderTransform_38_79567AF24CE539197341ADAD75D5EC3B;     // 0x0084(0x001C) Edit, BlueprintVisible, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
