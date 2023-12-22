#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x179 (0x3D9 - 0x260)
// WidgetBlueprintGeneratedClass W_AudioPlayer.W_AudioPlayer_C
class UW_AudioPlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_AudioPlayer_Button_C*               btn_FastForward;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_Button_C*               btn_Loop;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_Button_C*               btn_Play;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_Button_C*               btn_Restart;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_Button_C*               btn_Rewind;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_AudioPlayer_Button_C*               btn_Stop;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Controls;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           Header;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PlayTime;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Player;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlay;                                            // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPause;                                           // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnStop;                                            // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRewind;                                          // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnRestart;                                         // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnLoop;                                            // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFastForward;                                     // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_AudioPlayer_Button_C*               CurrentActiveButton;                               // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Briefing_Audio_PlayStates       PlayState;                                         // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRewinding;                                        // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFastForward;                                      // 0x332(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       Buttons;                                           // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         LastButton;                                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bPaused;                                           // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODAudioComponent*                   FMODComponent;                                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStopped;                                          // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8EB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TimerDurationText;                                 // 0x360(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AudioDuration;                                     // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLoop;                                             // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TimelinePosition;                                  // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AudioLoopDelay;                                    // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HeaderText;                                        // 0x388(0x18)(Edit, BlueprintVisible)
	int32                                        SkipTimeIncrement;                                 // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bScrubbing;                                        // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            FMODEvent;                                         // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    FMODEventInstance;                                 // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUsingEvent;                                       // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDesignTime;                                       // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8F7[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoStartDelay;                                    // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExpandable;                                       // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_8F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Volume;                                            // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAudioCompleted;                                  // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bUseDarkTheme;                                     // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UW_AudioPlayer_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetTextThemeColor(struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_GetColorByName_LinearColor, const struct FSlateColor& CallFunc_GetColorByName_SlateColor, const struct FLinearColor& CallFunc_GetColorByName_LinearColor_1, const struct FSlateColor& CallFunc_GetColorByName_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	bool IsPlaying(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
	void SetVolume(float Volume, bool CallFunc_IsValid_ReturnValue);
	void SetExpandable(bool Expandable, bool StartCollapsed);
	void Collapse();
	void Expand(bool AutoPlay);
	void SetFMODEvent(class UFMODEvent* NewEvent, bool AutoPlay, bool CallFunc_IsValid_ReturnValue);
	void InitializeWithFMODEvent(class UFMODEvent* FMODEvent, bool bAutoPlay, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void SetLabelText(class FText LabelText);
	void Pause(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue);
	void ScrubTime(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetScrubbedTime_ReturnValue);
	int32 GetScrubbedTime(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Set_Current_Audio_Text(int32 CurrentTime, class FText CallFunc_Get_Timer_Text_TimerText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Restart(bool CallFunc_IsValid_ReturnValue);
	void ToggleLooping(bool CallFunc_Not_PreBool_ReturnValue);
	void Stop(bool CallFunc_IsValid_ReturnValue);
	void Get_Timer_Text(int32 Time, class FText* TimerText, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimespan& CallFunc_FromMilliseconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Play(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Get_Timer_Text_TimerText, int32 CallFunc_GetLength_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, int32 CallFunc_GetLength_ReturnValue_1, class FText CallFunc_Get_Timer_Text_TimerText_1);
	void SetLooping(bool IsLooping);
	void SetState(enum class E_Briefing_Audio_PlayStates AudioPlayState, bool K2Node_SwitchEnum_CmpSuccess);
	void SetTabletState(bool IsAwake);
	void AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible);
	void Reveal(float Delay);
	void Hide(float Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_Briefing_AudioControls_btn_Play_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_Stop_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_Restart_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_Loop_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_Rewind_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_Rewind_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_FastForward_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Briefing_AudioControls_btn_FastForward_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void AudioEnd();
	void InitializeFMODComponent(class UFMODAudioComponent* FMODComponent, bool AutoPlay);
	void Destruct();
	void AutoPlay();
	void SetVisualTheme(bool UseDarkTheme);
	void ExecuteUbergraph_W_AudioPlayer(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsAwake, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, float K2Node_Event_Delay_1, float K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetTimelinePosition_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFMODAudioComponent* K2Node_CustomEvent_FMODComponent, bool K2Node_CustomEvent_AutoPlay, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool K2Node_Event_UseDarkTheme, const struct FSlateColor& CallFunc_GetTextThemeColor_SlateColor, TArray<class UW_AudioPlayer_Button_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_AudioPlayer_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnAudioCompleted__DelegateSignature();
	void OnPause__DelegateSignature();
	void OnFastForward__DelegateSignature();
	void OnLoop__DelegateSignature();
	void OnRestart__DelegateSignature();
	void OnRewind__DelegateSignature();
	void OnStop__DelegateSignature();
	void OnPlay__DelegateSignature();
};

}


