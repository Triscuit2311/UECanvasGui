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
	 * UserDefinedStruct ParameterTransitionStruct.ParameterTransitionStruct
	 * Size -> 0x0030
	 */
	struct FParameterTransitionStruct
	{
	public:
		class UFMODEvent*                                            FMODEvent_38_13580EA24778C87B24705390342A32FB;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFMODEventInstance                                    InstanceforFMODEvent_45_23334A184EB418BA08038D882786C20B; // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TArray<class FName>                                          INParameter_47_2BB4FEC34367995287EFE593212AC12C;         // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                          OUTParameter_48_D1193470490095A0168698A178451860;        // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
