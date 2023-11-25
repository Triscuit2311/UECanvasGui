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
	 * 		Name   -> PredefinedFunction UMaterialExpressionSpriteTextureSampler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMaterialExpressionSpriteTextureSampler::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(474);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperFlipbookActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APaperFlipbookActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(477);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APaperCharacter::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(475);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbook::IsValidKeyFrameIndex(int32_t Index)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13722);
		
		struct
		{
			int32_t                                            Index;
			bool                                               ReturnValue;
		} params;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetTotalDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPaperFlipbook::GetTotalDuration()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13721);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetSpriteAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClampToEnds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPaperSprite*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13720);
		
		struct
		{
			float                                              Time;
			bool                                               bClampToEnds;
			unsigned char                                      UnknownData_0000[0x3];
			class UPaperSprite*                                ReturnValue;
		} params;
		params.Time = Time;
		params.bClampToEnds = bClampToEnds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FrameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPaperSprite*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13719);
		
		struct
		{
			int32_t                                            FrameIndex;
			unsigned char                                      UnknownData_0001[0x4];
			class UPaperSprite*                                ReturnValue;
		} params;
		params.FrameIndex = FrameIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetNumKeyFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperFlipbook::GetNumKeyFrames()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13718);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetNumFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperFlipbook::GetNumFrames()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13717);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClampToEnds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13716);
		
		struct
		{
			float                                              Time;
			bool                                               bClampToEnds;
			unsigned char                                      UnknownData_0002[0x3];
			int32_t                                            ReturnValue;
		} params;
		params.Time = Time;
		params.bClampToEnds = bClampToEnds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperFlipbook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperFlipbook::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(476);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.Stop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::Stop()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13746);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13745);
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::SetPlayRate(float NewRate)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13744);
		
		struct
		{
			float                                              NewRate;
		} params;
		params.NewRate = NewRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewFramePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13743);
		
		struct
		{
			int32_t                                            NewFramePosition;
			bool                                               bFireEvents;
		} params;
		params.NewFramePosition = NewFramePosition;
		params.bFireEvents = bFireEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFireEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13742);
		
		struct
		{
			float                                              NewPosition;
			bool                                               bFireEvents;
		} params;
		params.NewPosition = NewPosition;
		params.bFireEvents = bFireEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetNewTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::SetNewTime(float NewTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13741);
		
		struct
		{
			float                                              NewTime;
		} params;
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLooping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13740);
		
		struct
		{
			bool                                               bNewLooping;
		} params;
		params.bNewLooping = bNewLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.SetFlipbook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperFlipbook*                              NewFlipbook                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13739);
		
		struct
		{
			class UPaperFlipbook*                              NewFlipbook;
			bool                                               ReturnValue;
		} params;
		params.NewFlipbook = NewFlipbook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::ReverseFromEnd()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13738);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.Reverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::Reverse()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13737);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.PlayFromStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::PlayFromStart()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13736);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::Play()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13735);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperFlipbook*                              OldFlipbook                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13734);
		
		struct
		{
			class UPaperFlipbook*                              OldFlipbook;
		} params;
		params.OldFlipbook = OldFlipbook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.IsReversing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbookComponent::IsReversing()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13733);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.IsPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbookComponent::IsPlaying()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13732);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.IsLooping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperFlipbookComponent::IsLooping()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13731);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetSpriteColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UPaperFlipbookComponent::GetSpriteColor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13730);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPaperFlipbookComponent::GetPlayRate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13729);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperFlipbookComponent::GetPlaybackPositionInFrames()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13728);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPaperFlipbookComponent::GetPlaybackPosition()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13727);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperFlipbookComponent::GetFlipbookLengthInFrames()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13726);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPaperFlipbookComponent::GetFlipbookLength()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13725);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UPaperFlipbookComponent::GetFlipbookFramerate()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13724);
		
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
	 * 		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperFlipbook*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13723);
		
		struct
		{
			class UPaperFlipbook*                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperFlipbookComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperFlipbookComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(478);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperGroupedSpriteActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APaperGroupedSpriteActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(479);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int32_t Width, int32_t Height)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13755);
		
		struct
		{
			class UPaperSprite*                                Sprite;
			int32_t                                            Width;
			int32_t                                            Height;
			struct FSlateBrush                                 ReturnValue;
		} params;
		params.Sprite = Sprite;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperSpriteBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperSpriteBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(485);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     NewInstanceTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13754);
		
		struct
		{
			int32_t                                            InstanceIndex;
			unsigned char                                      UnknownData_0000[0xC];
			struct FTransform                     NewInstanceTransform;
			bool                                               bWorldSpace;
			bool                                               bMarkRenderStateDirty;
			bool                                               bTeleport;
			bool                                               ReturnValue;
		} params;
		params.InstanceIndex = InstanceIndex;
		params.NewInstanceTransform = NewInstanceTransform;
		params.bWorldSpace = bWorldSpace;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                NewInstanceColor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13753);
		
		struct
		{
			int32_t                                            InstanceIndex;
			struct FLinearColor                                NewInstanceColor;
			bool                                               bMarkRenderStateDirty;
			bool                                               ReturnValue;
		} params;
		params.InstanceIndex = InstanceIndex;
		params.NewInstanceColor = NewInstanceColor;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                        WorldSpaceSortAxis                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13752);
		
		struct
		{
			struct FVector                        WorldSpaceSortAxis;
		} params;
		params.WorldSpaceSortAxis = WorldSpaceSortAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13751);
		
		struct
		{
			int32_t                                            InstanceIndex;
			bool                                               ReturnValue;
		} params;
		params.InstanceIndex = InstanceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     OutInstanceTransform                                       (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13750);
		
		struct
		{
			int32_t                                            InstanceIndex;
			unsigned char                                      UnknownData_0001[0xC];
			struct FTransform                     OutInstanceTransform;
			bool                                               bWorldSpace;
			bool                                               ReturnValue;
		} params;
		params.InstanceIndex = InstanceIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstanceTransform != nullptr)
			*OutInstanceTransform = params.OutInstanceTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperGroupedSpriteComponent::GetInstanceCount()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13749);
		
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
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperGroupedSpriteComponent::ClearInstances()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13748);
		
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
	 * 		Name   -> Function Paper2D.PaperGroupedSpriteComponent.AddInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                     Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13747);
		
		struct
		{
			struct FTransform                     Transform;
			class UPaperSprite*                                Sprite;
			bool                                               bWorldSpace;
			unsigned char                                      UnknownData_0002[0x3];
			struct FLinearColor                                Color;
			int32_t                                            ReturnValue;
		} params;
		params.Transform = Transform;
		params.Sprite = Sprite;
		params.bWorldSpace = bWorldSpace;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperGroupedSpriteComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperGroupedSpriteComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(480);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTerrainSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTerrainSplineComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(491);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperTerrainActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APaperTerrainActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(487);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperRuntimeSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(481);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTileLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTileLayer::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(492);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperSprite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperSprite::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(482);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteComponent.SetSpriteColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13758);
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteComponent.SetSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                NewSprite                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13757);
		
		struct
		{
			class UPaperSprite*                                NewSprite;
			bool                                               ReturnValue;
		} params;
		params.NewSprite = NewSprite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperSpriteComponent.GetSprite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperSprite* UPaperSpriteComponent::GetSprite()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13756);
		
		struct
		{
			class UPaperSprite*                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperSpriteComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperSpriteComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(486);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTileMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTileMap::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(493);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperSpriteActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APaperSpriteActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(483);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APaperTileMapActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* APaperTileMapActor::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(494);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTerrainComponent.SetTerrainColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13759);
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTerrainComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTerrainComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(488);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetTileMapColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13876);
		
		struct
		{
			struct FLinearColor                                NewColor;
		} params;
		params.NewColor = NewColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetTileMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperTileMap*                               NewTileMap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13875);
		
		struct
		{
			class UPaperTileMap*                               NewTileMap;
			bool                                               ReturnValue;
		} params;
		params.NewTileMap = NewTileMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPaperTileInfo                              NewValue                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, const struct FPaperTileInfo& NewValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13874);
		
		struct
		{
			int32_t                                            X;
			int32_t                                            Y;
			int32_t                                            Layer;
			unsigned char                                      UnknownData_0000[0x4];
			struct FPaperTileInfo                              NewValue;
		} params;
		params.X = X;
		params.Y = Y;
		params.Layer = Layer;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetLayerColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int32_t Layer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13873);
		
		struct
		{
			struct FLinearColor                                NewColor;
			int32_t                                            Layer;
		} params;
		params.NewColor = NewColor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetLayerCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHasCollision                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CustomThickness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CustomOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13872);
		
		struct
		{
			int32_t                                            Layer;
			bool                                               bHasCollision;
			bool                                               bOverrideThickness;
			unsigned char                                      UnknownData_0001[0x2];
			float                                              CustomThickness;
			bool                                               bOverrideOffset;
			unsigned char                                      UnknownData_0002[0x3];
			float                                              CustomOffset;
			bool                                               bRebuildCollision;
		} params;
		params.Layer = Layer;
		params.bHasCollision = bHasCollision;
		params.bOverrideThickness = bOverrideThickness;
		params.CustomThickness = CustomThickness;
		params.bOverrideOffset = bOverrideOffset;
		params.CustomOffset = CustomOffset;
		params.bRebuildCollision = bRebuildCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRebuildCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13871);
		
		struct
		{
			float                                              Thickness;
			bool                                               bRebuildCollision;
		} params;
		params.Thickness = Thickness;
		params.bRebuildCollision = bRebuildCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.ResizeMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewWidthInTiles                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewHeightInTiles                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13870);
		
		struct
		{
			int32_t                                            NewWidthInTiles;
			int32_t                                            NewHeightInTiles;
		} params;
		params.NewWidthInTiles = NewWidthInTiles;
		params.NewHeightInTiles = NewHeightInTiles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.RebuildCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::RebuildCollision()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13869);
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.OwnsTileMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPaperTileMapComponent::OwnsTileMap()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13868);
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::MakeTileMapEditable()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13867);
		
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
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTilePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                Points                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, TArray<struct FVector>* Points, int32_t LayerIndex, bool bWorldSpace)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13866);
		
		struct
		{
			int32_t                                            TileX;
			int32_t                                            TileY;
			TArray<struct FVector>                Points;
			int32_t                                            LayerIndex;
			bool                                               bWorldSpace;
		} params;
		params.TileX = TileX;
		params.TileY = TileY;
		params.LayerIndex = LayerIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTileMapColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13865);
		
		struct
		{
			struct FLinearColor                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13864);
		
		struct
		{
			int32_t                                            TileX;
			int32_t                                            TileY;
			int32_t                                            LayerIndex;
			bool                                               bWorldSpace;
			unsigned char                                      UnknownData_0003[0x3];
			struct FVector                        ReturnValue;
		} params;
		params.TileX = TileX;
		params.TileY = TileY;
		params.LayerIndex = LayerIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13863);
		
		struct
		{
			int32_t                                            TileX;
			int32_t                                            TileY;
			int32_t                                            LayerIndex;
			bool                                               bWorldSpace;
			unsigned char                                      UnknownData_0004[0x3];
			struct FVector                        ReturnValue;
		} params;
		params.TileX = TileX;
		params.TileY = TileY;
		params.LayerIndex = LayerIndex;
		params.bWorldSpace = bWorldSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPaperTileInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13862);
		
		struct
		{
			int32_t                                            X;
			int32_t                                            Y;
			int32_t                                            Layer;
			unsigned char                                      UnknownData_0005[0x4];
			struct FPaperTileInfo                              ReturnValue;
		} params;
		params.X = X;
		params.Y = Y;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetMapSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MapWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MapHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumLayers                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::GetMapSize(int32_t* MapWidth, int32_t* MapHeight, int32_t* NumLayers)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13861);
		
		struct
		{
			int32_t                                            MapWidth;
			int32_t                                            MapHeight;
			int32_t                                            NumLayers;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapWidth != nullptr)
			*MapWidth = params.MapWidth;
		if (MapHeight != nullptr)
			*MapHeight = params.MapHeight;
		if (NumLayers != nullptr)
			*NumLayers = params.NumLayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.GetLayerColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32_t Layer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13860);
		
		struct
		{
			int32_t                                            Layer;
			struct FLinearColor                                ReturnValue;
		} params;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MapWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MapHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileWidth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PixelsPerUnrealUnit                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateLayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UPaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13859);
		
		struct
		{
			int32_t                                            MapWidth;
			int32_t                                            MapHeight;
			int32_t                                            TileWidth;
			int32_t                                            TileHeight;
			float                                              PixelsPerUnrealUnit;
			bool                                               bCreateLayer;
		} params;
		params.MapWidth = MapWidth;
		params.MapHeight = MapHeight;
		params.TileWidth = TileWidth;
		params.TileHeight = TileHeight;
		params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
		params.bCreateLayer = bCreateLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.PaperTileMapComponent.AddNewLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperTileLayer*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13858);
		
		struct
		{
			class UPaperTileLayer*                             ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTileMapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTileMapComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(495);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperSpriteAtlas.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperSpriteAtlas::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(484);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTileSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTileSet::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(496);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaperTerrainMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UPaperTerrainMaterial::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(489);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.MakeTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TileIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPaperTileSet*                               TileSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipH                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipD                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPaperTileInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32_t TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13880);
		
		struct
		{
			int32_t                                            TileIndex;
			unsigned char                                      UnknownData_0000[0x4];
			class UPaperTileSet*                               TileSet;
			bool                                               bFlipH;
			bool                                               bFlipV;
			bool                                               bFlipD;
			unsigned char                                      UnknownData_0001[0x5];
			struct FPaperTileInfo                              ReturnValue;
		} params;
		params.TileIndex = TileIndex;
		params.TileSet = TileSet;
		params.bFlipH = bFlipH;
		params.bFlipV = bFlipV;
		params.bFlipD = bFlipD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UTileMapBlueprintLibrary::GetTileUserData(const struct FPaperTileInfo& Tile)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13879);
		
		struct
		{
			struct FPaperTileInfo                              Tile;
			class FName                                        ReturnValue;
		} params;
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UTileMapBlueprintLibrary::GetTileTransform(const struct FPaperTileInfo& Tile)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13878);
		
		struct
		{
			struct FPaperTileInfo                              Tile;
			struct FTransform                     ReturnValue;
		} params;
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Paper2D.TileMapBlueprintLibrary.BreakTile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TileIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPaperTileSet*                               TileSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipH                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipD                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UTileMapBlueprintLibrary::BreakTile(const struct FPaperTileInfo& Tile, int32_t* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(13877);
		
		struct
		{
			struct FPaperTileInfo                              Tile;
			int32_t                                            TileIndex;
			unsigned char                                      UnknownData_0002[0x4];
			class UPaperTileSet*                               TileSet;
			bool                                               bFlipH;
			bool                                               bFlipV;
			bool                                               bFlipD;
		} params;
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TileIndex != nullptr)
			*TileIndex = params.TileIndex;
		if (TileSet != nullptr)
			*TileSet = params.TileSet;
		if (bFlipH != nullptr)
			*bFlipH = params.bFlipH;
		if (bFlipV != nullptr)
			*bFlipV = params.bFlipV;
		if (bFlipD != nullptr)
			*bFlipD = params.bFlipD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTileMapBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UTileMapBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(497);
		return ptr;
	}

}


