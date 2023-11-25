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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.ApplyDamageState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bDamagedLimb                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFlashingLimb                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              LimbHealth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::ApplyDamageState(class UImage* InImage, bool* bDamagedLimb, bool* bFlashingLimb, float LimbHealth, const class FScriptDelegate& Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27257);
		
		struct
		{
			class UImage*                                      InImage;
			bool                                               bDamagedLimb;
			bool                                               bFlashingLimb;
			unsigned char                                      UnknownData_0000[0x2];
			float                                              LimbHealth;
			class FScriptDelegate                              Event;
		} params;
		params.InImage = InImage;
		params.LimbHealth = LimbHealth;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDamagedLimb != nullptr)
			*bDamagedLimb = params.bDamagedLimb;
		if (bFlashingLimb != nullptr)
			*bFlashingLimb = params.bFlashingLimb;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetLimbDamaged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLimb                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewlyDamaged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::SetLimbDamaged(bool* bLimb, bool* bNewlyDamaged)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27256);
		
		struct
		{
			bool                                               bLimb;
			bool                                               bNewlyDamaged;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLimb != nullptr)
			*bLimb = params.bLimb;
		if (bNewlyDamaged != nullptr)
			*bNewlyDamaged = params.bNewlyDamaged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdatePaperdollPartToHealedColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRightArm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftArm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Torso                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightLeg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftLeg                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::UpdatePaperdollPartToHealedColor(bool bRightArm, bool LeftArm, bool Torso, bool Head, bool RightLeg, bool LeftLeg)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27255);
		
		struct
		{
			bool                                               bRightArm;
			bool                                               LeftArm;
			bool                                               Torso;
			bool                                               Head;
			bool                                               RightLeg;
			bool                                               LeftLeg;
		} params;
		params.bRightArm = bRightArm;
		params.LeftArm = LeftArm;
		params.Torso = Torso;
		params.Head = Head;
		params.RightLeg = RightLeg;
		params.LeftLeg = LeftLeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetDamageState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHeadHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBodyHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftArmHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightArmHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLeftLegHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bRightLegHit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::SetDamageState(bool bHeadHit, bool bBodyHit, bool bLeftArmHit, bool bRightArmHit, bool bLeftLegHit, bool bRightLegHit)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27254);
		
		struct
		{
			bool                                               bHeadHit;
			bool                                               bBodyHit;
			bool                                               bLeftArmHit;
			bool                                               bRightArmHit;
			bool                                               bLeftLegHit;
			bool                                               bRightLegHit;
			unsigned char                                      UnknownData_0001[0x2];
		} params;
		params.bHeadHit = bHeadHit;
		params.bBodyHit = bBodyHit;
		params.bLeftArmHit = bLeftArmHit;
		params.bRightArmHit = bRightArmHit;
		params.bLeftLegHit = bLeftLegHit;
		params.bRightLegHit = bRightLegHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetTorsoDmgVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetTorsoDmgVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27253);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgRightVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetLegDmgRightVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27252);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgLeftVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetLegDmgLeftVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27251);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetHeadDmgVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetHeadDmgVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27250);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgRightVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetArmDmgRightVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27249);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgLeftVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESlateVisibility UW_DamagePaperdoll_C::GetArmDmgLeftVisibility()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27248);
		
		struct
		{
			ESlateVisibility                                   ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Head
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::StopFlashingHead()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27247);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Leg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::StopFlashingLeftLeg()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27246);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Leg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::StopFlashingRightLeg()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27245);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Arm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::StopFlashingLeftArm()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27244);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Arm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::StopFlashingRightArm()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27243);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Torso
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::StopFlashingTorso()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27242);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27241);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27240);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnBodyPartHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBodyHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftArm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightArm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LeftLeg                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RightLeg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::OnBodyPartHit(bool Head, bool bBodyHit, bool LeftArm, bool RightArm, bool LeftLeg, bool RightLeg)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27239);
		
		struct
		{
			bool                                               Head;
			bool                                               bBodyHit;
			bool                                               LeftArm;
			bool                                               RightArm;
			bool                                               LeftLeg;
			bool                                               RightLeg;
		} params;
		params.Head = Head;
		params.bBodyHit = bBodyHit;
		params.LeftArm = LeftArm;
		params.RightArm = RightArm;
		params.LeftLeg = LeftLeg;
		params.RightLeg = RightLeg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdateHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::UpdateHealth(float Health)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27238);
		
		struct
		{
			float                                              Health;
		} params;
		params.Health = Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnInitialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::OnInitialized()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27237);
		
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
	 * 		Name   -> Function W_DamagePaperdoll.W_DamagePaperdoll_C.ExecuteUbergraph_W_DamagePaperdoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_DamagePaperdoll_C::ExecuteUbergraph_W_DamagePaperdoll(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(27236);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_DamagePaperdoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_DamagePaperdoll_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27235);
		return ptr;
	}

}


