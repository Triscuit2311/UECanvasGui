﻿#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class HeadMountedDisplay.VRNotificationsComponent
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UVRNotificationsComponent : public UActorComponent
	{
	public:
		class UMulticastInlineDelegate                               HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;   // 0x00B0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x00B1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDTrackingInitializedDelegate;                          // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x00C1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDRecenteredDelegate;                                   // 0x00D0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0xF];                                   // 0x00D1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDLostDelegate;                                         // 0x00E0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0xF];                                   // 0x00E1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDReconnectedDelegate;                                  // 0x00F0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0004[0xF];                                   // 0x00F1(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDConnectCanceledDelegate;                              // 0x0100(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0005[0xF];                                   // 0x0101(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDPutOnHeadDelegate;                                    // 0x0110(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0006[0xF];                                   // 0x0111(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               HMDRemovedFromHeadDelegate;                              // 0x0120(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0007[0xF];                                   // 0x0121(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               VRControllerRecenteredDelegate;                          // 0x0130(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0008[0xF];                                   // 0x0131(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateExternalTrackingHMDPosition(const struct PCoreUObject_FTransform& ExternalTrackingTransform);
		void SetXRTimedInputActionDelegate(const class FName& ActionName, const class FScriptDelegate& InDelegate);
		void SetXRDisconnectDelegate(const class FScriptDelegate& InDisconnectedDelegate);
		void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
		void SetTrackingOrigin(EHMDTrackingOrigin Origin);
		void SetSpectatorScreenTexture(class UTexture* InTexture);
		void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
		void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
		void SetClippingPlanes(float Near, float Far);
		void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options);
		bool IsSpectatorScreenModeControllable();
		bool IsInLowPersistenceMode();
		bool IsHeadMountedDisplayEnabled();
		bool IsHeadMountedDisplayConnected();
		bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
		bool HasValidTrackingPosition();
		int32_t GetXRSystemFlags();
		float GetWorldToMetersScale(class UObject* WorldContext);
		void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
		class FString GetVersionString();
		struct PCoreUObject_FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
		void GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32_t Index);
		EHMDTrackingOrigin GetTrackingOrigin();
		float GetScreenPercentage();
		void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
		struct FVector2D GetPlayAreaBounds(EHMDTrackingOrigin Origin);
		float GetPixelDensity();
		void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
		int32_t GetNumOfTrackingSensors();
		void GetMotionControllerData(class UObject* WorldContext, EControllerHand hand, struct FXRMotionControllerData* MotionControllerData);
		EHMDWornState GetHMDWornState();
		class FName GetHMDDeviceName();
		void GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData);
		void GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
		void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
		bool GetControllerTransformForTime(class UObject* WorldContext, int32_t ControllerIndex, const class FName& MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec);
		TArray<struct FXRDeviceId> EnumerateTrackedDevices(const class FName& SystemId, EXRTrackedDeviceType DeviceType);
		void EnableLowPersistenceMode(bool bEnable);
		bool EnableHMD(bool bEnable);
		void DisconnectRemoteXRDevice();
		EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& IpAddress, int32_t BitRate);
		bool ConfigureGestures(const struct FXRGestureConfig& GestureConfig);
		void ClearXRTimedInputActionDelegate(const class FName& ActionPath);
		void CalibrateExternalTrackingToHMD(const struct PCoreUObject_FTransform& ExternalTrackingTransform);
		void BreakKey(const struct FKey& InKey, class FString* InteractionProfile, EControllerHand* hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.HandKeypointConversion
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHandKeypointConversion : public UBlueprintFunctionLibrary
	{
	public:
		int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.MotionControllerComponent
	 * Size -> 0x00C0 (FullSize[0x0510] - InheritedSize[0x0450])
	 */
	class UMotionControllerComponent : public UPrimitiveComponent
	{
	public:
		int32_t                                                      PlayerIndex;                                             // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EControllerHand                                              hand;                                                    // 0x0454(0x0001) BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0x3];                                   // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  MotionSource;                                            // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDisableLowLatencyUpdate : 1;                            // 0x0460(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETrackingStatus                                              CurrentTrackingStatus;                                   // 0x0464(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                         bDisplayDeviceModel;                                     // 0x0465(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0002[0x2];                                   // 0x0466(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                  DisplayModelSource;                                      // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                           CustomDisplayMesh;                                       // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                            DisplayMeshMaterialOverrides;                            // 0x0478(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0003[0x68];                                  // 0x0488(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                   DisplayComponent;                                        // 0x04F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                                UnknownData_0004[0x18];                                  // 0x04F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTrackingSource(EControllerHand NewSource);
		void SetTrackingMotionSource(const class FName& NewSource);
		void SetShowDeviceModel(bool bShowControllerModel);
		void SetDisplayModelSource(const class FName& NewDisplayModelSource);
		void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
		void SetAssociatedPlayerIndex(int32_t NewPlayer);
		void OnMotionControllerUpdated();
		bool IsTracked();
		EControllerHand GetTrackingSource();
		float GetParameterValue(const class FName& InName, bool* bValueFound);
		struct FVector GetHandJointPosition(int32_t jointIndex, bool* bValueFound);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
		bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, const class FName& SourceName);
		bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand hand);
		bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
		bool IsMotionTrackedDeviceCountManagementNecessary();
		bool IsMotionSourceTracking(int32_t PlayerIndex, const class FName& SourceName);
		int32_t GetMotionTrackingEnabledControllerCount();
		int32_t GetMaximumMotionTrackedControllerCount();
		class FName GetActiveTrackingSystemName();
		TArray<class FName> EnumerateMotionSources();
		bool EnableMotionTrackingOfSource(int32_t PlayerIndex, const class FName& SourceName);
		bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand hand);
		bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
		void DisableMotionTrackingOfSource(int32_t PlayerIndex, const class FName& SourceName);
		void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand hand);
		void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);
		void DisableMotionTrackingOfAllControllers();
		void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.XRAssetFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName& SystemName, const class FName& DeviceName, bool bManualAttachment, const struct PCoreUObject_FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
		class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct PCoreUObject_FTransform& RelativeTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
	{
	public:
		class UMulticastInlineDelegate                               OnModelLoaded;                                           // 0x0030(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0000[0xF];                                   // 0x0031(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		class UMulticastInlineDelegate                               OnLoadFailure;                                           // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                                UnknownData_0001[0xF];                                   // 0x0041(0x000F) FIX WRONG SIZE OF PREVIOUS PROPERTY
		unsigned char                                                UnknownData_0002[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                   SpawnedComponent;                                        // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName& SystemName, const class FName& DeviceName, bool bManualAttachment, const struct PCoreUObject_FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
		class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct PCoreUObject_FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ShowLoadingScreen();
		void SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet);
		void HideLoadingScreen();
		void ClearLoadingScreenSplashes();
		void AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
