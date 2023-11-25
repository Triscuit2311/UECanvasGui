﻿#pragma once

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
	 * UserDefinedStruct SKeybinding.SKeybinding
	 * Size -> 0x0047
	 */
	struct FSKeybinding
	{
	public:
		bool                                                         bEnabled_25_F08E79EB4E2E6CF698DEAAA10E295B56;            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         bAxis_1_A1DF4F6E4BDA7692A09F6FA8C8645DBE;                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  BindingName_4_DD389C7B4C014D8F5C467B8170ED4730;          // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                  FriendlyName_7_CB00E99E4223301A552C01A676160904;         // 0x0010(0x0018) Edit, BlueprintVisible
		class FText                                                  Description_9_AF6F4EDC41981F1568B1BD8AB92DDD79;          // 0x0028(0x0018) Edit, BlueprintVisible
		float                                                        AxisScale_12_AA83EADC43835EFEA1B4309EA12EAC6A;           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInputKeyCategory                                            InputKeyCategory_18_F956E79941840E04EF8A899C710B2267;    // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bCannotBeUnbindable_20_43E4DD77401AC44133B6A2A2A65C12BE; // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         bIsReadOnly_23_7CD813F14C5C7D1564166F80ED60C1D6;         // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
