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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Destructible_Vehicle_Delivery_Van.Destructible_Vehicle_Delivery_Van_C
	 * Size -> 0x0020 (FullSize[0x0488] - InheritedSize[0x0468])
	 */
	class ADestructible_Vehicle_Delivery_Van_C : public ADestructible_Vehicle_PickupTruck_C
	{
	public:
		class UStaticMeshComponent*                                  CarInterior;                                             // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDestructibleComponent*                                RearSideWindowRight1;                                    // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDestructibleComponent*                                RearSideWindowLeft2;                                     // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDestructibleComponent*                                RearSideWindowLeft1;                                     // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
