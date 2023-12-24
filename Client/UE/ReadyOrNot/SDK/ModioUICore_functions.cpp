#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModioUICore.ModioExtendedModInfoUIDetails
// (None)

class UClass* IModioExtendedModInfoUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioExtendedModInfoUIDetails");

	return Clss;
}


// ModioExtendedModInfoUIDetails ModioUICore.Default__ModioExtendedModInfoUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioExtendedModInfoUIDetails* IModioExtendedModInfoUIDetails::GetDefaultObj()
{
	static class IModioExtendedModInfoUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioExtendedModInfoUIDetails*>(IModioExtendedModInfoUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModSubscribed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::IsModSubscribed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "IsModSubscribed");

	Params::IModioExtendedModInfoUIDetails_IsModSubscribed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModInstalled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::IsModInstalled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "IsModInstalled");

	Params::IModioExtendedModInfoUIDetails_IsModInstalled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModInQueue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::IsModInQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "IsModInQueue");

	Params::IModioExtendedModInfoUIDetails_IsModInQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModExtracting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::IsModExtracting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "IsModExtracting");

	Params::IModioExtendedModInfoUIDetails_IsModExtracting_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::IsModEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "IsModEnabled");

	Params::IModioExtendedModInfoUIDetails_IsModEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioExtendedModInfoUIDetails.IsModDownloading
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::IsModDownloading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "IsModDownloading");

	Params::IModioExtendedModInfoUIDetails_IsModDownloading_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioExtendedModInfoUIDetails.HasModErrors
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioExtendedModInfoUIDetails::HasModErrors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioExtendedModInfoUIDetails", "HasModErrors");

	Params::IModioExtendedModInfoUIDetails_HasModErrors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModBrowserInterface
// (None)

class UClass* IModioModBrowserInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowserInterface");

	return Clss;
}


// ModioModBrowserInterface ModioUICore.Default__ModioModBrowserInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModBrowserInterface* IModioModBrowserInterface::GetDefaultObj()
{
	static class IModioModBrowserInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModBrowserInterface*>(IModioModBrowserInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModBrowserInterface.ShowUserAuth
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioModBrowserInterface::ShowUserAuth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "ShowUserAuth");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.ShowSearchResults
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioFilterParams          FilterParams                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioModBrowserInterface::ShowSearchResults(struct FModioFilterParams& FilterParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "ShowSearchResults");

	Params::IModioModBrowserInterface_ShowSearchResults_Params Parms{};

	Parms.FilterParams = FilterParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.ShowReportMod
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     DialogDataSource                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioModBrowserInterface::ShowReportMod(class UObject* DialogDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "ShowReportMod");

	Params::IModioModBrowserInterface_ShowReportMod_Params Parms{};

	Parms.DialogDataSource = DialogDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.ShowModUnsubscribeDialog
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     DialogDataSource                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioModBrowserInterface::ShowModUnsubscribeDialog(class UObject* DialogDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "ShowModUnsubscribeDialog");

	Params::IModioModBrowserInterface_ShowModUnsubscribeDialog_Params Parms{};

	Parms.DialogDataSource = DialogDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.ShowDialog
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModInfo               ModInfo                                                          (Parm, NativeAccessSpecifierPublic)

void IModioModBrowserInterface::ShowDialog(const struct FModioModInfo& ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "ShowDialog");

	Params::IModioModBrowserInterface_ShowDialog_Params Parms{};

	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.ShowDetailsForMod
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioModBrowserInterface::ShowDetailsForMod(const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "ShowDetailsForMod");

	Params::IModioModBrowserInterface_ShowDetailsForMod_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.RequestExternalAuthentication
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModioAuthenticationProviderProvider                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioModBrowserInterface::RequestExternalAuthentication(enum class EModioAuthenticationProvider Provider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "RequestExternalAuthentication");

	Params::IModioModBrowserInterface_RequestExternalAuthentication_Params Parms{};

	Parms.Provider = Provider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.LogOut
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioModBrowserInterface::LogOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "LogOut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioModBrowserInterface.IsDownloadDrawerOpen
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioModBrowserInterface::IsDownloadDrawerOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModBrowserInterface", "IsDownloadDrawerOpen");

	Params::IModioModBrowserInterface_IsDownloadDrawerOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioModInfoUIDetails
// (None)

class UClass* IModioModInfoUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModInfoUIDetails");

	return Clss;
}


// ModioModInfoUIDetails ModioUICore.Default__ModioModInfoUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioModInfoUIDetails* IModioModInfoUIDetails::GetDefaultObj()
{
	static class IModioModInfoUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioModInfoUIDetails*>(IModioModInfoUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioModInfoUIDetails.GetModID
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioModID IModioModInfoUIDetails::GetModID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInfoUIDetails", "GetModID");

	Params::IModioModInfoUIDetails_GetModID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioModInfoUIDetails.GetFullModInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModInfo               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioModInfo IModioModInfoUIDetails::GetFullModInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModInfoUIDetails", "GetFullModInfo");

	Params::IModioModInfoUIDetails_GetFullModInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUIAuthenticationChangedReceiver
// (None)

class UClass* IModioUIAuthenticationChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAuthenticationChangedReceiver");

	return Clss;
}


// ModioUIAuthenticationChangedReceiver ModioUICore.Default__ModioUIAuthenticationChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIAuthenticationChangedReceiver* IModioUIAuthenticationChangedReceiver::GetDefaultObj()
{
	static class IModioUIAuthenticationChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIAuthenticationChangedReceiver*>(IModioUIAuthenticationChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIAuthenticationChangedReceiver.OnAuthenticationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioOptionalUser          User                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUIAuthenticationChangedReceiver::OnAuthenticationChanged(const struct FModioOptionalUser& User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAuthenticationChangedReceiver", "OnAuthenticationChanged");

	Params::IModioUIAuthenticationChangedReceiver_OnAuthenticationChanged_Params Parms{};

	Parms.User = User;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIMediaDownloadCompletedReceiver
// (None)

class UClass* IModioUIMediaDownloadCompletedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIMediaDownloadCompletedReceiver");

	return Clss;
}


// ModioUIMediaDownloadCompletedReceiver ModioUICore.Default__ModioUIMediaDownloadCompletedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIMediaDownloadCompletedReceiver* IModioUIMediaDownloadCompletedReceiver::GetDefaultObj()
{
	static class IModioUIMediaDownloadCompletedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIMediaDownloadCompletedReceiver*>(IModioUIMediaDownloadCompletedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModLogoDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          LogoSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIMediaDownloadCompletedReceiver::OnModLogoDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, const struct FModioOptionalImage& Image, enum class EModioLogoSize LogoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiver", "OnModLogoDownloadCompleted");

	Params::IModioUIMediaDownloadCompletedReceiver_OnModLogoDownloadCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.Ec = Ec;
	Parms.Image = Image;
	Parms.LogoSize = LogoSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModGalleryImageDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ImageIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIMediaDownloadCompletedReceiver::OnModGalleryImageDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, int32 ImageIndex, const struct FModioOptionalImage& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiver", "OnModGalleryImageDownloadCompleted");

	Params::IModioUIMediaDownloadCompletedReceiver_OnModGalleryImageDownloadCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.Ec = Ec;
	Parms.ImageIndex = ImageIndex;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUIMediaDownloadCompletedReceiver.OnModCreatorAvatarDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIMediaDownloadCompletedReceiver::OnModCreatorAvatarDownloadCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, const struct FModioOptionalImage& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIMediaDownloadCompletedReceiver", "OnModCreatorAvatarDownloadCompleted");

	Params::IModioUIMediaDownloadCompletedReceiver_OnModCreatorAvatarDownloadCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.Ec = Ec;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIModEnableWidget
// (None)

class UClass* IModioUIModEnableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModEnableWidget");

	return Clss;
}


// ModioUIModEnableWidget ModioUICore.Default__ModioUIModEnableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModEnableWidget* IModioUIModEnableWidget::GetDefaultObj()
{
	static class IModioUIModEnableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModEnableWidget*>(IModioUIModEnableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModEnableWidget.OnModEnabledStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSubscriptionState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModEnableWidget::OnModEnabledStateChanged(const struct FModioModID& ModId, bool bNewSubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModEnableWidget", "OnModEnabledStateChanged");

	Params::IModioUIModEnableWidget_OnModEnabledStateChanged_Params Parms{};

	Parms.ModId = ModId;
	Parms.bNewSubscriptionState = bNewSubscriptionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIModInfoReceiver
// (None)

class UClass* IModioUIModInfoReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModInfoReceiver");

	return Clss;
}


// ModioUIModInfoReceiver ModioUICore.Default__ModioUIModInfoReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModInfoReceiver* IModioUIModInfoReceiver::GetDefaultObj()
{
	static class IModioUIModInfoReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModInfoReceiver*>(IModioUIModInfoReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModInfoReceiver.OnModInfoRequestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalModInfo       Info                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUIModInfoReceiver::OnModInfoRequestCompleted(const struct FModioModID& ModId, const struct FModioErrorCode& Ec, const struct FModioOptionalModInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModInfoReceiver", "OnModInfoRequestCompleted");

	Params::IModioUIModInfoReceiver_OnModInfoRequestCompleted_Params Parms{};

	Parms.ModId = ModId;
	Parms.Ec = Ec;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUICore.ModioUIModInfoReceiver.OnListAllModsRequestCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      RequestIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalModInfoList   List                                                             (Parm, NativeAccessSpecifierPublic)

void IModioUIModInfoReceiver::OnListAllModsRequestCompleted(const class FString& RequestIdentifier, const struct FModioErrorCode& Ec, const struct FModioOptionalModInfoList& List)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModInfoReceiver", "OnListAllModsRequestCompleted");

	Params::IModioUIModInfoReceiver_OnListAllModsRequestCompleted_Params Parms{};

	Parms.RequestIdentifier = RequestIdentifier;
	Parms.Ec = Ec;
	Parms.List = List;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIModManagementEventReceiver
// (None)

class UClass* IModioUIModManagementEventReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModManagementEventReceiver");

	return Clss;
}


// ModioUIModManagementEventReceiver ModioUICore.Default__ModioUIModManagementEventReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModManagementEventReceiver* IModioUIModManagementEventReceiver::GetDefaultObj()
{
	static class IModioUIModManagementEventReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModManagementEventReceiver*>(IModioUIModManagementEventReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIModManagementEventReceiver.OnModManagementEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModManagementEvent    Event                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIModManagementEventReceiver::OnModManagementEvent(const struct FModioModManagementEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModManagementEventReceiver", "OnModManagementEvent");

	Params::IModioUIModManagementEventReceiver_OnModManagementEvent_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioNotificationParamsLibrary
// (None)

class UClass* UModioNotificationParamsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationParamsLibrary");

	return Clss;
}


// ModioNotificationParamsLibrary ModioUICore.Default__ModioNotificationParamsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNotificationParamsLibrary* UModioNotificationParamsLibrary::GetDefaultObj()
{
	static class UModioNotificationParamsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationParamsLibrary*>(UModioNotificationParamsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioNotificationParamsLibrary.SetTextArg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioNotificationParams    NotificationParams                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::SetTextArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "SetTextArg");

	Params::UModioNotificationParamsLibrary_SetTextArg_Params Parms{};

	Parms.NotificationParams = NotificationParams;
	Parms.Name = Name;
	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.SetStringArg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioNotificationParams    NotificationParams                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::SetStringArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "SetStringArg");

	Params::UModioNotificationParamsLibrary_SetStringArg_Params Parms{};

	Parms.NotificationParams = NotificationParams;
	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.SetIntegerArg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioNotificationParams    NotificationParams                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::SetIntegerArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "SetIntegerArg");

	Params::UModioNotificationParamsLibrary_SetIntegerArg_Params Parms{};

	Parms.NotificationParams = NotificationParams;
	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.SetFloatArg
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioNotificationParams    NotificationParams                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::SetFloatArg(struct FModioNotificationParams& NotificationParams, const class FString& Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "SetFloatArg");

	Params::UModioNotificationParamsLibrary_SetFloatArg_Params Parms{};

	Parms.NotificationParams = NotificationParams;
	Parms.Name = Name;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.CreateUninstallNotification
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             StatusCode                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IModioModInfoUIDetails>ModInfo                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::CreateUninstallNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "CreateUninstallNotification");

	Params::UModioNotificationParamsLibrary_CreateUninstallNotification_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.CreateSubscriptionNotification
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             StatusCode                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IModioModInfoUIDetails>ModInfo                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::CreateSubscriptionNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "CreateSubscriptionNotification");

	Params::UModioNotificationParamsLibrary_CreateSubscriptionNotification_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.CreateRatingNotification
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             StatusCode                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IModioModInfoUIDetails>ModInfo                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::CreateRatingNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "CreateRatingNotification");

	Params::UModioNotificationParamsLibrary_CreateRatingNotification_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.CreateNotificationParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             StatusCode                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        TitleText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        SuccessText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ErrorText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::CreateNotificationParams(const struct FModioErrorCode& StatusCode, class FText& TitleText, class FText& SuccessText, class FText& ErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "CreateNotificationParams");

	Params::UModioNotificationParamsLibrary_CreateNotificationParams_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.TitleText = TitleText;
	Parms.SuccessText = SuccessText;
	Parms.ErrorText = ErrorText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.CreateInstallationNotification
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             StatusCode                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IModioModInfoUIDetails>ModInfo                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::CreateInstallationNotification(const struct FModioErrorCode& StatusCode, TScriptInterface<class IModioModInfoUIDetails>& ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "CreateInstallationNotification");

	Params::UModioNotificationParamsLibrary_CreateInstallationNotification_Params Parms{};

	Parms.StatusCode = StatusCode;
	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioNotificationParamsLibrary.AddFormatText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioNotificationParams    NotificationParams                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioNotificationParams UModioNotificationParamsLibrary::AddFormatText(struct FModioNotificationParams& NotificationParams, class FName& Name, class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationParamsLibrary", "AddFormatText");

	Params::UModioNotificationParamsLibrary_AddFormatText_Params Parms{};

	Parms.NotificationParams = NotificationParams;
	Parms.Name = Name;
	Parms.Text = Text;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUINotification
// (None)

class UClass* IModioUINotification::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUINotification");

	return Clss;
}


// ModioUINotification ModioUICore.Default__ModioUINotification
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUINotification* IModioUINotification::GetDefaultObj()
{
	static class IModioUINotification* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUINotification*>(IModioUINotification::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUINotification.SetNotificationExpireHandler
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 InDelegate                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUINotification::SetNotificationExpireHandler(FDelegateProperty_& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotification", "SetNotificationExpireHandler");

	Params::IModioUINotification_SetNotificationExpireHandler_Params Parms{};

	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotification.GetAsWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* IModioUINotification::GetAsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotification", "GetAsWidget");

	Params::IModioUINotification_GetAsWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUINotification.Display
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUINotification::Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotification", "Display");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotification.ConfigureManual
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUINotification::ConfigureManual(class FText& Title, class FText& Message, bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotification", "ConfigureManual");

	Params::IModioUINotification_ConfigureManual_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;
	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotification.Configure
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioNotificationParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUINotification::Configure(struct FModioNotificationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotification", "Configure");

	Params::IModioUINotification_Configure_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUINotificationController
// (None)

class UClass* IModioUINotificationController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUINotificationController");

	return Clss;
}


// ModioUINotificationController ModioUICore.Default__ModioUINotificationController
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUINotificationController* IModioUINotificationController::GetDefaultObj()
{
	static class IModioUINotificationController* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUINotificationController*>(IModioUINotificationController::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUINotificationController.RegisterUserWidget
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioUINotificationController>ControllerWidget                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUINotificationController::RegisterUserWidget(TScriptInterface<class IModioUINotificationController>& ControllerWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "RegisterUserWidget");

	Params::IModioUINotificationController_RegisterUserWidget_Params Parms{};

	Parms.ControllerWidget = ControllerWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotificationController.HandleDisplayNotificationWidget
// (Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IModioUINotification>Notification                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUINotificationController::HandleDisplayNotificationWidget(TScriptInterface<class IModioUINotification>* Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "HandleDisplayNotificationWidget");

	Params::IModioUINotificationController_HandleDisplayNotificationWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Notification != nullptr)
		*Notification = Parms.Notification;

}


// Function ModioUICore.ModioUINotificationController.HandleDisplayNotificationParams
// (Native, Protected, HasOutParams)
// Parameters:
// struct FModioNotificationParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUINotificationController::HandleDisplayNotificationParams(struct FModioNotificationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "HandleDisplayNotificationParams");

	Params::IModioUINotificationController_HandleDisplayNotificationParams_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotificationController.HandleDisplayManual
// (Native, Protected, HasOutParams)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUINotificationController::HandleDisplayManual(class FText& Title, class FText& Message, bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "HandleDisplayManual");

	Params::IModioUINotificationController_HandleDisplayManual_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;
	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotificationController.DisplayNotificationParams
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioNotificationParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUINotificationController::DisplayNotificationParams(struct FModioNotificationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "DisplayNotificationParams");

	Params::IModioUINotificationController_DisplayNotificationParams_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotificationController.DisplayNotificationManual
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUINotificationController::DisplayNotificationManual(class FText& Title, class FText& Message, bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "DisplayNotificationManual");

	Params::IModioUINotificationController_DisplayNotificationManual_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;
	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUINotificationController.DisplayNotification
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioUINotification>Notification                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUINotificationController::DisplayNotification(TScriptInterface<class IModioUINotification>& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUINotificationController", "DisplayNotification");

	Params::IModioUINotificationController_DisplayNotification_Params Parms{};

	Parms.Notification = Notification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUICore.ModioUISubscriptionsChangedReceiver
// (None)

class UClass* IModioUISubscriptionsChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISubscriptionsChangedReceiver");

	return Clss;
}


// ModioUISubscriptionsChangedReceiver ModioUICore.Default__ModioUISubscriptionsChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUISubscriptionsChangedReceiver* IModioUISubscriptionsChangedReceiver::GetDefaultObj()
{
	static class IModioUISubscriptionsChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUISubscriptionsChangedReceiver*>(IModioUISubscriptionsChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISubscriptionsChangedReceiver.OnSubscriptionsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewSubscriptionState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUISubscriptionsChangedReceiver::OnSubscriptionsChanged(const struct FModioModID& ModId, bool bNewSubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubscriptionsChangedReceiver", "OnSubscriptionsChanged");

	Params::IModioUISubscriptionsChangedReceiver_OnSubscriptionsChanged_Params Parms{};

	Parms.ModId = ModId;
	Parms.bNewSubscriptionState = bNewSubscriptionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver
// (None)

class UClass* IModioUIUserAvatarDownloadCompletedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserAvatarDownloadCompletedReceiver");

	return Clss;
}


// ModioUIUserAvatarDownloadCompletedReceiver ModioUICore.Default__ModioUIUserAvatarDownloadCompletedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIUserAvatarDownloadCompletedReceiver* IModioUIUserAvatarDownloadCompletedReceiver::GetDefaultObj()
{
	static class IModioUIUserAvatarDownloadCompletedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIUserAvatarDownloadCompletedReceiver*>(IModioUIUserAvatarDownloadCompletedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIUserAvatarDownloadCompletedReceiver.OnUserAvatarDownloadCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioOptionalImage         Image                                                            (Parm, NativeAccessSpecifierPublic)

void IModioUIUserAvatarDownloadCompletedReceiver::OnUserAvatarDownloadCompleted(const struct FModioErrorCode& Ec, const struct FModioOptionalImage& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserAvatarDownloadCompletedReceiver", "OnUserAvatarDownloadCompleted");

	Params::IModioUIUserAvatarDownloadCompletedReceiver_OnUserAvatarDownloadCompleted_Params Parms{};

	Parms.Ec = Ec;
	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioUIUserChangedReceiver
// (None)

class UClass* IModioUIUserChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserChangedReceiver");

	return Clss;
}


// ModioUIUserChangedReceiver ModioUICore.Default__ModioUIUserChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIUserChangedReceiver* IModioUIUserChangedReceiver::GetDefaultObj()
{
	static class IModioUIUserChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIUserChangedReceiver*>(IModioUIUserChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUIUserChangedReceiver.OnUserChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FModioOptionalUser          NewUser                                                          (Parm, NativeAccessSpecifierPublic)

void IModioUIUserChangedReceiver::OnUserChanged(const struct FModioOptionalUser& NewUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserChangedReceiver", "OnUserChanged");

	Params::IModioUIUserChangedReceiver_OnUserChanged_Params Parms{};

	Parms.NewUser = NewUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUICore.ModioFeaturedCategoryParams
// (None)

class UClass* UModioFeaturedCategoryParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedCategoryParams");

	return Clss;
}


// ModioFeaturedCategoryParams ModioUICore.Default__ModioFeaturedCategoryParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeaturedCategoryParams* UModioFeaturedCategoryParams::GetDefaultObj()
{
	static class UModioFeaturedCategoryParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedCategoryParams*>(UModioFeaturedCategoryParams::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioFilterParamsUI
// (None)

class UClass* UModioFilterParamsUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFilterParamsUI");

	return Clss;
}


// ModioFilterParamsUI ModioUICore.Default__ModioFilterParamsUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFilterParamsUI* UModioFilterParamsUI::GetDefaultObj()
{
	static class UModioFilterParamsUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFilterParamsUI*>(UModioFilterParamsUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModCollectionEntryUI
// (None)

class UClass* UModioModCollectionEntryUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCollectionEntryUI");

	return Clss;
}


// ModioModCollectionEntryUI ModioUICore.Default__ModioModCollectionEntryUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModCollectionEntryUI* UModioModCollectionEntryUI::GetDefaultObj()
{
	static class UModioModCollectionEntryUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCollectionEntryUI*>(UModioModCollectionEntryUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioModInfoUI
// (None)

class UClass* UModioModInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModInfoUI");

	return Clss;
}


// ModioModInfoUI ModioUICore.Default__ModioModInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModInfoUI* UModioModInfoUI::GetDefaultObj()
{
	static class UModioModInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModInfoUI*>(UModioModInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioReportInfoUI
// (None)

class UClass* UModioReportInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioReportInfoUI");

	return Clss;
}


// ModioReportInfoUI ModioUICore.Default__ModioReportInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioReportInfoUI* UModioReportInfoUI::GetDefaultObj()
{
	static class UModioReportInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioReportInfoUI*>(UModioReportInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioTagInfoUI
// (None)

class UClass* UModioTagInfoUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagInfoUI");

	return Clss;
}


// ModioTagInfoUI ModioUICore.Default__ModioTagInfoUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagInfoUI* UModioTagInfoUI::GetDefaultObj()
{
	static class UModioTagInfoUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagInfoUI*>(UModioTagInfoUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUICore.ModioTagOptionsUI
// (None)

class UClass* UModioTagOptionsUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagOptionsUI");

	return Clss;
}


// ModioTagOptionsUI ModioUICore.Default__ModioTagOptionsUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagOptionsUI* UModioTagOptionsUI::GetDefaultObj()
{
	static class UModioTagOptionsUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagOptionsUI*>(UModioTagOptionsUI::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioTagOptionsUI.GetTagCategoriesForUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UModioTagInfoUI*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UModioTagInfoUI*> UModioTagOptionsUI::GetTagCategoriesForUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagOptionsUI", "GetTagCategoriesForUI");

	Params::UModioTagOptionsUI_GetTagCategoriesForUI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUICore.ModioUISubsystem
// (None)

class UClass* UModioUISubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISubsystem");

	return Clss;
}


// ModioUISubsystem ModioUICore.Default__ModioUISubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUISubsystem* UModioUISubsystem::GetDefaultObj()
{
	static class UModioUISubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUISubsystem*>(UModioUISubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUICore.ModioUISubsystem.UnsubscribeHandler
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::UnsubscribeHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "UnsubscribeHandler");

	Params::UModioUISubsystem_UnsubscribeHandler_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.UninstallHandler
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::UninstallHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "UninstallHandler");

	Params::UModioUISubsystem_UninstallHandler_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.SubscriptionHandler
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::SubscriptionHandler(const struct FModioErrorCode& ErrorCode, const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "SubscriptionHandler");

	Params::UModioUISubsystem_SubscriptionHandler_Params Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.ShowSearchResults
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          SearchParameters                                                 (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUISubsystem::ShowSearchResults(const struct FModioFilterParams& SearchParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "ShowSearchResults");

	Params::UModioUISubsystem_ShowSearchResults_Params Parms{};

	Parms.SearchParameters = SearchParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.ShowModBrowserUIForPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UUserWidget>     MenuClass                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 BrowserClosedDelegate                                            (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UModioUISubsystem::ShowModBrowserUIForPlayer(TSubclassOf<class UUserWidget> MenuClass, class APlayerController* Controller, FDelegateProperty_ BrowserClosedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "ShowModBrowserUIForPlayer");

	Params::UModioUISubsystem_ShowModBrowserUIForPlayer_Params Parms{};

	Parms.MenuClass = MenuClass;
	Parms.Controller = Controller;
	Parms.BrowserClosedDelegate = BrowserClosedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.ShowDetailsForMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::ShowDetailsForMod(const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "ShowDetailsForMod");

	Params::UModioUISubsystem_ShowDetailsForMod_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestUserAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::RequestUserAvatar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestUserAvatar");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestSubscriptionForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestSubscriptionForModID(const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestSubscriptionForModID");

	Params::UModioUISubsystem_RequestSubscriptionForModID_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestRemoveSubscriptionForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestRemoveSubscriptionForModID(const struct FModioModID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestRemoveSubscriptionForModID");

	Params::UModioUISubsystem_RequestRemoveSubscriptionForModID_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestModInfoForModIDs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModioModID>         IDs                                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestModInfoForModIDs(const TArray<struct FModioModID>& IDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestModInfoForModIDs");

	Params::UModioUISubsystem_RequestModInfoForModIDs_Params Parms{};

	Parms.IDs = IDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestLogoDownloadForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioLogoSize          LogoSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestLogoDownloadForModID(const struct FModioModID& ID, enum class EModioLogoSize LogoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestLogoDownloadForModID");

	Params::UModioUISubsystem_RequestLogoDownloadForModID_Params Parms{};

	Parms.ID = ID;
	Parms.LogoSize = LogoSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestListAllMods
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioFilterParams          Params                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      RequestIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestListAllMods(const struct FModioFilterParams& Params, const class FString& RequestIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestListAllMods");

	Params::UModioUISubsystem_RequestListAllMods_Params Parms{};

	Parms.Params = Params;
	Parms.RequestIdentifier = RequestIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestGalleryImageDownloadForModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioGallerySize       ImageSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestGalleryImageDownloadForModID(const struct FModioModID& ID, int32 Index, enum class EModioGallerySize ImageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestGalleryImageDownloadForModID");

	Params::UModioUISubsystem_RequestGalleryImageDownloadForModID_Params Parms{};

	Parms.ID = ID;
	Parms.Index = Index;
	Parms.ImageSize = ImageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestExternalAuthentication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioAuthenticationProviderProvider                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestExternalAuthentication(enum class EModioAuthenticationProvider Provider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestExternalAuthentication");

	Params::UModioUISubsystem_RequestExternalAuthentication_Params Parms{};

	Parms.Provider = Provider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.RequestEmailAuthentication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioEmailAuthCode         Code                                                             (Parm, NativeAccessSpecifierPublic)

void UModioUISubsystem::RequestEmailAuthentication(const struct FModioEmailAuthCode& Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "RequestEmailAuthentication");

	Params::UModioUISubsystem_RequestEmailAuthentication_Params Parms{};

	Parms.Code = Code;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.HideModBrowserUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::HideModBrowserUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "HideModBrowserUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.GetOnModEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

FDelegateProperty_ UModioUISubsystem::GetOnModEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "GetOnModEnabled");

	Params::UModioUISubsystem_GetOnModEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.GetCurrentDPIScaleValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioUISubsystem::GetCurrentDPIScaleValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "GetCurrentDPIScaleValue");

	Params::UModioUISubsystem_GetCurrentDPIScaleValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.FormatText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Input                                                            (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUISubsystem::FormatText(class FText Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "FormatText");

	Params::UModioUISubsystem_FormatText_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUICore.ModioUISubsystem.DisplayNotificationParams
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioNotificationParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UModioUISubsystem::DisplayNotificationParams(struct FModioNotificationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "DisplayNotificationParams");

	Params::UModioUISubsystem_DisplayNotificationParams_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.DisplayNotificationManual
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Title                                                            (Parm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::DisplayNotificationManual(class FText Title, class FText Message, bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "DisplayNotificationManual");

	Params::UModioUISubsystem_DisplayNotificationManual_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;
	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.DisplayNotification
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IModioUINotification>Notification                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UModioUISubsystem::DisplayNotification(TScriptInterface<class IModioUINotification>& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "DisplayNotification");

	Params::UModioUISubsystem_DisplayNotification_Params Parms{};

	Parms.Notification = Notification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.DisplayErrorDialog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             ErrorCode                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUISubsystem::DisplayErrorDialog(const struct FModioErrorCode& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "DisplayErrorDialog");

	Params::UModioUISubsystem_DisplayErrorDialog_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUICore.ModioUISubsystem.CloseModBrowserUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUISubsystem::CloseModBrowserUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUISubsystem", "CloseModBrowserUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


