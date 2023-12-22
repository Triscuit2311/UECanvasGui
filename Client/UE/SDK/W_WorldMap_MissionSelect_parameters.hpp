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

// 0xD (0xD - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnShow
struct UW_WorldMap_MissionSelect_C_OnShow_Params
{
public:
	class FName                                  SelectedMission;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameModeSelectable_ReturnValue;         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x840 (0x840 - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.UpdateMissionScore
struct UW_WorldMap_MissionSelect_C_UpdateMissionScore_Params
{
public:
	class FName                                  SelectionMission;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                LastLoadedScoreMission;                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 CallFunc_GetMapDetailsFromName_ReturnValue;        // 0x28(0x788)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Map_Find_Value;                           // 0x7B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x7D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FBasicLevelStats                      CallFunc_LoadLevelStats_OutStats;                  // 0x7E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x7EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ConvertFloatToStringMinutes_Detail_ReturnValue; // 0x7F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_CalculateGradeLetterFromPercentage_ReturnValue; // 0x800(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x810(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x828(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.PreConstruct
struct UW_WorldMap_MissionSelect_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UW_WorldMap_MissionSelect_C_BndEvt__W_WorldMap_MissionSelect_btn_AcceptMission_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.Tick
struct UW_WorldMap_MissionSelect_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D (0x4D - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.ExecuteUbergraph_W_WorldMap_MissionSelect
struct UW_WorldMap_MissionSelect_C_ExecuteUbergraph_W_WorldMap_MissionSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameModeSelectable_ReturnValue;         // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function W_WorldMap_MissionSelect.W_WorldMap_MissionSelect_C.OnSetMissionButtonClicked__DelegateSignature
struct UW_WorldMap_MissionSelect_C_OnSetMissionButtonClicked__DelegateSignature_Params
{
public:
	class UW_WorldMap_MissionSelect_C*           BtnClicked;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


