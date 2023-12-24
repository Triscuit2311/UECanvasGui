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

// 0x48 (0x48 - 0x0)
// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
struct UInAppPurchaseComponent_TryPurchaseItemAsync_Params
{
public:
	struct FPurchaseItemDetails                  ItemDetails;                                       // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1808[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
struct UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params
{
public:
	int32                                        InNumPages;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
struct UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params
{
public:
	TArray<class FString>                        ItemIDs;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params
{
public:
	struct FPurchaseConfirmation                 PurchaseConfirmations;                             // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
struct UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params
{
public:
	class FString                                LogMessage;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params
{
public:
	TArray<struct FPurchaseConfirmation>         PurchaseHistory;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params
{
public:
	TArray<struct FPurchaseItemDetails>          ItemsDetails;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
struct UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params
{
public:
	class AActor*                                InStabilizationDepthActor;                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetFocusActor;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
struct UMagicLeapHMDFunctionLibrary_SetFocusActor_Params
{
public:
	class AActor*                                InFocusActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetStabilizationActor;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1822[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
struct UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params
{
public:
	struct FRotator                              InBaseRotation;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
struct UMagicLeapHMDFunctionLibrary_SetBasePosition_Params
{
public:
	struct FVector                               InBasePosition;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
struct UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params
{
public:
	struct FQuat                                 InBaseOrientation;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
struct UMagicLeapHMDFunctionLibrary_SetAppReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
struct UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel
struct UMagicLeapHMDFunctionLibrary_GetPlatformAPILevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel
struct UMagicLeapHMDFunctionLibrary_GetMinimumAPILevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params
{
public:
	struct FMagicLeapHeadTrackingState           State;                                             // 0x0(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1835[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params
{
public:
	TSet<enum class EMagicLeapHeadTrackingMapEvent> MapEvents;                                         // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo
struct UMagicLeapHMDFunctionLibrary_GetGraphicsClientPerformanceInfo_Params
{
public:
	struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo;                                   // 0x0(0x1C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1843[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks
struct UMagicLeapMeshTrackerComponent_SelectMeshBlocks_Params
{
public:
	struct FMagicLeapTrackingMeshInfo            NewMeshInfo;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockRequest>    RequestedMesh;                                     // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
struct UMagicLeapMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                Confidence;                                        // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates
struct UMagicLeapMeshTrackerComponent_GetNumQueuedBlockUpdates_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh
struct UMagicLeapMeshTrackerComponent_DisconnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh
struct UMagicLeapMeshTrackerComponent_ConnectMRMesh_Params
{
public:
	class UMRMeshComponent*                      InMRMeshPtr;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector
struct UMagicLeapMeshTrackerComponent_ConnectBlockSelector_Params
{
public:
	TScriptInterface<class IMagicLeapMeshBlockSelectorInterface> Selector;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
struct IMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params
{
public:
	struct FMagicLeapTrackingMeshInfo            NewMeshInfo;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMagicLeapMeshBlockRequest>    RequestedMesh;                                     // 0x18(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
struct UMagicLeapRaycastComponent_RequestRaycast_Params
{
public:
	struct FMagicLeapRaycastQueryParams          RequestParams;                                     // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ResultDelegate;                                    // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
struct UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params
{
public:
	struct FMagicLeapRaycastHitResult            HitResult;                                         // 0x0(0x24)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
struct UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalFovDegrees;                              // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CollideWithUnobserved;                             // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1889[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UserData;                                          // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapRaycastQueryParams          ReturnValue;                                       // 0x38(0x38)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


