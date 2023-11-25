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
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamVRAction                              SteamVRAction                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRActionSet                           SteamVRActionSet                                           (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12639);
		
		struct
		{
			struct FSteamVRAction                              SteamVRAction;
			struct FSteamVRActionSet                           SteamVRActionSet;
		} params;
		params.SteamVRAction = SteamVRAction;
		params.SteamVRActionSet = SteamVRActionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12638);
		
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
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12637);
		
		struct
		{
			float                                              NewValue;
			float                                              ReturnValue;
		} params;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseSkeletonPose                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::SetPoseSource(bool bUseSkeletonPose)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12636);
		
		struct
		{
			bool                                               bUseSkeletonPose;
		} params;
		params.bUseSkeletonPose = bUseSkeletonPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewLeftHandState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewRightHandState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12635);
		
		struct
		{
			bool                                               NewLeftHandState;
			bool                                               NewRightHandState;
		} params;
		params.NewLeftHandState = NewLeftHandState;
		params.NewRightHandState = NewRightHandState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRInputDeviceFunctionLibrary::ResetSeatedPosition()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12634);
		
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
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamVRHand                                       hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartSecondsFromNow                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurationSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Frequency                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amplitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12633);
		
		struct
		{
			ESteamVRHand                                       hand;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              StartSecondsFromNow;
			float                                              DurationSeconds;
			float                                              Frequency;
			float                                              Amplitude;
		} params;
		params.hand = hand;
		params.StartSecondsFromNow = StartSecondsFromNow;
		params.DurationSeconds = DurationSeconds;
		params.Frequency = Frequency;
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USteamVRInputDeviceFunctionLibrary::GetUserIPD()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12632);
		
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
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamVRAction                              SteamVRAction                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRInputOriginInfo                     InputOriginInfo                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12631);
		
		struct
		{
			struct FSteamVRAction                              SteamVRAction;
			struct FSteamVRInputOriginInfo                     InputOriginInfo;
			bool                                               ReturnValue;
		} params;
		params.SteamVRAction = SteamVRAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputOriginInfo != nullptr)
			*InputOriginInfo = params.InputOriginInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamVRAction                              SteamVRAction                                              (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<ESteamVRInputStringBits>                    LocalizedParts                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OriginLocalizedName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, class FString* OriginLocalizedName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12630);
		
		struct
		{
			struct FSteamVRAction                              SteamVRAction;
			TArray<ESteamVRInputStringBits>                    LocalizedParts;
			class FString                                      OriginLocalizedName;
		} params;
		params.SteamVRAction = SteamVRAction;
		params.LocalizedParts = LocalizedParts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginLocalizedName != nullptr)
			*OriginLocalizedName = params.OriginLocalizedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamVRAction                              SteamVRActionHandle                                        (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamVRInputBindingInfo>            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12629);
		
		struct
		{
			struct FSteamVRAction                              SteamVRActionHandle;
			TArray<struct FSteamVRInputBindingInfo>            ReturnValue;
		} params;
		params.SteamVRActionHandle = SteamVRActionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESteamVRHand                                       hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PredictedSecondsFromNow                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(struct FVector* Position, struct FRotator* Orientation, ESteamVRHand hand, float PredictedSecondsFromNow)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12628);
		
		struct
		{
			struct FVector                        Position;
			struct FRotator                       Orientation;
			ESteamVRHand                                       hand;
			unsigned char                                      UnknownData_0001[0x3];
			float                                              PredictedSecondsFromNow;
			bool                                               ReturnValue;
		} params;
		params.hand = hand;
		params.PredictedSecondsFromNow = PredictedSecondsFromNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12627);
		
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
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamVRActionSet>                   SteamVRActionSets                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12626);
		
		struct
		{
			TArray<struct FSteamVRActionSet>                   SteamVRActionSets;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamVRActionSets != nullptr)
			*SteamVRActionSets = params.SteamVRActionSets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSteamVRAction>                      SteamVRActions                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12625);
		
		struct
		{
			TArray<struct FSteamVRAction>                      SteamVRActions;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamVRActions != nullptr)
			*SteamVRActions = params.SteamVRActions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSteamVRSkeletonTransform                   LeftHand                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRSkeletonTransform                   RightHand                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWithController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand, bool bWithController)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12624);
		
		struct
		{
			struct FSteamVRSkeletonTransform                   LeftHand;
			struct FSteamVRSkeletonTransform                   RightHand;
			bool                                               bWithController;
		} params;
		params.bWithController = bWithController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftHand != nullptr)
			*LeftHand = params.LeftHand;
		if (RightHand != nullptr)
			*RightHand = params.RightHand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHandState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RightHandState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetSkeletalState(bool* LeftHandState, bool* RightHandState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12623);
		
		struct
		{
			bool                                               LeftHandState;
			bool                                               RightHandState;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftHandState != nullptr)
			*LeftHandState = params.LeftHandState;
		if (RightHandState != nullptr)
			*RightHandState = params.RightHandState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12622);
		
		struct
		{
			struct FVector                        Position;
			struct FRotator                       Orientation;
			struct FVector                        AngularVelocity;
			struct FVector                        Velocity;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (AngularVelocity != nullptr)
			*AngularVelocity = params.AngularVelocity;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUsingSkeletonPose                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetPoseSource(bool* bUsingSkeletonPose)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12621);
		
		struct
		{
			bool                                               bUsingSkeletonPose;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUsingSkeletonPose != nullptr)
			*bUsingSkeletonPose = params.bUsingSkeletonPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                        AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12620);
		
		struct
		{
			struct FVector                        Position;
			struct FRotator                       Orientation;
			struct FVector                        AngularVelocity;
			struct FVector                        Velocity;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
		if (Orientation != nullptr)
			*Orientation = params.Orientation;
		if (AngularVelocity != nullptr)
			*AngularVelocity = params.AngularVelocity;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand                                              hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRFingerCurls                         FingerCurls                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRFingerSplays                        FingerSplays                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESkeletalSummaryDataType                           SummaryDataType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(EHand hand, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays, ESkeletalSummaryDataType SummaryDataType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12619);
		
		struct
		{
			EHand                                              hand;
			unsigned char                                      UnknownData_0002[0x3];
			struct FSteamVRFingerCurls                         FingerCurls;
			struct FSteamVRFingerSplays                        FingerSplays;
			ESkeletalSummaryDataType                           SummaryDataType;
		} params;
		params.hand = hand;
		params.SummaryDataType = SummaryDataType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FingerCurls != nullptr)
			*FingerCurls = params.FingerCurls;
		if (FingerSplays != nullptr)
			*FingerSplays = params.FingerSplays;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeftHandState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RightHandState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12618);
		
		struct
		{
			bool                                               LeftHandState;
			bool                                               RightHandState;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftHandState != nullptr)
			*LeftHandState = params.LeftHandState;
		if (RightHandState != nullptr)
			*RightHandState = params.RightHandState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerFidelity                                LeftControllerFidelity                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerFidelity                                RightControllerFidelity                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::GetControllerFidelity(EControllerFidelity* LeftControllerFidelity, EControllerFidelity* RightControllerFidelity)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12617);
		
		struct
		{
			EControllerFidelity                                LeftControllerFidelity;
			EControllerFidelity                                RightControllerFidelity;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftControllerFidelity != nullptr)
			*LeftControllerFidelity = params.LeftControllerFidelity;
		if (RightControllerFidelity != nullptr)
			*RightControllerFidelity = params.RightControllerFidelity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRInputOriginInfo                     InputOriginInfo                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(const class FName& ActionName, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo, const class FName& ActionSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12616);
		
		struct
		{
			class FName                                        ActionName;
			bool                                               bResult;
			unsigned char                                      UnknownData_0003[0x7];
			struct FSteamVRInputOriginInfo                     InputOriginInfo;
			class FName                                        ActionSet;
		} params;
		params.ActionName = ActionName;
		params.ActionSet = ActionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (InputOriginInfo != nullptr)
			*InputOriginInfo = params.InputOriginInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSteamVRInputBindingInfo>            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(const class FName& ActionName, const class FName& ActionSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12615);
		
		struct
		{
			class FName                                        ActionName;
			class FName                                        ActionSet;
			TArray<struct FSteamVRInputBindingInfo>            ReturnValue;
		} params;
		params.ActionName = ActionName;
		params.ActionSet = ActionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(const class FName& ActionName, const class FName& ActionSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12614);
		
		struct
		{
			class FName                                        ActionName;
			class FName                                        ActionSet;
			bool                                               ReturnValue;
		} params;
		params.ActionName = ActionName;
		params.ActionSet = ActionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRAction                              FoundAction                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FSteamVRActionSet                           FoundActionSet                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        ActionSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(const class FName& ActionName, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet, const class FName& ActionSet)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12613);
		
		struct
		{
			class FName                                        ActionName;
			bool                                               bResult;
			unsigned char                                      UnknownData_0004[0x7];
			struct FSteamVRAction                              FoundAction;
			struct FSteamVRActionSet                           FoundActionSet;
			class FName                                        ActionSet;
		} params;
		params.ActionName = ActionName;
		params.ActionSet = ActionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
		if (FoundAction != nullptr)
			*FoundAction = params.FoundAction;
		if (FoundActionSet != nullptr)
			*FoundActionSet = params.FoundActionSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRInputDeviceFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamVRInputDeviceFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(209);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 TrackingReferenceMesh                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRTrackingReferences::ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12641);
		
		struct
		{
			class UStaticMesh*                                 TrackingReferenceMesh;
			bool                                               ReturnValue;
		} params;
		params.TrackingReferenceMesh = TrackingReferenceMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USteamVRTrackingReferences::HideTrackingReferences()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12640);
		
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
	 * 		Name   -> PredefinedFunction USteamVRTrackingReferences.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamVRTrackingReferences::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(210);
		return ptr;
	}

}


