#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x288 - 0x238)
// BlueprintGeneratedClass BP_Station_Screen_Triggerable.BP_Station_Screen_Triggerable_C
class ABP_Station_Screen_Triggerable_C : public ABaseTriggerable
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Plane;                                             // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight;                                         // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   OFF_Click;                                         // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMODAudio_TV_Signal;                               // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Monitor_B;                                      // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActivatedOnStart_;                               // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_454F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MonitorMaterialON;                                 // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MonitorMaterialOFF;                                // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASceneCapture2D*                       CaptureComponentRef;                               // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Station_Screen_Triggerable_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Deactivate();
	void Activate();
	void ExecuteUbergraph_BP_Station_Screen_Triggerable(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ASceneCapture2D*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ASceneCapture2D* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue);
};

}


