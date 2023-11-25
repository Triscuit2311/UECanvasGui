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
	 * 		Name   -> PredefinedFunction UMotivityPreprocessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityPreprocessor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(229);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityTweakData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityTweakData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(231);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityAnimInstance::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(221);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMotivityAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AMotivityAIController::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(218);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityPathFollowingComp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityPathFollowingComp::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(228);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityProcessedData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityProcessedData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(230);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityMoveData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityMoveData::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(226);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityThreadManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityThreadManager::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(234);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ToggleMotivityStrafing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::ToggleMotivityStrafing()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12754);
		
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
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ToggleMotivityMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::ToggleMotivityMovementMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12753);
		
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
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ToggleMotivityInputMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::ToggleMotivityInputMode()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12752);
		
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
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SwitchMotivityMoveStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SwitchMotivityMoveStyle()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12751);
		
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
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SwitchMotivityGait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SwitchMotivityGait()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12750);
		
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
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                GoalLocations                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      GoalRotations                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SetTrajectoryGoals(TArray<struct FVector> GoalLocations, TArray<float> GoalRotations)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12749);
		
		struct
		{
			TArray<struct FVector>                GoalLocations;
			TArray<float>                                      GoalRotations;
		} params;
		params.GoalLocations = GoalLocations;
		params.GoalRotations = GoalRotations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetTrajectoryGoal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        GoalLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GoalRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SetTrajectoryGoal(const struct FVector& GoalLocation, float GoalRotation)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12748);
		
		struct
		{
			struct FVector                        GoalLocation;
			float                                              GoalRotation;
		} params;
		params.GoalLocation = GoalLocation;
		params.GoalRotation = GoalRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementStyleByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SetMovementStyleByName(const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12747);
		
		struct
		{
			class FName                                        Name;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementStyleByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SetMovementStyleByIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12746);
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementGaitByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AMotivityCharacter::SetMovementGaitByName(const class FString& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12745);
		
		struct
		{
			class FString                                      Name;
			bool                                               ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetMovementGaitByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SetMovementGaitByIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12744);
		
		struct
		{
			int32_t                                            Index;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.SetDesireSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::SetDesireSpeed(float NewSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12743);
		
		struct
		{
			float                                              NewSpeed;
		} params;
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.OnRep_IsStrafing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::OnRep_IsStrafing()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12742);
		
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
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.CalculateTrajectoryErrorWarping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AMotivityCharacter::CalculateTrajectoryErrorWarping(float DeltaTime, float PlaybackSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12741);
		
		struct
		{
			float                                              DeltaTime;
			float                                              PlaybackSpeed;
			float                                              ReturnValue;
		} params;
		params.DeltaTime = DeltaTime;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotivityRuntime.MotivityCharacter.ApplyTrajectoryErrorWarping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlaybackSpeed                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void AMotivityCharacter::ApplyTrajectoryErrorWarping(float DeltaTime, float PlaybackSpeed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12740);
		
		struct
		{
			float                                              DeltaTime;
			float                                              PlaybackSpeed;
		} params;
		params.DeltaTime = DeltaTime;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMotivityCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AMotivityCharacter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(224);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotivityTagAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMotivityTagAnimNotifyState::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(233);
		return ptr;
	}

}


