#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USteamVRInputDeviceFunctionLibrary* GetDefaultObj();

	void ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet);
	void ShowAllSteamVR_ActionOrigins();
	float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);
	void SetPoseSource(bool bUseSkeletonPose);
	void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);
	bool ResetSeatedPosition();
	void PlaySteamVR_HapticFeedback(enum class ESteamVRHand Hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude);
	float GetUserIPD();
	bool GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo);
	void GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, const TArray<enum class ESteamVRInputStringBits>& LocalizedParts, class FString* OriginLocalizedName);
	TArray<struct FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle);
	bool GetSteamVR_HandPoseRelativeToNow(struct FVector* Position, struct FRotator* Orientation, enum class ESteamVRHand Hand, float PredictedSecondsFromNow);
	float GetSteamVR_GlobalPredictedSecondsFromNow();
	void GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets);
	void GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions);
	void GetSkeletalTransform(struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand, bool bWithController);
	void GetSkeletalState(bool* LeftHandState, bool* RightHandState);
	void GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
	void GetPoseSource(bool* bUsingSkeletonPose);
	void GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity);
	void GetFingerCurlsAndSplays(enum class EHand Hand, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays, enum class ESkeletalSummaryDataType SummaryDataType);
	void GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState);
	void GetControllerFidelity(enum class EControllerFidelity* LeftControllerFidelity, enum class EControllerFidelity* RightControllerFidelity);
	void FindSteamVR_OriginTrackedDeviceInfo(class FName ActionName, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo, class FName ActionSet);
	TArray<struct FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(class FName ActionName, class FName ActionSet);
	bool FindSteamVR_ActionOrigin(class FName ActionName, class FName ActionSet);
	void FindSteamVR_Action(class FName ActionName, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet, class FName ActionSet);
};

// 0x58 (0x108 - 0xB0)
// Class SteamVRInputDevice.SteamVRTrackingReferences
class USteamVRTrackingReferences : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTrackedDeviceActivated;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrackedDeviceDeactivated;                        // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        ActiveDevicePollFrequency;                         // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TrackingReferenceScale;                            // 0xD4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>          TrackingReferences;                                // 0xE0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_84C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamVRTrackingReferences* GetDefaultObj();

	bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);
	void HideTrackingReferences();
};

}


