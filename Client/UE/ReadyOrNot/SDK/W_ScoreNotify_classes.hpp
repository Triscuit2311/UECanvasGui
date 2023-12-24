#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x320 - 0x260)
// WidgetBlueprintGeneratedClass W_ScoreNotify.W_ScoreNotify_C
class UW_ScoreNotify_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_HideScore;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ShowScore;                                    // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                RedLine_Image;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Score_Text;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Score_Value;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ScoreText;                                         // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        CalculatedScore;                                   // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bGive;                                             // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2D9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTime;                                       // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScoreCounterSpeed;                                 // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                FinalString;                                       // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bTextAnimationFinished;                            // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Iterator;                                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Chars;                                             // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        CurrentDelay;                                      // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenLetters;                               // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenWords;                                 // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EndString;                                         // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bFadeOut;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalScore;                                        // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElapsedTime_Text;                                  // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    FMOD_ScoreCounterInstance;                         // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    FMOD_ScoreNotifyInstance;                          // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_ScoreNotify_C* GetDefaultObj();

	void DestroyWidget();
	void OnInitialized();
	void PlayRewardAnim();
	void PreConstruct(bool IsDesignTime);
	void InitScoreData(class FText InScoreText, int32 InScore, bool bGive);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_W_ScoreNotify(int32 EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFMODEvent* Temp_object_Variable, bool Temp_bool_Variable, class UFMODEvent* Temp_object_Variable_1, class UFMODEvent* Temp_object_Variable_2, class UFMODEvent* Temp_object_Variable_3, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_2, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_CustomEvent_InScoreText, int32 K2Node_CustomEvent_InScore, bool K2Node_CustomEvent_bGive, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, const class FString& K2Node_Select_Default, bool Temp_bool_Variable_3, const class FString& K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_SimulateAnimatedText_bCompleted, const class FString& CallFunc_SimulateAnimatedText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UFMODEvent* K2Node_Select_Default_2, class UFMODEvent* K2Node_Select_Default_3, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_EventInstanceIsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EventInstanceIsValid_ReturnValue_1, bool CallFunc_EventInstanceIsValid_ReturnValue_2, bool CallFunc_EventInstanceIsValid_ReturnValue_3, bool CallFunc_EventInstanceIsValid_ReturnValue_4, bool CallFunc_EventInstanceIsValid_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EventInstanceIsValid_ReturnValue_6, bool CallFunc_EventInstanceIsValid_ReturnValue_7);
};

}


