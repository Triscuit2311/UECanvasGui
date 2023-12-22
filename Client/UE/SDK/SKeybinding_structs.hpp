#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x47 - 0x0)
// UserDefinedStruct SKeybinding.SKeybinding
struct FSKeybinding
{
public:
	bool                                         bEnabled_25_F08E79EB4E2E6CF698DEAAA10E295B56;      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAxis_1_A1DF4F6E4BDA7692A09F6FA8C8645DBE;          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BindingName_4_DD389C7B4C014D8F5C467B8170ED4730;    // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FriendlyName_7_CB00E99E4223301A552C01A676160904;   // 0x10(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_9_AF6F4EDC41981F1568B1BD8AB92DDD79;    // 0x28(0x18)(Edit, BlueprintVisible)
	float                                        AxisScale_12_AA83EADC43835EFEA1B4309EA12EAC6A;     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputKeyCategory                 InputKeyCategory_18_F956E79941840E04EF8A899C710B2267; // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCannotBeUnbindable_20_43E4DD77401AC44133B6A2A2A65C12BE; // 0x45(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsReadOnly_23_7CD813F14C5C7D1564166F80ED60C1D6;   // 0x46(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


