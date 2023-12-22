#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1C0 - 0x1A8)
// Class LiveLinkMvnPlugin.LiveLinkGameInstance
class ULiveLinkGameInstance : public UGameInstance
{
public:
	uint16                                       PortNumber;                                        // 0x1A8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFC[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkGameInstance* GetDefaultObj();

};

// 0x158 (0x180 - 0x28)
// Class LiveLinkMvnPlugin.LiveLinkMvnRetargetAsset
class ULiveLinkMvnRetargetAsset : public ULiveLinkRetargetAsset
{
public:
	uint8                                        Pad_F2F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EXsensRetargetNamingConvention    M_remapping_convention;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F30[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            M_remapping_table;                                 // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EXsensMapping, struct FRemappingRowHandle> M_remapping_rows;                                  // 0x48(0x50)(Edit, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         M_skeletal_mesh;                                   // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F31[0xC8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         TPoseAnimation;                                    // 0x168(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsForwardY;                                        // 0x170(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F33[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkMvnRetargetAsset* GetDefaultObj();

	class FName GetRemappedBoneNameByConvention(enum class EXsensMapping Bone, enum class EXsensRetargetNamingConvention Convention);
	class FName GetCustomRemappedBoneName(enum class EXsensMapping Bone);
};

// 0x8 (0xA8 - 0xA0)
// Class LiveLinkMvnPlugin.LiveLinkMvnSourceSettings
class ULiveLinkMvnSourceSettings : public ULiveLinkSourceSettings
{
public:
	int32                                        PortNumber;                                        // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F39[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkMvnSourceSettings* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class LiveLinkMvnPlugin.LiveLinkMvnTransformController
class ULiveLinkMvnTransformController : public ULiveLinkControllerBase
{
public:
	int32                                        SegmentIndex;                                      // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkMvnTransformController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkMvnPlugin.MvnRemoteControlManager
class UMvnRemoteControlManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMvnRemoteControlManager* GetDefaultObj();

	void StopRecording(float _fTimeOffsetInSeconds);
	void StartRecording(float _fTimeOffsetInSeconds);
};

}


