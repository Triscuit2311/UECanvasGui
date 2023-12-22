#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARSessionFunctionLibrary
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARSessionFunctionLibrary* GetDefaultObj();

	void StartLuminARSession(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ULuminARSessionConfig* Configuration);
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARFrameFunctionLibrary
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARFrameFunctionLibrary* GetDefaultObj();

	bool LuminARLineTrace(class UObject* WorldContextObject, struct FVector2D& ScreenPosition, TSet<enum class ELuminARLineTraceChannel> TraceChannels, TArray<struct FARTraceResult>* OutHitResults);
	enum class ELuminARTrackingState GetTrackingState();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
class ULuminARImageTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULuminARImageTrackingFunctionLibrary* GetDefaultObj();

	class ULuminARCandidateImage* AddLuminRuntimeCandidateImageEx(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, enum class EMagicLeapImageTargetOrientation InAxisOrientation);
	class ULuminARCandidateImage* AddLuminRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary);
};

// 0xC0 (0x2E0 - 0x220)
// Class MagicLeapAR.LuminAROrigin
class ALuminAROrigin : public AAROriginActor
{
public:
	class UMRMeshComponent*                      MRMeshComponent;                                   // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    PlaneSurfaceMaterial;                              // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1836[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALuminAROrigin* GetDefaultObj();

};

// 0x90 (0x1A0 - 0x110)
// Class MagicLeapAR.LuminARSessionConfig
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	struct FMagicLeapPlanesQuery                 PlanesQuery;                                       // 0x110(0x60)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        MaxPlaneQueryResults;                              // 0x170(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPlaneArea;                                      // 0x174(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bArbitraryOrientationPlaneDetection;               // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1838[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PlaneSearchExtents;                                // 0x17C(0xC)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags;                                   // 0x188(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	bool                                         bDiscardZeroExtentPlanes;                          // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDefaultUseUnreliablePose;                         // 0x199(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminARSessionConfig* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MagicLeapAR.LuminARLightEstimate
class ULuminARLightEstimate : public UARBasicLightEstimate
{
public:
	TArray<float>                                AmbientIntensityNits;                              // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULuminARLightEstimate* GetDefaultObj();

	TArray<float> GetAmbientIntensityNits();
};

// 0x8 (0x60 - 0x58)
// Class MagicLeapAR.LuminARCandidateImage
class ULuminARCandidateImage : public UARCandidateImage
{
public:
	bool                                         bUseUnreliablePose;                                // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bImageIsStationary;                                // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMagicLeapImageTargetOrientation  AxisOrientation;                                   // 0x5A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_184F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULuminARCandidateImage* GetDefaultObj();

	bool GetUseUnreliablePose();
	bool GetImageIsStationary();
	enum class EMagicLeapImageTargetOrientation GetAxisOrientation();
};

}


