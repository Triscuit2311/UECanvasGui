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
	 * BlueprintGeneratedClass Secondary_Python_V2.Secondary_Python_V2_C
	 * Size -> 0x0031 (FullSize[0x12C1] - InheritedSize[0x1290])
	 */
	class ASecondary_Python_V2_C : public ABaseMagazineWeapon
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                      BarrelIndex;                                             // 0x1298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0000[0x4];                                   // 0x129C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                  FireMontagesEmpty;                                       // 0x12A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimMontage*>                                  FireMontages;                                            // 0x12B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         bCocked;                                                 // 0x12C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnWeaponFire_Event_1(class ABaseMagazineWeapon* Weapon, bool bServer);
		void SetupBaseEvents();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_Secondary_Python_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
