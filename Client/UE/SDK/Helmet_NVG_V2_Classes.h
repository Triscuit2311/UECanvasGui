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
	 * BlueprintGeneratedClass Helmet_NVG_V2.Helmet_NVG_V2_C
	 * Size -> 0x0020 (FullSize[0x1A40] - InheritedSize[0x1A20])
	 */
	class AHelmet_NVG_V2_C : public ANightvisionGoggles
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1A20(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                   SpotLight;                                               // 0x1A28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                       Arrow;                                                   // 0x1A30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class APlayerState*                                          PlayerState;                                             // 0x1A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnNightvisionDeactivated();
		void ReceiveTick(float DeltaSeconds);
		void OnNightvisionActivated();
		void ExecuteUbergraph_Helmet_NVG_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
