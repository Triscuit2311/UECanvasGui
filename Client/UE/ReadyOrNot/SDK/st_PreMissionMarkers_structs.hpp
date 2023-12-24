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

// 0x60 (0x60 - 0x0)
// UserDefinedStruct st_PreMissionMarkers.st_PreMissionMarkers
struct FSt_PreMissionMarkers
{
public:
	class FText                                  DisplayName_31_AF7FFC3042F577CE1018B8A24ADD9D05;   // 0x0(0x18)(Edit, BlueprintVisible)
	class UTexture2D*                            Icon_2_D3D28990436292028547EBB8B60C81C9;           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            OutlineIcon_40_AB6AC2D645BBBA6C01C498A77659F97D;   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color_5_90E9314547ECC1ADBCF628BA38D93282;          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            SecondaryIcon_21_6853591546B9D7B5E52257AB555B4BBC; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotates_8_17E0B7A9444B7FC82AA6539C33D18EC3;        // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         OnlyRotateSecondaryIcon_24_83D016A94D9B580910C3FAB64BD75299; // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3708[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             RotationPivotPoint_27_291ED8224CDE7CEC81721B9820CB5B95; // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPlayerNodes_17_E32B4D574197677BCC959CADCB5EA1D7; // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3709[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnchors                              PlayerNodeAnchor_28_F5F675154034BFA0607308BBB9232894; // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor)
};

}


