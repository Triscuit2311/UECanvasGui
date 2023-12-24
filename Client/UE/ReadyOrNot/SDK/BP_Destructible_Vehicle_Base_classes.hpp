#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x448 - 0x3D8)
// BlueprintGeneratedClass BP_Destructible_Vehicle_Base.BP_Destructible_Vehicle_Base_C
class ABP_Destructible_Vehicle_Base_C : public ADestructibleVehicle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal3;                                            // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal2;                                            // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleVehicleBodyPart*          Licenseplate_Back;                                 // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal1;                                            // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleVehicleBodyPart*          Licenseplate_Front;                                // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_CarColors                       Color;                                             // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetSpecificColor;                                  // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpecificCarColor;                                  // 0x41C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ChosenCarColor;                                    // 0x428(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_LicesPlate_Types                LicensePlateType;                                  // 0x434(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Letters_Types                   LicensePlateNumbersColor;                          // 0x435(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RandomNumbers;                                     // 0x436(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39C2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LicensePlateLettersIndex;                          // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LicensePlateNumberIndex;                           // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNewCar;                                          // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CarScale;                                          // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Destructible_Vehicle_Base_C* GetDefaultObj();

	void SetupCar(const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, const struct FVector& Temp_struct_Variable_5, const struct FVector& Temp_struct_Variable_6, const struct FVector& Temp_struct_Variable_7, const struct FVector& Temp_struct_Variable_8, const struct FVector& Temp_struct_Variable_9, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, const struct FVector& Temp_struct_Variable_12, const struct FVector& Temp_struct_Variable_13, const struct FVector& Temp_struct_Variable_14, const struct FVector& Temp_struct_Variable_15, class UMaterialInterface* Temp_object_Variable, enum class E_CarColors Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, enum class E_Letters_Types Temp_byte_Variable_1, enum class E_LicesPlate_Types Temp_byte_Variable_2, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, enum class E_Letters_Types Temp_byte_Variable_3, int32 Temp_int_Array_Index_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, const struct FVector& K2Node_Select_Default_3, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Destructible_Vehicle_Base(int32 EntryPoint);
};

}


