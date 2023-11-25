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
	 * UserDefinedStruct ST_Commands.ST_Commands
	 * Size -> 0x0088
	 */
	struct FST_Commands
	{
	public:
		struct FSwatCommand                                          Command_11_6E4AFD0D436A29532C5FAEA296829E78;             // 0x0000(0x0078) Edit, BlueprintVisible
		TArray<struct FSwatCommand>                                  SubCommands_12_8D21E48F443D76CDBD49FDA3AF3E0A85;         // 0x0078(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
