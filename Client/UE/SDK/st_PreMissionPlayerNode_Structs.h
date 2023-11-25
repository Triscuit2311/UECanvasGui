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
	 * UserDefinedStruct st_PreMissionPlayerNode.st_PreMissionPlayerNode
	 * Size -> 0x0030
	 */
	struct Fst_PreMissionPlayerNode
	{
	public:
		class FString                                                PlayerName_9_E192CF58463F51B6EAB46C83CED9F319;           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                                Designation_5_9521A4CB43E1780BCC9C248F360AE9ED;          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FLinearColor                                          Color_8_0195F3C24BD72AD865D8D1ACD56782C9;                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
