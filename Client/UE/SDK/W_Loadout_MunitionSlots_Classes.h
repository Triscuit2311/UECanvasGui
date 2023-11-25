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
	 * WidgetBlueprintGeneratedClass W_Loadout_MunitionSlots.W_Loadout_MunitionSlots_C
	 * Size -> 0x08A0 (FullSize[0x0B00] - InheritedSize[0x0260])
	 */
	class UW_Loadout_MunitionSlots_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                      animReveal;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animRevealMunitions;                                     // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                      animFadeSummary;                                         // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UW_Loadout_MunitionCountSlot_C*                        ArmorSlotGrenadeCount;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_MunitionCountSlot_C*                        ArmorSlotPrimaryAmmoCount;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           ArmorSlotsHeader;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_MunitionCountSlot_C*                        ArmorSlotSidearmAmmoCount;                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_MunitionCountSlot_C*                        ArmorSlotTacticalCount;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Add_PrimaryAmmo1;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Add_PrimaryAmmo2;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Add_SidearmAmmo1;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Add_SidearmAmmo2;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Minimize;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_NewGrenadeType;                                      // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_NewPrimaryAmmoType;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_NewSidearmAmmoType;                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_NewTacticalType;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_SlotEdit;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                           btn_Summary;                                             // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           GrenadeHeader;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_MunitionSlots_Deployable_C*                 GrenadeSlotMain;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_GrenadeSummary;                                       // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_Munitions;                                            // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_MunitionSummary;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_PrimaryAmmo2;                                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_PrimarySummary;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_SidearmAmmo2;                                         // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_SidearmSummary;                                       // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                        HB_TacticalSummary;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_div_summary_2;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_div_summary_3;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_div_summary_4;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                                img_MimizeArrow_l;                                       // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_MunitionSlots;                                       // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             lbl_MunitionSlots_total;                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                               Munitions;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                              Overview;                                                // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                      PrimaryAmmo1;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                      PrimaryAmmo2;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           PrimaryAmmoHeader;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                      SidearmAmmo1;                                            // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_LoadoutSlot_C*                                      SidearmAmmo2;                                            // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           SidearmAmmoHeader;                                       // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Header_C*                                           TacticalHeader;                                          // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Loadout_MunitionSlots_Deployable_C*                 TacticalSlotMain;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TotalArmorSlots;                                     // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TotalGrenadeSlots;                                   // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TotalPrimaryAmmoSlots;                               // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TotalSidearmAmmoSlots;                               // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Text_C*                                             txt_TotalTacticalSlots;                                  // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_EditorSlotEntries;                                    // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_GrenadeSlots;                                         // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_MunitionSlotEditor;                                   // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_MunitionSlots;                                        // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_PrimaryAmmoSlots;                                     // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_SidearmAmmoSlots;                                     // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                          VB_TacticalSlots;                                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                         Expanded;                                                // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSavedLoadout                                         ActiveLoadout;                                           // 0x0438(0x0178) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EItemCategory, class ABaseItem*>                        CurrentItems;                                            // 0x05B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UMulticastInlineDelegate                               OnMunitionSlotClicked;                                   // 0x0600(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0601(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnMunitionSlotHovered;                                   // 0x0610(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x0611(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnMunitionSlotUnhovered;                                 // 0x0620(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x0621(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UW_Loadout_C*                                          LoadoutWidget;                                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      PrimaryCount_2;                                          // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                  PrimaryAmmoType_2;                                       // 0x063C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      PrimaryCount_3;                                          // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                  PrimaryAmmoType_3;                                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SidearmCount_2;                                          // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                  SidearmAmmoType_2;                                       // 0x0654(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      SidearmCount_3;                                          // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                  SidearmAmmoType_3;                                       // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      TotalPrimarySlots;                                       // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      TotalSidearmSlots;                                       // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                          PrimaryAmmo;                                             // 0x0670(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                          SidearmAmmo;                                             // 0x0680(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                      TotalGrenadeSlots;                                       // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      AvailableGrenadeSlots;                                   // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      TotalTacticalSlots;                                      // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      AvailableTacticalSlots;                                  // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EArmourCoverage                                              ArmourCoverage;                                          // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0004[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UArmourMaterial*                                       ArmourMaterial;                                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASWATArmour*                                           Armor;                                                   // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class ABaseItem*>                                     EquippedGrenades;                                        // 0x06B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class ABaseItem*>                                     EquippedTacticals;                                       // 0x06C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class ABaseItem*, int32_t>                              GrenadeCounts;                                           // 0x06D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UW_Loadout_MunitionSlots_Deployable_C*, class ABaseItem*> GrenadeSlots;                                            // 0x0728(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class ABaseItem*, int32_t>                              TacticalCounts;                                          // 0x0778(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UW_Loadout_MunitionSlots_Deployable_C*, class ABaseItem*> TacticalSlots;                                           // 0x07C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_Loadout_MunitionSlots_Deployable_C*                 CurrentActiveDeployableSlot;                             // 0x0818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Loadout_MunitionSlots_Deployable_C*                 CurrentHoveredDeployableSlot;                            // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                      TotalSlots;                                              // 0x0828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         AddingGrenade;                                           // 0x082C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0005[0x3];                                   // 0x082D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseItem*>                                     ListExclusionItems;                                      // 0x0830(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                      TotalUnassignedSlots;                                    // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0006[0x4];                                   // 0x0844(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnMunitionSlotCountChanged;                              // 0x0848(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0007[0xF];                                   // 0x0849(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		bool                                                         SlotEditor;                                              // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         Hidden;                                                  // 0x0859(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0008[0x6];                                   // 0x085A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMulticastInlineDelegate                               OnSidearmAmmoChanged;                                    // 0x0860(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0009[0xF];                                   // 0x0861(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnPrimaryAmmoChanged;                                    // 0x0870(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0010[0xF];                                   // 0x0871(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnGrenadesChanged;                                       // 0x0880(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                                UnknownData_0011[0xF];                                   // 0x0881(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UW_Loadout_Munition_SummaryEntry_C*                    PrimarySummary_3;                                        // 0x0890(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Loadout_Munition_SummaryEntry_C*                    PrimarySummary_2;                                        // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Loadout_Munition_SummaryEntry_C*                    SidearmSummary_2;                                        // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_Loadout_Munition_SummaryEntry_C*                    SidearmSummary_3;                                        // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class ABaseItem*, class UW_Loadout_Munition_SummaryEntry_C*> GrenadeSummaryEntries;                                   // 0x08B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class ABaseItem*, class UW_Loadout_Munition_SummaryEntry_C*> TacticalSummaryEntries;                                  // 0x0900(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_Loadout_MunitionSlots_Deployable_C*                 TempNewGrenadeSlot;                                      // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABaseItem*>                                     AllGrenadeTypes;                                         // 0x0958(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class ABaseItem*>                                     AllTacticalTypes;                                        // 0x0968(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                         AddingTactical;                                          // 0x0978(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         TransitioningSlotEditor;                                 // 0x0979(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         RemotePlayer;                                            // 0x097A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         PrimaryAmmoInitialized;                                  // 0x097B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         ShowingPrimary2;                                         // 0x097C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         SidearmAmmoInitialized;                                  // 0x097D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         ShowingSidearm2;                                         // 0x097E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0012[0x1];                                   // 0x097F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        AnimationSpeed;                                          // 0x0980(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Preview;                                                 // 0x0984(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0013[0x3];                                   // 0x0985(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSavedLoadout                                         PreviewLoadout;                                          // 0x0988(0x0178) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void InitializePreviewSummary(const struct FSavedLoadout& PreviewLoadout);
		void GroupAmmo(const class FName& AmmoType1, int32_t AmmoCount1, const class FName& AmmoType2, int32_t AmmoCount2, TArray<class FName>* GroupedAmmo);
		void ReplaceSidearmAmmo(const class FName& CurrentAmmoType, const class FName& NewAmmoType);
		void ReplacePrimaryAmmo(const class FName& CurrentAmmoType, const class FName& NewAmmoType);
		void RevealSlotEditorChildren(float* Delay);
		void HideSlotEditorChildren(float* Delay);
		void SwapWeaponAmmo(bool Sidearm);
		void SetTacticalAddButtonVis();
		void FreeUpTacticalSlot();
		void AddTacticalType();
		void SetGrenadeAddButtonVis();
		void GetAllGrenadeTypes();
		void GetLoadoutWidget(class UW_Loadout_C** LoadoutWidget);
		void FreeUpGrenadeSlot();
		void UpdateGrenadeSlots();
		void AddGrenadeType();
		void UpdateTacticalSummary();
		void UpdateGrenadeSummary();
		void UpdateSidearmSummary();
		void UpdatePrimarySummary();
		void CreateItemSummaryEntry(class ABaseItem* ItemData, int32_t Count, class UW_Loadout_Munition_SummaryEntry_C** EntryWidget);
		void CreateAmmoSummaryEntry(class ABaseItem* Weapon, const class FName& AmmoType, int32_t Count, class UW_Loadout_Munition_SummaryEntry_C** EntryWidget);
		void UpdateSummary();
		void GetActiveLoadout(struct FSavedLoadout* ActiveLoadout);
		void GetSidearmDefaultAmmoType(class FName* Output, bool* SingleAmmoType);
		void GetPrimaryDefaultAmmoType(class FName* Output, bool* SingleAmmoType);
		void HandleRemainderSidearmAmmo();
		void HandleRemainderPrimaryAmmo();
		void UpdateMunitionSlotEditor();
		void UpdateMunitionEditorTotalSlotCount();
		void InitializeMunitionSlotEditor();
		void UpdateTotalSidearmSlotCount();
		void UpdateTotalPrimarySlotCount();
		void UpdateTotalTacticalSlotCount();
		void UpdateTotalGrenadeCount();
		void ReplaceTactical(class ABaseItem* CurrentTactical, class ABaseItem* NewTactical);
		void EquipTactical(class ABaseItem* ItemData, int32_t Count);
		void SelectTacticalType(class ABaseItem* ItemData);
		void ReplaceGrenades(class ABaseItem* CurrentGrenade, class ABaseItem* NewGrenade);
		void EquipGrenades(class ABaseItem* ItemData, int32_t Count);
		void SelectGrenadeType(class ABaseItem* ItemData);
		void TacticalSlotMinusCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot);
		void TacticalSlotAddCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot);
		void CreateTacticalSlot(class ABaseItem* Tactical, const class FText& CategoryText);
		void InitializeTacticals(TArray<class ABaseItem*>* Tacticals);
		void GrenadeSlotMinusCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot);
		void GrenadeSlotAddCount(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringSlot);
		void UpdateCurrentData();
		void SetSidearmAmmoCount2(int32_t AmmoCount);
		void SetSidearmAmmoCount1(int32_t AmmoCount);
		void SetPrimaryAmmoCount2(int32_t AmmoCount);
		void SetPrimaryAmmoCount1(int32_t AmmoCount);
		void SetPrimaryAmmoType1(const class FName& AmmoType);
		void UpdateSidearmSlots();
		void UpdatePrimarySlots();
		void HideSidearm2();
		void DisplaySidearm2();
		void InitializeSidearmAmmo(TArray<class FName>* AmmoTypes);
		void InitializePrimaryAmmo(TArray<class FName>* AmmoTypes);
		void HidePrimary2();
		void DisplayPrimary2();
		void SplitSlots(int32_t TotalSlots, int32_t* NewStack, int32_t* OriginalStack);
		void CreateDeployableSlot(bool IsGrenade, class ABaseItem* ItemData, const class FText& CategoryText, class UW_Loadout_MunitionSlots_Deployable_C** OutputPin);
		void GetAllDeployableItems();
		void InitializeDeployables(bool IsGrenades);
		void InitializeMunitionSlots(bool RemotePlayer, bool Preview);
		void SetupBinds();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
		void UpdateCurrentItemMap(TMap<EItemCategory, class ABaseItem*> ItemCategory);
		void BndEvt__W_Loadout_MunitionSlots_btn_Summary_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_Minimize_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
		void SlotClicked(class UW_LoadoutSlot_C* TriggeringSlot);
		void SlotHovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void SlotUnhovered(class UW_LoadoutSlot_C* TriggeringSlot);
		void SetLoadoutWidget(class UW_Loadout_C* LoadoutWidget);
		void BndEvt__W_Loadout_MunitionSlots_btn_NewPrimaryAmmoType_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_Add_PrimaryAmmo2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_NewSidearmAmmoType_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo1_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_Add_SidearmAmmo2_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UW_Button_C* Button);
		void Reveal(float Delay);
		void BndEvt__W_Loadout_MunitionSlots_btn_NewGrenadeType_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(class UW_Button_C* Button);
		void DeployableSlotClicked(class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot, class UW_LoadoutSlot_C* LoadoutSlot);
		void DeployableSlotHovered(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot);
		void DeployableSlotUnhovered(class UW_LoadoutSlot_C* LoadoutSlot, class UW_Loadout_MunitionSlots_Deployable_C* TriggeringDeployableSlot);
		void BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo1_K2Node_ComponentBoundEvent_9_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_MunitionSlots_PrimaryAmmo2_K2Node_ComponentBoundEvent_10_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_MunitionSlots_SidearmAmmo1_K2Node_ComponentBoundEvent_11_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_MunitionSlots_SidearmAmmo2_K2Node_ComponentBoundEvent_12_OnSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void UpdateCurrentSlot(class UW_LoadoutSlot_C* CurrentSlot);
		void BndEvt__W_Loadout_MunitionSlots_ArmorSlotPrimaryAmmoCount_K2Node_ComponentBoundEvent_13_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot);
		void Hide(float Delay, bool Collapse);
		void BndEvt__W_Loadout_MunitionSlots_ArmorSlotSidearmAmmoCount_K2Node_ComponentBoundEvent_14_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_MunitionSlots_ArmorSlotGrenadeCount_K2Node_ComponentBoundEvent_15_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot);
		void BndEvt__W_Loadout_MunitionSlots_ArmorSlotTacticalCount_K2Node_ComponentBoundEvent_16_OnSlotCountChanged__DelegateSignature(class UW_Loadout_MunitionCountSlot_C* TriggeringSlot);
		void PrimaryWeaponChanged();
		void SidearmWeaponChanged();
		void PrimaryAmmoChanged();
		void SidearmAmmoChanged();
		void SidearmAmmoCountSaved();
		void PrimaryAmmoCountSaved();
		void GrenadeCountSaved();
		void GrenadeEquipped();
		void TacticalEquipped();
		void TacticalCountSaved();
		void BndEvt__W_Loadout_MunitionSlots_btn_NewTacticalType_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_Loadout_MunitionSlots_btn_SlotEdit_K2Node_ComponentBoundEvent_18_Clicked__DelegateSignature(class UW_Button_C* Button);
		void RevealSlotEditor();
		void HideSlotEditor();
		void AmmoSelected(const class FName& NewAmmoType, class ABaseItem* Weapon);
		void ExecuteUbergraph_W_Loadout_MunitionSlots(int32_t EntryPoint);
		void OnGrenadesChanged__DelegateSignature(TArray<class ABaseItem*>* Grenades);
		void OnPrimaryAmmoChanged__DelegateSignature(TArray<class FName>* PrimaryAmmo);
		void OnSidearmAmmoChanged__DelegateSignature(TArray<class FName>* SidearmAmmo);
		void OnMunitionSlotCountChanged__DelegateSignature(int32_t PrimaryAmmoSlotCount, int32_t SidearmAmmoSlotCount, int32_t GrenadeSlotCount, int32_t TacticalSlotCount);
		void OnMunitionSlotUnhovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnMunitionSlotHovered__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		void OnMunitionSlotClicked__DelegateSignature(class UW_LoadoutSlot_C* TriggeringSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
