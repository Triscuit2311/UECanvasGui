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
	 * UserDefinedStruct SStandardModalDetails.SStandardModalDetails
	 * Size -> 0x0071
	 */
	struct FSStandardModalDetails
	{
	public:
		class FText                                                  TitleBar_2_DF32DAB1427EA41B35266B8FA2882F03;             // 0x0000(0x0018) Edit, BlueprintVisible
		class FText                                                  ModalDescription_5_73039887468A065EF94BD6B00B763A0F;     // 0x0018(0x0018) Edit, BlueprintVisible
		bool                                                         ShowCancelButton_8_3133E249417BF24BD8FDEE9293EC1BA8;     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         ShowOkButton_10_154CC1C14289052054A2538C427153B7;        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         ShowApplyButton_12_7DCFDAE1499BE72B8C447695443D4FEE;     // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  OkButtonText_20_F49F44344D3A0F0CBB7DCC8BCB17010E;        // 0x0038(0x0018) Edit, BlueprintVisible
		struct FVector2D                                Size_28_F9A951CA4483BA8FED7F839B4DCF7AAA;                // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                  CancelButtonText_22_7F5E5E7047878934462E0DA8388B825F;    // 0x0058(0x0018) Edit, BlueprintVisible
		bool                                                         RequireScrollToBottom_26_3CEF956B41C5CF8E596FF3A70938CB28; // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
