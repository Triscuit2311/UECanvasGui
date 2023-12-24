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

// 0x40 (0x40 - 0x0)
// Function W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C.AddObjectiveToList
struct UW_PreMission_Tablet_Objectives_C_AddObjectiveToList_Params
{
public:
	class UW_PreMission_Tablet_Objectives_Entry_C* ObjectiveEntry;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLast;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Divider;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UImage*                                CallFunc_SpawnObject_ReturnValue;                  // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C.OnLoaded_3BD6E0A444807EC303095394A3607018
struct UW_PreMission_Tablet_Objectives_C_OnLoaded_3BD6E0A444807EC303095394A3607018_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x798 (0x798 - 0x0)
// Function W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C.MissionChanged
struct UW_PreMission_Tablet_Objectives_C_MissionChanged_Params
{
public:
	class FString                                MissionURL;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 LevelData;                                         // 0x10(0x788)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8DA (0x8DA - 0x0)
// Function W_PreMission_Tablet_Objectives.W_PreMission_Tablet_Objectives_C.ExecuteUbergraph_W_PreMission_Tablet_Objectives
struct UW_PreMission_Tablet_Objectives_C_ExecuteUbergraph_W_PreMission_Tablet_Objectives_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ACE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class FString                                K2Node_Event_MissionURL;                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FLevelDataLookupTable                 K2Node_Event_LevelData;                            // 0x40(0x788)(None)
	class FString                                CallFunc_GetSelectedMode_OutMode;                  // 0x7C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelectedMode_ReturnValue;              // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECOOPMode                         CallFunc_GetCoopModeFromModeName_ReturnValue;      // 0x7D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ACF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AObjective>              CallFunc_Array_Get_Item;                           // 0x7E0(0x28)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x808(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x80C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue;                       // 0x820(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACoopGS*                               K2Node_DynamicCast_AsCoop_GS;                      // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AObjective*                            CallFunc_Array_Get_Item_1;                         // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x84C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x854(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x858(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x85C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_PreMission_Tablet_Objectives_Entry_C* CallFunc_Create_ReturnValue_1;                     // 0x860(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x868(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                Temp_class_Variable;                               // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsObjective;               // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSelectedModeName_OutName;              // 0x890(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelectedModeName_ReturnValue;          // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8A8(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x8C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ADA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0x8C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotGameState*                  K2Node_DynamicCast_AsReady_or_Not_Game_State;      // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x8D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


