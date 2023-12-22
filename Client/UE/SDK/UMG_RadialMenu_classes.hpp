#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15C (0x3BC - 0x260)
// WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C
class UUMG_RadialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RadialBackground;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadiusDebug;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Segments;                                          // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialBase;                                      // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IndexRaw;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynaMat;                                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   Children;                                          // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         AllowResizing;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ItemOffsetRadius;                                  // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectionChanged;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class APlayerController*                     InputController;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EJoystickTypes                    JoystickToUse;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MouseDeadzone;                                     // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInDeadzone;                                       // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EnteredDeadzone;                                   // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitedDeadzone;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             CurrentInput;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JoystickDeadzone;                                  // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultToMouseIfNoJoystick;                        // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DefaultPlayerIndex;                                // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         UseDeadzoneEvents;                                 // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            SelectionChangedSound;                             // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoCenterMouse;                                   // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AutoRotateForUp;                                   // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bUseCustomInput;                                   // 0x322(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F11[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CustomInput;                                       // 0x324(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomTexture;                                  // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              RadialTexture;                                     // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomColors;                                   // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InnterRingColor;                                   // 0x33C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OuterRingColor;                                    // 0x34C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RingMainColor;                                     // 0x35C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnhighlightColor;                                  // 0x36C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSelectionInWidget;                             // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3F14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CursorAngle;                                       // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              RadialMaterial;                                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RadialSize;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectionSubmitted;                                // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bUseClickSubmit;                                   // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CenterCoordinates;                                 // 0x3AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseCenterScreen;                                  // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OuterRadius;                                       // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RadialMenu_C* GetDefaultObj();

	void SetCenterCoordinates(const struct FVector2D& CenterCoordinates);
	void UpdateMaterialColors(const struct FLinearColor& CursorColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& TintColor);
	void UpdateMaterialVisuals();
	void GetCustomInput(struct FVector2D* Input, bool* Valid, float CallFunc_VSize2D_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetCustomInput(const struct FVector2D& CustomInput);
	void UpdateDirectionWithCustomInput();
	void RemoveChildIndexFromRadialMenu(int32 IndexToRemove, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	void RemoveChildWidgetFromRadialMenu(class UUserWidget*& ItemToFind, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	class FText DebugIndex(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	struct FVector2D FixInputRotation(const struct FVector2D& Input, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, float CallFunc_GetSectionDegreeSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue);
	void FixMainRotation(float CallFunc_GetSectionDegreeSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void AutoRegisterToInput(bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* K2Node_Select_Default, bool CallFunc_RegisterPlayerInput_Success);
	void UpdateInput(float CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_VSize2D_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1);
	void RegisterPlayerInput(class APlayerController* Controller, bool* Success, TScriptInterface<class IIRadialInput_C> K2Node_DynamicCast_AsIRadial_Input, bool K2Node_DynamicCast_bSuccess);
	void UpdateDirectionWithJoystick(TScriptInterface<class IIRadialInput_C> K2Node_DynamicCast_AsIRadial_Input, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetJoystickDirection_StickInput, float CallFunc_VSize2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void GetCurrentIndex(int32* Index, bool* Valid, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetChild(int32 Index, class UUserWidget** Output, bool* Success, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	void GetRadialMaterial(class UMaterialInstanceDynamic** RadialMaterial, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetIndex(int32 Index, bool Force, int32 NewIndex, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid, int32 Temp_int_Loop_Counter_Variable, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IIRadialSlot_C> K2Node_DynamicCast_AsIRadial_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UUserWidget* CallFunc_GetSelectedWidget_Output, TScriptInterface<class IIRadialSlot_C> K2Node_DynamicCast_AsIRadial_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_GetSelectedWidget_Output_1, TScriptInterface<class IIRadialSlot_C> K2Node_DynamicCast_AsIRadial_Slot_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void UpdateAllChildrenPositions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateChildPosition(int32 Index, const struct FVector& Out_dir, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetSectionDegreeSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_GetSectionDegreeSize_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void ClearChildren(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetSelectedWidget(class UUserWidget** Output, class UUserWidget* CallFunc_Array_Get_Item);
	void AddChildToRadialMenu(class UUserWidget* Content, bool* Success, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UpdateDirectionWithMouseCursor(bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_Viewport__GetMousePosition_PosX, float CallFunc_Viewport__GetMousePosition_PosY, bool CallFunc_Viewport__GetMousePosition_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_VSize2D_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	float GetSectionDegreeSize(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetInputDirection(const struct FVector2D& Direction);
	void Construct();
	void UpdateSegments(int32 Segments);
	void InDeadZone(bool InDeadZone);
	void UpdateMaterials();
	void PreConstruct(bool IsDesignTime);
	void ClearSelection();
	void ExecuteUbergraph_UMG_RadialMenu(int32 EntryPoint, int32 K2Node_CustomEvent_Segments, float CallFunc_GetSectionDegreeSize_ReturnValue, bool K2Node_CustomEvent_InDeadzone, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& K2Node_CustomEvent_Direction, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FVector2D& CallFunc_FixInputRotation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue);
	void SelectionSubmitted__DelegateSignature(int32 SelectionIndex);
	void ExitedDeadzone__DelegateSignature();
	void EnteredDeadzone__DelegateSignature();
	void SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
};

}


