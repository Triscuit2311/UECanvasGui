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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Primary_870mcs.Primary_870mcs_C
	 * Size -> 0x0018 (FullSize[0x1318] - InheritedSize[0x1300])
	 */
	class APrimary_870mcs_C : public AShotgun
	{
	public:
		class UPointLightComponent*                                  PointLight;                                              // 0x1300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                   PointLight1;                                             // 0x1308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                          LightToggle1P;                                           // 0x1310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif