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

// 0x4 (0x4 - 0x0)
// Function W_WeaponWheel_ItemStat_FireRate.W_WeaponWheel_ItemStat_FireRate_C.Initialize
struct UW_WeaponWheel_ItemStat_FireRate_C_Initialize_Params
{
public:
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_WeaponWheel_ItemStat_FireRate.W_WeaponWheel_ItemStat_FireRate_C.Tick
struct UW_WeaponWheel_ItemStat_FireRate_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_WeaponWheel_ItemStat_FireRate.W_WeaponWheel_ItemStat_FireRate_C.PreConstruct
struct UW_WeaponWheel_ItemStat_FireRate_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x44 (0x44 - 0x0)
// Function W_WeaponWheel_ItemStat_FireRate.W_WeaponWheel_ItemStat_FireRate_C.ExecuteUbergraph_W_WeaponWheel_ItemStat_FireRate
struct UW_WeaponWheel_ItemStat_FireRate_C_ExecuteUbergraph_W_WeaponWheel_ItemStat_FireRate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


