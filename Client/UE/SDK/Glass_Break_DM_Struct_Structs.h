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
	 * UserDefinedStruct Glass_Break_DM_Struct.Glass_Break_DM_Struct
	 * Size -> 0x0060
	 */
	struct FGlass_Break_DM_Struct
	{
	public:
		TArray<TSoftObjectPtr<class UDestructibleMesh>>              _05x05_20_E947C5D640CED1A1595E95B6BE502CB1;              // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<TSoftObjectPtr<class UDestructibleMesh>>              _05x05_Sh_21_954BD4C449D4F928F8BF57B04487937A;           // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<TSoftObjectPtr<class UDestructibleMesh>>              _1x1_22_65FC01FC4DF9CB612E06978496289FA8;                // 0x0020(0x0010) Edit, BlueprintVisible
		TArray<TSoftObjectPtr<class UDestructibleMesh>>              _1x1_Sh_23_22520D014BC2B407311F6DB1A7858AA4;             // 0x0030(0x0010) Edit, BlueprintVisible
		TArray<TSoftObjectPtr<class UDestructibleMesh>>              _15x15_24_E253841447F40035B208FAAF16A1DF6C;              // 0x0040(0x0010) Edit, BlueprintVisible
		TArray<TSoftObjectPtr<class UDestructibleMesh>>              _15x15_Sh_25_059A89294768BD7D6866AB8E38EBB977;           // 0x0050(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
