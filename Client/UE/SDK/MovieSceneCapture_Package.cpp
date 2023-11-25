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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneCaptureProtocolBase::IsCapturing()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18116);
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovieSceneCaptureProtocolState                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18115);
		
		struct
		{
			EMovieSceneCaptureProtocolState                    ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2161);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneImageCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneImageCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2165);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrameGrabberProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFrameGrabberProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2167);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageSequenceProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UImageSequenceProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2168);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageSequenceProtocol_BMP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UImageSequenceProtocol_BMP::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2170);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompressedImageSequenceProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCompressedImageSequenceProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2169);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneCaptureProtocolBase*              ProtocolType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMovieSceneCapture::SetImageCaptureProtocolType(class UMovieSceneCaptureProtocolBase* ProtocolType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18120);
		
		struct
		{
			class UMovieSceneCaptureProtocolBase*              ProtocolType;
		} params;
		params.ProtocolType = ProtocolType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneCaptureProtocolBase*              ProtocolType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMovieSceneCapture::SetAudioCaptureProtocolType(class UMovieSceneCaptureProtocolBase* ProtocolType)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18119);
		
		struct
		{
			class UMovieSceneCaptureProtocolBase*              ProtocolType;
		} params;
		params.ProtocolType = ProtocolType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneCaptureProtocolBase*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18118);
		
		struct
		{
			class UMovieSceneCaptureProtocolBase*              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneCaptureProtocolBase*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18117);
		
		struct
		{
			class UMovieSceneCaptureProtocolBase*              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneCapture::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2175);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULevelCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULevelCapture::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2176);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageSequenceProtocol_PNG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UImageSequenceProtocol_PNG::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2171);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18125);
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18124);
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18123);
		
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
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneImageCaptureProtocolBase*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18122);
		
		struct
		{
			class UMovieSceneImageCaptureProtocolBase*         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneAudioCaptureProtocolBase*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18121);
		
		struct
		{
			class UMovieSceneAudioCaptureProtocolBase*         ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneCaptureEnvironment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneCaptureEnvironment::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2177);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageSequenceProtocol_JPG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UImageSequenceProtocol_JPG::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2172);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAudioCaptureProtocolBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMovieSceneAudioCaptureProtocolBase::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2162);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNullAudioCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UNullAudioCaptureProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2163);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18141);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FCapturedPixelsID& StreamID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18140);
		
		struct
		{
			struct FCapturedPixelsID                           StreamID;
		} params;
		params.StreamID = StreamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Buffer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           BufferID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& BufferID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18139);
		
		struct
		{
			class UTexture*                                    Buffer;
			struct FCapturedPixelsID                           BufferID;
		} params;
		params.Buffer = Buffer;
		params.BufferID = BufferID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnWarmUp()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18138);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnTick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18137);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnStartCapture()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18136);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserDefinedCaptureProtocol::OnSetup()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18135);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnPreTick()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18134);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedPixels                             Pixels                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           ID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFrameMetrics                               FrameMetrics                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnPixelsReceived(const struct FCapturedPixels& Pixels, const struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18133);
		
		struct
		{
			struct FCapturedPixels                             Pixels;
			struct FCapturedPixelsID                           ID;
			struct FFrameMetrics                               FrameMetrics;
		} params;
		params.Pixels = Pixels;
		params.ID = ID;
		params.FrameMetrics = FrameMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnPauseCapture()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18132);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnFinalize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18131);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnCaptureFrame()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18130);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUserDefinedCaptureProtocol::OnCanFinalize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18129);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedCaptureProtocol::OnBeginFinalize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18128);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameMetrics                               ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18127);
		
		struct
		{
			struct FFrameMetrics                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrameMetrics                               InFrameMetrics                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18126);
		
		struct
		{
			struct FFrameMetrics                               InFrameMetrics;
			class FString                                      ReturnValue;
		} params;
		params.InFrameMetrics = InFrameMetrics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserDefinedCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUserDefinedCaptureProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2178);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMasterAudioSubmixCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMasterAudioSubmixCaptureProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2164);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImageSequenceProtocol_EXR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UImageSequenceProtocol_EXR::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2173);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositionGraphCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UCompositionGraphCaptureProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2166);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCapturedPixels                             PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFrameMetrics                               FrameMetrics                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bCopyImageData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FCapturedPixelsID& StreamID, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18144);
		
		struct
		{
			struct FCapturedPixels                             PixelData;
			struct FCapturedPixelsID                           StreamID;
			struct FFrameMetrics                               FrameMetrics;
			bool                                               bCopyImageData;
		} params;
		params.PixelData = PixelData;
		params.StreamID = StreamID;
		params.FrameMetrics = FrameMetrics;
		params.bCopyImageData = bCopyImageData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18143);
		
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
	 * 		Name   -> Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Buffer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCapturedPixelsID                           StreamID                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FCapturedPixelsID& StreamID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(18142);
		
		struct
		{
			class UTexture*                                    Buffer;
			struct FCapturedPixelsID                           StreamID;
			class FString                                      ReturnValue;
		} params;
		params.Buffer = Buffer;
		params.StreamID = StreamID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUserDefinedImageCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UUserDefinedImageCaptureProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2179);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction IMovieSceneCaptureInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* IMovieSceneCaptureInterface::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2174);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVideoCaptureProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UVideoCaptureProtocol::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(2180);
		return ptr;
	}

}


