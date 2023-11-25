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
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14446);
		
		struct
		{
			EGooglePADErrorCode                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const class FString& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14445);
		
		struct
		{
			class FString                                      Name;
			EGooglePADErrorCode                                ReturnValue;
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
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14444);
		
		struct
		{
			TArray<class FString>                              AssetPacks;
			EGooglePADErrorCode                                ReturnValue;
		} params;
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14443);
		
		struct
		{
			TArray<class FString>                              AssetPacks;
			EGooglePADErrorCode                                ReturnValue;
		} params;
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGooglePADFunctionLibrary::ReleaseDownloadState(int32_t State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14442);
		
		struct
		{
			int32_t                                            State;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32_t Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14441);
		
		struct
		{
			int32_t                                            Location;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32_t State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14440);
		
		struct
		{
			int32_t                                            State;
			int32_t                                            ReturnValue;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGooglePADStorageMethod                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int32_t Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14439);
		
		struct
		{
			int32_t                                            Location;
			EGooglePADStorageMethod                            ReturnValue;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGooglePADCellularDataConfirmStatus                Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14438);
		
		struct
		{
			EGooglePADCellularDataConfirmStatus                Status;
			EGooglePADErrorCode                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Status != nullptr)
			*Status = params.Status;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGooglePADDownloadStatus                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int32_t State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14437);
		
		struct
		{
			int32_t                                            State;
			EGooglePADDownloadStatus                           ReturnValue;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const class FString& Name, int32_t* State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14436);
		
		struct
		{
			class FString                                      Name;
			int32_t                                            State;
			EGooglePADErrorCode                                ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGooglePADFunctionLibrary::GetBytesDownloaded(int32_t State)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14435);
		
		struct
		{
			int32_t                                            State;
			int32_t                                            ReturnValue;
		} params;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGooglePADFunctionLibrary::GetAssetsPath(int32_t Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14434);
		
		struct
		{
			int32_t                                            Location;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      ReturnValue;
		} params;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const class FString& Name, int32_t* Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14433);
		
		struct
		{
			class FString                                      Name;
			int32_t                                            Location;
			EGooglePADErrorCode                                ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EGooglePADErrorCode                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14432);
		
		struct
		{
			TArray<class FString>                              AssetPacks;
			EGooglePADErrorCode                                ReturnValue;
		} params;
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGooglePADFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UGooglePADFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(820);
		return ptr;
	}

}


