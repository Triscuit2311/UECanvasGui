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
	 * UserDefinedStruct st_PreMissionMarker_Categories.st_PreMissionMarker_Categories
	 * Size -> 0x0030
	 */
	struct Fst_PreMissionMarker_Categories
	{
	public:
		class FText                                                  DisplayName_2_B3229F704E2D983C1E494EAECCF1C9F4;          // 0x0000(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                            CategoryIcon_5_CC8B20524BC718FBB8F72E858EE982DF;         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                          CategoryMarkers_9_C1D1261E4AB391F7E2A88ABE4DCBA1DE;      // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
