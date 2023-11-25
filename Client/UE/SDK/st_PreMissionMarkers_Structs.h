#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct st_PreMissionMarkers.st_PreMissionMarkers
	 * Size -> 0x0060
	 */
	struct Fst_PreMissionMarkers
	{
	public:
		class FText                                                  DisplayName_31_AF7FFC3042F577CE1018B8A24ADD9D05;         // 0x0000(0x0018) Edit, BlueprintVisible
		class UTexture2D*                                            Icon_2_D3D28990436292028547EBB8B60C81C9;                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                            OutlineIcon_40_AB6AC2D645BBBA6C01C498A77659F97D;         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                          Color_5_90E9314547ECC1ADBCF628BA38D93282;                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                            SecondaryIcon_21_6853591546B9D7B5E52257AB555B4BBC;       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         Rotates_8_17E0B7A9444B7FC82AA6539C33D18EC3;              // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                         OnlyRotateSecondaryIcon_24_83D016A94D9B580910C3FAB64BD75299; // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                RotationPivotPoint_27_291ED8224CDE7CEC81721B9820CB5B95;  // 0x0044(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         HasPlayerNodes_17_E32B4D574197677BCC959CADCB5EA1D7;      // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnchors                                              PlayerNodeAnchor_28_F5F675154034BFA0607308BBB9232894;    // 0x0050(0x0010) Edit, BlueprintVisible, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
