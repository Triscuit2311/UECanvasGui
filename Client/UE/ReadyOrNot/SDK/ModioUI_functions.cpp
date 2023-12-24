#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModioUI.FxWidget
// (None)

class UClass* UFxWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FxWidget");

	return Clss;
}


// FxWidget ModioUI.Default__FxWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFxWidget* UFxWidget::GetDefaultObj()
{
	static class UFxWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFxWidget*>(UFxWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioAuthenticationContextUIDetails
// (None)

class UClass* IModioAuthenticationContextUIDetails::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioAuthenticationContextUIDetails");

	return Clss;
}


// ModioAuthenticationContextUIDetails ModioUI.Default__ModioAuthenticationContextUIDetails
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioAuthenticationContextUIDetails* IModioAuthenticationContextUIDetails::GetDefaultObj()
{
	static class IModioAuthenticationContextUIDetails* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioAuthenticationContextUIDetails*>(IModioAuthenticationContextUIDetails::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioAuthenticationContextUIDetails.GetTerms
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioTerms                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioTerms IModioAuthenticationContextUIDetails::GetTerms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioAuthenticationContextUIDetails", "GetTerms");

	Params::IModioAuthenticationContextUIDetails_GetTerms_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioAuthenticationContextUIDetails.GetProviderInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioUIAuthenticationProviderInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioUIAuthenticationProviderInfo IModioAuthenticationContextUIDetails::GetProviderInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioAuthenticationContextUIDetails", "GetProviderInfo");

	Params::IModioAuthenticationContextUIDetails_GetProviderInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioMenuBackgroundProvider
// (None)

class UClass* IModioMenuBackgroundProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMenuBackgroundProvider");

	return Clss;
}


// ModioMenuBackgroundProvider ModioUI.Default__ModioMenuBackgroundProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioMenuBackgroundProvider* IModioMenuBackgroundProvider::GetDefaultObj()
{
	static class IModioMenuBackgroundProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioMenuBackgroundProvider*>(IModioMenuBackgroundProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioMenuBackgroundProvider.GetBackgroundMaterial
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* IModioMenuBackgroundProvider::GetBackgroundMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenuBackgroundProvider", "GetBackgroundMaterial");

	Params::IModioMenuBackgroundProvider_GetBackgroundMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUIAsyncHandlerWidget
// (None)

class UClass* IModioUIAsyncHandlerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAsyncHandlerWidget");

	return Clss;
}


// ModioUIAsyncHandlerWidget ModioUI.Default__ModioUIAsyncHandlerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIAsyncHandlerWidget* IModioUIAsyncHandlerWidget::GetDefaultObj()
{
	static class IModioUIAsyncHandlerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIAsyncHandlerWidget*>(IModioUIAsyncHandlerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIAsyncHandlerWidget.LinkAsyncOperationWidget
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioUIAsyncOperationWidget>Widget                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUIAsyncHandlerWidget::LinkAsyncOperationWidget(TScriptInterface<class IModioUIAsyncOperationWidget>& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncHandlerWidget", "LinkAsyncOperationWidget");

	Params::IModioUIAsyncHandlerWidget_LinkAsyncOperationWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIAsyncOperationWidget
// (None)

class UClass* IModioUIAsyncOperationWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAsyncOperationWidget");

	return Clss;
}


// ModioUIAsyncOperationWidget ModioUI.Default__ModioUIAsyncOperationWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIAsyncOperationWidget* IModioUIAsyncOperationWidget::GetDefaultObj()
{
	static class IModioUIAsyncOperationWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIAsyncOperationWidget*>(IModioUIAsyncOperationWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIAsyncOperationWidget.SetOperationStateDelegate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUIAsyncOperationWidget::SetOperationStateDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncOperationWidget", "SetOperationStateDelegate");

	Params::IModioUIAsyncOperationWidget_SetOperationStateDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIAsyncOperationWidget.RequestOperationRetry
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIAsyncOperationWidget::RequestOperationRetry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncOperationWidget", "RequestOperationRetry");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIAsyncOperationWidget.NotifyOperationState
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModioUIAsyncOperationWidgetStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIAsyncOperationWidget::NotifyOperationState(enum class EModioUIAsyncOperationWidgetState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncOperationWidget", "NotifyOperationState");

	Params::IModioUIAsyncOperationWidget_NotifyOperationState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIAsyncRetryWidget
// (None)

class UClass* IModioUIAsyncRetryWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAsyncRetryWidget");

	return Clss;
}


// ModioUIAsyncRetryWidget ModioUI.Default__ModioUIAsyncRetryWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIAsyncRetryWidget* IModioUIAsyncRetryWidget::GetDefaultObj()
{
	static class IModioUIAsyncRetryWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIAsyncRetryWidget*>(IModioUIAsyncRetryWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIAsyncRetryWidget.SetRetryRequestedDelegate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUIAsyncRetryWidget::SetRetryRequestedDelegate(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncRetryWidget", "SetRetryRequestedDelegate");

	Params::IModioUIAsyncRetryWidget_SetRetryRequestedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIAuthenticationDataProvider
// (None)

class UClass* IModioUIAuthenticationDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAuthenticationDataProvider");

	return Clss;
}


// ModioUIAuthenticationDataProvider ModioUI.Default__ModioUIAuthenticationDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIAuthenticationDataProvider* IModioUIAuthenticationDataProvider::GetDefaultObj()
{
	static class IModioUIAuthenticationDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIAuthenticationDataProvider*>(IModioUIAuthenticationDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIAuthenticationDataProvider.ShouldOfferEmailAuthentication
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIAuthenticationDataProvider::ShouldOfferEmailAuthentication()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAuthenticationDataProvider", "ShouldOfferEmailAuthentication");

	Params::IModioUIAuthenticationDataProvider_ShouldOfferEmailAuthentication_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIAuthenticationDataProvider.GetAuthenticationTypes
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioUIAuthenticationProviderInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FModioUIAuthenticationProviderInfo> IModioUIAuthenticationDataProvider::GetAuthenticationTypes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAuthenticationDataProvider", "GetAuthenticationTypes");

	Params::IModioUIAuthenticationDataProvider_GetAuthenticationTypes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIAuthenticationDataProvider.GetAuthenticationParams
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModioAuthenticationProviderProvider                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioAuthenticationParams  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FModioAuthenticationParams IModioUIAuthenticationDataProvider::GetAuthenticationParams(enum class EModioAuthenticationProvider Provider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAuthenticationDataProvider", "GetAuthenticationParams");

	Params::IModioUIAuthenticationDataProvider_GetAuthenticationParams_Params Parms{};

	Parms.Provider = Provider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUIBusyStateWidget
// (None)

class UClass* IModioUIBusyStateWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIBusyStateWidget");

	return Clss;
}


// ModioUIBusyStateWidget ModioUI.Default__ModioUIBusyStateWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIBusyStateWidget* IModioUIBusyStateWidget::GetDefaultObj()
{
	static class IModioUIBusyStateWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIBusyStateWidget*>(IModioUIBusyStateWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIBusyStateWidget.EndBusyState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bErrorOccurred                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIBusyStateWidget::EndBusyState(bool bErrorOccurred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBusyStateWidget", "EndBusyState");

	Params::IModioUIBusyStateWidget_EndBusyState_Params Parms{};

	Parms.bErrorOccurred = bErrorOccurred;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIBusyStateWidget.DisplayBusyState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIBusyStateWidget::DisplayBusyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIBusyStateWidget", "DisplayBusyState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIClickableWidget
// (None)

class UClass* IModioUIClickableWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIClickableWidget");

	return Clss;
}


// ModioUIClickableWidget ModioUI.Default__ModioUIClickableWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIClickableWidget* IModioUIClickableWidget::GetDefaultObj()
{
	static class IModioUIClickableWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIClickableWidget*>(IModioUIClickableWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIClickableWidget.RemoveClickHandler
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     UserObject                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIClickableWidget::RemoveClickHandler(class UObject* UserObject, class FName FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIClickableWidget", "RemoveClickHandler");

	Params::IModioUIClickableWidget_RemoveClickHandler_Params Parms{};

	Parms.UserObject = UserObject;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIClickableWidget.AddClickHandler
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     UserObject                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIClickableWidget::AddClickHandler(class UObject* UserObject, class FName FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIClickableWidget", "AddClickHandler");

	Params::IModioUIClickableWidget_AddClickHandler_Params Parms{};

	Parms.UserObject = UserObject;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUICommand
// (None)

class UClass* IModioUICommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommand");

	return Clss;
}


// ModioUICommand ModioUI.Default__ModioUICommand
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUICommand* IModioUICommand::GetDefaultObj()
{
	static class IModioUICommand* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUICommand*>(IModioUICommand::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUIDataSourceWidget
// (None)

class UClass* IModioUIDataSourceWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDataSourceWidget");

	return Clss;
}


// ModioUIDataSourceWidget ModioUI.Default__ModioUIDataSourceWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIDataSourceWidget* IModioUIDataSourceWidget::GetDefaultObj()
{
	static class IModioUIDataSourceWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIDataSourceWidget*>(IModioUIDataSourceWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIDataSourceWidget.SetDataSource
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InDataSource                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDataSourceWidget::SetDataSource(class UObject* InDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDataSourceWidget", "SetDataSource");

	Params::IModioUIDataSourceWidget_SetDataSource_Params Parms{};

	Parms.InDataSource = InDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIDialogButtonWidget
// (None)

class UClass* IModioUIDialogButtonWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDialogButtonWidget");

	return Clss;
}


// ModioUIDialogButtonWidget ModioUI.Default__ModioUIDialogButtonWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIDialogButtonWidget* IModioUIDialogButtonWidget::GetDefaultObj()
{
	static class IModioUIDialogButtonWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIDialogButtonWidget*>(IModioUIDialogButtonWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIDialogButtonWidget.SetStyle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioDialogStyle           Style                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIDialogButtonWidget::SetStyle(struct FModioDialogStyle& Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialogButtonWidget", "SetStyle");

	Params::IModioUIDialogButtonWidget_SetStyle_Params Parms{};

	Parms.Style = Style;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIDialogButtonWidget.SetDialogController
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UModioDialogController*      Controller                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIDialogButtonWidget::SetDialogController(class UModioDialogController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDialogButtonWidget", "SetDialogController");

	Params::IModioUIDialogButtonWidget_SetDialogController_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIDownloadQueueWidget
// (None)

class UClass* IModioUIDownloadQueueWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDownloadQueueWidget");

	return Clss;
}


// ModioUIDownloadQueueWidget ModioUI.Default__ModioUIDownloadQueueWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIDownloadQueueWidget* IModioUIDownloadQueueWidget::GetDefaultObj()
{
	static class IModioUIDownloadQueueWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIDownloadQueueWidget*>(IModioUIDownloadQueueWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIDownloadQueueWidget.RefreshDownloadQueue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIDownloadQueueWidget::RefreshDownloadQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDownloadQueueWidget", "RefreshDownloadQueue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIDownloadQueueWidget.DisplayUserInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioOptionalUser          NewUser                                                          (Parm, NativeAccessSpecifierPublic)

void IModioUIDownloadQueueWidget::DisplayUserInfo(const struct FModioOptionalUser& NewUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIDownloadQueueWidget", "DisplayUserInfo");

	Params::IModioUIDownloadQueueWidget_DisplayUserInfo_Params Parms{};

	Parms.NewUser = NewUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIErrorDisplayWidget
// (None)

class UClass* IModioUIErrorDisplayWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIErrorDisplayWidget");

	return Clss;
}


// ModioUIErrorDisplayWidget ModioUI.Default__ModioUIErrorDisplayWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIErrorDisplayWidget* IModioUIErrorDisplayWidget::GetDefaultObj()
{
	static class IModioUIErrorDisplayWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIErrorDisplayWidget*>(IModioUIErrorDisplayWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIErrorDisplayWidget.SetErrorText
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InErrorText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIErrorDisplayWidget::SetErrorText(class FText& InErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIErrorDisplayWidget", "SetErrorText");

	Params::IModioUIErrorDisplayWidget_SetErrorText_Params Parms{};

	Parms.InErrorText = InErrorText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIErrorDisplayWidget.SetErrorString
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InErrorString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIErrorDisplayWidget::SetErrorString(const class FString& InErrorString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIErrorDisplayWidget", "SetErrorString");

	Params::IModioUIErrorDisplayWidget_SetErrorString_Params Parms{};

	Parms.InErrorString = InErrorString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIErrorDisplayWidget.IsErrorSet
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUIErrorDisplayWidget::IsErrorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIErrorDisplayWidget", "IsErrorSet");

	Params::IModioUIErrorDisplayWidget_IsErrorSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIErrorDisplayWidget.DisplayError
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioErrorCode             Ec                                                               (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIErrorDisplayWidget::DisplayError(struct FModioErrorCode& Ec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIErrorDisplayWidget", "DisplayError");

	Params::IModioUIErrorDisplayWidget_DisplayError_Params Parms{};

	Parms.Ec = Ec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIImageDisplay
// (None)

class UClass* IModioUIImageDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIImageDisplay");

	return Clss;
}


// ModioUIImageDisplay ModioUI.Default__ModioUIImageDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIImageDisplay* IModioUIImageDisplay::GetDefaultObj()
{
	static class IModioUIImageDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIImageDisplay*>(IModioUIImageDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIImageDisplay.DisplayImage
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Image                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIImageDisplay::DisplayImage(struct FSlateBrush& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIImageDisplay", "DisplayImage");

	Params::IModioUIImageDisplay_DisplayImage_Params Parms{};

	Parms.Image = Image;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIInputDeviceChangedReceiver
// (None)

class UClass* IModioUIInputDeviceChangedReceiver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIInputDeviceChangedReceiver");

	return Clss;
}


// ModioUIInputDeviceChangedReceiver ModioUI.Default__ModioUIInputDeviceChangedReceiver
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIInputDeviceChangedReceiver* IModioUIInputDeviceChangedReceiver::GetDefaultObj()
{
	static class IModioUIInputDeviceChangedReceiver* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIInputDeviceChangedReceiver*>(IModioUIInputDeviceChangedReceiver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIInputDeviceChangedReceiver.OnInputDeviceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EModioUIInputMode       InputDevice                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIInputDeviceChangedReceiver::OnInputDeviceChanged(enum class EModioUIInputMode InputDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputDeviceChangedReceiver", "OnInputDeviceChanged");

	Params::IModioUIInputDeviceChangedReceiver_OnInputDeviceChanged_Params Parms{};

	Parms.InputDevice = InputDevice;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUI.ModioUIInputHintDisplayWidget
// (None)

class UClass* IModioUIInputHintDisplayWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIInputHintDisplayWidget");

	return Clss;
}


// ModioUIInputHintDisplayWidget ModioUI.Default__ModioUIInputHintDisplayWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIInputHintDisplayWidget* IModioUIInputHintDisplayWidget::GetDefaultObj()
{
	static class IModioUIInputHintDisplayWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIInputHintDisplayWidget*>(IModioUIInputHintDisplayWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIInputHintDisplayWidget.OnDisplayHintForInput
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FKey                        VirtualKey                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIInputHintDisplayWidget::OnDisplayHintForInput(const struct FKey& VirtualKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputHintDisplayWidget", "OnDisplayHintForInput");

	Params::IModioUIInputHintDisplayWidget_OnDisplayHintForInput_Params Parms{};

	Parms.VirtualKey = VirtualKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ModioUI.ModioUIInputHintGlyphProvider
// (None)

class UClass* IModioUIInputHintGlyphProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIInputHintGlyphProvider");

	return Clss;
}


// ModioUIInputHintGlyphProvider ModioUI.Default__ModioUIInputHintGlyphProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIInputHintGlyphProvider* IModioUIInputHintGlyphProvider::GetDefaultObj()
{
	static class IModioUIInputHintGlyphProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIInputHintGlyphProvider*>(IModioUIInputHintGlyphProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIInputHintGlyphProvider.GetInputGlyphMaterialForInputType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        VirtualInput                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUIInputMode       InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* IModioUIInputHintGlyphProvider::GetInputGlyphMaterialForInputType(const struct FKey& VirtualInput, enum class EModioUIInputMode InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputHintGlyphProvider", "GetInputGlyphMaterialForInputType");

	Params::IModioUIInputHintGlyphProvider_GetInputGlyphMaterialForInputType_Params Parms{};

	Parms.VirtualInput = VirtualInput;
	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUIModDetailsDisplay
// (None)

class UClass* IModioUIModDetailsDisplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIModDetailsDisplay");

	return Clss;
}


// ModioUIModDetailsDisplay ModioUI.Default__ModioUIModDetailsDisplay
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIModDetailsDisplay* IModioUIModDetailsDisplay::GetDefaultObj()
{
	static class IModioUIModDetailsDisplay* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIModDetailsDisplay*>(IModioUIModDetailsDisplay::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIModDetailsDisplay.RegisterUserWidget
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioUIModDetailsDisplay>DisplayWidget                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUIModDetailsDisplay::RegisterUserWidget(TScriptInterface<class IModioUIModDetailsDisplay>& DisplayWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModDetailsDisplay", "RegisterUserWidget");

	Params::IModioUIModDetailsDisplay_RegisterUserWidget_Params Parms{};

	Parms.DisplayWidget = DisplayWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIModDetailsDisplay.HandleDisplayModDetailsForID
// (Native, Protected, HasOutParams)
// Parameters:
// struct FModioModID                 ModId                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModDetailsDisplay::HandleDisplayModDetailsForID(struct FModioModID& ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModDetailsDisplay", "HandleDisplayModDetailsForID");

	Params::IModioUIModDetailsDisplay_HandleDisplayModDetailsForID_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIModDetailsDisplay.HandleDisplayModDetails
// (Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class IModioModInfoUIDetails>Details                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUIModDetailsDisplay::HandleDisplayModDetails(TScriptInterface<class IModioModInfoUIDetails>* Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModDetailsDisplay", "HandleDisplayModDetails");

	Params::IModioUIModDetailsDisplay_HandleDisplayModDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Details != nullptr)
		*Details = Parms.Details;

}


// Function ModioUI.ModioUIModDetailsDisplay.DisplayModDetailsForID
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioModID                 ModId                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIModDetailsDisplay::DisplayModDetailsForID(struct FModioModID& ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModDetailsDisplay", "DisplayModDetailsForID");

	Params::IModioUIModDetailsDisplay_DisplayModDetailsForID_Params Parms{};

	Parms.ModId = ModId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIModDetailsDisplay.DisplayModDetails
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IModioModInfoUIDetails>Details                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void IModioUIModDetailsDisplay::DisplayModDetails(TScriptInterface<class IModioModInfoUIDetails>& Details)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIModDetailsDisplay", "DisplayModDetails");

	Params::IModioUIModDetailsDisplay_DisplayModDetails_Params Parms{};

	Parms.Details = Details;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIPopupMenuContentWidget
// (None)

class UClass* IModioUIPopupMenuContentWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIPopupMenuContentWidget");

	return Clss;
}


// ModioUIPopupMenuContentWidget ModioUI.Default__ModioUIPopupMenuContentWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIPopupMenuContentWidget* IModioUIPopupMenuContentWidget::GetDefaultObj()
{
	static class IModioUIPopupMenuContentWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIPopupMenuContentWidget*>(IModioUIPopupMenuContentWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIPopupMenuContentWidget.SetStyle
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioUIStyleRef            StyleRef                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IModioUIPopupMenuContentWidget::SetStyle(struct FModioUIStyleRef& StyleRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIPopupMenuContentWidget", "SetStyle");

	Params::IModioUIPopupMenuContentWidget_SetStyle_Params Parms{};

	Parms.StyleRef = StyleRef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIPopupMenuContentWidget.SetMenuEntries
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioUIMenuCommandList     Entries                                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void IModioUIPopupMenuContentWidget::SetMenuEntries(struct FModioUIMenuCommandList& Entries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIPopupMenuContentWidget", "SetMenuEntries");

	Params::IModioUIPopupMenuContentWidget_SetMenuEntries_Params Parms{};

	Parms.Entries = Entries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIPopupMenuContentWidget.SetDesiredSize
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DesiredSize                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIPopupMenuContentWidget::SetDesiredSize(struct FVector2D& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIPopupMenuContentWidget", "SetDesiredSize");

	Params::IModioUIPopupMenuContentWidget_SetDesiredSize_Params Parms{};

	Parms.DesiredSize = DesiredSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIRefineSearchWidget
// (None)

class UClass* IModioUIRefineSearchWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIRefineSearchWidget");

	return Clss;
}


// ModioUIRefineSearchWidget ModioUI.Default__ModioUIRefineSearchWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIRefineSearchWidget* IModioUIRefineSearchWidget::GetDefaultObj()
{
	static class IModioUIRefineSearchWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIRefineSearchWidget*>(IModioUIRefineSearchWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIRefineSearchWidget.RefreshTags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IModioUIRefineSearchWidget::RefreshTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIRefineSearchWidget", "RefreshTags");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIRefineSearchWidget.NotifySettingsChanged
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioFilterParams          SearchSettings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIRefineSearchWidget::NotifySettingsChanged(struct FModioFilterParams& SearchSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIRefineSearchWidget", "NotifySettingsChanged");

	Params::IModioUIRefineSearchWidget_NotifySettingsChanged_Params Parms{};

	Parms.SearchSettings = SearchSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIRefineSearchWidget.GetSelectedTagValues
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> IModioUIRefineSearchWidget::GetSelectedTagValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIRefineSearchWidget", "GetSelectedTagValues");

	Params::IModioUIRefineSearchWidget_GetSelectedTagValues_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIRefineSearchWidget.GetSearchString
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString IModioUIRefineSearchWidget::GetSearchString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIRefineSearchWidget", "GetSearchString");

	Params::IModioUIRefineSearchWidget_GetSearchString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUIStringInputWidget
// (None)

class UClass* IModioUIStringInputWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIStringInputWidget");

	return Clss;
}


// ModioUIStringInputWidget ModioUI.Default__ModioUIStringInputWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIStringInputWidget* IModioUIStringInputWidget::GetDefaultObj()
{
	static class IModioUIStringInputWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIStringInputWidget*>(IModioUIStringInputWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIStringInputWidget.SetInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Input                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::SetInput(const class FString& Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "SetInput");

	Params::IModioUIStringInputWidget_SetInput_Params Parms{};

	Parms.Input = Input;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIStringInputWidget.SetHint
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        HintText                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IModioUIStringInputWidget::SetHint(class FText& HintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "SetHint");

	Params::IModioUIStringInputWidget_SetHint_Params Parms{};

	Parms.HintText = HintText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIStringInputWidget.GatherInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString IModioUIStringInputWidget::GatherInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIStringInputWidget", "GatherInput");

	Params::IModioUIStringInputWidget_GatherInput_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUIStyleRefSerializer
// (None)

class UClass* IModioUIStyleRefSerializer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIStyleRefSerializer");

	return Clss;
}


// ModioUIStyleRefSerializer ModioUI.Default__ModioUIStyleRefSerializer
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIStyleRefSerializer* IModioUIStyleRefSerializer::GetDefaultObj()
{
	static class IModioUIStyleRefSerializer* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIStyleRefSerializer*>(IModioUIStyleRefSerializer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUIInputValidationLibrary
// (None)

class UClass* UModioUIInputValidationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIInputValidationLibrary");

	return Clss;
}


// ModioUIInputValidationLibrary ModioUI.Default__ModioUIInputValidationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIInputValidationLibrary* UModioUIInputValidationLibrary::GetDefaultObj()
{
	static class UModioUIInputValidationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIInputValidationLibrary*>(UModioUIInputValidationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateUsingRule
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioTextValidationRule    Rule                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ValidationMessageText                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateUsingRule(struct FModioTextValidationRule& Rule, class FText& TextToValidate, class FText* ValidationMessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateUsingRule");

	Params::UModioUIInputValidationLibrary_ValidateUsingRule_Params Parms{};

	Parms.Rule = Rule;
	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ValidationMessageText != nullptr)
		*ValidationMessageText = Parms.ValidationMessageText;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateNoWhitespace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateNoWhitespace(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateNoWhitespace");

	Params::UModioUIInputValidationLibrary_ValidateNoWhitespace_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateNotEmpty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateNotEmpty(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateNotEmpty");

	Params::UModioUIInputValidationLibrary_ValidateNotEmpty_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              DesiredMaximumLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DesiredMinimumLength                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateLength(class FText& TextToValidate, int32 DesiredMaximumLength, int32 DesiredMinimumLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateLength");

	Params::UModioUIInputValidationLibrary_ValidateLength_Params Parms{};

	Parms.TextToValidate = TextToValidate;
	Parms.DesiredMaximumLength = DesiredMaximumLength;
	Parms.DesiredMinimumLength = DesiredMinimumLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateEmailAddress
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateEmailAddress(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateEmailAddress");

	Params::UModioUIInputValidationLibrary_ValidateEmailAddress_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateAlphanumeric
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateAlphanumeric(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateAlphanumeric");

	Params::UModioUIInputValidationLibrary_ValidateAlphanumeric_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateAllNumeric
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateAllNumeric(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateAllNumeric");

	Params::UModioUIInputValidationLibrary_ValidateAllNumeric_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUIInputValidationLibrary.ValidateAllLetters
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        TextToValidate                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioUIInputValidationLibrary::ValidateAllLetters(class FText& TextToValidate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIInputValidationLibrary", "ValidateAllLetters");

	Params::UModioUIInputValidationLibrary_ValidateAllLetters_Params Parms{};

	Parms.TextToValidate = TextToValidate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUITextValidator
// (None)

class UClass* IModioUITextValidator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUITextValidator");

	return Clss;
}


// ModioUITextValidator ModioUI.Default__ModioUITextValidator
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUITextValidator* IModioUITextValidator::GetDefaultObj()
{
	static class IModioUITextValidator* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUITextValidator*>(IModioUITextValidator::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUITextValidator.ValidateText
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InputText                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ValidationMessageText                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IModioUITextValidator::ValidateText(class FText& InputText, class FText* ValidationMessageText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "ValidateText");

	Params::IModioUITextValidator_ValidateText_Params Parms{};

	Parms.InputText = InputText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ValidationMessageText != nullptr)
		*ValidationMessageText = Parms.ValidationMessageText;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUITextValidator.SetValidationError
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorText                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void IModioUITextValidator::SetValidationError(class FText* ErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "SetValidationError");

	Params::IModioUITextValidator_SetValidationError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ErrorText != nullptr)
		*ErrorText = Parms.ErrorText;

}


// Function ModioUI.ModioUITextValidator.GetTextValidationRules
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioTextValidationRule>Rules                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void IModioUITextValidator::GetTextValidationRules(TArray<struct FModioTextValidationRule>* Rules)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUITextValidator", "GetTextValidationRules");

	Params::IModioUITextValidator_GetTextValidationRules_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rules != nullptr)
		*Rules = std::move(Parms.Rules);

}


// Class ModioUI.ModioUIUserStringListEntry
// (None)

class UClass* IModioUIUserStringListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIUserStringListEntry");

	return Clss;
}


// ModioUIUserStringListEntry ModioUI.Default__ModioUIUserStringListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class IModioUIUserStringListEntry* IModioUIUserStringListEntry::GetDefaultObj()
{
	static class IModioUIUserStringListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<IModioUIUserStringListEntry*>(IModioUIUserStringListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIUserStringListEntry.SetListItemString
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IModioUIUserStringListEntry::SetListItemString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIUserStringListEntry", "SetListItemString");

	Params::IModioUIUserStringListEntry_SetListItemString_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioAsyncOpWrapperWidget
// (None)

class UClass* UModioAsyncOpWrapperWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioAsyncOpWrapperWidget");

	return Clss;
}


// ModioAsyncOpWrapperWidget ModioUI.Default__ModioAsyncOpWrapperWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioAsyncOpWrapperWidget* UModioAsyncOpWrapperWidget::GetDefaultObj()
{
	static class UModioAsyncOpWrapperWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioAsyncOpWrapperWidget*>(UModioAsyncOpWrapperWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioAsyncOpWrapperWidget.SetActualAsyncOperationWidget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class IModioUIAsyncOperationWidget>Widget                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)

void UModioAsyncOpWrapperWidget::SetActualAsyncOperationWidget(TScriptInterface<class IModioUIAsyncOperationWidget>& Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioAsyncOpWrapperWidget", "SetActualAsyncOperationWidget");

	Params::UModioAsyncOpWrapperWidget_SetActualAsyncOperationWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioAuthenticationContextUI
// (None)

class UClass* UModioAuthenticationContextUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioAuthenticationContextUI");

	return Clss;
}


// ModioAuthenticationContextUI ModioUI.Default__ModioAuthenticationContextUI
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioAuthenticationContextUI* UModioAuthenticationContextUI::GetDefaultObj()
{
	static class UModioAuthenticationContextUI* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioAuthenticationContextUI*>(UModioAuthenticationContextUI::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioAuthenticationMethodSelector
// (None)

class UClass* UModioAuthenticationMethodSelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioAuthenticationMethodSelector");

	return Clss;
}


// ModioAuthenticationMethodSelector ModioUI.Default__ModioAuthenticationMethodSelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioAuthenticationMethodSelector* UModioAuthenticationMethodSelector::GetDefaultObj()
{
	static class UModioAuthenticationMethodSelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioAuthenticationMethodSelector*>(UModioAuthenticationMethodSelector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioAuthenticationMethodSelector.CancelClicked
// (Final, Native, Protected)
// Parameters:

void UModioAuthenticationMethodSelector::CancelClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioAuthenticationMethodSelector", "CancelClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioButton
// (None)

class UClass* UModioButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioButton");

	return Clss;
}


// ModioButton ModioUI.Default__ModioButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioButton* UModioButton::GetDefaultObj()
{
	static class UModioButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioButton*>(UModioButton::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioButton.SetLabel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        NewLabel                                                         (Parm, NativeAccessSpecifierPublic)

void UModioButton::SetLabel(class FText NewLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioButton", "SetLabel");

	Params::UModioButton_SetLabel_Params Parms{};

	Parms.NewLabel = NewLabel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioButton.SetButtonStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioUIStyleRef            ButtonStyleRef                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bApplyStyle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioButton::SetButtonStyle(const struct FModioUIStyleRef& ButtonStyleRef, bool bApplyStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioButton", "SetButtonStyle");

	Params::UModioButton_SetButtonStyle_Params Parms{};

	Parms.ButtonStyleRef = ButtonStyleRef;
	Parms.bApplyStyle = bApplyStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIWidgetStyleContainer
// (None)

class UClass* UModioUIWidgetStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIWidgetStyleContainer");

	return Clss;
}


// ModioUIWidgetStyleContainer ModioUI.Default__ModioUIWidgetStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIWidgetStyleContainer* UModioUIWidgetStyleContainer::GetDefaultObj()
{
	static class UModioUIWidgetStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIWidgetStyleContainer*>(UModioUIWidgetStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioButtonStyleContainer
// (None)

class UClass* UModioButtonStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioButtonStyleContainer");

	return Clss;
}


// ModioButtonStyleContainer ModioUI.Default__ModioButtonStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioButtonStyleContainer* UModioButtonStyleContainer::GetDefaultObj()
{
	static class UModioButtonStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioButtonStyleContainer*>(UModioButtonStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCheckBox
// (None)

class UClass* UModioCheckBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCheckBox");

	return Clss;
}


// ModioCheckBox ModioUI.Default__ModioCheckBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCheckBox* UModioCheckBox::GetDefaultObj()
{
	static class UModioCheckBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCheckBox*>(UModioCheckBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioProceduralBrushParams
// (None)

class UClass* UModioProceduralBrushParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioProceduralBrushParams");

	return Clss;
}


// ModioProceduralBrushParams ModioUI.Default__ModioProceduralBrushParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioProceduralBrushParams* UModioProceduralBrushParams::GetDefaultObj()
{
	static class UModioProceduralBrushParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioProceduralBrushParams*>(UModioProceduralBrushParams::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioProceduralBrushParams.GetMaterialInstance
// (Native, Public)
// Parameters:
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UModioProceduralBrushParams::GetMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioProceduralBrushParams", "GetMaterialInstance");

	Params::UModioProceduralBrushParams_GetMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioCheckBoxMaterialParams
// (None)

class UClass* UModioCheckBoxMaterialParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCheckBoxMaterialParams");

	return Clss;
}


// ModioCheckBoxMaterialParams ModioUI.Default__ModioCheckBoxMaterialParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCheckBoxMaterialParams* UModioCheckBoxMaterialParams::GetDefaultObj()
{
	static class UModioCheckBoxMaterialParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCheckBoxMaterialParams*>(UModioCheckBoxMaterialParams::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCheckBoxStyleContainer
// (None)

class UClass* UModioCheckBoxStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCheckBoxStyleContainer");

	return Clss;
}


// ModioCheckBoxStyleContainer ModioUI.Default__ModioCheckBoxStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCheckBoxStyleContainer* UModioCheckBoxStyleContainer::GetDefaultObj()
{
	static class UModioCheckBoxStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCheckBoxStyleContainer*>(UModioCheckBoxStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCircle
// (None)

class UClass* UModioCircle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCircle");

	return Clss;
}


// ModioCircle ModioUI.Default__ModioCircle
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCircle* UModioCircle::GetDefaultObj()
{
	static class UModioCircle* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCircle*>(UModioCircle::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCircularProgressBar
// (None)

class UClass* UModioCircularProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCircularProgressBar");

	return Clss;
}


// ModioCircularProgressBar ModioUI.Default__ModioCircularProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCircularProgressBar* UModioCircularProgressBar::GetDefaultObj()
{
	static class UModioCircularProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCircularProgressBar*>(UModioCircularProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioCircularProgressBar.GetProgress
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UModioCircularProgressBar::GetProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCircularProgressBar", "GetProgress");

	Params::UModioCircularProgressBar_GetProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioCodeInputStyleContainer
// (None)

class UClass* UModioCodeInputStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCodeInputStyleContainer");

	return Clss;
}


// ModioCodeInputStyleContainer ModioUI.Default__ModioCodeInputStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCodeInputStyleContainer* UModioCodeInputStyleContainer::GetDefaultObj()
{
	static class UModioCodeInputStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCodeInputStyleContainer*>(UModioCodeInputStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCodeInputWidget
// (None)

class UClass* UModioCodeInputWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCodeInputWidget");

	return Clss;
}


// ModioCodeInputWidget ModioUI.Default__ModioCodeInputWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCodeInputWidget* UModioCodeInputWidget::GetDefaultObj()
{
	static class UModioCodeInputWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCodeInputWidget*>(UModioCodeInputWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioCodeInputWidget.ValidateCodeInputCharacter
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Character                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UModioCodeInputWidget::ValidateCodeInputCharacter(const class FString& Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCodeInputWidget", "ValidateCodeInputCharacter");

	Params::UModioCodeInputWidget_ValidateCodeInputCharacter_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUserWidgetBase
// (None)

class UClass* UModioUserWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserWidgetBase");

	return Clss;
}


// ModioUserWidgetBase ModioUI.Default__ModioUserWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUserWidgetBase* UModioUserWidgetBase::GetDefaultObj()
{
	static class UModioUserWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUserWidgetBase*>(UModioUserWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUserWidgetBase.SetDataSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     NewDataSource                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUserWidgetBase::SetDataSource(class UObject* NewDataSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserWidgetBase", "SetDataSource");

	Params::UModioUserWidgetBase_SetDataSource_Params Parms{};

	Parms.NewDataSource = NewDataSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUserWidgetBase.OnFinishLoadExternalData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUserWidgetBase::OnFinishLoadExternalData(const struct FModioErrorCode& Ec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserWidgetBase", "OnFinishLoadExternalData");

	Params::UModioUserWidgetBase_OnFinishLoadExternalData_Params Parms{};

	Parms.Ec = Ec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUI.ModioUserWidgetBase.OnDataSourceUpdated
// (Event, Public, BlueprintEvent)
// Parameters:

void UModioUserWidgetBase::OnDataSourceUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserWidgetBase", "OnDataSourceUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModioUI.ModioUserWidgetBase.OnBeginLoadExternalData
// (Event, Public, BlueprintEvent)
// Parameters:

void UModioUserWidgetBase::OnBeginLoadExternalData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserWidgetBase", "OnBeginLoadExternalData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ModioUI.ModioUserWidgetBase.LoadExternalData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioUserWidgetBase::LoadExternalData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserWidgetBase", "LoadExternalData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUserWidgetBase.FinishLoadExternalData
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUserWidgetBase::FinishLoadExternalData(const struct FModioErrorCode& Ec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserWidgetBase", "FinishLoadExternalData");

	Params::UModioUserWidgetBase_FinishLoadExternalData_Params Parms{};

	Parms.Ec = Ec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioModManagementWidgetBase
// (None)

class UClass* UModioModManagementWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModManagementWidgetBase");

	return Clss;
}


// ModioModManagementWidgetBase ModioUI.Default__ModioModManagementWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModManagementWidgetBase* UModioModManagementWidgetBase::GetDefaultObj()
{
	static class UModioModManagementWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModManagementWidgetBase*>(UModioModManagementWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCollectionTileStatus
// (None)

class UClass* UModioCollectionTileStatus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCollectionTileStatus");

	return Clss;
}


// ModioCollectionTileStatus ModioUI.Default__ModioCollectionTileStatus
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCollectionTileStatus* UModioCollectionTileStatus::GetDefaultObj()
{
	static class UModioCollectionTileStatus* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCollectionTileStatus*>(UModioCollectionTileStatus::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioMenuView
// (None)

class UClass* UModioMenuView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMenuView");

	return Clss;
}


// ModioMenuView ModioUI.Default__ModioMenuView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMenuView* UModioMenuView::GetDefaultObj()
{
	static class UModioMenuView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMenuView*>(UModioMenuView::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCollectionView
// (None)

class UClass* UModioCollectionView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCollectionView");

	return Clss;
}


// ModioCollectionView ModioUI.Default__ModioCollectionView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCollectionView* UModioCollectionView::GetDefaultObj()
{
	static class UModioCollectionView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCollectionView*>(UModioCollectionView::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioCollectionView.SortZToA
// (Final, Native, Protected)
// Parameters:

void UModioCollectionView::SortZToA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionView", "SortZToA");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioCollectionView.SortSizeOnDisk
// (Final, Native, Protected)
// Parameters:

void UModioCollectionView::SortSizeOnDisk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionView", "SortSizeOnDisk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioCollectionView.SortRecentlyUpdatedDelegate
// (Final, Native, Protected)
// Parameters:

void UModioCollectionView::SortRecentlyUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionView", "SortRecentlyUpdatedDelegate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioCollectionView.SortAToZ
// (Final, Native, Protected)
// Parameters:

void UModioCollectionView::SortAToZ()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionView", "SortAToZ");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioCollectionView.OnModGroupChanged
// (Final, Native, Protected)
// Parameters:
// class FText                        SelectedItem                                                     (Parm, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioCollectionView::OnModGroupChanged(class FText SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionView", "OnModGroupChanged");

	Params::UModioCollectionView_OnModGroupChanged_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioCollectionView.OnFetchUpdatesClicked
// (Final, Native, Protected)
// Parameters:

void UModioCollectionView::OnFetchUpdatesClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioCollectionView", "OnFetchUpdatesClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioColorPresets
// (None)

class UClass* UModioColorPresets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioColorPresets");

	return Clss;
}


// ModioColorPresets ModioUI.Default__ModioColorPresets
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioColorPresets* UModioColorPresets::GetDefaultObj()
{
	static class UModioColorPresets* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioColorPresets*>(UModioColorPresets::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioComboBox
// (None)

class UClass* UModioComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioComboBox");

	return Clss;
}


// ModioComboBox ModioUI.Default__ModioComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioComboBox* UModioComboBox::GetDefaultObj()
{
	static class UModioComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioComboBox*>(UModioComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioComboBoxString
// (None)

class UClass* UModioComboBoxString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioComboBoxString");

	return Clss;
}


// ModioComboBoxString ModioUI.Default__ModioComboBoxString
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioComboBoxString* UModioComboBoxString::GetDefaultObj()
{
	static class UModioComboBoxString* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioComboBoxString*>(UModioComboBoxString::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUICommandInfoLibrary
// (None)

class UClass* UModioUICommandInfoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUICommandInfoLibrary");

	return Clss;
}


// ModioUICommandInfoLibrary ModioUI.Default__ModioUICommandInfoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUICommandInfoLibrary* UModioUICommandInfoLibrary::GetDefaultObj()
{
	static class UModioUICommandInfoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUICommandInfoLibrary*>(UModioUICommandInfoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUICommandInfoLibrary.RefineSearchCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::RefineSearchCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "RefineSearchCommand");

	Params::UModioUICommandInfoLibrary_RefineSearchCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.PreviousPageCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::PreviousPageCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "PreviousPageCommand");

	Params::UModioUICommandInfoLibrary_PreviousPageCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.NextPageCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::NextPageCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "NextPageCommand");

	Params::UModioUICommandInfoLibrary_NextPageCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.MoreOptionsCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::MoreOptionsCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "MoreOptionsCommand");

	Params::UModioUICommandInfoLibrary_MoreOptionsCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.DownloadQueueCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::DownloadQueueCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "DownloadQueueCommand");

	Params::UModioUICommandInfoLibrary_DownloadQueueCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.ConfirmCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::ConfirmCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "ConfirmCommand");

	Params::UModioUICommandInfoLibrary_ConfirmCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.CollapseCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::CollapseCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "CollapseCommand");

	Params::UModioUICommandInfoLibrary_CollapseCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUICommandInfoLibrary.BackCommand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuEntry           ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FModioUIMenuEntry UModioUICommandInfoLibrary::BackCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUICommandInfoLibrary", "BackCommand");

	Params::UModioUICommandInfoLibrary_BackCommand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioCustomComboBoxStyleContainer
// (None)

class UClass* UModioCustomComboBoxStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCustomComboBoxStyleContainer");

	return Clss;
}


// ModioCustomComboBoxStyleContainer ModioUI.Default__ModioCustomComboBoxStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCustomComboBoxStyleContainer* UModioCustomComboBoxStyleContainer::GetDefaultObj()
{
	static class UModioCustomComboBoxStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCustomComboBoxStyleContainer*>(UModioCustomComboBoxStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDefaultInputGlyphProvider
// (None)

class UClass* UModioDefaultInputGlyphProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultInputGlyphProvider");

	return Clss;
}


// ModioDefaultInputGlyphProvider ModioUI.Default__ModioDefaultInputGlyphProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultInputGlyphProvider* UModioDefaultInputGlyphProvider::GetDefaultObj()
{
	static class UModioDefaultInputGlyphProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultInputGlyphProvider*>(UModioDefaultInputGlyphProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDefaultPopupMenuContent
// (None)

class UClass* UModioDefaultPopupMenuContent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDefaultPopupMenuContent");

	return Clss;
}


// ModioDefaultPopupMenuContent ModioUI.Default__ModioDefaultPopupMenuContent
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDefaultPopupMenuContent* UModioDefaultPopupMenuContent::GetDefaultObj()
{
	static class UModioDefaultPopupMenuContent* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDefaultPopupMenuContent*>(UModioDefaultPopupMenuContent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDialogBase
// (None)

class UClass* UModioDialogBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDialogBase");

	return Clss;
}


// ModioDialogBase ModioUI.Default__ModioDialogBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDialogBase* UModioDialogBase::GetDefaultObj()
{
	static class UModioDialogBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDialogBase*>(UModioDialogBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDialogBaseInternal
// (None)

class UClass* UModioDialogBaseInternal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDialogBaseInternal");

	return Clss;
}


// ModioDialogBaseInternal ModioUI.Default__ModioDialogBaseInternal
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDialogBaseInternal* UModioDialogBaseInternal::GetDefaultObj()
{
	static class UModioDialogBaseInternal* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDialogBaseInternal*>(UModioDialogBaseInternal::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDialogBaseInternal.SetDialogFocus
// (Final, Native, Public)
// Parameters:

void UModioDialogBaseInternal::SetDialogFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDialogBaseInternal", "SetDialogFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDialogBaseInternal.OnSubmitKeyPressed
// (Final, Native, Protected)
// Parameters:

void UModioDialogBaseInternal::OnSubmitKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDialogBaseInternal", "OnSubmitKeyPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDialogBaseInternal.OnNavigateDownFromCodeInputWidget
// (Final, Native, Protected)
// Parameters:

void UModioDialogBaseInternal::OnNavigateDownFromCodeInputWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDialogBaseInternal", "OnNavigateDownFromCodeInputWidget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioWidgetBase
// (None)

class UClass* UModioWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioWidgetBase");

	return Clss;
}


// ModioWidgetBase ModioUI.Default__ModioWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioWidgetBase* UModioWidgetBase::GetDefaultObj()
{
	static class UModioWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioWidgetBase*>(UModioWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDialogController
// (None)

class UClass* UModioDialogController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDialogController");

	return Clss;
}


// ModioDialogController ModioUI.Default__ModioDialogController
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDialogController* UModioDialogController::GetDefaultObj()
{
	static class UModioDialogController* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDialogController*>(UModioDialogController::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDialogController.ShowErrorDialog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCloseDialogsOnOK                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDialogController::ShowErrorDialog(const struct FModioErrorCode& Ec, bool bCloseDialogsOnOK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDialogController", "ShowErrorDialog");

	Params::UModioDialogController_ShowErrorDialog_Params Parms{};

	Parms.Ec = Ec;
	Parms.bCloseDialogsOnOK = bCloseDialogsOnOK;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDialogController.HandleBackgroundClick
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UModioDialogController::HandleBackgroundClick(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDialogController", "HandleBackgroundClick");

	Params::UModioDialogController_HandleBackgroundClick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioDialogInfo
// (None)

class UClass* UModioDialogInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDialogInfo");

	return Clss;
}


// ModioDialogInfo ModioUI.Default__ModioDialogInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDialogInfo* UModioDialogInfo::GetDefaultObj()
{
	static class UModioDialogInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDialogInfo*>(UModioDialogInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDialogStyleContainer
// (None)

class UClass* UModioDialogStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDialogStyleContainer");

	return Clss;
}


// ModioDialogStyleContainer ModioUI.Default__ModioDialogStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDialogStyleContainer* UModioDialogStyleContainer::GetDefaultObj()
{
	static class UModioDialogStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDialogStyleContainer*>(UModioDialogStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDownloadListWidgetBase
// (None)

class UClass* UModioDownloadListWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadListWidgetBase");

	return Clss;
}


// ModioDownloadListWidgetBase ModioUI.Default__ModioDownloadListWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDownloadListWidgetBase* UModioDownloadListWidgetBase::GetDefaultObj()
{
	static class UModioDownloadListWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadListWidgetBase*>(UModioDownloadListWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDownloadQueueDrawer
// (None)

class UClass* UModioDownloadQueueDrawer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueDrawer");

	return Clss;
}


// ModioDownloadQueueDrawer ModioUI.Default__ModioDownloadQueueDrawer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDownloadQueueDrawer* UModioDownloadQueueDrawer::GetDefaultObj()
{
	static class UModioDownloadQueueDrawer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueDrawer*>(UModioDownloadQueueDrawer::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDownloadQueueDrawer.OnSubsricptionChanged
// (Final, Native, Protected)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Subscribed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDownloadQueueDrawer::OnSubsricptionChanged(const struct FModioModID& ID, bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueDrawer", "OnSubsricptionChanged");

	Params::UModioDownloadQueueDrawer_OnSubsricptionChanged_Params Parms{};

	Parms.ID = ID;
	Parms.Subscribed = Subscribed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDownloadQueueDrawer.OnLogoutClicked
// (Final, Native, Protected)
// Parameters:

void UModioDownloadQueueDrawer::OnLogoutClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueDrawer", "OnLogoutClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDownloadQueueDrawer.HandleOperationCompleted
// (Final, Native, Protected)
// Parameters:

void UModioDownloadQueueDrawer::HandleOperationCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueDrawer", "HandleOperationCompleted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioDownloadQueueEntry
// (None)

class UClass* UModioDownloadQueueEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueEntry");

	return Clss;
}


// ModioDownloadQueueEntry ModioUI.Default__ModioDownloadQueueEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDownloadQueueEntry* UModioDownloadQueueEntry::GetDefaultObj()
{
	static class UModioDownloadQueueEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueEntry*>(UModioDownloadQueueEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDownloadQueueEntry.OnUnsubClicked
// (Native, Protected)
// Parameters:

void UModioDownloadQueueEntry::OnUnsubClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueEntry", "OnUnsubClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDownloadQueueEntry.OnEntryPressed
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UModioDownloadQueueEntry::OnEntryPressed(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueEntry", "OnEntryPressed");

	Params::UModioDownloadQueueEntry_OnEntryPressed_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioDownloadQueueEntryStyleContainer
// (None)

class UClass* UModioDownloadQueueEntryStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueEntryStyleContainer");

	return Clss;
}


// ModioDownloadQueueEntryStyleContainer ModioUI.Default__ModioDownloadQueueEntryStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDownloadQueueEntryStyleContainer* UModioDownloadQueueEntryStyleContainer::GetDefaultObj()
{
	static class UModioDownloadQueueEntryStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueEntryStyleContainer*>(UModioDownloadQueueEntryStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDownloadQueueOpProgress
// (None)

class UClass* UModioDownloadQueueOpProgress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDownloadQueueOpProgress");

	return Clss;
}


// ModioDownloadQueueOpProgress ModioUI.Default__ModioDownloadQueueOpProgress
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDownloadQueueOpProgress* UModioDownloadQueueOpProgress::GetDefaultObj()
{
	static class UModioDownloadQueueOpProgress* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDownloadQueueOpProgress*>(UModioDownloadQueueOpProgress::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDownloadQueueOpProgress.OperationCompletedDelegate
// (Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

FDelegateProperty_ UModioDownloadQueueOpProgress::OperationCompletedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueOpProgress", "OperationCompletedDelegate");

	Params::UModioDownloadQueueOpProgress_OperationCompletedDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioDownloadQueueOpProgress.OnUnsubscribeClicked
// (Final, Native, Protected)
// Parameters:

void UModioDownloadQueueOpProgress::OnUnsubscribeClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDownloadQueueOpProgress", "OnUnsubscribeClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioDrawer
// (None)

class UClass* UModioDrawer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDrawer");

	return Clss;
}


// ModioDrawer ModioUI.Default__ModioDrawer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDrawer* UModioDrawer::GetDefaultObj()
{
	static class UModioDrawer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDrawer*>(UModioDrawer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDrawerContentBase
// (None)

class UClass* UModioDrawerContentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDrawerContentBase");

	return Clss;
}


// ModioDrawerContentBase ModioUI.Default__ModioDrawerContentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDrawerContentBase* UModioDrawerContentBase::GetDefaultObj()
{
	static class UModioDrawerContentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDrawerContentBase*>(UModioDrawerContentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDrawerContentBase.GetOptionalContentWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioDrawerContentBase::GetOptionalContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerContentBase", "GetOptionalContentWidget");

	Params::UModioDrawerContentBase_GetOptionalContentWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ModioUI.ModioDrawerContentBase.GetHeaderWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioDrawerContentBase::GetHeaderWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerContentBase", "GetHeaderWidget");

	Params::UModioDrawerContentBase_GetHeaderWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ModioUI.ModioDrawerContentBase.GetContentWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioDrawerContentBase::GetContentWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerContentBase", "GetContentWidget");

	Params::UModioDrawerContentBase_GetContentWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ModioUI.ModioOverlay
// (None)

class UClass* UModioOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioOverlay");

	return Clss;
}


// ModioOverlay ModioUI.Default__ModioOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioOverlay* UModioOverlay::GetDefaultObj()
{
	static class UModioOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioOverlay*>(UModioOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDrawerController
// (None)

class UClass* UModioDrawerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDrawerController");

	return Clss;
}


// ModioDrawerController ModioUI.Default__ModioDrawerController
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDrawerController* UModioDrawerController::GetDefaultObj()
{
	static class UModioDrawerController* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDrawerController*>(UModioDrawerController::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioDrawerController.ToggleDrawerExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCloseOtherDrawers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioDrawerController::ToggleDrawerExpanded(int32 SlotIndex, bool bCloseOtherDrawers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerController", "ToggleDrawerExpanded");

	Params::UModioDrawerController_ToggleDrawerExpanded_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.bCloseOtherDrawers = bCloseOtherDrawers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioDrawerController.SetDrawerExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExpandedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCloseOtherDrawers                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioDrawerController::SetDrawerExpanded(int32 SlotIndex, bool bExpandedState, bool bCloseOtherDrawers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerController", "SetDrawerExpanded");

	Params::UModioDrawerController_SetDrawerExpanded_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.bExpandedState = bExpandedState;
	Parms.bCloseOtherDrawers = bCloseOtherDrawers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDrawerController.IsAnyDrawerExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModioDrawerController::IsAnyDrawerExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerController", "IsAnyDrawerExpanded");

	Params::UModioDrawerController_IsAnyDrawerExpanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioDrawerController.DrawerAnimatedOut
// (Final, Native, Protected)
// Parameters:

void UModioDrawerController::DrawerAnimatedOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerController", "DrawerAnimatedOut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioDrawerController.CollapseAllDrawers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioDrawerController::CollapseAllDrawers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioDrawerController", "CollapseAllDrawers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioDrawerControllerSlot
// (None)

class UClass* UModioDrawerControllerSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDrawerControllerSlot");

	return Clss;
}


// ModioDrawerControllerSlot ModioUI.Default__ModioDrawerControllerSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDrawerControllerSlot* UModioDrawerControllerSlot::GetDefaultObj()
{
	static class UModioDrawerControllerSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDrawerControllerSlot*>(UModioDrawerControllerSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDrawerWidgetStyleContainer
// (None)

class UClass* UModioDrawerWidgetStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDrawerWidgetStyleContainer");

	return Clss;
}


// ModioDrawerWidgetStyleContainer ModioUI.Default__ModioDrawerWidgetStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDrawerWidgetStyleContainer* UModioDrawerWidgetStyleContainer::GetDefaultObj()
{
	static class UModioDrawerWidgetStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDrawerWidgetStyleContainer*>(UModioDrawerWidgetStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioDynamicImageStyleContainer
// (None)

class UClass* UModioDynamicImageStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioDynamicImageStyleContainer");

	return Clss;
}


// ModioDynamicImageStyleContainer ModioUI.Default__ModioDynamicImageStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioDynamicImageStyleContainer* UModioDynamicImageStyleContainer::GetDefaultObj()
{
	static class UModioDynamicImageStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioDynamicImageStyleContainer*>(UModioDynamicImageStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioEditableText
// (None)

class UClass* UModioEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEditableText");

	return Clss;
}


// ModioEditableText ModioUI.Default__ModioEditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEditableText* UModioEditableText::GetDefaultObj()
{
	static class UModioEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEditableText*>(UModioEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioEditableText.GetStyleNames
// (Final, Native, Protected, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioEditableText::GetStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditableText", "GetStyleNames");

	Params::UModioEditableText_GetStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioEditableTextBox
// (None)

class UClass* UModioEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEditableTextBox");

	return Clss;
}


// ModioEditableTextBox ModioUI.Default__ModioEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEditableTextBox* UModioEditableTextBox::GetDefaultObj()
{
	static class UModioEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEditableTextBox*>(UModioEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioEditableTextBox.StartInput
// (Final, Native, Public)
// Parameters:

void UModioEditableTextBox::StartInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioEditableTextBox", "StartInput");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioEditableTextBoxStyleContainer
// (None)

class UClass* UModioEditableTextBoxStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioEditableTextBoxStyleContainer");

	return Clss;
}


// ModioEditableTextBoxStyleContainer ModioUI.Default__ModioEditableTextBoxStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioEditableTextBoxStyleContainer* UModioEditableTextBoxStyleContainer::GetDefaultObj()
{
	static class UModioEditableTextBoxStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioEditableTextBoxStyleContainer*>(UModioEditableTextBoxStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioErrorRetryWidget
// (None)

class UClass* UModioErrorRetryWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioErrorRetryWidget");

	return Clss;
}


// ModioErrorRetryWidget ModioUI.Default__ModioErrorRetryWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioErrorRetryWidget* UModioErrorRetryWidget::GetDefaultObj()
{
	static class UModioErrorRetryWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioErrorRetryWidget*>(UModioErrorRetryWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioErrorRetryWidget.SetErrorText
// (Final, Native, Public)
// Parameters:
// class FString                      Error                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioErrorRetryWidget::SetErrorText(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioErrorRetryWidget", "SetErrorText");

	Params::UModioErrorRetryWidget_SetErrorText_Params Parms{};

	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioErrorRetryWidget.OnRetryClicked
// (Final, Native, Protected)
// Parameters:

void UModioErrorRetryWidget::OnRetryClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioErrorRetryWidget", "OnRetryClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioFeaturedCategory
// (None)

class UClass* UModioFeaturedCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedCategory");

	return Clss;
}


// ModioFeaturedCategory ModioUI.Default__ModioFeaturedCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeaturedCategory* UModioFeaturedCategory::GetDefaultObj()
{
	static class UModioFeaturedCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedCategory*>(UModioFeaturedCategory::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioFeaturedCategory.SetSelectionIndexDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UModioFeaturedCategory::SetSelectionIndexDelegate(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "SetSelectionIndexDelegate");

	Params::UModioFeaturedCategory_SetSelectionIndexDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.PlayNavRightUnhoverAnim
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::PlayNavRightUnhoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "PlayNavRightUnhoverAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.PlayNavRightHoverAnim
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::PlayNavRightHoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "PlayNavRightHoverAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.PlayNavLeftUnhoverAnim
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::PlayNavLeftUnhoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "PlayNavLeftUnhoverAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.PlayNavLeftHoverAnim
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::PlayNavLeftHoverAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "PlayNavLeftHoverAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction ModioUI.ModioFeaturedCategory.OnCategorySelectionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UModioFeaturedCategory*      RealCategory                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFeaturedCategory::OnCategorySelectionChanged__DelegateSignature(int32 Index, class UModioFeaturedCategory* RealCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "OnCategorySelectionChanged__DelegateSignature");

	Params::UModioFeaturedCategory_OnCategorySelectionChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.RealCategory = RealCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUI.ModioFeaturedCategory.HandleSeeAllClicked
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::HandleSeeAllClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "HandleSeeAllClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.HandleNavRightClicked
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::HandleNavRightClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "HandleNavRightClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.HandleNavLeftClicked
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedCategory::HandleNavLeftClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "HandleNavLeftClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.HandleItemListEntrySubscribeClicked
// (Final, Native, Protected)
// Parameters:
// class UModioModInfoUI*             ModInfo                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFeaturedCategory::HandleItemListEntrySubscribeClicked(class UModioModInfoUI* ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "HandleItemListEntrySubscribeClicked");

	Params::UModioFeaturedCategory_HandleItemListEntrySubscribeClicked_Params Parms{};

	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.HandleItemListEntryReportClicked
// (Final, Native, Protected)
// Parameters:
// class UModioModInfoUI*             ModInfo                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFeaturedCategory::HandleItemListEntryReportClicked(class UModioModInfoUI* ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "HandleItemListEntryReportClicked");

	Params::UModioFeaturedCategory_HandleItemListEntryReportClicked_Params Parms{};

	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.HandleItemListEntryDetailsClicked
// (Final, Native, Protected)
// Parameters:
// class UModioModInfoUI*             ModInfo                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFeaturedCategory::HandleItemListEntryDetailsClicked(class UModioModInfoUI* ModInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "HandleItemListEntryDetailsClicked");

	Params::UModioFeaturedCategory_HandleItemListEntryDetailsClicked_Params Parms{};

	Parms.ModInfo = ModInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedCategory.GetItemList
// (Final, Native, Public, Const)
// Parameters:
// class UModioTileView*              ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioTileView* UModioFeaturedCategory::GetItemList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedCategory", "GetItemList");

	Params::UModioFeaturedCategory_GetItemList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioModTileBase
// (None)

class UClass* UModioModTileBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTileBase");

	return Clss;
}


// ModioModTileBase ModioUI.Default__ModioModTileBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTileBase* UModioModTileBase::GetDefaultObj()
{
	static class UModioModTileBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTileBase*>(UModioModTileBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModTileBase.SetExpandedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTileBase::SetExpandedState(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTileBase", "SetExpandedState");

	Params::UModioModTileBase_SetExpandedState_Params Parms{};

	Parms.bExpanded = bExpanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTileBase.OnSetExpandedState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bExpanded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTileBase::OnSetExpandedState(bool bExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTileBase", "OnSetExpandedState");

	Params::UModioModTileBase_OnSetExpandedState_Params Parms{};

	Parms.bExpanded = bExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUI.ModioModTileBase.OnModSubscriptionStatusChanged
// (Native, Public)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Subscribed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTileBase::OnModSubscriptionStatusChanged(const struct FModioModID& ID, bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTileBase", "OnModSubscriptionStatusChanged");

	Params::UModioModTileBase_OnModSubscriptionStatusChanged_Params Parms{};

	Parms.ID = ID;
	Parms.Subscribed = Subscribed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTileBase.NativeSubscribeClicked
// (Final, Native, Public)
// Parameters:

void UModioModTileBase::NativeSubscribeClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTileBase", "NativeSubscribeClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTileBase.HandleModLogoOperationStateChanged
// (Native, Protected)
// Parameters:
// enum class EModioUIAsyncOperationWidgetStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTileBase::HandleModLogoOperationStateChanged(enum class EModioUIAsyncOperationWidgetState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTileBase", "HandleModLogoOperationStateChanged");

	Params::UModioModTileBase_HandleModLogoOperationStateChanged_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTileBase.EnableSubscribeButton
// (Final, Native, Protected)
// Parameters:

void UModioModTileBase::EnableSubscribeButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTileBase", "EnableSubscribeButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioFeaturedMod
// (None)

class UClass* UModioFeaturedMod::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedMod");

	return Clss;
}


// ModioFeaturedMod ModioUI.Default__ModioFeaturedMod
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeaturedMod* UModioFeaturedMod::GetDefaultObj()
{
	static class UModioFeaturedMod* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedMod*>(UModioFeaturedMod::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioFeaturedMod.SubmitPositiveRating
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedMod::SubmitPositiveRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedMod", "SubmitPositiveRating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedMod.SubmitNegativeRating
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedMod::SubmitNegativeRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedMod", "SubmitNegativeRating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedMod.SubmitModReport
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedMod::SubmitModReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedMod", "SubmitModReport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedMod.NativeMoreOptionsClicked
// (Final, Native, Protected)
// Parameters:

void UModioFeaturedMod::NativeMoreOptionsClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedMod", "NativeMoreOptionsClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioFeaturedModCarousel
// (None)

class UClass* UModioFeaturedModCarousel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedModCarousel");

	return Clss;
}


// ModioFeaturedModCarousel ModioUI.Default__ModioFeaturedModCarousel
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeaturedModCarousel* UModioFeaturedModCarousel::GetDefaultObj()
{
	static class UModioFeaturedModCarousel* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedModCarousel*>(UModioFeaturedModCarousel::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioFeaturedModCarousel.NavigateToWidget
// (Final, Native, Public)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFeaturedModCarousel::NavigateToWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedModCarousel", "NavigateToWidget");

	Params::UModioFeaturedModCarousel_NavigateToWidget_Params Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioFeaturedView
// (None)

class UClass* UModioFeaturedView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioFeaturedView");

	return Clss;
}


// ModioFeaturedView ModioUI.Default__ModioFeaturedView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioFeaturedView* UModioFeaturedView::GetDefaultObj()
{
	static class UModioFeaturedView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioFeaturedView*>(UModioFeaturedView::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioFeaturedView.SetFocusToPrimaryCategory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioFeaturedView::SetFocusToPrimaryCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedView", "SetFocusToPrimaryCategory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedView.SetFocusToAdditionalCategory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioFeaturedView::SetFocusToAdditionalCategory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedView", "SetFocusToAdditionalCategory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioFeaturedView.GetSelectionIndex
// (Final, Native, Protected)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UModioFeaturedView::GetSelectionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedView", "GetSelectionIndex");

	Params::UModioFeaturedView_GetSelectionIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioFeaturedView.CategorySelectionChanged
// (Native, Protected)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UModioFeaturedCategory*      RealCategory                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioFeaturedView::CategorySelectionChanged(int32 Index, class UModioFeaturedCategory* RealCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioFeaturedView", "CategorySelectionChanged");

	Params::UModioFeaturedView_CategorySelectionChanged_Params Parms{};

	Parms.Index = Index;
	Parms.RealCategory = RealCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioGridPanel
// (None)

class UClass* UModioGridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioGridPanel");

	return Clss;
}


// ModioGridPanel ModioUI.Default__ModioGridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioGridPanel* UModioGridPanel::GetDefaultObj()
{
	static class UModioGridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioGridPanel*>(UModioGridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioImage
// (None)

class UClass* UModioImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioImage");

	return Clss;
}


// ModioImage ModioUI.Default__ModioImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioImage* UModioImage::GetDefaultObj()
{
	static class UModioImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioImage*>(UModioImage::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioImage.LoadImageFromFileWithMaterialAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioImageWrapper          ImageLoader                                                      (Parm, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ImageParameterName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioImage::LoadImageFromFileWithMaterialAsync(const struct FModioImageWrapper& ImageLoader, class UMaterialInterface* Material, class FName ImageParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImage", "LoadImageFromFileWithMaterialAsync");

	Params::UModioImage_LoadImageFromFileWithMaterialAsync_Params Parms{};

	Parms.ImageLoader = ImageLoader;
	Parms.Material = Material;
	Parms.ImageParameterName = ImageParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioImage.LoadImageFromFileAsync
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FModioImageWrapper          ImageLoader                                                      (Parm, NativeAccessSpecifierPublic)

void UModioImage::LoadImageFromFileAsync(const struct FModioImageWrapper& ImageLoader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImage", "LoadImageFromFileAsync");

	Params::UModioImage_LoadImageFromFileAsync_Params Parms{};

	Parms.ImageLoader = ImageLoader;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioImage.ImageLoadHandler
// (Native, Protected)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ImageParameterName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioImage::ImageLoadHandler(class UTexture2DDynamic* Texture, class UMaterialInterface* Material, class FName ImageParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImage", "ImageLoadHandler");

	Params::UModioImage_ImageLoadHandler_Params Parms{};

	Parms.Texture = Texture;
	Parms.Material = Material;
	Parms.ImageParameterName = ImageParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioImage.DisplayImageWithMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ImageParameterName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioImage::DisplayImageWithMaterial(class UTexture2DDynamic* Texture, class UMaterialInterface* Material, class FName ImageParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImage", "DisplayImageWithMaterial");

	Params::UModioImage_DisplayImageWithMaterial_Params Parms{};

	Parms.Texture = Texture;
	Parms.Material = Material;
	Parms.ImageParameterName = ImageParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioImageGalleryBase
// (None)

class UClass* UModioImageGalleryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioImageGalleryBase");

	return Clss;
}


// ModioImageGalleryBase ModioUI.Default__ModioImageGalleryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioImageGalleryBase* UModioImageGalleryBase::GetDefaultObj()
{
	static class UModioImageGalleryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioImageGalleryBase*>(UModioImageGalleryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioImageGalleryBase.ResetGallery
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioImageGalleryBase::ResetGallery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGalleryBase", "ResetGallery");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioImageGalleryBase.RefreshCurrentImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioImageGalleryBase::RefreshCurrentImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGalleryBase", "RefreshCurrentImage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction ModioUI.ModioImageGalleryBase.OnDisplayImage__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                     ImageWidget                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ImageIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioImageGalleryBase::OnDisplayImage__DelegateSignature(class UWidget* ImageWidget, int32 ImageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGalleryBase", "OnDisplayImage__DelegateSignature");

	Params::UModioImageGalleryBase_OnDisplayImage__DelegateSignature_Params Parms{};

	Parms.ImageWidget = ImageWidget;
	Parms.ImageIndex = ImageIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUI.ModioImageGalleryBase.DisplayGalleryImageAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EModioUIDirection       Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DirectIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioImageGalleryBase::DisplayGalleryImageAtIndex(enum class EModioUIDirection Direction, int32 DirectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioImageGalleryBase", "DisplayGalleryImageAtIndex");

	Params::UModioImageGalleryBase_DisplayGalleryImageAtIndex_Params Parms{};

	Parms.Direction = Direction;
	Parms.DirectIndex = DirectIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioInputBindingImage
// (None)

class UClass* UModioInputBindingImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioInputBindingImage");

	return Clss;
}


// ModioInputBindingImage ModioUI.Default__ModioInputBindingImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioInputBindingImage* UModioInputBindingImage::GetDefaultObj()
{
	static class UModioInputBindingImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioInputBindingImage*>(UModioInputBindingImage::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioInputBindingImage.SetKeyToShow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        NewKey                                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioInputBindingImage::SetKeyToShow(const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioInputBindingImage", "SetKeyToShow");

	Params::UModioInputBindingImage_SetKeyToShow_Params Parms{};

	Parms.NewKey = NewKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioInputBindingImage.GetInputModeVisibilityDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

FDelegateProperty_ UModioInputBindingImage::GetInputModeVisibilityDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioInputBindingImage", "GetInputModeVisibilityDelegate");

	Params::UModioInputBindingImage_GetInputModeVisibilityDelegate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioInputGlyphSet
// (None)

class UClass* UModioInputGlyphSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioInputGlyphSet");

	return Clss;
}


// ModioInputGlyphSet ModioUI.Default__ModioInputGlyphSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioInputGlyphSet* UModioInputGlyphSet::GetDefaultObj()
{
	static class UModioInputGlyphSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioInputGlyphSet*>(UModioInputGlyphSet::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioInputMappingGlyphLibrary
// (None)

class UClass* UModioInputMappingGlyphLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioInputMappingGlyphLibrary");

	return Clss;
}


// ModioInputMappingGlyphLibrary ModioUI.Default__ModioInputMappingGlyphLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioInputMappingGlyphLibrary* UModioInputMappingGlyphLibrary::GetDefaultObj()
{
	static class UModioInputMappingGlyphLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioInputMappingGlyphLibrary*>(UModioInputMappingGlyphLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioInputMappingGlyphLibrary.GetInputGlyph
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModioInputMappingGlyph     MappingGlyph                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EModioUIInputMode       InputMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UModioInputMappingGlyphLibrary::GetInputGlyph(struct FModioInputMappingGlyph* MappingGlyph, enum class EModioUIInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioInputMappingGlyphLibrary", "GetInputGlyph");

	Params::UModioInputMappingGlyphLibrary_GetInputGlyph_Params Parms{};

	Parms.InputMode = InputMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MappingGlyph != nullptr)
		*MappingGlyph = std::move(Parms.MappingGlyph);

	return Parms.ReturnValue;

}


// Class ModioUI.ModioListView
// (None)

class UClass* UModioListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioListView");

	return Clss;
}


// ModioListView ModioUI.Default__ModioListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioListView* UModioListView::GetDefaultObj()
{
	static class UModioListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioListView*>(UModioListView::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioListViewInteger
// (None)

class UClass* UModioListViewInteger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioListViewInteger");

	return Clss;
}


// ModioListViewInteger ModioUI.Default__ModioListViewInteger
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioListViewInteger* UModioListViewInteger::GetDefaultObj()
{
	static class UModioListViewInteger* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioListViewInteger*>(UModioListViewInteger::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioListViewString
// (None)

class UClass* UModioListViewString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioListViewString");

	return Clss;
}


// ModioListViewString ModioUI.Default__ModioListViewString
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioListViewString* UModioListViewString::GetDefaultObj()
{
	static class UModioListViewString* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioListViewString*>(UModioListViewString::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioLoadingSpinner
// (None)

class UClass* UModioLoadingSpinner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioLoadingSpinner");

	return Clss;
}


// ModioLoadingSpinner ModioUI.Default__ModioLoadingSpinner
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioLoadingSpinner* UModioLoadingSpinner::GetDefaultObj()
{
	static class UModioLoadingSpinner* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioLoadingSpinner*>(UModioLoadingSpinner::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioLogoWidget
// (None)

class UClass* UModioLogoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioLogoWidget");

	return Clss;
}


// ModioLogoWidget ModioUI.Default__ModioLogoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioLogoWidget* UModioLogoWidget::GetDefaultObj()
{
	static class UModioLogoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioLogoWidget*>(UModioLogoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioMaterialData
// (None)

class UClass* UModioMaterialData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMaterialData");

	return Clss;
}


// ModioMaterialData ModioUI.Default__ModioMaterialData
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMaterialData* UModioMaterialData::GetDefaultObj()
{
	static class UModioMaterialData* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMaterialData*>(UModioMaterialData::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioMenu
// (None)

class UClass* UModioMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMenu");

	return Clss;
}


// ModioMenu ModioUI.Default__ModioMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMenu* UModioMenu::GetDefaultObj()
{
	static class UModioMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMenu*>(UModioMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioMenu.OnViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int64                              ViewIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioMenu::OnViewChanged(int64 ViewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenu", "OnViewChanged");

	Params::UModioMenu_OnViewChanged_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ModioUI.ModioMenu.OnSearchSettingsChanged
// (Final, Native, Protected)
// Parameters:
// struct FModioFilterParams          Settings                                                         (Parm, NativeAccessSpecifierPublic)

void UModioMenu::OnSearchSettingsChanged(const struct FModioFilterParams& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenu", "OnSearchSettingsChanged");

	Params::UModioMenu_OnSearchSettingsChanged_Params Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioMenu.OnDrawerAnimatedOut
// (Final, Native, Protected)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioMenu::OnDrawerAnimatedOut(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenu", "OnDrawerAnimatedOut");

	Params::UModioMenu_OnDrawerAnimatedOut_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioMenu.HandleViewChanged
// (Final, Native, Protected)
// Parameters:
// int32                              ViewIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioMenu::HandleViewChanged(int32 ViewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenu", "HandleViewChanged");

	Params::UModioMenu_HandleViewChanged_Params Parms{};

	Parms.ViewIndex = ViewIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioMenuBar
// (None)

class UClass* UModioMenuBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMenuBar");

	return Clss;
}


// ModioMenuBar ModioUI.Default__ModioMenuBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMenuBar* UModioMenuBar::GetDefaultObj()
{
	static class UModioMenuBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMenuBar*>(UModioMenuBar::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioMenuBar.OnSearchClicked
// (Native, Protected)
// Parameters:

void UModioMenuBar::OnSearchClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenuBar", "OnSearchClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioMenuBar.OnBackClicked
// (Native, Protected)
// Parameters:

void UModioMenuBar::OnBackClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioMenuBar", "OnBackClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioMenuDefaultBackgroundProvider
// (None)

class UClass* UModioMenuDefaultBackgroundProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMenuDefaultBackgroundProvider");

	return Clss;
}


// ModioMenuDefaultBackgroundProvider ModioUI.Default__ModioMenuDefaultBackgroundProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMenuDefaultBackgroundProvider* UModioMenuDefaultBackgroundProvider::GetDefaultObj()
{
	static class UModioMenuDefaultBackgroundProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMenuDefaultBackgroundProvider*>(UModioMenuDefaultBackgroundProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModBrowser
// (None)

class UClass* UModioModBrowser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowser");

	return Clss;
}


// ModioModBrowser ModioUI.Default__ModioModBrowser
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModBrowser* UModioModBrowser::GetDefaultObj()
{
	static class UModioModBrowser* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModBrowser*>(UModioModBrowser::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModBrowserParams
// (None)

class UClass* UModioModBrowserParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModBrowserParams");

	return Clss;
}


// ModioModBrowserParams ModioUI.Default__ModioModBrowserParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModBrowserParams* UModioModBrowserParams::GetDefaultObj()
{
	static class UModioModBrowserParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModBrowserParams*>(UModioModBrowserParams::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioCarousel
// (None)

class UClass* UModioCarousel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioCarousel");

	return Clss;
}


// ModioCarousel ModioUI.Default__ModioCarousel
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioCarousel* UModioCarousel::GetDefaultObj()
{
	static class UModioCarousel* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioCarousel*>(UModioCarousel::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModCarouselTile
// (None)

class UClass* UModioModCarouselTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCarouselTile");

	return Clss;
}


// ModioModCarouselTile ModioUI.Default__ModioModCarouselTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModCarouselTile* UModioModCarouselTile::GetDefaultObj()
{
	static class UModioModCarouselTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCarouselTile*>(UModioModCarouselTile::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModCollectionTile
// (None)

class UClass* UModioModCollectionTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModCollectionTile");

	return Clss;
}


// ModioModCollectionTile ModioUI.Default__ModioModCollectionTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModCollectionTile* UModioModCollectionTile::GetDefaultObj()
{
	static class UModioModCollectionTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModCollectionTile*>(UModioModCollectionTile::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModCollectionTile.SubmitPositiveRating
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::SubmitPositiveRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "SubmitPositiveRating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.SubmitNegativeRating
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::SubmitNegativeRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "SubmitNegativeRating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.SubmitModReport
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::SubmitModReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "SubmitModReport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.ShowModDetails
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::ShowModDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "ShowModDetails");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.OnRatingSubmissionComplete
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioRating            Rating                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModCollectionTile::OnRatingSubmissionComplete(const struct FModioErrorCode& Ec, enum class EModioRating Rating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "OnRatingSubmissionComplete");

	Params::UModioModCollectionTile_OnRatingSubmissionComplete_Params Parms{};

	Parms.Ec = Ec;
	Parms.Rating = Rating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.NativeMoreOptionsClicked
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::NativeMoreOptionsClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "NativeMoreOptionsClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.NativeCollectionTileClicked
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::NativeCollectionTileClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "NativeCollectionTileClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModCollectionTile.ForceUninstall
// (Final, Native, Protected)
// Parameters:

void UModioModCollectionTile::ForceUninstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModCollectionTile", "ForceUninstall");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioModDetailsImage
// (None)

class UClass* UModioModDetailsImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsImage");

	return Clss;
}


// ModioModDetailsImage ModioUI.Default__ModioModDetailsImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsImage* UModioModDetailsImage::GetDefaultObj()
{
	static class UModioModDetailsImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsImage*>(UModioModDetailsImage::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModDetailsImageGallery
// (None)

class UClass* UModioModDetailsImageGallery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsImageGallery");

	return Clss;
}


// ModioModDetailsImageGallery ModioUI.Default__ModioModDetailsImageGallery
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsImageGallery* UModioModDetailsImageGallery::GetDefaultObj()
{
	static class UModioModDetailsImageGallery* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsImageGallery*>(UModioModDetailsImageGallery::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModDetailsImageGallery.PrevImage
// (Native, Protected)
// Parameters:

void UModioModDetailsImageGallery::PrevImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGallery", "PrevImage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsImageGallery.OnGalleryImageLoad
// (Final, Native, Protected)
// Parameters:
// class UTexture2DDynamic*           LoadedImage                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioModID                 ModId                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModDetailsImageGallery::OnGalleryImageLoad(class UTexture2DDynamic* LoadedImage, const struct FModioModID& ModId, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGallery", "OnGalleryImageLoad");

	Params::UModioModDetailsImageGallery_OnGalleryImageLoad_Params Parms{};

	Parms.LoadedImage = LoadedImage;
	Parms.ModId = ModId;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsImageGallery.NextImage
// (Native, Protected)
// Parameters:

void UModioModDetailsImageGallery::NextImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGallery", "NextImage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsImageGallery.GetImageCount
// (Native, Protected)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UModioModDetailsImageGallery::GetImageCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGallery", "GetImageCount");

	Params::UModioModDetailsImageGallery_GetImageCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioModDetailsImageGallery.ApplyImageToWidget
// (Native, Protected)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ImageIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModDetailsImageGallery::ApplyImageToWidget(class UWidget* Widget, int32 ImageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsImageGallery", "ApplyImageToWidget");

	Params::UModioModDetailsImageGallery_ApplyImageToWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.ImageIndex = ImageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioModDetailsImageGalleryNavButtonBase
// (None)

class UClass* UModioModDetailsImageGalleryNavButtonBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsImageGalleryNavButtonBase");

	return Clss;
}


// ModioModDetailsImageGalleryNavButtonBase ModioUI.Default__ModioModDetailsImageGalleryNavButtonBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsImageGalleryNavButtonBase* UModioModDetailsImageGalleryNavButtonBase::GetDefaultObj()
{
	static class UModioModDetailsImageGalleryNavButtonBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsImageGalleryNavButtonBase*>(UModioModDetailsImageGalleryNavButtonBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModDetailsOpProgress
// (None)

class UClass* UModioModDetailsOpProgress::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsOpProgress");

	return Clss;
}


// ModioModDetailsOpProgress ModioUI.Default__ModioModDetailsOpProgress
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsOpProgress* UModioModDetailsOpProgress::GetDefaultObj()
{
	static class UModioModDetailsOpProgress* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsOpProgress*>(UModioModDetailsOpProgress::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModPropertyInspectorBase
// (None)

class UClass* UModioModPropertyInspectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModPropertyInspectorBase");

	return Clss;
}


// ModioModPropertyInspectorBase ModioUI.Default__ModioModPropertyInspectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModPropertyInspectorBase* UModioModPropertyInspectorBase::GetDefaultObj()
{
	static class UModioModPropertyInspectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModPropertyInspectorBase*>(UModioModPropertyInspectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModPropertyInspectorBase.UpdatePropertyDisplay
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UModioModPropertyInspectorBase::UpdatePropertyDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModPropertyInspectorBase", "UpdatePropertyDisplay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModPropertyInspectorBase.OnUpdatePropertyDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UModioModPropertyInspectorBase::OnUpdatePropertyDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModPropertyInspectorBase", "OnUpdatePropertyDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ModioUI.ModioModDetailsPropertyInspector
// (None)

class UClass* UModioModDetailsPropertyInspector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsPropertyInspector");

	return Clss;
}


// ModioModDetailsPropertyInspector ModioUI.Default__ModioModDetailsPropertyInspector
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsPropertyInspector* UModioModDetailsPropertyInspector::GetDefaultObj()
{
	static class UModioModDetailsPropertyInspector* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsPropertyInspector*>(UModioModDetailsPropertyInspector::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModDetailsPropertyInspector.GetTextStyle
// (Final, Native, Protected)
// Parameters:
// struct FModioUIStyleRef            TextStyle                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FModioRichTextStyle         ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FModioRichTextStyle UModioModDetailsPropertyInspector::GetTextStyle(const struct FModioUIStyleRef& TextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsPropertyInspector", "GetTextStyle");

	Params::UModioModDetailsPropertyInspector_GetTextStyle_Params Parms{};

	Parms.TextStyle = TextStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioModDetailsPropertyInspector.GetPropertyValueStyleNames
// (Final, Native, Protected, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioModDetailsPropertyInspector::GetPropertyValueStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsPropertyInspector", "GetPropertyValueStyleNames");

	Params::UModioModDetailsPropertyInspector_GetPropertyValueStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioModDetailsPropertyInspector.GetPropertyNameStyleNames
// (Final, Native, Protected, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioModDetailsPropertyInspector::GetPropertyNameStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsPropertyInspector", "GetPropertyNameStyleNames");

	Params::UModioModDetailsPropertyInspector_GetPropertyNameStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioModDetailsPropertyInspector.GetFillerStyleNames
// (Final, Native, Protected, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioModDetailsPropertyInspector::GetFillerStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsPropertyInspector", "GetFillerStyleNames");

	Params::UModioModDetailsPropertyInspector_GetFillerStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioModDetailsView
// (None)

class UClass* UModioModDetailsView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModDetailsView");

	return Clss;
}


// ModioModDetailsView ModioUI.Default__ModioModDetailsView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModDetailsView* UModioModDetailsView::GetDefaultObj()
{
	static class UModioModDetailsView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModDetailsView*>(UModioModDetailsView::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModDetailsView.SetInitialFocus
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::SetInitialFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "SetInitialFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.ReportClicked
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::ReportClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "ReportClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.RateUpClicked
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::RateUpClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "RateUpClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.RateDownClicked
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::RateDownClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "RateDownClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.OnRatingSubmissionComplete
// (Final, Native, Protected)
// Parameters:
// struct FModioErrorCode             Ec                                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioRating            SubmittedRating                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModDetailsView::OnRatingSubmissionComplete(const struct FModioErrorCode& Ec, enum class EModioRating SubmittedRating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "OnRatingSubmissionComplete");

	Params::UModioModDetailsView_OnRatingSubmissionComplete_Params Parms{};

	Parms.Ec = Ec;
	Parms.SubmittedRating = SubmittedRating;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.OnModSubscriptionStatusChanged
// (Native, Protected)
// Parameters:
// struct FModioModID                 ID                                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Subscribed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModDetailsView::OnModSubscriptionStatusChanged(const struct FModioModID& ID, bool Subscribed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "OnModSubscriptionStatusChanged");

	Params::UModioModDetailsView_OnModSubscriptionStatusChanged_Params Parms{};

	Parms.ID = ID;
	Parms.Subscribed = Subscribed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.OnDownloadQueueClosed
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::OnDownloadQueueClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "OnDownloadQueueClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.OnDialogClosed
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::OnDialogClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "OnDialogClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.NativeSubscribeClicked
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::NativeSubscribeClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "NativeSubscribeClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModDetailsView.EnableSubscribeButton
// (Final, Native, Protected)
// Parameters:

void UModioModDetailsView::EnableSubscribeButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModDetailsView", "EnableSubscribeButton");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioModNameWidget
// (None)

class UClass* UModioModNameWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModNameWidget");

	return Clss;
}


// ModioModNameWidget ModioUI.Default__ModioModNameWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModNameWidget* UModioModNameWidget::GetDefaultObj()
{
	static class UModioModNameWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModNameWidget*>(UModioModNameWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModTile
// (None)

class UClass* UModioModTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTile");

	return Clss;
}


// ModioModTile ModioUI.Default__ModioModTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTile* UModioModTile::GetDefaultObj()
{
	static class UModioModTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTile*>(UModioModTile::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioModTile.SubmitPositiveRating
// (Final, Native, Protected)
// Parameters:

void UModioModTile::SubmitPositiveRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "SubmitPositiveRating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTile.SubmitNegativeRating
// (Final, Native, Protected)
// Parameters:

void UModioModTile::SubmitNegativeRating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "SubmitNegativeRating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTile.SubmitModReport
// (Final, Native, Protected)
// Parameters:

void UModioModTile::SubmitModReport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "SubmitModReport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTile.SetSizeOverride
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   NewSize                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioModTile::SetSizeOverride(const struct FVector2D& NewSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "SetSizeOverride");

	Params::UModioModTile_SetSizeOverride_Params Parms{};

	Parms.NewSize = NewSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTile.OnThumbnailMouseDown
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UModioModTile::OnThumbnailMouseDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "OnThumbnailMouseDown");

	Params::UModioModTile_OnThumbnailMouseDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioModTile.NativeReportClicked
// (Final, Native, Protected)
// Parameters:

void UModioModTile::NativeReportClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "NativeReportClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioModTile.NativeMoreOptionsClicked
// (Final, Native, Protected)
// Parameters:

void UModioModTile::NativeMoreOptionsClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioModTile", "NativeMoreOptionsClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioModTileStyleContainer
// (None)

class UClass* UModioModTileStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModTileStyleContainer");

	return Clss;
}


// ModioModTileStyleContainer ModioUI.Default__ModioModTileStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModTileStyleContainer* UModioModTileStyleContainer::GetDefaultObj()
{
	static class UModioModTileStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModTileStyleContainer*>(UModioModTileStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioModUninstallHeaderWidget
// (None)

class UClass* UModioModUninstallHeaderWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioModUninstallHeaderWidget");

	return Clss;
}


// ModioModUninstallHeaderWidget ModioUI.Default__ModioModUninstallHeaderWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioModUninstallHeaderWidget* UModioModUninstallHeaderWidget::GetDefaultObj()
{
	static class UModioModUninstallHeaderWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioModUninstallHeaderWidget*>(UModioModUninstallHeaderWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioMoreOptionsDialog
// (None)

class UClass* UModioMoreOptionsDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMoreOptionsDialog");

	return Clss;
}


// ModioMoreOptionsDialog ModioUI.Default__ModioMoreOptionsDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMoreOptionsDialog* UModioMoreOptionsDialog::GetDefaultObj()
{
	static class UModioMoreOptionsDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMoreOptionsDialog*>(UModioMoreOptionsDialog::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioMultiLineEditableTextBox
// (None)

class UClass* UModioMultiLineEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMultiLineEditableTextBox");

	return Clss;
}


// ModioMultiLineEditableTextBox ModioUI.Default__ModioMultiLineEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMultiLineEditableTextBox* UModioMultiLineEditableTextBox::GetDefaultObj()
{
	static class UModioMultiLineEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMultiLineEditableTextBox*>(UModioMultiLineEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioMultiLineEditableTextBoxStyleContainer
// (None)

class UClass* UModioMultiLineEditableTextBoxStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioMultiLineEditableTextBoxStyleContainer");

	return Clss;
}


// ModioMultiLineEditableTextBoxStyleContainer ModioUI.Default__ModioMultiLineEditableTextBoxStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioMultiLineEditableTextBoxStyleContainer* UModioMultiLineEditableTextBoxStyleContainer::GetDefaultObj()
{
	static class UModioMultiLineEditableTextBoxStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioMultiLineEditableTextBoxStyleContainer*>(UModioMultiLineEditableTextBoxStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioNamedGlyphMaterialParams
// (None)

class UClass* UModioNamedGlyphMaterialParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNamedGlyphMaterialParams");

	return Clss;
}


// ModioNamedGlyphMaterialParams ModioUI.Default__ModioNamedGlyphMaterialParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNamedGlyphMaterialParams* UModioNamedGlyphMaterialParams::GetDefaultObj()
{
	static class UModioNamedGlyphMaterialParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNamedGlyphMaterialParams*>(UModioNamedGlyphMaterialParams::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioNamedGlyphMaterialParams.GetValidGlyphNames
// (Final, Native, Protected)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioNamedGlyphMaterialParams::GetValidGlyphNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNamedGlyphMaterialParams", "GetValidGlyphNames");

	Params::UModioNamedGlyphMaterialParams_GetValidGlyphNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioNamedGlyphsDataAsset
// (None)

class UClass* UModioNamedGlyphsDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNamedGlyphsDataAsset");

	return Clss;
}


// ModioNamedGlyphsDataAsset ModioUI.Default__ModioNamedGlyphsDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNamedGlyphsDataAsset* UModioNamedGlyphsDataAsset::GetDefaultObj()
{
	static class UModioNamedGlyphsDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNamedGlyphsDataAsset*>(UModioNamedGlyphsDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioNavigationConfigFactoryBase
// (None)

class UClass* UModioNavigationConfigFactoryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNavigationConfigFactoryBase");

	return Clss;
}


// ModioNavigationConfigFactoryBase ModioUI.Default__ModioNavigationConfigFactoryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNavigationConfigFactoryBase* UModioNavigationConfigFactoryBase::GetDefaultObj()
{
	static class UModioNavigationConfigFactoryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNavigationConfigFactoryBase*>(UModioNavigationConfigFactoryBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioNavigationConfigFactory
// (None)

class UClass* UModioNavigationConfigFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNavigationConfigFactory");

	return Clss;
}


// ModioNavigationConfigFactory ModioUI.Default__ModioNavigationConfigFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNavigationConfigFactory* UModioNavigationConfigFactory::GetDefaultObj()
{
	static class UModioNavigationConfigFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNavigationConfigFactory*>(UModioNavigationConfigFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioNotificationControllerBase
// (None)

class UClass* UModioNotificationControllerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationControllerBase");

	return Clss;
}


// ModioNotificationControllerBase ModioUI.Default__ModioNotificationControllerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNotificationControllerBase* UModioNotificationControllerBase::GetDefaultObj()
{
	static class UModioNotificationControllerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationControllerBase*>(UModioNotificationControllerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioNotificationControllerBase.OnNotificationExpired
// (Native, Protected)
// Parameters:
// class UWidget*                     Notification                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioNotificationControllerBase::OnNotificationExpired(class UWidget* Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationControllerBase", "OnNotificationExpired");

	Params::UModioNotificationControllerBase_OnNotificationExpired_Params Parms{};

	Parms.Notification = Notification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioNotificationControllerSlot
// (None)

class UClass* UModioNotificationControllerSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationControllerSlot");

	return Clss;
}


// ModioNotificationControllerSlot ModioUI.Default__ModioNotificationControllerSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNotificationControllerSlot* UModioNotificationControllerSlot::GetDefaultObj()
{
	static class UModioNotificationControllerSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationControllerSlot*>(UModioNotificationControllerSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioNotificationStyleContainer
// (None)

class UClass* UModioNotificationStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationStyleContainer");

	return Clss;
}


// ModioNotificationStyleContainer ModioUI.Default__ModioNotificationStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNotificationStyleContainer* UModioNotificationStyleContainer::GetDefaultObj()
{
	static class UModioNotificationStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationStyleContainer*>(UModioNotificationStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioNotificationWidgetBase
// (None)

class UClass* UModioNotificationWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationWidgetBase");

	return Clss;
}


// ModioNotificationWidgetBase ModioUI.Default__ModioNotificationWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNotificationWidgetBase* UModioNotificationWidgetBase::GetDefaultObj()
{
	static class UModioNotificationWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationWidgetBase*>(UModioNotificationWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioNotificationWidgetBase.CreateFromParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSubclassOf<class UWidget>         NotificationClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModioNotificationParams    Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     Outer                                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioNotificationWidgetBase::CreateFromParams(TSubclassOf<class UWidget> NotificationClass, struct FModioNotificationParams& Params, class UWidget* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioNotificationWidgetBase", "CreateFromParams");

	Params::UModioNotificationWidgetBase_CreateFromParams_Params Parms{};

	Parms.NotificationClass = NotificationClass;
	Parms.Params = Params;
	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioNotificationErrorWidgetBase
// (None)

class UClass* UModioNotificationErrorWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioNotificationErrorWidgetBase");

	return Clss;
}


// ModioNotificationErrorWidgetBase ModioUI.Default__ModioNotificationErrorWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioNotificationErrorWidgetBase* UModioNotificationErrorWidgetBase::GetDefaultObj()
{
	static class UModioNotificationErrorWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioNotificationErrorWidgetBase*>(UModioNotificationErrorWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioPopupComboBox
// (None)

class UClass* UModioPopupComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPopupComboBox");

	return Clss;
}


// ModioPopupComboBox ModioUI.Default__ModioPopupComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPopupComboBox* UModioPopupComboBox::GetDefaultObj()
{
	static class UModioPopupComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPopupComboBox*>(UModioPopupComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioPopupMenu
// (None)

class UClass* UModioPopupMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPopupMenu");

	return Clss;
}


// ModioPopupMenu ModioUI.Default__ModioPopupMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPopupMenu* UModioPopupMenu::GetDefaultObj()
{
	static class UModioPopupMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPopupMenu*>(UModioPopupMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioPopupMenu.SetMenuEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioUIMenuCommandList     Entries                                                          (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UModioPopupMenu::SetMenuEntries(const struct FModioUIMenuCommandList& Entries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupMenu", "SetMenuEntries");

	Params::UModioPopupMenu_SetMenuEntries_Params Parms{};

	Parms.Entries = Entries;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioPopupMenu.HandleButtonClicked
// (Native, Protected)
// Parameters:

void UModioPopupMenu::HandleButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupMenu", "HandleButtonClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioPopupMenu.GeneratePopupMenuContent
// (Final, Native, Protected)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UModioPopupMenu::GeneratePopupMenuContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioPopupMenu", "GeneratePopupMenuContent");

	Params::UModioPopupMenu_GeneratePopupMenuContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioPopupMenuStyleContainer
// (None)

class UClass* UModioPopupMenuStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioPopupMenuStyleContainer");

	return Clss;
}


// ModioPopupMenuStyleContainer ModioUI.Default__ModioPopupMenuStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioPopupMenuStyleContainer* UModioPopupMenuStyleContainer::GetDefaultObj()
{
	static class UModioPopupMenuStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioPopupMenuStyleContainer*>(UModioPopupMenuStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioProgressBar
// (None)

class UClass* UModioProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioProgressBar");

	return Clss;
}


// ModioProgressBar ModioUI.Default__ModioProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioProgressBar* UModioProgressBar::GetDefaultObj()
{
	static class UModioProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioProgressBar*>(UModioProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioProgressBar.SetStyleRef
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModioUIStyleRef            NewStyle                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UModioProgressBar::SetStyleRef(const struct FModioUIStyleRef& NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioProgressBar", "SetStyleRef");

	Params::UModioProgressBar_SetStyleRef_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioProgressBarStyleContainer
// (None)

class UClass* UModioProgressBarStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioProgressBarStyleContainer");

	return Clss;
}


// ModioProgressBarStyleContainer ModioUI.Default__ModioProgressBarStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioProgressBarStyleContainer* UModioProgressBarStyleContainer::GetDefaultObj()
{
	static class UModioProgressBarStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioProgressBarStyleContainer*>(UModioProgressBarStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRefineSearchDrawer
// (None)

class UClass* UModioRefineSearchDrawer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRefineSearchDrawer");

	return Clss;
}


// ModioRefineSearchDrawer ModioUI.Default__ModioRefineSearchDrawer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRefineSearchDrawer* UModioRefineSearchDrawer::GetDefaultObj()
{
	static class UModioRefineSearchDrawer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRefineSearchDrawer*>(UModioRefineSearchDrawer::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioRefineSearchDrawer.OnCollapse
// (Final, Native, Protected)
// Parameters:

void UModioRefineSearchDrawer::OnCollapse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRefineSearchDrawer", "OnCollapse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioRefineSearchDrawer.OnClearClicked
// (Final, Native, Protected)
// Parameters:

void UModioRefineSearchDrawer::OnClearClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRefineSearchDrawer", "OnClearClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioRefineSearchDrawer.OnCancelClicked
// (Final, Native, Protected)
// Parameters:

void UModioRefineSearchDrawer::OnCancelClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRefineSearchDrawer", "OnCancelClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioRefineSearchDrawer.OnApplyClicked
// (Final, Native, Protected)
// Parameters:

void UModioRefineSearchDrawer::OnApplyClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRefineSearchDrawer", "OnApplyClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioRefineSearchDrawer.ConstructNavigationPath
// (Final, Native, Protected)
// Parameters:

void UModioRefineSearchDrawer::ConstructNavigationPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRefineSearchDrawer", "ConstructNavigationPath");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioRemoveModDialog
// (None)

class UClass* UModioRemoveModDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRemoveModDialog");

	return Clss;
}


// ModioRemoveModDialog ModioUI.Default__ModioRemoveModDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRemoveModDialog* UModioRemoveModDialog::GetDefaultObj()
{
	static class UModioRemoveModDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRemoveModDialog*>(UModioRemoveModDialog::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioReportButtonGroupWidget
// (None)

class UClass* UModioReportButtonGroupWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioReportButtonGroupWidget");

	return Clss;
}


// ModioReportButtonGroupWidget ModioUI.Default__ModioReportButtonGroupWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioReportButtonGroupWidget* UModioReportButtonGroupWidget::GetDefaultObj()
{
	static class UModioReportButtonGroupWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioReportButtonGroupWidget*>(UModioReportButtonGroupWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioReportButtonGroupWidget.CancelClicked
// (Final, Native, Protected)
// Parameters:

void UModioReportButtonGroupWidget::CancelClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioReportButtonGroupWidget", "CancelClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioReportModDialog
// (None)

class UClass* UModioReportModDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioReportModDialog");

	return Clss;
}


// ModioReportModDialog ModioUI.Default__ModioReportModDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioReportModDialog* UModioReportModDialog::GetDefaultObj()
{
	static class UModioReportModDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioReportModDialog*>(UModioReportModDialog::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioReportSummaryWidget
// (None)

class UClass* UModioReportSummaryWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioReportSummaryWidget");

	return Clss;
}


// ModioReportSummaryWidget ModioUI.Default__ModioReportSummaryWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioReportSummaryWidget* UModioReportSummaryWidget::GetDefaultObj()
{
	static class UModioReportSummaryWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioReportSummaryWidget*>(UModioReportSummaryWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRetainerBox
// (None)

class UClass* UModioRetainerBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRetainerBox");

	return Clss;
}


// ModioRetainerBox ModioUI.Default__ModioRetainerBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRetainerBox* UModioRetainerBox::GetDefaultObj()
{
	static class UModioRetainerBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRetainerBox*>(UModioRetainerBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRichTextBlock
// (None)

class UClass* UModioRichTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRichTextBlock");

	return Clss;
}


// ModioRichTextBlock ModioUI.Default__ModioRichTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRichTextBlock* UModioRichTextBlock::GetDefaultObj()
{
	static class UModioRichTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRichTextBlock*>(UModioRichTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioRichTextBlock.GetStyleNames
// (Final, Native, Protected, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioRichTextBlock::GetStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRichTextBlock", "GetStyleNames");

	Params::UModioRichTextBlock_GetStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioRichTextBlockDecorator
// (None)

class UClass* UModioRichTextBlockDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRichTextBlockDecorator");

	return Clss;
}


// ModioRichTextBlockDecorator ModioUI.Default__ModioRichTextBlockDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRichTextBlockDecorator* UModioRichTextBlockDecorator::GetDefaultObj()
{
	static class UModioRichTextBlockDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRichTextBlockDecorator*>(UModioRichTextBlockDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRichTextButton
// (None)

class UClass* UModioRichTextButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRichTextButton");

	return Clss;
}


// ModioRichTextButton ModioUI.Default__ModioRichTextButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRichTextButton* UModioRichTextButton::GetDefaultObj()
{
	static class UModioRichTextButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRichTextButton*>(UModioRichTextButton::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioRichTextButton.GetStyleNames
// (Final, Native, Protected, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioRichTextButton::GetStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRichTextButton", "GetStyleNames");

	Params::UModioRichTextButton_GetStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioRichTextButton.GetRichTextStyle
// (Final, Native, Public, Const)
// Parameters:
// struct FModioRichTextStyle         ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FModioRichTextStyle UModioRichTextButton::GetRichTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRichTextButton", "GetRichTextStyle");

	Params::UModioRichTextButton_GetRichTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioRichTextButton.GetInputHintVisibility
// (Final, Native, Protected)
// Parameters:
// enum class EModioUIInputMode       InputMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UModioRichTextButton::GetInputHintVisibility(enum class EModioUIInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioRichTextButton", "GetInputHintVisibility");

	Params::UModioRichTextButton_GetInputHintVisibility_Params Parms{};

	Parms.InputMode = InputMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioRichTextStyleContainer
// (None)

class UClass* UModioRichTextStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRichTextStyleContainer");

	return Clss;
}


// ModioRichTextStyleContainer ModioUI.Default__ModioRichTextStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRichTextStyleContainer* UModioRichTextStyleContainer::GetDefaultObj()
{
	static class UModioRichTextStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRichTextStyleContainer*>(UModioRichTextStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRoundedBorder
// (None)

class UClass* UModioRoundedBorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRoundedBorder");

	return Clss;
}


// ModioRoundedBorder ModioUI.Default__ModioRoundedBorder
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRoundedBorder* UModioRoundedBorder::GetDefaultObj()
{
	static class UModioRoundedBorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRoundedBorder*>(UModioRoundedBorder::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRoundedImage
// (None)

class UClass* UModioRoundedImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRoundedImage");

	return Clss;
}


// ModioRoundedImage ModioUI.Default__ModioRoundedImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRoundedImage* UModioRoundedImage::GetDefaultObj()
{
	static class UModioRoundedImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRoundedImage*>(UModioRoundedImage::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRoundedRectangleMaterialParams
// (None)

class UClass* UModioRoundedRectangleMaterialParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRoundedRectangleMaterialParams");

	return Clss;
}


// ModioRoundedRectangleMaterialParams ModioUI.Default__ModioRoundedRectangleMaterialParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRoundedRectangleMaterialParams* UModioRoundedRectangleMaterialParams::GetDefaultObj()
{
	static class UModioRoundedRectangleMaterialParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRoundedRectangleMaterialParams*>(UModioRoundedRectangleMaterialParams::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioScrollBox
// (None)

class UClass* UModioScrollBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioScrollBox");

	return Clss;
}


// ModioScrollBox ModioUI.Default__ModioScrollBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioScrollBox* UModioScrollBox::GetDefaultObj()
{
	static class UModioScrollBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioScrollBox*>(UModioScrollBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioSearchOptionsDialog
// (None)

class UClass* UModioSearchOptionsDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSearchOptionsDialog");

	return Clss;
}


// ModioSearchOptionsDialog ModioUI.Default__ModioSearchOptionsDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSearchOptionsDialog* UModioSearchOptionsDialog::GetDefaultObj()
{
	static class UModioSearchOptionsDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSearchOptionsDialog*>(UModioSearchOptionsDialog::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioSearchResultsView
// (None)

class UClass* UModioSearchResultsView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSearchResultsView");

	return Clss;
}


// ModioSearchResultsView ModioUI.Default__ModioSearchResultsView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSearchResultsView* UModioSearchResultsView::GetDefaultObj()
{
	static class UModioSearchResultsView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSearchResultsView*>(UModioSearchResultsView::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioSearchResultsView.SortByTrending
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::SortByTrending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "SortByTrending");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.SortByRecentlyAdded
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::SortByRecentlyAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "SortByRecentlyAdded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.SortByMostSubscribers
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::SortByMostSubscribers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "SortByMostSubscribers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.SortByMostPopular
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::SortByMostPopular()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "SortByMostPopular");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.SortByLastUpdated
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::SortByLastUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "SortByLastUpdated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.SortByHighestRated
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::SortByHighestRated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "SortByHighestRated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.OnRetryPressed
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::OnRetryPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "OnRetryPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.OnRefineSearchButtonClicked
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::OnRefineSearchButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "OnRefineSearchButtonClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioSearchResultsView.OnDrawerClosed
// (Final, Native, Protected)
// Parameters:

void UModioSearchResultsView::OnDrawerClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSearchResultsView", "OnDrawerClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioSelectableTag
// (None)

class UClass* UModioSelectableTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSelectableTag");

	return Clss;
}


// ModioSelectableTag ModioUI.Default__ModioSelectableTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSelectableTag* UModioSelectableTag::GetDefaultObj()
{
	static class UModioSelectableTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSelectableTag*>(UModioSelectableTag::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioSelectableTag.OnCheckboxCheckStateChanged
// (Final, Native, Public)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioSelectableTag::OnCheckboxCheckStateChanged(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioSelectableTag", "OnCheckboxCheckStateChanged");

	Params::UModioSelectableTag_OnCheckboxCheckStateChanged_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioSizeBox
// (None)

class UClass* UModioSizeBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSizeBox");

	return Clss;
}


// ModioSizeBox ModioUI.Default__ModioSizeBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSizeBox* UModioSizeBox::GetDefaultObj()
{
	static class UModioSizeBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSizeBox*>(UModioSizeBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioSpecifiedMaterialParams
// (None)

class UClass* UModioSpecifiedMaterialParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSpecifiedMaterialParams");

	return Clss;
}


// ModioSpecifiedMaterialParams ModioUI.Default__ModioSpecifiedMaterialParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSpecifiedMaterialParams* UModioSpecifiedMaterialParams::GetDefaultObj()
{
	static class UModioSpecifiedMaterialParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSpecifiedMaterialParams*>(UModioSpecifiedMaterialParams::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioSubscriptionBadge
// (None)

class UClass* UModioSubscriptionBadge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSubscriptionBadge");

	return Clss;
}


// ModioSubscriptionBadge ModioUI.Default__ModioSubscriptionBadge
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSubscriptionBadge* UModioSubscriptionBadge::GetDefaultObj()
{
	static class UModioSubscriptionBadge* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSubscriptionBadge*>(UModioSubscriptionBadge::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioSubscriptionBadgeStyleContainer
// (None)

class UClass* UModioSubscriptionBadgeStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioSubscriptionBadgeStyleContainer");

	return Clss;
}


// ModioSubscriptionBadgeStyleContainer ModioUI.Default__ModioSubscriptionBadgeStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioSubscriptionBadgeStyleContainer* UModioSubscriptionBadgeStyleContainer::GetDefaultObj()
{
	static class UModioSubscriptionBadgeStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioSubscriptionBadgeStyleContainer*>(UModioSubscriptionBadgeStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioTabBar
// (None)

class UClass* UModioTabBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTabBar");

	return Clss;
}


// ModioTabBar ModioUI.Default__ModioTabBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTabBar* UModioTabBar::GetDefaultObj()
{
	static class UModioTabBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTabBar*>(UModioTabBar::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTabBar.OnTabIndexChanged
// (Final, Native, Protected)
// Parameters:
// int32                              TabIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioTabBar::OnTabIndexChanged(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTabBar", "OnTabIndexChanged");

	Params::UModioTabBar_OnTabIndexChanged_Params Parms{};

	Parms.TabIndex = TabIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioTabButton
// (None)

class UClass* UModioTabButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTabButton");

	return Clss;
}


// ModioTabButton ModioUI.Default__ModioTabButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTabButton* UModioTabButton::GetDefaultObj()
{
	static class UModioTabButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTabButton*>(UModioTabButton::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioTabController
// (None)

class UClass* UModioTabController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTabController");

	return Clss;
}


// ModioTabController ModioUI.Default__ModioTabController
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTabController* UModioTabController::GetDefaultObj()
{
	static class UModioTabController* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTabController*>(UModioTabController::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTabController.SetTabItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             NewItems                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UModioTabController::SetTabItems(const TArray<class UObject*>& NewItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTabController", "SetTabItems");

	Params::UModioTabController_SetTabItems_Params Parms{};

	Parms.NewItems = NewItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTabController.SetCurrentTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              TabIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioTabController::SetCurrentTab(int64 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTabController", "SetCurrentTab");

	Params::UModioTabController_SetCurrentTab_Params Parms{};

	Parms.TabIndex = TabIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTabController.PrevTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioTabController::PrevTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTabController", "PrevTab");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTabController.NextTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioTabController::NextTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTabController", "NextTab");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTabController.GetInputHintVisibility
// (Final, Native, Protected)
// Parameters:
// enum class EModioUIInputMode       InputMode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UModioTabController::GetInputHintVisibility(enum class EModioUIInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTabController", "GetInputHintVisibility");

	Params::UModioTabController_GetInputHintVisibility_Params Parms{};

	Parms.InputMode = InputMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioTableRowStyleContainer
// (None)

class UClass* UModioTableRowStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTableRowStyleContainer");

	return Clss;
}


// ModioTableRowStyleContainer ModioUI.Default__ModioTableRowStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTableRowStyleContainer* UModioTableRowStyleContainer::GetDefaultObj()
{
	static class UModioTableRowStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTableRowStyleContainer*>(UModioTableRowStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioWrapBox
// (None)

class UClass* UModioWrapBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioWrapBox");

	return Clss;
}


// ModioWrapBox ModioUI.Default__ModioWrapBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioWrapBox* UModioWrapBox::GetDefaultObj()
{
	static class UModioWrapBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioWrapBox*>(UModioWrapBox::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioTagList
// (None)

class UClass* UModioTagList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagList");

	return Clss;
}


// ModioTagList ModioUI.Default__ModioTagList
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagList* UModioTagList::GetDefaultObj()
{
	static class UModioTagList* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagList*>(UModioTagList::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTagList.SetTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FModioModTag>        NewTags                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UModioTagList::SetTags(const TArray<struct FModioModTag>& NewTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagList", "SetTags");

	Params::UModioTagList_SetTags_Params Parms{};

	Parms.NewTags = NewTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioTagListWidgetBase
// (None)

class UClass* UModioTagListWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagListWidgetBase");

	return Clss;
}


// ModioTagListWidgetBase ModioUI.Default__ModioTagListWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagListWidgetBase* UModioTagListWidgetBase::GetDefaultObj()
{
	static class UModioTagListWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagListWidgetBase*>(UModioTagListWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTagListWidgetBase.GetSelectedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UModioTagListWidgetBase::GetSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagListWidgetBase", "GetSelectedTags");

	Params::UModioTagListWidgetBase_GetSelectedTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioTagListWidgetBase.ClearSelectedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioTagListWidgetBase::ClearSelectedTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagListWidgetBase", "ClearSelectedTags");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioTagSelectorWidgetBase
// (None)

class UClass* UModioTagSelectorWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagSelectorWidgetBase");

	return Clss;
}


// ModioTagSelectorWidgetBase ModioUI.Default__ModioTagSelectorWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagSelectorWidgetBase* UModioTagSelectorWidgetBase::GetDefaultObj()
{
	static class UModioTagSelectorWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagSelectorWidgetBase*>(UModioTagSelectorWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTagSelectorWidgetBase.OnCheckboxChecked
// (Final, Native, Protected)
// Parameters:
// class UModioSelectableTag*         SourceTag                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioTagSelectorWidgetBase::OnCheckboxChecked(class UModioSelectableTag* SourceTag, bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagSelectorWidgetBase", "OnCheckboxChecked");

	Params::UModioTagSelectorWidgetBase_OnCheckboxChecked_Params Parms{};

	Parms.SourceTag = SourceTag;
	Parms.bIsChecked = bIsChecked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTagSelectorWidgetBase.OnCategoryCollapseToggled
// (Final, Native, Public)
// Parameters:

void UModioTagSelectorWidgetBase::OnCategoryCollapseToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagSelectorWidgetBase", "OnCategoryCollapseToggled");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioTagWidgetBase
// (None)

class UClass* UModioTagWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagWidgetBase");

	return Clss;
}


// ModioTagWidgetBase ModioUI.Default__ModioTagWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagWidgetBase* UModioTagWidgetBase::GetDefaultObj()
{
	static class UModioTagWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagWidgetBase*>(UModioTagWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTagWidgetBase.SetTagValue
// (Final, Native, Public)
// Parameters:
// class FString                      Category                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewValue                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioTagWidgetBase::SetTagValue(const class FString& Category, const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagWidgetBase", "SetTagValue");

	Params::UModioTagWidgetBase_SetTagValue_Params Parms{};

	Parms.Category = Category;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTagWidgetBase.SetTagTextFormat
// (Final, Native, Public)
// Parameters:
// class FText                        NewFormat                                                        (Parm, NativeAccessSpecifierPublic)

void UModioTagWidgetBase::SetTagTextFormat(class FText NewFormat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagWidgetBase", "SetTagTextFormat");

	Params::UModioTagWidgetBase_SetTagTextFormat_Params Parms{};

	Parms.NewFormat = NewFormat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTagWidgetBase.GetTagTextStyle
// (Final, Native, Protected)
// Parameters:
// struct FModioRichTextStyle         ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FModioRichTextStyle UModioTagWidgetBase::GetTagTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTagWidgetBase", "GetTagTextStyle");

	Params::UModioTagWidgetBase_GetTagTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioTagWidgetStyleContainer
// (None)

class UClass* UModioTagWidgetStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTagWidgetStyleContainer");

	return Clss;
}


// ModioTagWidgetStyleContainer ModioUI.Default__ModioTagWidgetStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTagWidgetStyleContainer* UModioTagWidgetStyleContainer::GetDefaultObj()
{
	static class UModioTagWidgetStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTagWidgetStyleContainer*>(UModioTagWidgetStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioTextBlock
// (None)

class UClass* UModioTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTextBlock");

	return Clss;
}


// ModioTextBlock ModioUI.Default__ModioTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTextBlock* UModioTextBlock::GetDefaultObj()
{
	static class UModioTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTextBlock*>(UModioTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioTextWidgetStyleContainer
// (None)

class UClass* UModioTextWidgetStyleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTextWidgetStyleContainer");

	return Clss;
}


// ModioTextWidgetStyleContainer ModioUI.Default__ModioTextWidgetStyleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTextWidgetStyleContainer* UModioTextWidgetStyleContainer::GetDefaultObj()
{
	static class UModioTextWidgetStyleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTextWidgetStyleContainer*>(UModioTextWidgetStyleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioTileView
// (None)

class UClass* UModioTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTileView");

	return Clss;
}


// ModioTileView ModioUI.Default__ModioTileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTileView* UModioTileView::GetDefaultObj()
{
	static class UModioTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTileView*>(UModioTileView::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioTileView.SetCenterPanelItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCenterPanelItems                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioTileView::SetCenterPanelItems(bool bCenterPanelItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTileView", "SetCenterPanelItems");

	Params::UModioTileView_SetCenterPanelItems_Params Parms{};

	Parms.bCenterPanelItems = bCenterPanelItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioTileView.SetAllowPartialItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowPartialItems                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioTileView::SetAllowPartialItems(bool bAllowPartialItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioTileView", "SetAllowPartialItems");

	Params::UModioTileView_SetAllowPartialItems_Params Parms{};

	Parms.bAllowPartialItems = bAllowPartialItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioTreeView
// (None)

class UClass* UModioTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioTreeView");

	return Clss;
}


// ModioTreeView ModioUI.Default__ModioTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioTreeView* UModioTreeView::GetDefaultObj()
{
	static class UModioTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioTreeView*>(UModioTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUI4Subsystem
// (None)

class UClass* UModioUI4Subsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUI4Subsystem");

	return Clss;
}


// ModioUI4Subsystem ModioUI.Default__ModioUI4Subsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUI4Subsystem* UModioUI4Subsystem::GetDefaultObj()
{
	static class UModioUI4Subsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUI4Subsystem*>(UModioUI4Subsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUI4Subsystem.SetCurrentFocusTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     CurrentTarget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUI4Subsystem::SetCurrentFocusTarget(class UWidget* CurrentTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "SetCurrentFocusTarget");

	Params::UModioUI4Subsystem_SetCurrentFocusTarget_Params Parms{};

	Parms.CurrentTarget = CurrentTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUI4Subsystem.HandleInputModeChanged
// (Final, Native, Public)
// Parameters:
// enum class EModioUIInputMode       NewDevice                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUI4Subsystem::HandleInputModeChanged(enum class EModioUIInputMode NewDevice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "HandleInputModeChanged");

	Params::UModioUI4Subsystem_HandleInputModeChanged_Params Parms{};

	Parms.NewDevice = NewDevice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUI4Subsystem.GetLocalizedTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InTag                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UModioUI4Subsystem::GetLocalizedTag(const class FString& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "GetLocalizedTag");

	Params::UModioUI4Subsystem_GetLocalizedTag_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUI4Subsystem.GetInputGlyphMaterialForInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        VirtualInput                                                     (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EModioUIInputMode       InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UModioUI4Subsystem::GetInputGlyphMaterialForInputType(const struct FKey& VirtualInput, enum class EModioUIInputMode InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "GetInputGlyphMaterialForInputType");

	Params::UModioUI4Subsystem_GetInputGlyphMaterialForInputType_Params Parms{};

	Parms.VirtualInput = VirtualInput;
	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUI4Subsystem.GetDefaultStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UModioUIStyleSet*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UModioUIStyleSet* UModioUI4Subsystem::GetDefaultStyleSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "GetDefaultStyleSet");

	Params::UModioUI4Subsystem_GetDefaultStyleSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUI4Subsystem.GetCurrentFocusTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UModioUI4Subsystem::GetCurrentFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "GetCurrentFocusTarget");

	Params::UModioUI4Subsystem_GetCurrentFocusTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModioUI.ModioUI4Subsystem.GetAllNamedStyleNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UModioUI4Subsystem::GetAllNamedStyleNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUI4Subsystem", "GetAllNamedStyleNames");

	Params::UModioUI4Subsystem_GetAllNamedStyleNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModioUI.ModioUIAsyncLoader
// (None)

class UClass* UModioUIAsyncLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAsyncLoader");

	return Clss;
}


// ModioUIAsyncLoader ModioUI.Default__ModioUIAsyncLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIAsyncLoader* UModioUIAsyncLoader::GetDefaultObj()
{
	static class UModioUIAsyncLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIAsyncLoader*>(UModioUIAsyncLoader::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIAsyncLoader.OnRetryRequested
// (Final, Native, Protected)
// Parameters:

void UModioUIAsyncLoader::OnRetryRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncLoader", "OnRetryRequested");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioUIAsyncLoader.NativeHandleAsyncOperationStateChange
// (Native, Protected)
// Parameters:
// enum class EModioUIAsyncOperationWidgetStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModioUIAsyncLoader::NativeHandleAsyncOperationStateChange(enum class EModioUIAsyncOperationWidgetState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncLoader", "NativeHandleAsyncOperationStateChange");

	Params::UModioUIAsyncLoader_NativeHandleAsyncOperationStateChange_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIAsyncLoadingOverlay
// (None)

class UClass* UModioUIAsyncLoadingOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIAsyncLoadingOverlay");

	return Clss;
}


// ModioUIAsyncLoadingOverlay ModioUI.Default__ModioUIAsyncLoadingOverlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIAsyncLoadingOverlay* UModioUIAsyncLoadingOverlay::GetDefaultObj()
{
	static class UModioUIAsyncLoadingOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIAsyncLoadingOverlay*>(UModioUIAsyncLoadingOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUIAsyncLoadingOverlay.Close
// (Final, Native, Protected)
// Parameters:

void UModioUIAsyncLoadingOverlay::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUIAsyncLoadingOverlay", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUIDefaultAuthProvider
// (None)

class UClass* UModioUIDefaultAuthProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIDefaultAuthProvider");

	return Clss;
}


// ModioUIDefaultAuthProvider ModioUI.Default__ModioUIDefaultAuthProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIDefaultAuthProvider* UModioUIDefaultAuthProvider::GetDefaultObj()
{
	static class UModioUIDefaultAuthProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIDefaultAuthProvider*>(UModioUIDefaultAuthProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUISettings
// (None)

class UClass* UModioUISettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUISettings");

	return Clss;
}


// ModioUISettings ModioUI.Default__ModioUISettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUISettings* UModioUISettings::GetDefaultObj()
{
	static class UModioUISettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUISettings*>(UModioUISettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUIStyleSet
// (None)

class UClass* UModioUIStyleSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUIStyleSet");

	return Clss;
}


// ModioUIStyleSet ModioUI.Default__ModioUIStyleSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUIStyleSet* UModioUIStyleSet::GetDefaultObj()
{
	static class UModioUIStyleSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUIStyleSet*>(UModioUIStyleSet::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUniformGridPanel
// (None)

class UClass* UModioUniformGridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUniformGridPanel");

	return Clss;
}


// ModioUniformGridPanel ModioUI.Default__ModioUniformGridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUniformGridPanel* UModioUniformGridPanel::GetDefaultObj()
{
	static class UModioUniformGridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUniformGridPanel*>(UModioUniformGridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUserButton
// (None)

class UClass* UModioUserButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserButton");

	return Clss;
}


// ModioUserButton ModioUI.Default__ModioUserButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUserButton* UModioUserButton::GetDefaultObj()
{
	static class UModioUserButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUserButton*>(UModioUserButton::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioUserProfileButton
// (None)

class UClass* UModioUserProfileButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserProfileButton");

	return Clss;
}


// ModioUserProfileButton ModioUI.Default__ModioUserProfileButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUserProfileButton* UModioUserProfileButton::GetDefaultObj()
{
	static class UModioUserProfileButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUserProfileButton*>(UModioUserProfileButton::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioUserProfileButton.OnButtonClicked
// (Native, Protected)
// Parameters:

void UModioUserProfileButton::OnButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioUserProfileButton", "OnButtonClicked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioUserWidgetNamedSlotBase
// (None)

class UClass* UModioUserWidgetNamedSlotBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioUserWidgetNamedSlotBase");

	return Clss;
}


// ModioUserWidgetNamedSlotBase ModioUI.Default__ModioUserWidgetNamedSlotBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioUserWidgetNamedSlotBase* UModioUserWidgetNamedSlotBase::GetDefaultObj()
{
	static class UModioUserWidgetNamedSlotBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioUserWidgetNamedSlotBase*>(UModioUserWidgetNamedSlotBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioRoundedBorderStyle
// (None)

class UClass* UModioRoundedBorderStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioRoundedBorderStyle");

	return Clss;
}


// ModioRoundedBorderStyle ModioUI.Default__ModioRoundedBorderStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioRoundedBorderStyle* UModioRoundedBorderStyle::GetDefaultObj()
{
	static class UModioRoundedBorderStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioRoundedBorderStyle*>(UModioRoundedBorderStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioWidgetCarouselEntryWrapper
// (None)

class UClass* UModioWidgetCarouselEntryWrapper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioWidgetCarouselEntryWrapper");

	return Clss;
}


// ModioWidgetCarouselEntryWrapper ModioUI.Default__ModioWidgetCarouselEntryWrapper
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioWidgetCarouselEntryWrapper* UModioWidgetCarouselEntryWrapper::GetDefaultObj()
{
	static class UModioWidgetCarouselEntryWrapper* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioWidgetCarouselEntryWrapper*>(UModioWidgetCarouselEntryWrapper::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioWidgetCarousel
// (None)

class UClass* UModioWidgetCarousel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioWidgetCarousel");

	return Clss;
}


// ModioWidgetCarousel ModioUI.Default__ModioWidgetCarousel
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioWidgetCarousel* UModioWidgetCarousel::GetDefaultObj()
{
	static class UModioWidgetCarousel* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioWidgetCarousel*>(UModioWidgetCarousel::StaticClass()->DefaultObject);

	return Default;
}


// Function ModioUI.ModioWidgetCarousel.SetItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             Items                                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UModioWidgetCarousel::SetItems(const TArray<class UObject*>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioWidgetCarousel", "SetItems");

	Params::UModioWidgetCarousel_SetItems_Params Parms{};

	Parms.Items = Items;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioWidgetCarousel.SetFocusToCurrentElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioWidgetCarousel::SetFocusToCurrentElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioWidgetCarousel", "SetFocusToCurrentElement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioWidgetCarousel.ScrollRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioWidgetCarousel::ScrollRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioWidgetCarousel", "ScrollRight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ModioUI.ModioWidgetCarousel.ScrollLeft
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UModioWidgetCarousel::ScrollLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModioWidgetCarousel", "ScrollLeft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ModioUI.ModioWidgetStyleData
// (None)

class UClass* UModioWidgetStyleData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioWidgetStyleData");

	return Clss;
}


// ModioWidgetStyleData ModioUI.Default__ModioWidgetStyleData
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioWidgetStyleData* UModioWidgetStyleData::GetDefaultObj()
{
	static class UModioWidgetStyleData* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioWidgetStyleData*>(UModioWidgetStyleData::StaticClass()->DefaultObject);

	return Default;
}


// Class ModioUI.ModioWidgetSwitcher
// (None)

class UClass* UModioWidgetSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModioWidgetSwitcher");

	return Clss;
}


// ModioWidgetSwitcher ModioUI.Default__ModioWidgetSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UModioWidgetSwitcher* UModioWidgetSwitcher::GetDefaultObj()
{
	static class UModioWidgetSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UModioWidgetSwitcher*>(UModioWidgetSwitcher::StaticClass()->DefaultObject);

	return Default;
}

}


