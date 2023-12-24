#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x408 - 0x260)
// WidgetBlueprintGeneratedClass W_RadialIcon_MapMarking.W_RadialIcon_MapMarking_C
class UW_RadialIcon_MapMarking_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Select;                                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake;                                             // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Grow;                                              // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ID;                                                // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            IconImage;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HasSubCommands;                                    // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_36FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FST_Commands                          CommandStructure;                                  // 0x2C8(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSwatCommand                          SwatCommand;                                       // 0x338(0x60)(Edit, BlueprintVisible)
	float                                        IconSize;                                          // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFBasicIconSettings                   Settings;                                          // 0x39C(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          CurrentColor;                                      // 0x3C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Highlighted;                                       // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3700[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3701[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  IconText;                                          // 0x3E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EPreMissionSubCategory            SubCategory;                                       // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3702[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               PreMissionPlanning;                                // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RadialIcon_MapMarking_C* GetDefaultObj();

	struct FLinearColor Get_Icon_ColorAndOpacity_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnUnhighlight(bool Unselected);
	void Selected();
	void OnHighlight(bool Selected);
	void ExecuteUbergraph_W_RadialIcon_MapMarking(int32 EntryPoint, bool K2Node_Event_Selected, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue_1, class UWidgetAnimation* Temp_object_Variable, enum class EIconAnimationStyles Temp_byte_Variable, bool K2Node_Event_Unselected, class UWidgetAnimation* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


