#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x484 - 0x3A8)
// WidgetBlueprintGeneratedClass W_DamagePaperdoll.W_DamagePaperdoll_C
class UW_DamagePaperdoll_C : public UPlayerPaperdollWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bFlashingHead;                                     // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFlashingLeftLeg;                                  // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFlashingLeftArm;                                  // 0x3B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFlashingRightLeg;                                 // 0x3B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFlashingRightArm;                                 // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFlashingBody;                                     // 0x3B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamagedLeftLeg;                                   // 0x3B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamagedRightLeg;                                  // 0x3B7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamagedHead;                                      // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamagedBody;                                      // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamagedLeftArm;                                   // 0x3BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDamagedRightArm;                                  // 0x3BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShowFlashyBits;                                   // 0x3BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlashingTime;                                      // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        FlashOnLength;                                     // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        FlashOffLength;                                    // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        FlashOnDurationLeft;                               // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FlashOffDurationLeft;                              // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HealedPaperdollColor;                              // 0x3D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          DamagedPaperdollColor;                             // 0x3E4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          FinalDamagedPaperdollColor;                        // 0x3F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bHealedLeftLeg;                                    // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHealedRightLeg;                                   // 0x405(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHealedRightArm;                                   // 0x406(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHealedLeftArm;                                    // 0x407(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHealedHead;                                       // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UImage*>                        HeadImages;                                        // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        BodyImages;                                        // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        LeftArmImages;                                     // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        RightArmImages;                                    // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        LeftLegImages;                                     // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        RightLegImages;                                    // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        OutlineImages;                                     // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        LastHealthVal;                                     // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DamagePaperdoll_C* GetDefaultObj();

	void UpdatePartsVisibility(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, class UImage* CallFunc_Array_Get_Item, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UImage* CallFunc_Array_Get_Item_2, class UImage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UImage* CallFunc_Array_Get_Item_4, class UImage* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_5, enum class ESlateVisibility CallFunc_GetTorsoDmgVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetLegDmgRightVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetLegDmgLeftVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetArmDmgRightVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetHeadDmgVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetArmDmgLeftVisibility_ReturnValue);
	void Apply_Damage_State(class UImage* InImage, bool& bDamagedLimb, bool& bFlashingLimb, float LimbHealth, FDelegateProperty_ Event, float CallFunc_FClamp_ReturnValue, bool CallFunc_SetLimbDamaged_bNewlyDamaged, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void SetLimbDamaged(bool& bLimb, bool* bNewlyDamaged, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdatePaperdollPartToHealedColor(bool bRightArm, bool LeftArm, bool Torso, bool Head, bool Right_Leg, bool Left_Leg, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5);
	void SetDamageState(bool bHeadHit, bool bBodyHit, bool bLeftArmHit, bool bRightArmHit, bool bLeftLegHit, bool bRightLegHit, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable, class UImage* CallFunc_Array_Get_Item, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, class UImage* CallFunc_Array_Get_Item_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_5, class UImage* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, class UImage* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UImage* CallFunc_Array_Get_Item_5, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_2, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_7, const struct FLimbHealthData& CallFunc_GetLimbHealth_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_8, float CallFunc_GetNormalizedResource_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_9, float CallFunc_Divide_FloatFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	enum class ESlateVisibility GetTorsoDmgVisibility(bool CallFunc_Not_PreBool_ReturnValue);
	enum class ESlateVisibility GetLegDmgRightVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	enum class ESlateVisibility GetLegDmgLeftVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	enum class ESlateVisibility GetHeadDmgVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	enum class ESlateVisibility GetArmDmgRightVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	enum class ESlateVisibility GetArmDmgLeftVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Stop_Flashing_Head();
	void Stop_Flashing_Left_Leg();
	void Stop_Flashing_Right_Leg();
	void Stop_Flashing_Left_Arm();
	void Stop_Flashing_Right_Arm();
	void Stop_Flashing_Torso();
	void Construct();
	void UpdateHealthBP(float Health);
	void OnInitialized();
	void bodyPartDamaged(bool bHeadDamaged, bool bBodyDamaged, bool bLeftArmDamaged, bool bRightArmDamaged, bool bLeftLegDamaged, bool bRightLegDamaged, bool bLeftFootDamaged, bool bRightFootDamaged);
	void OnItemAddedToInventory_Event_0(class ABaseItem* Item);
	void OnCrouch();
	void OnCrouchEnd();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CarryingChanged();
	void ExecuteUbergraph_W_DamagePaperdoll(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, float K2Node_CustomEvent_Health, enum class ESlateVisibility Temp_byte_Variable, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, TArray<class UImage*>& K2Node_MakeArray_Array, TArray<class UImage*>& K2Node_MakeArray_Array_1, TArray<class UImage*>& K2Node_MakeArray_Array_2, TArray<class UImage*>& K2Node_MakeArray_Array_3, TArray<class UImage*>& K2Node_MakeArray_Array_4, TArray<class UImage*>& K2Node_MakeArray_Array_5, TArray<class UImage*>& K2Node_MakeArray_Array_6, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABasePlayer_C* K2Node_DynamicCast_AsBase_Player, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_bHeadDamaged, bool K2Node_CustomEvent_bBodyDamaged, bool K2Node_CustomEvent_bLeftArmDamaged, bool K2Node_CustomEvent_bRightArmDamaged, bool K2Node_CustomEvent_bLeftLegDamaged, bool K2Node_CustomEvent_bRightLegDamaged, bool K2Node_CustomEvent_bLeftFootDamaged, bool K2Node_CustomEvent_bRightFootDamaged, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, bool CallFunc_LoadShowHealthIconSetting_bShowHealthIcons, bool CallFunc_LoadShowHealthIconSetting_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class ABaseItem* K2Node_CustomEvent_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNormalizedResource_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable_6, class UImage* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UImage* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UImage* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UImage* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, class UImage* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class UImage* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6);
};

}

