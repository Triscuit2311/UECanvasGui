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

// 0x21 (0x21 - 0x0)
// Function W_RadioContainer.W_RadioContainer_C.OnNewChildSelected
struct UW_RadioContainer_C_OnNewChildSelected_Params
{
public:
	TScriptInterface<class IIRadioWidget_C>      NewSelectedChild;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Equals_Result;                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3140[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function W_RadioContainer.W_RadioContainer_C.RegisterRadioChild
struct UW_RadioContainer_C_RegisterRadioChild_Params
{
public:
	TScriptInterface<class IIRadioWidget_C>      NewChild;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


