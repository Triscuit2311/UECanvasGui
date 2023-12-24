#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SteamVR.SteamVRChaperoneComponent
// (None)

class UClass* USteamVRChaperoneComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamVRChaperoneComponent");

	return Clss;
}


// SteamVRChaperoneComponent SteamVR.Default__SteamVRChaperoneComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamVRChaperoneComponent* USteamVRChaperoneComponent::GetDefaultObj()
{
	static class USteamVRChaperoneComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamVRChaperoneComponent*>(USteamVRChaperoneComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRChaperoneComponent", "SteamVRChaperoneEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SteamVR.SteamVRChaperoneComponent.GetBounds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRChaperoneComponent", "GetBounds");

	Params::USteamVRChaperoneComponent_GetBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SteamVR.SteamVRFunctionLibrary
// (None)

class UClass* USteamVRFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamVRFunctionLibrary");

	return Clss;
}


// SteamVRFunctionLibrary SteamVR.Default__SteamVRFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamVRFunctionLibrary* USteamVRFunctionLibrary::GetDefaultObj()
{
	static class USteamVRFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamVRFunctionLibrary*>(USteamVRFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ESteamVRTrackedDeviceTypeDeviceType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      OutTrackedDeviceIds                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USteamVRFunctionLibrary::GetValidTrackedDeviceIds(enum class ESteamVRTrackedDeviceType DeviceType, TArray<int32>* OutTrackedDeviceIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRFunctionLibrary", "GetValidTrackedDeviceIds");

	Params::USteamVRFunctionLibrary_GetValidTrackedDeviceIds_Params Parms{};

	Parms.DeviceType = DeviceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTrackedDeviceIds != nullptr)
		*OutTrackedDeviceIds = std::move(Parms.OutTrackedDeviceIds);

}


// Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              DeviceID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutOrientation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(int32 DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRFunctionLibrary", "GetTrackedDevicePositionAndOrientation");

	Params::USteamVRFunctionLibrary_GetTrackedDevicePositionAndOrientation_Params Parms{};

	Parms.DeviceID = DeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	if (OutOrientation != nullptr)
		*OutOrientation = std::move(Parms.OutOrientation);

	return Parms.ReturnValue;

}


// Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ControllerIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    OutOrientation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USteamVRFunctionLibrary::GetHandPositionAndOrientation(int32 ControllerIndex, enum class EControllerHand Hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRFunctionLibrary", "GetHandPositionAndOrientation");

	Params::USteamVRFunctionLibrary_GetHandPositionAndOrientation_Params Parms{};

	Parms.ControllerIndex = ControllerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	if (OutOrientation != nullptr)
		*OutOrientation = std::move(Parms.OutOrientation);

	return Parms.ReturnValue;

}


// Class SteamVR.SteamVRHQStereoLayerShape
// (None)

class UClass* USteamVRHQStereoLayerShape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamVRHQStereoLayerShape");

	return Clss;
}


// SteamVRHQStereoLayerShape SteamVR.Default__SteamVRHQStereoLayerShape
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamVRHQStereoLayerShape* USteamVRHQStereoLayerShape::GetDefaultObj()
{
	static class USteamVRHQStereoLayerShape* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamVRHQStereoLayerShape*>(USteamVRHQStereoLayerShape::StaticClass()->DefaultObject);

	return Default;
}


// Function SteamVR.SteamVRHQStereoLayerShape.SetCurved
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InCurved                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetCurved(bool InCurved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRHQStereoLayerShape", "SetCurved");

	Params::USteamVRHQStereoLayerShape_SetCurved_Params Parms{};

	Parms.InCurved = InCurved;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDistance                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetAutoCurveMinDistance(float InDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRHQStereoLayerShape", "SetAutoCurveMinDistance");

	Params::USteamVRHQStereoLayerShape_SetAutoCurveMinDistance_Params Parms{};

	Parms.InDistance = InDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDistance                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetAutoCurveMaxDistance(float InDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRHQStereoLayerShape", "SetAutoCurveMaxDistance");

	Params::USteamVRHQStereoLayerShape_SetAutoCurveMaxDistance_Params Parms{};

	Parms.InDistance = InDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAntiAlias                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USteamVRHQStereoLayerShape::SetAntiAlias(bool InAntiAlias)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SteamVRHQStereoLayerShape", "SetAntiAlias");

	Params::USteamVRHQStereoLayerShape_SetAntiAlias_Params Parms{};

	Parms.InAntiAlias = InAntiAlias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


