#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2B8 - 0x228)
// BlueprintGeneratedClass BP_BreakableGlass.BP_BreakableGlass_C
class ABP_BreakableGlass_C : public ABreakableGlass
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              GlassBreakParticleSystem;                          // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Glass;                                          // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDestructibleComponent*                SM_Glass_DM;                                       // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Tag_Num;                                           // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBreakableGlass_SelectSize_Enum   Select_Size;                                       // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2179[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Damage_Radius_Multiply;                            // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Character_can_break_it;                            // 0x25C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CharacterVelocityToBreakIt;                        // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Hit_Points;                                   // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Generate_Normal_Maps_;                             // 0x265(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Break_Normal_Intensity;                            // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cells_Normal_Intensity;                            // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cast_Shadows;                                      // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shadow_Opacity;                                    // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Glass_Material;                                    // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Particles;                                         // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Already_Broken;                                    // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2181[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Texture_Y;                                         // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Texture_X;                                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2182[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBoxComponent*>                 PositionBoxCollision;                              // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        CharacterCollisionOffset;                          // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseStaticGlass;                                    // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2184[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            GlassBreakEvent;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BreakableGlass_C* GetDefaultObj();

	void UserConstructionScript(enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UStaticMesh* Temp_object_Variable_2, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_1, class UStaticMesh* Temp_object_Variable_3, class UStaticMesh* Temp_object_Variable_4, class UStaticMesh* Temp_object_Variable_5, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_2, const struct FVector& Temp_struct_Variable, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_3, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, const struct FVector& Temp_struct_Variable_5, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_4, const struct FVector& Temp_struct_Variable_6, const struct FVector& Temp_struct_Variable_7, const struct FVector& Temp_struct_Variable_8, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_5, const struct FVector& Temp_struct_Variable_9, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_6, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_7, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_8, class UStaticMesh* Temp_object_Variable_6, class UStaticMesh* Temp_object_Variable_7, class UStaticMesh* Temp_object_Variable_8, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_9, class UStaticMesh* Temp_object_Variable_9, class UStaticMesh* Temp_object_Variable_10, class UStaticMesh* Temp_object_Variable_11, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMesh* K2Node_Select_Default, class UStaticMesh* K2Node_Select_Default_1, class UStaticMesh* K2Node_Select_Default_2, bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& K2Node_Select_Default_3, const struct FVector& K2Node_Select_Default_4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& K2Node_Select_Default_5, const struct FVector& K2Node_Select_Default_6, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, class FName CallFunc_Conv_StringToName_ReturnValue_2, TArray<class FName>& K2Node_MakeArray_Array, int32 K2Node_Select_Default_7, int32 K2Node_Select_Default_8, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UBoxComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UStaticMesh* K2Node_Select_Default_9, class UStaticMesh* K2Node_Select_Default_10, class UStaticMesh* K2Node_Select_Default_11, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void OnLoaded_5194FBB045FE0850801C4B9CED3A9AB9(class UObject* Loaded);
	void BndEvt__SM_Glass_DM_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void FirstHitPositionObject(int32 FirstPositionBox, int32 TextureY, int32 TextureX, const struct FVector& HitPosition, const struct FVector& ObjectiveDirection, float DamageRadius, bool bFirstHitCanBreakIt, float CharacterVelocityToBreak);
	void DestructibleHit(const struct FVector& Location);
	void StaticGlassHit(const struct FVector& HitLocation);
	void ExecuteUbergraph_BP_BreakableGlass(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UDestructibleMesh* K2Node_DynamicCast_AsDestructible_Mesh, bool K2Node_DynamicCast_bSuccess, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGlass_Break_DM_Struct& K2Node_MakeStruct_Glass_Break_DM_Struct, TArray<TSoftObjectPtr<class UDestructibleMesh>>& K2Node_Select_Default, TArray<TSoftObjectPtr<class UDestructibleMesh>>& K2Node_Select_Default_1, TArray<TSoftObjectPtr<class UDestructibleMesh>>& K2Node_Select_Default_2, int32 CallFunc_SelectInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Select_Default_3, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_2, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_Select_Default_4, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, class UBoxComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable_5, int32 K2Node_Event_FirstPositionBox, int32 K2Node_Event_TextureY, int32 K2Node_Event_TextureX, const struct FVector& K2Node_Event_HitPosition, const struct FVector& K2Node_Event_ObjectiveDirection, float K2Node_Event_DamageRadius, bool K2Node_Event_bFirstHitCanBreakIt, float K2Node_Event_CharacterVelocityToBreak, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, TSoftObjectPtr<class UDestructibleMesh> CallFunc_Array_Get_Item_1, float CallFunc_Add_FloatFloat_ReturnValue, TSoftObjectPtr<class UDestructibleMesh> CallFunc_Array_Get_Item_2, TSoftObjectPtr<class UDestructibleMesh> CallFunc_Array_Get_Item_3, bool Temp_bool_IsClosed_Variable, TSoftObjectPtr<class UDestructibleMesh> K2Node_Select_Default_5, bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class EBreakableGlass_SelectSize_Enum Temp_byte_Variable_3, const struct FVector& K2Node_Event_Location, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_2, int32 K2Node_Select_Default_6, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& K2Node_CustomEvent_HitLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue_3, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue_3);
};

}


