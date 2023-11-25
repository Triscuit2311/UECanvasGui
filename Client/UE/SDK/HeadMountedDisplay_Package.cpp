/**
 * Name: ReadyOrNot
 * Version: 2
 */

#include "../SDK.h"

namespace SDK
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRNotificationsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVRNotificationsComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(715);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     ExternalTrackingTransform                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17197);
		
		struct
		{
			struct FTransform                     ExternalTrackingTransform;
		} params;
		params.ExternalTrackingTransform = ExternalTrackingTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              InDelegate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(const class FName& ActionName, const class FScriptDelegate& InDelegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17196);
		
		struct
		{
			class FName                                        ActionName;
			class FScriptDelegate                              InDelegate;
		} params;
		params.ActionName = ActionName;
		params.InDelegate = InDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              InDisconnectedDelegate                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(const class FScriptDelegate& InDisconnectedDelegate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17195);
		
		struct
		{
			class FScriptDelegate                              InDisconnectedDelegate;
		} params;
		params.InDisconnectedDelegate = InDisconnectedDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17194);
		
		struct
		{
			class UObject*                                     WorldContext;
			float                                              NewScale;
		} params;
		params.WorldContext = WorldContext;
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHMDTrackingOrigin                                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin Origin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17193);
		
		struct
		{
			EHMDTrackingOrigin                                 Origin;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    InTexture                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture* InTexture)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17192);
		
		struct
		{
			class UTexture*                                    InTexture;
		} params;
		params.InTexture = InTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      EyeRectMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      EyeRectMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      TextureRectMin                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      TextureRectMax                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawEyeFirst                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearBlack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseAlpha                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17191);
		
		struct
		{
			struct FVector2D                      EyeRectMin;
			struct FVector2D                      EyeRectMax;
			struct FVector2D                      TextureRectMin;
			struct FVector2D                      TextureRectMax;
			bool                                               bDrawEyeFirst;
			bool                                               bClearBlack;
			bool                                               bUseAlpha;
		} params;
		params.EyeRectMin = EyeRectMin;
		params.EyeRectMax = EyeRectMax;
		params.TextureRectMin = TextureRectMin;
		params.TextureRectMax = TextureRectMax;
		params.bDrawEyeFirst = bDrawEyeFirst;
		params.bClearBlack = bClearBlack;
		params.bUseAlpha = bUseAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESpectatorScreenMode                               Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17190);
		
		struct
		{
			ESpectatorScreenMode                               Mode;
		} params;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Near                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Far                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17189);
		
		struct
		{
			float                                              Near;
			float                                              Far;
		} params;
		params.Near = Near;
		params.Far = Far;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOrientPositionSelector                            Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17188);
		
		struct
		{
			float                                              Yaw;
			EOrientPositionSelector                            Options;
		} params;
		params.Yaw = Yaw;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17187);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17186);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17185);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17184);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17183);
		
		struct
		{
			struct FXRDeviceId                                 XRDeviceId;
			bool                                               ReturnValue;
		} params;
		params.XRDeviceId = XRDeviceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17182);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17181);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17180);
		
		struct
		{
			class UObject*                                     WorldContext;
			float                                              ReturnValue;
		} params;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseFocus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasFocus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17179);
		
		struct
		{
			bool                                               bUseFocus;
			bool                                               bHasFocus;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseFocus != nullptr)
			*bUseFocus = params.bUseFocus;
		if (bHasFocus != nullptr)
			*bHasFocus = params.bHasFocus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UHeadMountedDisplayFunctionLibrary::GetVersionString()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17178);
		
		struct
		{
			class FString                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject* WorldContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17177);
		
		struct
		{
			class UObject*                                     WorldContext;
			unsigned char                                      UnknownData_0000[0x8];
			struct FTransform                     ReturnValue;
		} params;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Origin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              LeftFOV                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RightFOV                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TopFOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BottomFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NearPlane                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FarPlane                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17176);
		
		struct
		{
			struct FVector                        Origin;
			struct FRotator                       Rotation;
			float                                              LeftFOV;
			float                                              RightFOV;
			float                                              TopFOV;
			float                                              BottomFOV;
			float                                              Distance;
			float                                              NearPlane;
			float                                              FarPlane;
			bool                                               IsActive;
			unsigned char                                      UnknownData_0001[0x3];
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Origin != nullptr)
			*Origin = params.Origin;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		if (LeftFOV != nullptr)
			*LeftFOV = params.LeftFOV;
		if (RightFOV != nullptr)
			*RightFOV = params.RightFOV;
		if (TopFOV != nullptr)
			*TopFOV = params.TopFOV;
		if (BottomFOV != nullptr)
			*BottomFOV = params.BottomFOV;
		if (Distance != nullptr)
			*Distance = params.Distance;
		if (NearPlane != nullptr)
			*NearPlane = params.NearPlane;
		if (FarPlane != nullptr)
			*FarPlane = params.FarPlane;
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHMDTrackingOrigin                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17175);
		
		struct
		{
			EHMDTrackingOrigin                                 ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17174);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        CameraOrigin                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              HFOV                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VFOV                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CameraDistance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NearPlane                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FarPlane                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17173);
		
		struct
		{
			struct FVector                        CameraOrigin;
			struct FRotator                       CameraRotation;
			float                                              HFOV;
			float                                              VFOV;
			float                                              CameraDistance;
			float                                              NearPlane;
			float                                              FarPlane;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraOrigin != nullptr)
			*CameraOrigin = params.CameraOrigin;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (HFOV != nullptr)
			*HFOV = params.HFOV;
		if (VFOV != nullptr)
			*VFOV = params.VFOV;
		if (CameraDistance != nullptr)
			*CameraDistance = params.CameraDistance;
		if (NearPlane != nullptr)
			*NearPlane = params.NearPlane;
		if (FarPlane != nullptr)
			*FarPlane = params.FarPlane;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHMDTrackingOrigin                                 Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(EHMDTrackingOrigin Origin)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17172);
		
		struct
		{
			EHMDTrackingOrigin                                 Origin;
			unsigned char                                      UnknownData_0002[0x3];
			struct FVector2D                      ReturnValue;
		} params;
		params.Origin = Origin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17171);
		
		struct
		{
			float                                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                       DeviceRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        DevicePosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17170);
		
		struct
		{
			struct FRotator                       DeviceRotation;
			struct FVector                        DevicePosition;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceRotation != nullptr)
			*DeviceRotation = params.DeviceRotation;
		if (DevicePosition != nullptr)
			*DevicePosition = params.DevicePosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17169);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FXRMotionControllerData                     MotionControllerData                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(class UObject* WorldContext, EControllerHand hand, struct FXRMotionControllerData* MotionControllerData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17168);
		
		struct
		{
			class UObject*                                     WorldContext;
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0003[0x7];
			struct FXRMotionControllerData                     MotionControllerData;
		} params;
		params.WorldContext = WorldContext;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MotionControllerData != nullptr)
			*MotionControllerData = params.MotionControllerData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHMDWornState                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EHMDWornState UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17167);
		
		struct
		{
			EHMDWornState                                      ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17166);
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FXRHMDData                                  HMDData                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17165);
		
		struct
		{
			class UObject*                                     WorldContext;
			unsigned char                                      UnknownData_0004[0x8];
			struct FXRHMDData                                  HMDData;
		} params;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HMDData != nullptr)
			*HMDData = params.HMDData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTracked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasPositionalTracking                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17164);
		
		struct
		{
			class UObject*                                     WorldContext;
			struct FXRDeviceId                                 XRDeviceId;
			bool                                               bIsTracked;
			unsigned char                                      UnknownData_0005[0x3];
			struct FRotator                       Orientation;
			bool                                               bHasPositionalTracking;
			unsigned char                                      UnknownData_0006[0x3];
			struct FVector                        Position;
		} params;
		params.WorldContext = WorldContext;
		params.XRDeviceId = XRDeviceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsTracked != nullptr)
			*bIsTracked = params.bIsTracked;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (bHasPositionalTracking != nullptr)
			*bHasPositionalTracking = params.bHasPositionalTracking;
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTracked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasPositionalTracking                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17163);
		
		struct
		{
			struct FXRDeviceId                                 XRDeviceId;
			bool                                               bIsTracked;
			unsigned char                                      UnknownData_0007[0x3];
			struct FRotator                       Orientation;
			bool                                               bHasPositionalTracking;
			unsigned char                                      UnknownData_0008[0x3];
			struct FVector                        Position;
		} params;
		params.XRDeviceId = XRDeviceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsTracked != nullptr)
			*bIsTracked = params.bIsTracked;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (bHasPositionalTracking != nullptr)
			*bHasPositionalTracking = params.bHasPositionalTracking;
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MotionSource                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimespan                                   Time                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTimeWasUsed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProvidedLinearVelocity                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        LinearVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProvidedAngularVelocity                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        AngularVelocityRadPerSec                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(class UObject* WorldContext, int32_t ControllerIndex, const class FName& MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17162);
		
		struct
		{
			class UObject*                                     WorldContext;
			int32_t                                            ControllerIndex;
			class FName                                        MotionSource;
			unsigned char                                      UnknownData_0009[0x4];
			struct FTimespan                                   Time;
			bool                                               bTimeWasUsed;
			unsigned char                                      UnknownData_0010[0x3];
			struct FRotator                       Orientation;
			struct FVector                        Position;
			bool                                               bProvidedLinearVelocity;
			unsigned char                                      UnknownData_0011[0x3];
			struct FVector                        LinearVelocity;
			bool                                               bProvidedAngularVelocity;
			unsigned char                                      UnknownData_0012[0x3];
			struct FVector                        AngularVelocityRadPerSec;
			bool                                               ReturnValue;
		} params;
		params.WorldContext = WorldContext;
		params.ControllerIndex = ControllerIndex;
		params.MotionSource = MotionSource;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bTimeWasUsed != nullptr)
			*bTimeWasUsed = params.bTimeWasUsed;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (Position != nullptr)
			*Position = params.Position;
		if (bProvidedLinearVelocity != nullptr)
			*bProvidedLinearVelocity = params.bProvidedLinearVelocity;
		if (LinearVelocity != nullptr)
			*LinearVelocity = params.LinearVelocity;
		if (bProvidedAngularVelocity != nullptr)
			*bProvidedAngularVelocity = params.bProvidedAngularVelocity;
		if (AngularVelocityRadPerSec != nullptr)
			*AngularVelocityRadPerSec = params.AngularVelocityRadPerSec;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SystemId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EXRTrackedDeviceType                               DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FXRDeviceId>                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(const class FName& SystemId, EXRTrackedDeviceType DeviceType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17161);
		
		struct
		{
			class FName                                        SystemId;
			EXRTrackedDeviceType                               DeviceType;
			unsigned char                                      UnknownData_0013[0x7];
			TArray<struct FXRDeviceId>                         ReturnValue;
		} params;
		params.SystemId = SystemId;
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17160);
		
		struct
		{
			bool                                               bEnable;
		} params;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17159);
		
		struct
		{
			bool                                               bEnable;
			bool                                               ReturnValue;
		} params;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17158);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BitRate                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EXRDeviceConnectionResult                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EXRDeviceConnectionResult UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(const class FString& IpAddress, int32_t BitRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17157);
		
		struct
		{
			class FString                                      IpAddress;
			int32_t                                            BitRate;
			EXRDeviceConnectionResult                          ReturnValue;
		} params;
		params.IpAddress = IpAddress;
		params.BitRate = BitRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FXRGestureConfig                            GestureConfig                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(const struct FXRGestureConfig& GestureConfig)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17156);
		
		struct
		{
			struct FXRGestureConfig                            GestureConfig;
			bool                                               ReturnValue;
		} params;
		params.GestureConfig = GestureConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionPath                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(const class FName& ActionPath)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17155);
		
		struct
		{
			class FName                                        ActionPath;
		} params;
		params.ActionPath = ActionPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     ExternalTrackingTransform                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17154);
		
		struct
		{
			struct FTransform                     ExternalTrackingTransform;
		} params;
		params.ExternalTrackingTransform = ExternalTrackingTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InteractionProfile                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MotionSource                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Indentifier                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Component                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UHeadMountedDisplayFunctionLibrary::BreakKey(const struct FKey& InKey, class FString* InteractionProfile, EControllerHand* hand, class FName* MotionSource, class FString* Indentifier, class FString* Component)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17153);
		
		struct
		{
			struct FKey                                        InKey;
			class FString                                      InteractionProfile;
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0014[0x3];
			class FName                                        MotionSource;
			unsigned char                                      UnknownData_0015[0x4];
			class FString                                      Indentifier;
			class FString                                      Component;
		} params;
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InteractionProfile != nullptr)
			*InteractionProfile = params.InteractionProfile;
		if (hand != nullptr)
			*hand = params.hand;
		if (MotionSource != nullptr)
			*MotionSource = params.MotionSource;
		if (Indentifier != nullptr)
			*Indentifier = params.Indentifier;
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeadMountedDisplayFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UHeadMountedDisplayFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1725);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHandKeypoint                                      Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UHandKeypointConversion::Conv_HandKeypointToInt32(EHandKeypoint Input)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17198);
		
		struct
		{
			EHandKeypoint                                      Input;
			unsigned char                                      UnknownData_0000[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandKeypointConversion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UHandKeypointConversion::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1726);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    NewSource                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::SetTrackingSource(EControllerHand NewSource)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17209);
		
		struct
		{
			EControllerHand                                    NewSource;
		} params;
		params.NewSource = NewSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewSource                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::SetTrackingMotionSource(const class FName& NewSource)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17208);
		
		struct
		{
			class FName                                        NewSource;
		} params;
		params.NewSource = NewSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowControllerModel                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17207);
		
		struct
		{
			bool                                               bShowControllerModel;
		} params;
		params.bShowControllerModel = bShowControllerModel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewDisplayModelSource                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::SetDisplayModelSource(const class FName& NewDisplayModelSource)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17206);
		
		struct
		{
			class FName                                        NewDisplayModelSource;
		} params;
		params.NewDisplayModelSource = NewDisplayModelSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 NewDisplayMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17205);
		
		struct
		{
			class UStaticMesh*                                 NewDisplayMesh;
		} params;
		params.NewDisplayMesh = NewDisplayMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewPlayer                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17204);
		
		struct
		{
			int32_t                                            NewPlayer;
		} params;
		params.NewPlayer = NewPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMotionControllerComponent::OnMotionControllerUpdated()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17203);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionControllerComponent::IsTracked()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17202);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EControllerHand UMotionControllerComponent::GetTrackingSource()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17201);
		
		struct
		{
			EControllerHand                                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValueFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMotionControllerComponent::GetParameterValue(const class FName& InName, bool* bValueFound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17200);
		
		struct
		{
			class FName                                        InName;
			bool                                               bValueFound;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              ReturnValue;
		} params;
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValueFound != nullptr)
			*bValueFound = params.bValueFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            jointIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValueFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UMotionControllerComponent::GetHandJointPosition(int32_t jointIndex, bool* bValueFound)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17199);
		
		struct
		{
			int32_t                                            jointIndex;
			bool                                               bValueFound;
			unsigned char                                      UnknownData_0001[0x3];
			struct FVector                        ReturnValue;
		} params;
		params.jointIndex = jointIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValueFound != nullptr)
			*bValueFound = params.bValueFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotionControllerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotionControllerComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1727);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17227);
		
		struct
		{
			bool                                               Enable;
		} params;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SourceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32_t PlayerIndex, const class FName& SourceName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17226);
		
		struct
		{
			int32_t                                            PlayerIndex;
			class FName                                        SourceName;
			bool                                               ReturnValue;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.SourceName = SourceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand hand)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17225);
		
		struct
		{
			int32_t                                            PlayerIndex;
			EControllerHand                                    hand;
			bool                                               ReturnValue;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMotionControllerComponent*                  MotionControllerComponent                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17224);
		
		struct
		{
			class UMotionControllerComponent*                  MotionControllerComponent;
			bool                                               ReturnValue;
		} params;
		params.MotionControllerComponent = MotionControllerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17223);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SourceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32_t PlayerIndex, const class FName& SourceName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17222);
		
		struct
		{
			int32_t                                            PlayerIndex;
			class FName                                        SourceName;
			bool                                               ReturnValue;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.SourceName = SourceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17221);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17220);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17219);
		
		struct
		{
			class FName                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17218);
		
		struct
		{
			TArray<class FName>                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SourceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32_t PlayerIndex, const class FName& SourceName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17217);
		
		struct
		{
			int32_t                                            PlayerIndex;
			class FName                                        SourceName;
			bool                                               ReturnValue;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.SourceName = SourceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand hand)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17216);
		
		struct
		{
			int32_t                                            PlayerIndex;
			EControllerHand                                    hand;
			bool                                               ReturnValue;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMotionControllerComponent*                  MotionControllerComponent                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17215);
		
		struct
		{
			class UMotionControllerComponent*                  MotionControllerComponent;
			bool                                               ReturnValue;
		} params;
		params.MotionControllerComponent = MotionControllerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SourceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32_t PlayerIndex, const class FName& SourceName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17214);
		
		struct
		{
			int32_t                                            PlayerIndex;
			class FName                                        SourceName;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.SourceName = SourceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand hand)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17213);
		
		struct
		{
			int32_t                                            PlayerIndex;
			EControllerHand                                    hand;
		} params;
		params.PlayerIndex = PlayerIndex;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17212);
		
		struct
		{
			int32_t                                            PlayerIndex;
		} params;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17211);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMotionControllerComponent*                  MotionControllerComponent                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17210);
		
		struct
		{
			class UMotionControllerComponent*                  MotionControllerComponent;
		} params;
		params.MotionControllerComponent = MotionControllerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotionTrackedDeviceFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotionTrackedDeviceFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1728);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SystemName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DeviceName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bManualAttachment                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     RelativeTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, const class FName& SystemName, const class FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17229);
		
		struct
		{
			class AActor*                                      Target;
			class FName                                        SystemName;
			class FName                                        DeviceName;
			bool                                               bManualAttachment;
			unsigned char                                      UnknownData_0000[0x7];
			struct FTransform                     RelativeTransform;
			struct FXRDeviceId                                 XRDeviceId;
			unsigned char                                      UnknownData_0001[0x4];
			class UPrimitiveComponent*                         ReturnValue;
		} params;
		params.Target = Target;
		params.SystemName = SystemName;
		params.DeviceName = DeviceName;
		params.bManualAttachment = bManualAttachment;
		params.RelativeTransform = RelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XRDeviceId != nullptr)
			*XRDeviceId = params.XRDeviceId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bManualAttachment                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     RelativeTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17228);
		
		struct
		{
			class AActor*                                      Target;
			struct FXRDeviceId                                 XRDeviceId;
			bool                                               bManualAttachment;
			unsigned char                                      UnknownData_0002[0xB];
			struct FTransform                     RelativeTransform;
			class UPrimitiveComponent*                         ReturnValue;
		} params;
		params.Target = Target;
		params.XRDeviceId = XRDeviceId;
		params.bManualAttachment = bManualAttachment;
		params.RelativeTransform = RelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXRAssetFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UXRAssetFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1729);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SystemName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DeviceName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bManualAttachment                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     RelativeTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         NewComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class AActor* Target, const class FName& SystemName, const class FName& DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17231);
		
		struct
		{
			class AActor*                                      Target;
			class FName                                        SystemName;
			class FName                                        DeviceName;
			bool                                               bManualAttachment;
			unsigned char                                      UnknownData_0000[0x7];
			struct FTransform                     RelativeTransform;
			struct FXRDeviceId                                 XRDeviceId;
			unsigned char                                      UnknownData_0001[0x4];
			class UPrimitiveComponent*                         NewComponent;
			class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue;
		} params;
		params.Target = Target;
		params.SystemName = SystemName;
		params.DeviceName = DeviceName;
		params.bManualAttachment = bManualAttachment;
		params.RelativeTransform = RelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XRDeviceId != nullptr)
			*XRDeviceId = params.XRDeviceId;
		if (NewComponent != nullptr)
			*NewComponent = params.NewComponent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FXRDeviceId                                 XRDeviceId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bManualAttachment                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     RelativeTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         NewComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17230);
		
		struct
		{
			class AActor*                                      Target;
			struct FXRDeviceId                                 XRDeviceId;
			bool                                               bManualAttachment;
			unsigned char                                      UnknownData_0002[0xB];
			struct FTransform                     RelativeTransform;
			class UPrimitiveComponent*                         NewComponent;
			class UAsyncTask_LoadXRDeviceVisComponent*         ReturnValue;
		} params;
		params.Target = Target;
		params.XRDeviceId = XRDeviceId;
		params.bManualAttachment = bManualAttachment;
		params.RelativeTransform = RelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewComponent != nullptr)
			*NewComponent = params.NewComponent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAsyncTask_LoadXRDeviceVisComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAsyncTask_LoadXRDeviceVisComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1730);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17236);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowLoadingMovie                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowOnSet                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17235);
		
		struct
		{
			class UTexture*                                    Texture;
			struct FVector2D                      Scale;
			struct FVector                        Offset;
			bool                                               bShowLoadingMovie;
			bool                                               bShowOnSet;
		} params;
		params.Texture = Texture;
		params.Scale = Scale;
		params.Offset = Offset;
		params.bShowLoadingMovie = bShowLoadingMovie;
		params.bShowOnSet = bShowOnSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UXRLoadingScreenFunctionLibrary::HideLoadingScreen()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17234);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17233);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                      Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       DeltaRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bClearBeforeAdd                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(17232);
		
		struct
		{
			class UTexture*                                    Texture;
			struct FVector                        Translation;
			struct FRotator                       Rotation;
			struct FVector2D                      Size;
			struct FRotator                       DeltaRotation;
			bool                                               bClearBeforeAdd;
		} params;
		params.Texture = Texture;
		params.Translation = Translation;
		params.Rotation = Rotation;
		params.Size = Size;
		params.DeltaRotation = DeltaRotation;
		params.bClearBeforeAdd = bClearBeforeAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UXRLoadingScreenFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UXRLoadingScreenFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(1731);
		return ptr;
	}

}


