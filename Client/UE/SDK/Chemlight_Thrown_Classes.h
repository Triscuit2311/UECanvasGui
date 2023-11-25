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
	 * BlueprintGeneratedClass Chemlight_Thrown.Chemlight_Thrown_C
	 * Size -> 0x0008 (FullSize[0x04C8] - InheritedSize[0x04C0])
	 */
	class AChemlight_Thrown_C : public AThrownChemlight
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceiveDestroyed();
		void ExecuteUbergraph_Chemlight_Thrown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
