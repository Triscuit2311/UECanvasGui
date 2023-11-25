/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void USteamVRChaperoneComponent::SteamVRChaperoneEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4181);
		
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
	 * 		Name   -> Function SteamVR.SteamVRChaperoneComponent.GetBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> USteamVRChaperoneComponent::GetBounds()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4180);
		
		struct
		{
			TArray<struct FVector>                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRChaperoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamVRChaperoneComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(203);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetCurved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InCurved                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRHQStereoLayerShape::SetCurved(bool InCurved)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12612);
		
		struct
		{
			bool                                               InCurved;
		} params;
		params.InCurved = InCurved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDistance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRHQStereoLayerShape::SetAutoCurveMinDistance(float InDistance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12611);
		
		struct
		{
			float                                              InDistance;
		} params;
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDistance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRHQStereoLayerShape::SetAutoCurveMaxDistance(float InDistance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12610);
		
		struct
		{
			float                                              InDistance;
		} params;
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InAntiAlias                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRHQStereoLayerShape::SetAntiAlias(bool InAntiAlias)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12609);
		
		struct
		{
			bool                                               InAntiAlias;
		} params;
		params.InAntiAlias = InAntiAlias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRHQStereoLayerShape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamVRHQStereoLayerShape::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(207);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESteamVRTrackedDeviceType                          DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutTrackedDeviceIds                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void USteamVRFunctionLibrary::GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32_t>* OutTrackedDeviceIds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12608);
		
		struct
		{
			ESteamVRTrackedDeviceType                          DeviceType;
			unsigned char                                      UnknownData_0000[0x7];
			TArray<int32_t>                                    OutTrackedDeviceIds;
		} params;
		params.DeviceType = DeviceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTrackedDeviceIds != nullptr)
			*OutTrackedDeviceIds = params.OutTrackedDeviceIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(int32_t DeviceID, struct FVector* OutPosition, struct FRotator* OutOrientation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12607);
		
		struct
		{
			int32_t                                            DeviceID;
			struct FVector                        OutPosition;
			struct FRotator                       OutOrientation;
			bool                                               ReturnValue;
		} params;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
		if (OutOrientation != nullptr)
			*OutOrientation = params.OutOrientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       OutOrientation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USteamVRFunctionLibrary::GetHandPositionAndOrientation(int32_t ControllerIndex, EControllerHand hand, struct FVector* OutPosition, struct FRotator* OutOrientation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12606);
		
		struct
		{
			int32_t                                            ControllerIndex;
			EControllerHand                                    hand;
			unsigned char                                      UnknownData_0001[0x3];
			struct FVector                        OutPosition;
			struct FRotator                       OutOrientation;
			bool                                               ReturnValue;
		} params;
		params.ControllerIndex = ControllerIndex;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
		if (OutOrientation != nullptr)
			*OutOrientation = params.OutOrientation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* USteamVRFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(204);
		return ptr;
	}

}


