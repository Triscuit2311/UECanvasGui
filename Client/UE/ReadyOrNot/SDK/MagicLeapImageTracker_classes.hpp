#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x270 - 0x1F8)
// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
class UMagicLeapImageTrackerComponent : public USceneComponent
{
public:
	class UTexture2D*                            TargetImageTexture;                                // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x200(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongerDimension;                                   // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStationary;                                     // 0x214(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseUnreliablePose;                                // 0x215(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapImageTargetOrientation  AxisOrientation;                                   // 0x216(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1913[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSetImageTargetSucceeded;                         // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetImageTargetFailed;                            // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageTargetFound;                                // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageTargetLost;                                 // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageTargetUnreliableTracking;                   // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1915[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapImageTrackerComponent* GetDefaultObj();

	bool SetTargetAsync(class UTexture2D* ImageTarget);
	bool RemoveTargetAsync();
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapImageTrackerFunctionLibrary* GetDefaultObj();

	void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
	bool IsImageTrackingEnabled();
	int32 GetMaxSimultaneousTargets();
	void EnableImageTracking(bool bEnable);
};

}


