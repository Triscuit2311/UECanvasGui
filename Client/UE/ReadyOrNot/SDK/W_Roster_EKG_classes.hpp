#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x360 - 0x260)
// WidgetBlueprintGeneratedClass W_Roster_EKG.W_Roster_EKG_C
class UW_Roster_EKG_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimCritical_Horiz;                                // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimCritical;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         EKG;                                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EkgBox;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EkgBox_horiz;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EkgStats;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               EkgStats_horiz;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_EKG;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_bpm;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_bpm_horiz;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_EKG;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_EKG_horiz;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_BPM;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_bpm_horiz;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPlayerHealthStatus               HealthStatus;                                      // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColHealthy;                                        // 0x2DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColInjured;                                        // 0x2EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColDowned;                                         // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColIncapacitated;                                  // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColDead;                                           // 0x31C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColOff;                                            // 0x32C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCritical;                                        // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             HeartRateRange;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LowerProfile;                                      // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6E5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      HeartRateText;                                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CriticalAnim;                                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Roster_EKG_C* GetDefaultObj();

	int32 GetPulse(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void GetColorByHealth(struct FLinearColor* Linear, struct FSlateColor* Slate, enum class EPlayerHealthStatus Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetEkgStateByHealth(enum class EPlayerHealthStatus HealthStatus);
	void SetCritical();
	void SetStable();
	void ExecuteUbergraph_W_Roster_EKG(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class EPlayerHealthStatus Temp_byte_Variable_1, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, const struct FVector2D& Temp_struct_Variable_6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EPlayerHealthStatus K2Node_CustomEvent_HealthStatus, enum class ESlateVisibility Temp_byte_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_GetColorByHealth_Linear, const struct FSlateColor& CallFunc_GetColorByHealth_Slate, const struct FVector2D& K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, class UCommonTextBlock* K2Node_Select_Default_4, class UWidgetAnimation* K2Node_Select_Default_5, int32 CallFunc_GetPulse_ReturnValue, int32 CallFunc_GetPulse_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
};

}


