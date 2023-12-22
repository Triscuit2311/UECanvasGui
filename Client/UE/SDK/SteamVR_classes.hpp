#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xD8 - 0xB0)
// Class SteamVR.SteamVRChaperoneComponent
class USteamVRChaperoneComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnLeaveBounds;                                     // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReturnToBounds;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamVRChaperoneComponent* GetDefaultObj();

	void SteamVRChaperoneEvent__DelegateSignature();
	TArray<struct FVector> GetBounds();
};

// 0x0 (0x28 - 0x28)
// Class SteamVR.SteamVRFunctionLibrary
class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USteamVRFunctionLibrary* GetDefaultObj();

	void GetValidTrackedDeviceIds(enum class ESteamVRTrackedDeviceType DeviceType, TArray<int32>* OutTrackedDeviceIds);
	bool GetTrackedDevicePositionAndOrientation(int32 DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation);
	bool GetHandPositionAndOrientation(int32 ControllerIndex, enum class EControllerHand Hand, struct FVector* OutPosition, struct FRotator* OutOrientation);
};

// 0x10 (0x38 - 0x28)
// Class SteamVR.SteamVRHQStereoLayerShape
class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
{
public:
	bool                                         bCurved;                                           // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAntiAlias;                                        // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoCurveMinDistance;                              // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AutoCurveMaxDistance;                              // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamVRHQStereoLayerShape* GetDefaultObj();

	void SetCurved(bool InCurved);
	void SetAutoCurveMinDistance(float InDistance);
	void SetAutoCurveMaxDistance(float InDistance);
	void SetAntiAlias(bool InAntiAlias);
};

}


