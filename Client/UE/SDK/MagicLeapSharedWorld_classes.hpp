#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x3D8 - 0x308)
// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData       SharedWorldData;                                   // 0x308(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNewLocalDataFromClients;                         // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PinSelectionConfidenceThreshold;                   // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DA[0xA4];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AMagicLeapSharedWorldPlayerController* ChosenOne;                                         // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMagicLeapSharedWorldGameMode* GetDefaultObj();

	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
};

// 0x40 (0x2D0 - 0x290)
// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData       SharedWorldData;                                   // 0x290(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms;                               // 0x2A0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSharedWorldDataUpdated;                          // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAlignmentTransformsUpdated;                      // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AMagicLeapSharedWorldGameState* GetDefaultObj();

	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	struct FTransform CalculateXRCameraRootTransform();
};

// 0x18 (0x598 - 0x580)
// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:
	uint8                                        Pad_19FB[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMagicLeapSharedWorldPlayerController* GetDefaultObj();

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};

}


