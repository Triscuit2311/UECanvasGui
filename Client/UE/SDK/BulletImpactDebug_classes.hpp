#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x27C - 0x260)
// WidgetBlueprintGeneratedClass BulletImpactDebug.BulletImpactDebug_C
class UBulletImpactDebug_C : public UDebugDisplayWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            DebugTItle;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DetailsArea;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        LastUsedID;                                        // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBulletImpactDebug_C* GetDefaultObj();

	int32 AddDebugText(const class FString& NewText, class UBulletImpactDebugText_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetDebugTitle(const class FString& NewTitle);
	void SetDebugText(int32 ID, const class FString& NewText);
	void ExecuteUbergraph_BulletImpactDebug(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_Event_NewTitle, class FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_Event_ID, const class FString& K2Node_Event_NewText, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<class UBulletImpactDebugText_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UBulletImpactDebugText_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


