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
	 * WidgetBlueprintGeneratedClass W_WeaponWheel_MagazineSlot.W_WeaponWheel_MagazineSlot_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class UW_WeaponWheel_MagazineSlot_C : public UUserWidget
	{
	public:
		class UHorizontalBox*                                        Mags_Container;                                          // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        MagsOutline_Container;                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UImage*>                                        Mags;                                                    // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetMag(int32_t Index, class UImage** ReturnValue);
		void CreateMag(class UObject* MagOutlineIcon, class UTexture* MagIconEmpty, class UTexture* MagIconFull, float IconSize);
		void AddMagOutline(class UObject* Icon, float IconSize);
		void AddMag(class UTexture* IconEmpty, class UTexture* IconFull, float IconSize);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
