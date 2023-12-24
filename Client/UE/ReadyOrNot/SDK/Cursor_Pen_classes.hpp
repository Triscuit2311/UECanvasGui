#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass Cursor_Pen.Cursor_Pen_C
class UCursor_Pen_C : public UCursorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       Cursor_Switcher;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_7;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Mouse;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MouseOverlay;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PenColorSwitcher;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCursor_Pen_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Cursor_Pen(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable, class ABP_BaseController_C* K2Node_DynamicCast_AsBP_Base_Controller, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Select_Default);
};

}


