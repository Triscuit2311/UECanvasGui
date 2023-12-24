#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x186 (0x3E6 - 0x260)
// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Floors.W_PreMission_Tablet_Floors_C
class UW_PreMission_Tablet_Floors_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimReveal;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimShowInfo;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_Button_C*                           btn_DnFloor;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_DnFloor_Gamepad;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_UpFloor;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_UpFloor_Gamepad;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               FloorNavigation;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               FloorNavigationGamepad;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_EntryPoints;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Down;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Down_1;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_EntryPoint;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Up;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Up_1;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_EntryPoints;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_FloorName;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_FloorNumber;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_FloorNumber_Gamepad;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        InfoFadeDelay;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InfoVisible;                                       // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3971[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFloorUp;                                         // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFloorDown;                                       // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  TestFloorName;                                     // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        TestFloorLevel;                                    // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3979[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLevelFloor                           FloorData;                                         // 0x340(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                CurrentMissionURL;                                 // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        TotalFloorCount;                                   // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_397E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLevelFloor>                   Floors;                                            // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentFloorIndex;                                 // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3980[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_PlanningMap_C*           W_Pre_Mission_Planning_Map;                        // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentFloorNumber;                                // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hidden;                                            // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUsingGamepad;                                    // 0x3E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_PreMission_Tablet_Floors_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void IncrementFloor(int32 CallFunc_Add_IntInt_ReturnValue);
	void DecrementFloor(int32 CallFunc_Subtract_IntInt_ReturnValue);
	void UpdateFloorInfo(const class FString& MissionURL, const struct FLevelFloor& FloorData, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ShowFloorInfo(float Delay);
	void HideFloorInfo();
	void BndEvt__W_PreMission_Tablet_Floors_btn_UpFloor_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_Floors_btn_DnFloor_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PreMission_Tablet_Floors_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Hide(float Delay, bool Collapse);
	void Reveal(float Delay);
	void InputChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_W_PreMission_Tablet_Floors(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UW_PreMission_PlanningMap_Level_C* CallFunc_GetCurrentLevelMap_CurrentLevelCanvas, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UW_PreMission_Tablet_C* CallFunc_WidgetGetParentOfClass_ReturnValue, float K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, float K2Node_Event_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class FName K2Node_Event_PageName, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Event_IsGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue, bool CallFunc_WasInputKeyJustPressed_ReturnValue_1);
	void OnFloorDown__DelegateSignature();
	void OnFloorUp__DelegateSignature();
};

}


