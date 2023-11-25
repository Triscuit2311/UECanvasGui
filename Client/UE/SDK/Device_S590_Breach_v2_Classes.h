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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Device_S590_Breach_v2.Device_S590_Breach_v2_C
	 * Size -> 0x0008 (FullSize[0x1308] - InheritedSize[0x1300])
	 */
	class ADevice_S590_Breach_v2_C : public ABreachingShotgun
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1300(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void DoReloadComplete_2();
		void ExecuteUbergraph_Device_S590_Breach_v2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
