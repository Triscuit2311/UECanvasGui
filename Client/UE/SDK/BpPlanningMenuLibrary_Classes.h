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
	 * BlueprintGeneratedClass BpPlanningMenuLibrary.BpPlanningMenuLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBpPlanningMenuLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void FindIconFromItemClass(class APlayerController* PlayerController, class ABaseItem* ItemClass, class UObject* __WorldContext, class UTexture2D** ReturnValue);
		void IsFactorySkin(class USkinComponent* SkinClass, class UObject* __WorldContext, bool* ReturnValue);
		void GetCharacterDataFromHandle(const class FName& Handle, class UObject* __WorldContext, struct FCharacterData* Data);
		void PlayerStatusToText(EPlayerStatus Status, class APlayerCharacter* PlayerState, class UObject* __WorldContext, class FText* StatusText);
		void GetAmmoDescriptionForWeaponAndAmmo(class ABaseMagazineWeapon* Weapon, uint8_t AmmoType, class UObject* __WorldContext, class FText* Text);
		void GetAmmoTypeNameForWeaponAndAmmo(class ABaseMagazineWeapon* WeaponClass, uint8_t AmmoType, class UObject* __WorldContext, class FText* Text);
		void GetNonDefaultLoadouts(class UObject* __WorldContext, TArray<class FString>* Loadouts);
		void CanCustomizeWeaponData(const struct FWeaponData& WeaponClass, class UObject* __WorldContext, bool* CanCustomize);
		void CanCustomizeWeaponClass(class ABaseMagazineWeapon* WeaponClass, class UObject* __WorldContext, bool* CanCustomize);
		void GetArmorCoverageText(EArmourCoverage Coverage, uint8_t Level, class UObject* __WorldContext, class FText* Text);
		void GetAttachmentTextData(class UWeaponAttachment* Attachment, class UObject* __WorldContext, ESlateVisibility* Visibility, class FText* Text);
		void ConstructEquipmentOverviewAmmoString(uint8_t AmmoType, int32_t MagazineCount, class UObject* __WorldContext, class FText* Text);
		void ItemWeightToText(float Weight, bool Fractional, class UObject* __WorldContext, class FText* Text);
		void MuzzleVelocityToText(float MuzzleVelocity, class UObject* __WorldContext, class FText* Text);
		void GetCaliberFromBlueprint(TSoftClassPtr<class ABaseItem> WeaponBlueprint, class UObject* __WorldContext, class FText* CaliberText);
		void GetWeaponTypeLocalizedName(EWeaponType WeaponType, class UObject* __WorldContext, class FText* LocalizedName);
		void GetFirstWeaponType(TArray<EWeaponType>* WeaponTypes, class UObject* __WorldContext, EWeaponType* WeaponType);
		void FormatSpawnPoint(const class FText& SpawnPointFormat, const struct FSpawnPoints& Spawn, bool DoubleCost, class UObject* __WorldContext, class FText* Text);
		void GetActiveDeployablesText(class UObject* __WorldContext, class FText* Text);
		void CreateOverviewDeployableListText(TArray<int32_t>* Deployables, class UObject* __WorldContext, class FText* Text);
		void GetActivePersonnelText(class UObject* __WorldContext, class FText* Text);
		void CreateOverviewPersonnelListText(TArray<int32_t>* PersonnelList, class UObject* __WorldContext, class FText* Text);
		void GetSpawnForEntryNum(uint8_t SpawnNum, class UObject* __WorldContext, struct FSpawnPoints* OutSpawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
