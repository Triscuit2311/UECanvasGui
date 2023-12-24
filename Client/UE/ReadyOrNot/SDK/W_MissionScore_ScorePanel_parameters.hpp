#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.GetFocusTarget
struct UW_MissionScore_ScorePanel_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Focus;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.BackPage
struct UW_MissionScore_ScorePanel_C_BackPage_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.GetMissionObjectiveFromScoringComponent
struct UW_MissionScore_ScorePanel_C_GetMissionObjectiveFromScoringComponent_Params
{
public:
	class UScoringComponent*                     ScoringComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AObjective*                            MatchingObjective;                                 // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4198[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4199[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AObjective*                            CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.SoftObjectivesReady
struct UW_MissionScore_ScorePanel_C_SoftObjectivesReady_Params
{
public:
	class UW_MissionScore_ScorePanel_SubEntry_C* EntryWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.PrimaryObjectivesReady
struct UW_MissionScore_ScorePanel_C_PrimaryObjectivesReady_Params
{
public:
	class UW_MissionScore_ScorePanel_SubEntry_C* EntryWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x114 (0x114 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.PopulateObjectives
struct UW_MissionScore_ScorePanel_C_PopulateObjectives_Params
{
public:
	TArray<struct FScoreData>                    Scores;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	enum class EObjectiveLevel                   ObjectiveLevel;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_MissionScore_ScorePanel_SubEntry_C* LastAddedSubEntry;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLastEntryBound;                                   // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastIndex;                                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RevealDelay;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScoreData                            CallFunc_Array_Get_Item;                           // 0x38(0x30)(ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AObjective*                            CallFunc_GetMissionObjectiveFromScoringComponent_MatchingObjective; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsObjectiveCompleted_ReturnValue;         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_SubEntry_C* CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput;                    // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41B6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xF4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x104(0x10)(ZeroConstructor, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.Hide
struct UW_MissionScore_ScorePanel_C_Hide_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Collapse;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.SetInputMode
struct UW_MissionScore_ScorePanel_C_SetInputMode_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.ChangePage
struct UW_MissionScore_ScorePanel_C_ChangePage_Params
{
public:
	class FName                                  PageName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.PreConstruct
struct UW_MissionScore_ScorePanel_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.AddScores
struct UW_MissionScore_ScorePanel_C_AddScores_Params
{
public:
	TArray<struct FScoreGroup>                   Scores;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.AddPenalties
struct UW_MissionScore_ScorePanel_C_AddPenalties_Params
{
public:
	TArray<struct FScorePenaltyData>             Scores;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.Reveal
struct UW_MissionScore_ScorePanel_C_Reveal_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.PenalizeProgress
struct UW_MissionScore_ScorePanel_C_PenalizeProgress_Params
{
public:
	class UW_MissionScore_ScorePanel_Entry_C*    EntryWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.AddToProgress
struct UW_MissionScore_ScorePanel_C_AddToProgress_Params
{
public:
	class UW_MissionScore_ScorePanel_Entry_C*    EntryWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Score;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x259 (0x259 - 0x0)
// Function W_MissionScore_ScorePanel.W_MissionScore_ScorePanel_C.ExecuteUbergraph_W_MissionScore_ScorePanel
struct UW_MissionScore_ScorePanel_C_ExecuteUbergraph_W_MissionScore_ScorePanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_Delay_1;                              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Collapse;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsGamepad;                            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_PageName;                             // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FScoreGroup>                   K2Node_CustomEvent_Scores_1;                       // 0x38(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FScoreGroup                           CallFunc_Array_Get_Item;                           // 0x48(0x38)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FScorePenaltyData>             K2Node_CustomEvent_Scores;                         // 0x88(0x10)(ConstParm, ReferenceParm)
	struct FScorePenaltyData                     CallFunc_Array_Get_Item_1;                         // 0x98(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41D8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Delay;                                // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_MissionScore_ScorePanel_Entry_C*    K2Node_CustomEvent_EntryWidget_1;                  // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Score_1;                        // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScorePenaltyData                     CallFunc_Map_Find_Value;                           // 0x100(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x11C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x138(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x148(0x18)(None)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput;                    // 0x160(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UW_MissionScore_ScorePanel_Entry_C*    CallFunc_Create_ReturnValue;                       // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput_1;                  // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput_2;                  // 0x1A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_MissionScore_ScorePanel_Entry_C*    K2Node_CustomEvent_EntryWidget;                    // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Score;                          // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AScoringManager*                       CallFunc_Get_ReturnValue;                          // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScoreGroup                           CallFunc_Map_Find_Value_1;                         // 0x1E0(0x38)(ContainsInstancedReference)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTotalGivenScoresFromArray_ReturnValue; // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalScoreCountFromArray_ReturnValue;  // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetGivenScoreCountFromArray_ReturnValue;  // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MissionScore_ScorePanel_Entry_C*    CallFunc_Create_ReturnValue_1;                     // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IReadyOrNotUI_C>      CallFunc_Reveal_self_CastInput_3;                  // 0x240(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_3;      // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


