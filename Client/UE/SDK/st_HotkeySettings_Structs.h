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
	 * UserDefinedStruct st_HotkeySettings.st_HotkeySettings
	 * Size -> 0x0041
	 */
	struct Fst_HotkeySettings
	{
	public:
		struct FKey                                                  Key_13_7D5A72EF475EAE550DE823BD2FD80730;                 // 0x0000(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash
		class FString                                                ID_3_76C4772F4662598118912F981874ADE6;                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                  Text_6_F55AF6CE418979B1B14680A3FF46E9D3;                 // 0x0028(0x0018) Edit, BlueprintVisible
		bool                                                         IsButton_10_ADF5F2D44316600C07F3619BDABFCB39;            // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
