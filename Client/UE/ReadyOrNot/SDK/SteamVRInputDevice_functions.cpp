#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// (None)

class UClass* USteamVRInputDeviceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamVRInputDeviceFunctionLibrary");

	return Clss;
}


// SteamVRInputDeviceFunctionLibrary SteamVRInputDevice.Default__SteamVRInputDeviceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamVRInputDeviceFunctionLibrary* USteamVRInputDeviceFunctionLibrary::GetDefaultObj()
{
	static class USteamVRInputDeviceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamVRInputDeviceFunctionLibrary*>(USteamVRInputDeviceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamVRAction              SteamVRAction                                                    (Parm, NativeAccessSpecifierPublic)
// struct FSteamVRActionSet           SteamVRActionSet                                                 (Parm, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(const struct FSteamVRAction& SteamVRAction, const struct FSteamVRActionSet& SteamVRActionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "ShowSteamVR_ActionOrigin");

	Params::USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Params Parms{};

	Parms.SteamVRAction = SteamVRAction;
	Parms.SteamVRActionSet = SteamVRActionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void USteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "ShowAllSteamVR_ActionOrigins");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "SetSteamVR_GlobalPredictedSecondsFromNow");

	Params::USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bUseSkeletonPose                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::SetPoseSource(bool bUseSkeletonPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "SetPoseSource");

	Params::USteamVRInputDeviceFunctionLibrary_SetPoseSource_Params Parms{};

	Parms.bUseSkeletonPose = bUseSkeletonPose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               NewLeftHandState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               NewRightHandState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "SetCurlsAndSplaysState");

	Params::USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Params Parms{};

	Parms.NewLeftHandState = NewLeftHandState;
	Parms.NewRightHandState = NewRightHandState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::ResetSeatedPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "ResetSeatedPosition");

	Params::USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESteamVRHand            Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartSecondsFromNow                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationSeconds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Frequency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amplitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(enum class ESteamVRHand Hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "PlaySteamVR_HapticFeedback");

	Params::USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Params Parms{};

	Parms.Hand = Hand;
	Parms.StartSecondsFromNow = StartSecondsFromNow;
	Parms.DurationSeconds = DurationSeconds;
	Parms.Frequency = Frequency;
	Parms.Amplitude = Amplitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USteamVRInputDeviceFunctionLibrary::GetUserIPD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetUserIPD");

	Params::USteamVRInputDeviceFunctionLibrary_GetUserIPD_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamVRAction              SteamVRAction                                                    (Parm, NativeAccessSpecifierPublic)
// struct FSteamVRInputOriginInfo     InputOriginInfo                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(const struct FSteamVRAction& SteamVRAction, struct FSteamVRInputOriginInfo* InputOriginInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_OriginTrackedDeviceInfo");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Params Parms{};

	Parms.SteamVRAction = SteamVRAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InputOriginInfo != nullptr)
		*InputOriginInfo = std::move(Parms.InputOriginInfo);

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamVRAction              SteamVRAction                                                    (Parm, NativeAccessSpecifierPublic)
// TArray<enum class ESteamVRInputStringBits>LocalizedParts                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FString                      OriginLocalizedName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(const struct FSteamVRAction& SteamVRAction, const TArray<enum class ESteamVRInputStringBits>& LocalizedParts, class FString* OriginLocalizedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_OriginLocalizedName");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Params Parms{};

	Parms.SteamVRAction = SteamVRAction;
	Parms.LocalizedParts = LocalizedParts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OriginLocalizedName != nullptr)
		*OriginLocalizedName = std::move(Parms.OriginLocalizedName);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSteamVRAction              SteamVRActionHandle                                              (Parm, NativeAccessSpecifierPublic)
// TArray<struct FSteamVRInputBindingInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(const struct FSteamVRAction& SteamVRActionHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_InputBindingInfo");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Params Parms{};

	Parms.SteamVRActionHandle = SteamVRActionHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESteamVRHand            Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PredictedSecondsFromNow                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(struct FVector* Position, struct FRotator* Orientation, enum class ESteamVRHand Hand, float PredictedSecondsFromNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_HandPoseRelativeToNow");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Params Parms{};

	Parms.Hand = Hand;
	Parms.PredictedSecondsFromNow = PredictedSecondsFromNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_GlobalPredictedSecondsFromNow");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSteamVRActionSet>   SteamVRActionSets                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(TArray<struct FSteamVRActionSet>* SteamVRActionSets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_ActionSetArray");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SteamVRActionSets != nullptr)
		*SteamVRActionSets = std::move(Parms.SteamVRActionSets);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSteamVRAction>      SteamVRActions                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(TArray<struct FSteamVRAction>* SteamVRActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSteamVR_ActionArray");

	Params::USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SteamVRActions != nullptr)
		*SteamVRActions = std::move(Parms.SteamVRActions);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSteamVRSkeletonTransform   LeftHand                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamVRSkeletonTransform   RightHand                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bWithController                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(struct FSteamVRSkeletonTransform* LeftHand, struct FSteamVRSkeletonTransform* RightHand, bool bWithController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSkeletalTransform");

	Params::USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Params Parms{};

	Parms.bWithController = bWithController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeftHand != nullptr)
		*LeftHand = std::move(Parms.LeftHand);

	if (RightHand != nullptr)
		*RightHand = std::move(Parms.RightHand);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               LeftHandState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RightHandState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetSkeletalState(bool* LeftHandState, bool* RightHandState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetSkeletalState");

	Params::USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeftHandState != nullptr)
		*LeftHandState = Parms.LeftHandState;

	if (RightHandState != nullptr)
		*RightHandState = Parms.RightHandState;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetRightHandPoseData");

	Params::USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (AngularVelocity != nullptr)
		*AngularVelocity = std::move(Parms.AngularVelocity);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bUsingSkeletonPose                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetPoseSource(bool* bUsingSkeletonPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetPoseSource");

	Params::USteamVRInputDeviceFunctionLibrary_GetPoseSource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bUsingSkeletonPose != nullptr)
		*bUsingSkeletonPose = Parms.bUsingSkeletonPose;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(struct FVector* Position, struct FRotator* Orientation, struct FVector* AngularVelocity, struct FVector* Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetLeftHandPoseData");

	Params::USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (AngularVelocity != nullptr)
		*AngularVelocity = std::move(Parms.AngularVelocity);

	if (Velocity != nullptr)
		*Velocity = std::move(Parms.Velocity);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EHand                   Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamVRFingerCurls         FingerCurls                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSteamVRFingerSplays        FingerSplays                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ESkeletalSummaryDataTypeSummaryDataType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(enum class EHand Hand, struct FSteamVRFingerCurls* FingerCurls, struct FSteamVRFingerSplays* FingerSplays, enum class ESkeletalSummaryDataType SummaryDataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetFingerCurlsAndSplays");

	Params::USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Params Parms{};

	Parms.Hand = Hand;
	Parms.SummaryDataType = SummaryDataType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FingerCurls != nullptr)
		*FingerCurls = std::move(Parms.FingerCurls);

	if (FingerSplays != nullptr)
		*FingerSplays = std::move(Parms.FingerSplays);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               LeftHandState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RightHandState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetCurlsAndSplaysState");

	Params::USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeftHandState != nullptr)
		*LeftHandState = Parms.LeftHandState;

	if (RightHandState != nullptr)
		*RightHandState = Parms.RightHandState;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerFidelity     LeftControllerFidelity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerFidelity     RightControllerFidelity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::GetControllerFidelity(enum class EControllerFidelity* LeftControllerFidelity, enum class EControllerFidelity* RightControllerFidelity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "GetControllerFidelity");

	Params::USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LeftControllerFidelity != nullptr)
		*LeftControllerFidelity = Parms.LeftControllerFidelity;

	if (RightControllerFidelity != nullptr)
		*RightControllerFidelity = Parms.RightControllerFidelity;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamVRInputOriginInfo     InputOriginInfo                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// class FName                        ActionSet                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(class FName ActionName, bool* bResult, struct FSteamVRInputOriginInfo* InputOriginInfo, class FName ActionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "FindSteamVR_OriginTrackedDeviceInfo");

	Params::USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ActionSet = ActionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bResult != nullptr)
		*bResult = Parms.bResult;

	if (InputOriginInfo != nullptr)
		*InputOriginInfo = std::move(Parms.InputOriginInfo);

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionSet                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSteamVRInputBindingInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSteamVRInputBindingInfo> USteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(class FName ActionName, class FName ActionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "FindSteamVR_InputBindingInfo");

	Params::USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ActionSet = ActionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ActionSet                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(class FName ActionName, class FName ActionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "FindSteamVR_ActionOrigin");

	Params::USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ActionSet = ActionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSteamVRAction              FoundAction                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FSteamVRActionSet           FoundActionSet                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// class FName                        ActionSet                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(class FName ActionName, bool* bResult, struct FSteamVRAction* FoundAction, struct FSteamVRActionSet* FoundActionSet, class FName ActionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRInputDeviceFunctionLibrary", "FindSteamVR_Action");

	Params::USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ActionSet = ActionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bResult != nullptr)
		*bResult = Parms.bResult;

	if (FoundAction != nullptr)
		*FoundAction = std::move(Parms.FoundAction);

	if (FoundActionSet != nullptr)
		*FoundActionSet = std::move(Parms.FoundActionSet);

}


// Class SteamVRInputDevice.SteamVRTrackingReferences
// (None)

class UClass* USteamVRTrackingReferences::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamVRTrackingReferences");

	return Clss;
}


// SteamVRTrackingReferences SteamVRInputDevice.Default__SteamVRTrackingReferences
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamVRTrackingReferences* USteamVRTrackingReferences::GetDefaultObj()
{
	static class USteamVRTrackingReferences* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamVRTrackingReferences*>(USteamVRTrackingReferences::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 TrackingReferenceMesh                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRTrackingReferences::ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRTrackingReferences", "ShowTrackingReferences");

	Params::USteamVRTrackingReferences_ShowTrackingReferences_Params Parms{};

	Parms.TrackingReferenceMesh = TrackingReferenceMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USteamVRTrackingReferences::HideTrackingReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRTrackingReferences", "HideTrackingReferences");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


