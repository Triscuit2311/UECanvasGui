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
	 * 		Name   -> Function MobilePatchingUtils.MobileInstalledContent.Mount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PakOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MountPoint                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMobileInstalledContent::Mount(int32_t PakOrder, const class FString& MountPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14460);
		
		struct
		{
			int32_t                                            PakOrder;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      MountPoint;
			bool                                               ReturnValue;
		} params;
		params.PakOrder = PakOrder;
		params.MountPoint = MountPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobileInstalledContent::GetInstalledContentSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14459);
		
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
	 * 		Name   -> Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobileInstalledContent::GetDiskFreeSpace()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14458);
		
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
	 * 		Name   -> PredefinedFunction UMobileInstalledContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMobileInstalledContent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(825);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.StartInstall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnSucceeded                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailed                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMobilePendingContent::StartInstall(const class FScriptDelegate& OnSucceeded, const class FScriptDelegate& OnFailed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14467);
		
		struct
		{
			class FScriptDelegate                              OnSucceeded;
			class FScriptDelegate                              OnFailed;
		} params;
		params.OnSucceeded = OnSucceeded;
		params.OnFailed = OnFailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobilePendingContent::GetTotalDownloadedSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14466);
		
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
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobilePendingContent::GetRequiredDiskSpace()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14465);
		
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
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobilePendingContent::GetInstallProgress()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14464);
		
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
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	class FText UMobilePendingContent::GetDownloadStatusText()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14463);
		
		struct
		{
			class FText                                        ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobilePendingContent::GetDownloadSpeed()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14462);
		
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
	 * 		Name   -> Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMobilePendingContent::GetDownloadSize()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14461);
		
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
	 * 		Name   -> PredefinedFunction UMobilePendingContent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMobilePendingContent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(826);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RemoteManifestURL                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CloudURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InstallDirectory                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSucceeded                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailed                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UMobilePatchingLibrary::RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, const class FScriptDelegate& OnSucceeded, const class FScriptDelegate& OnFailed)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14472);
		
		struct
		{
			class FString                                      RemoteManifestURL;
			class FString                                      CloudURL;
			class FString                                      InstallDirectory;
			class FScriptDelegate                              OnSucceeded;
			class FScriptDelegate                              OnFailed;
		} params;
		params.RemoteManifestURL = RemoteManifestURL;
		params.CloudURL = CloudURL;
		params.InstallDirectory = InstallDirectory;
		params.OnSucceeded = OnSucceeded;
		params.OnFailed = OnFailed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMobilePatchingLibrary::HasActiveWiFiConnection()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14471);
		
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
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14470);
		
		struct
		{
			TArray<class FString>                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InstallDirectory                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMobileInstalledContent*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const class FString& InstallDirectory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14469);
		
		struct
		{
			class FString                                      InstallDirectory;
			class UMobileInstalledContent*                     ReturnValue;
		} params;
		params.InstallDirectory = InstallDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14468);
		
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
	 * 		Name   -> PredefinedFunction UMobilePatchingLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMobilePatchingLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(827);
		return ptr;
	}

}


