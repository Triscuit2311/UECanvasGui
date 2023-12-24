#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AdvancedSessions.AdvancedExternalUILibrary
// (None)

class UClass* UAdvancedExternalUILibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedExternalUILibrary");

	return Clss;
}


// AdvancedExternalUILibrary AdvancedSessions.Default__AdvancedExternalUILibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedExternalUILibrary* UAdvancedExternalUILibrary::GetDefaultObj()
{
	static class UAdvancedExternalUILibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedExternalUILibrary*>(UAdvancedExternalUILibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      URLToShow                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              AllowedDomains                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bEmbedded                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowBackground                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowCloseButton                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OffsetX                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OffsetY                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowWebURLUI(const class FString& URLToShow, enum class EBlueprintResultSwitch* Result, TArray<class FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "ShowWebURLUI");

	Params::UAdvancedExternalUILibrary_ShowWebURLUI_Params Parms{};

	Parms.URLToShow = URLToShow;
	Parms.bEmbedded = bEmbedded;
	Parms.bShowBackground = bShowBackground;
	Parms.bShowCloseButton = bShowCloseButton;
	Parms.OffsetX = OffsetX;
	Parms.OffsetY = OffsetY;
	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AllowedDomains != nullptr)
		*AllowedDomains = std::move(Parms.AllowedDomains);

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              PlayerViewingProfile                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              PlayerToViewProfileOf                                            (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "ShowProfileUI");

	Params::UAdvancedExternalUILibrary_ShowProfileUI_Params Parms{};

	Parms.PlayerViewingProfile = PlayerViewingProfile;
	Parms.PlayerToViewProfileOf = PlayerToViewProfileOf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      LeaderboardName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowLeaderBoardUI(const class FString& LeaderboardName, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "ShowLeaderBoardUI");

	Params::UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params Parms{};

	Parms.LeaderboardName = LeaderboardName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowInviteUI(class APlayerController* PlayerController, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "ShowInviteUI");

	Params::UAdvancedExternalUILibrary_ShowInviteUI_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowFriendsUI(class APlayerController* PlayerController, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "ShowFriendsUI");

	Params::UAdvancedExternalUILibrary_ShowFriendsUI_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              PlayerRequestingAccountUpgradeUI                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedExternalUILibrary::ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "ShowAccountUpgradeUI");

	Params::UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params Parms{};

	Parms.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAdvancedExternalUILibrary::CloseWebURLUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedExternalUILibrary", "CloseWebURLUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AdvancedSessions.AdvancedFriendsGameInstance
// (None)

class UClass* UAdvancedFriendsGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedFriendsGameInstance");

	return Clss;
}


// AdvancedFriendsGameInstance AdvancedSessions.Default__AdvancedFriendsGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedFriendsGameInstance* UAdvancedFriendsGameInstance::GetDefaultObj()
{
	static class UAdvancedFriendsGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedFriendsGameInstance*>(UAdvancedFriendsGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              PersonInviting                                                   (Parm, NativeAccessSpecifierPublic)
// class FString                      AppId                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppId, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsGameInstance", "OnSessionInviteReceived");

	Params::UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInviting = PersonInviting;
	Parms.AppId = AppId;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              PersonInvited                                                    (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsGameInstance", "OnSessionInviteAccepted");

	Params::UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInvited = PersonInvited;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              PlayerId                                                         (Parm, NativeAccessSpecifierPublic)
// bool                               bIsTalking                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsGameInstance", "OnPlayerTalkingStateChanged");

	Params::UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PlayerNum                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPLoginStatus          PreviousStatus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPLoginStatus          NewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              NewPlayerUniqueNetID                                             (Parm, NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32 PlayerNum, enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsGameInstance", "OnPlayerLoginStatusChanged");

	Params::UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params Parms{};

	Parms.PlayerNum = PlayerNum;
	Parms.PreviousStatus = PreviousStatus;
	Parms.NewStatus = NewStatus;
	Parms.NewPlayerUniqueNetID = NewPlayerUniqueNetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PlayerNum                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int32 PlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsGameInstance", "OnPlayerLoginChanged");

	Params::UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params Parms{};

	Parms.PlayerNum = PlayerNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AdvancedSessions.AdvancedFriendsInterface
// (None)

class UClass* IAdvancedFriendsInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedFriendsInterface");

	return Clss;
}


// AdvancedFriendsInterface AdvancedSessions.Default__AdvancedFriendsInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAdvancedFriendsInterface* IAdvancedFriendsInterface::GetDefaultObj()
{
	static class IAdvancedFriendsInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAdvancedFriendsInterface*>(IAdvancedFriendsInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              PersonInviting                                                   (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     SearchResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IAdvancedFriendsInterface::OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, struct FBlueprintSessionResult& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsInterface", "OnSessionInviteReceived");

	Params::IAdvancedFriendsInterface_OnSessionInviteReceived_Params Parms{};

	Parms.PersonInviting = PersonInviting;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              PersonInvited                                                    (Parm, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     SearchResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IAdvancedFriendsInterface::OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsInterface", "OnSessionInviteAccepted");

	Params::IAdvancedFriendsInterface_OnSessionInviteAccepted_Params Parms{};

	Parms.PersonInvited = PersonInvited;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              PlayerId                                                         (Parm, NativeAccessSpecifierPublic)
// bool                               bIsTalking                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAdvancedFriendsInterface::OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsInterface", "OnPlayerVoiceStateChanged");

	Params::IAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EBPLoginStatus          PreviousStatus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPLoginStatus          NewStatus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              PlayerUniqueNetID                                                (Parm, NativeAccessSpecifierPublic)

void IAdvancedFriendsInterface::OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsInterface", "OnPlayerLoginStatusChanged");

	Params::IAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params Parms{};

	Parms.PreviousStatus = PreviousStatus;
	Parms.NewStatus = NewStatus;
	Parms.PlayerUniqueNetID = PlayerUniqueNetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PlayerNum                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAdvancedFriendsInterface::OnPlayerLoginChanged(int32 PlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsInterface", "OnPlayerLoginChanged");

	Params::IAdvancedFriendsInterface_OnPlayerLoginChanged_Params Parms{};

	Parms.PlayerNum = PlayerNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Class AdvancedSessions.AdvancedFriendsLibrary
// (None)

class UClass* UAdvancedFriendsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedFriendsLibrary");

	return Clss;
}


// AdvancedFriendsLibrary AdvancedSessions.Default__AdvancedFriendsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedFriendsLibrary* UAdvancedFriendsLibrary::GetDefaultObj()
{
	static class UAdvancedFriendsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedFriendsLibrary*>(UAdvancedFriendsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPUniqueNetId>      Friends                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId>& Friends, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsLibrary", "SendSessionInviteToFriends");

	Params::UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Friends = Friends;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              FriendUniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::SendSessionInviteToFriend(class APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsLibrary", "SendSessionInviteToFriend");

	Params::UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.FriendUniqueNetId = FriendUniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               IsFriend                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsLibrary", "IsAFriend");

	Params::UAdvancedFriendsLibrary_IsAFriend_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsFriend != nullptr)
		*IsFriend = Parms.IsFriend;

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (Parm, NativeAccessSpecifierPublic)
// TArray<struct FBPOnlineRecentPlayer>PlayersList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsLibrary", "GetStoredRecentPlayersList");

	Params::UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayersList != nullptr)
		*PlayersList = std::move(Parms.PlayersList);

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FBPFriendInfo>       FriendsList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsLibrary", "GetStoredFriendsList");

	Params::UAdvancedFriendsLibrary_GetStoredFriendsList_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FriendsList != nullptr)
		*FriendsList = std::move(Parms.FriendsList);

}


// Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              FriendUniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FBPFriendInfo               Friend                                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void UAdvancedFriendsLibrary::GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedFriendsLibrary", "GetFriend");

	Params::UAdvancedFriendsLibrary_GetFriend_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.FriendUniqueNetId = FriendUniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Friend != nullptr)
		*Friend = std::move(Parms.Friend);

}


// Class AdvancedSessions.AdvancedGameSession
// (Actor)

class UClass* AAdvancedGameSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedGameSession");

	return Clss;
}


// AdvancedGameSession AdvancedSessions.Default__AdvancedGameSession
// (Public, ClassDefaultObject, ArchetypeObject)

class AAdvancedGameSession* AAdvancedGameSession::GetDefaultObj()
{
	static class AAdvancedGameSession* Default = nullptr;

	if (!Default)
		Default = static_cast<AAdvancedGameSession*>(AAdvancedGameSession::StaticClass()->DefaultObject);

	return Default;
}


// Class AdvancedSessions.AdvancedIdentityLibrary
// (None)

class UClass* UAdvancedIdentityLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedIdentityLibrary");

	return Clss;
}


// AdvancedIdentityLibrary AdvancedSessions.Default__AdvancedIdentityLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedIdentityLibrary* UAdvancedIdentityLibrary::GetDefaultObj()
{
	static class UAdvancedIdentityLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedIdentityLibrary*>(UAdvancedIdentityLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewAttributeValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::SetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, const class FString& NewAttributeValue, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "SetUserAccountAttribute");

	Params::UAdvancedIdentityLibrary_SetUserAccountAttribute_Params Parms{};

	Parms.AccountInfo = AccountInfo;
	Parms.AttributeName = AttributeName;
	Parms.NewAttributeValue = NewAttributeValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserID(struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserID");

	Params::UAdvancedIdentityLibrary_GetUserID_Params Parms{};

	Parms.AccountInfo = AccountInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UniqueNetId != nullptr)
		*UniqueNetId = std::move(Parms.UniqueNetId);

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Username                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountRealName(struct FBPUserOnlineAccount& AccountInfo, class FString* Username)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserAccountRealName");

	Params::UAdvancedIdentityLibrary_GetUserAccountRealName_Params Parms{};

	Parms.AccountInfo = AccountInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Username != nullptr)
		*Username = std::move(Parms.Username);

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      DisplayName                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountDisplayName(struct FBPUserOnlineAccount& AccountInfo, class FString* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserAccountDisplayName");

	Params::UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params Parms{};

	Parms.AccountInfo = AccountInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuthAttribute                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AuthAttribute, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserAccountAuthAttribute");

	Params::UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params Parms{};

	Parms.AccountInfo = AccountInfo;
	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AuthAttribute != nullptr)
		*AuthAttribute = std::move(Parms.AuthAttribute);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      AttributeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AttributeValue                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountAttribute(struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AttributeValue, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserAccountAttribute");

	Params::UAdvancedIdentityLibrary_GetUserAccountAttribute_Params Parms{};

	Parms.AccountInfo = AccountInfo;
	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AttributeValue != nullptr)
		*AttributeValue = std::move(Parms.AttributeValue);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUserOnlineAccount        AccountInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      AccessToken                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccountAccessToken(struct FBPUserOnlineAccount& AccountInfo, class FString* AccessToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserAccountAccessToken");

	Params::UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params Parms{};

	Parms.AccountInfo = AccountInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AccessToken != nullptr)
		*AccessToken = std::move(Parms.AccessToken);

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUserOnlineAccount        AccountInfo                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetUserAccount(struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetUserAccount");

	Params::UAdvancedIdentityLibrary_GetUserAccount_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AccountInfo != nullptr)
		*AccountInfo = std::move(Parms.AccountInfo);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      PlayerNickname                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetPlayerNickname(struct FBPUniqueNetId& UniqueNetId, class FString* PlayerNickname)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetPlayerNickname");

	Params::UAdvancedIdentityLibrary_GetPlayerNickname_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerNickname != nullptr)
		*PlayerNickname = std::move(Parms.PlayerNickname);

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuthToken                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetPlayerAuthToken(class APlayerController* PlayerController, class FString* AuthToken, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetPlayerAuthToken");

	Params::UAdvancedIdentityLibrary_GetPlayerAuthToken_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AuthToken != nullptr)
		*AuthToken = std::move(Parms.AuthToken);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EBPLoginStatus          LoginStatus                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetLoginStatus(struct FBPUniqueNetId& UniqueNetId, enum class EBPLoginStatus* LoginStatus, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetLoginStatus");

	Params::UAdvancedIdentityLibrary_GetLoginStatus_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LoginStatus != nullptr)
		*LoginStatus = Parms.LoginStatus;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBPUserOnlineAccount>AccountInfos                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedIdentityLibrary::GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedIdentityLibrary", "GetAllUserAccounts");

	Params::UAdvancedIdentityLibrary_GetAllUserAccounts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AccountInfos != nullptr)
		*AccountInfos = std::move(Parms.AccountInfos);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Class AdvancedSessions.AdvancedSessionsLibrary
// (None)

class UClass* UAdvancedSessionsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedSessionsLibrary");

	return Clss;
}


// AdvancedSessionsLibrary AdvancedSessions.Default__AdvancedSessionsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedSessionsLibrary* UAdvancedSessionsLibrary::GetDefaultObj()
{
	static class UAdvancedSessionsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedSessionsLibrary*>(UAdvancedSessionsLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::UniqueNetIdToString(struct FBPUniqueNetId& UniqueNetId, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "UniqueNetIdToString");

	Params::UAdvancedSessionsLibrary_UniqueNetIdToString_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (String != nullptr)
		*String = std::move(Parms.String);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "SetPlayerName");

	Params::UAdvancedSessionsLibrary_SetPlayerName_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PlayerName = PlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSessionPropertyKeyPair     SessionSearchProperty                                            (Parm, NativeAccessSpecifierPublic)
// enum class EOnlineComparisonOpReduxComparisonOp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionsSearchSetting      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSessionsSearchSetting UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, enum class EOnlineComparisonOpRedux ComparisonOp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "MakeLiteralSessionSearchProperty");

	Params::UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params Parms{};

	Parms.SessionSearchProperty = SessionSearchProperty;
	Parms.ComparisonOp = ComparisonOp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(class FName Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "MakeLiteralSessionPropertyString");

	Params::UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(class FName Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "MakeLiteralSessionPropertyInt");

	Params::UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(class FName Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "MakeLiteralSessionPropertyFloat");

	Params::UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(class FName Key, uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "MakeLiteralSessionPropertyByte");

	Params::UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(class FName Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "MakeLiteralSessionPropertyBool");

	Params::UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerToKick                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        KickReason                                                       (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, class FText KickReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "KickPlayer");

	Params::UAdvancedSessionsLibrary_KickPlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerToKick = PlayerToKick;
	Parms.KickReason = KickReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::IsValidUniqueNetID(struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "IsValidUniqueNetID");

	Params::UAdvancedSessionsLibrary_IsValidUniqueNetID_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     SessionResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::IsValidSession(struct FBlueprintSessionResult& SessionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "IsValidSession");

	Params::UAdvancedSessionsLibrary_IsValidSession_Params Parms{};

	Parms.SessionResult = SessionResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              PlayerToCheck                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsInSession                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::IsPlayerInSession(class UObject* WorldContextObject, struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "IsPlayerInSession");

	Params::UAdvancedSessionsLibrary_IsPlayerInSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerToCheck = PlayerToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsInSession != nullptr)
		*bIsInSession = Parms.bIsInSession;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SubSystemName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::HasOnlineSubsystem(class FName SubSystemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "HasOnlineSubsystem");

	Params::UAdvancedSessionsLibrary_HasOnlineSubsystem_Params Parms{};

	Parms.SubSystemName = SubSystemName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetUniqueNetIDFromPlayerState");

	Params::UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UniqueNetId != nullptr)
		*UniqueNetId = std::move(Parms.UniqueNetId);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetUniqueNetID");

	Params::UAdvancedSessionsLibrary_GetUniqueNetID_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UniqueNetId != nullptr)
		*UniqueNetId = std::move(Parms.UniqueNetId);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     SessionResult                                                    (Parm, NativeAccessSpecifierPublic)
// int32                              UniqueBuildId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32* UniqueBuildId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetUniqueBuildID");

	Params::UAdvancedSessionsLibrary_GetUniqueBuildID_Params Parms{};

	Parms.SessionResult = SessionResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = Parms.UniqueBuildId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPOnlineSessionState   SessionState                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionState(class UObject* WorldContextObject, enum class EBPOnlineSessionState* SessionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionState");

	Params::UAdvancedSessionsLibrary_GetSessionState_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SessionState != nullptr)
		*SessionState = Parms.SessionState;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumConnections                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumPrivateConnections                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLAN                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDedicated                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowInvites                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowJoinInProgress                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAnticheatEnabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BuildUniqueID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionSettings(class UObject* WorldContextObject, int32* NumConnections, int32* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, enum class EBlueprintResultSwitch* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionSettings");

	Params::UAdvancedSessionsLibrary_GetSessionSettings_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumConnections != nullptr)
		*NumConnections = Parms.NumConnections;

	if (NumPrivateConnections != nullptr)
		*NumPrivateConnections = Parms.NumPrivateConnections;

	if (bIsLAN != nullptr)
		*bIsLAN = Parms.bIsLAN;

	if (bIsDedicated != nullptr)
		*bIsDedicated = Parms.bIsDedicated;

	if (bAllowInvites != nullptr)
		*bAllowInvites = Parms.bAllowInvites;

	if (bAllowJoinInProgress != nullptr)
		*bAllowJoinInProgress = Parms.bAllowJoinInProgress;

	if (bIsAnticheatEnabled != nullptr)
		*bIsAnticheatEnabled = Parms.bIsAnticheatEnabled;

	if (BuildUniqueID != nullptr)
		*BuildUniqueID = Parms.BuildUniqueID;

	if (ExtraSettings != nullptr)
		*ExtraSettings = std::move(Parms.ExtraSettings);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESessionSettingSearchResultSearchResult                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SettingValue                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, class FString* SettingValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionPropertyString");

	Params::UAdvancedSessionsLibrary_GetSessionPropertyString_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SearchResult != nullptr)
		*SearchResult = Parms.SearchResult;

	if (SettingValue != nullptr)
		*SettingValue = std::move(Parms.SettingValue);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSessionPropertyKeyPair     SessionProperty                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAdvancedSessionsLibrary::GetSessionPropertyKey(struct FSessionPropertyKeyPair& SessionProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionPropertyKey");

	Params::UAdvancedSessionsLibrary_GetSessionPropertyKey_Params Parms{};

	Parms.SessionProperty = SessionProperty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESessionSettingSearchResultSearchResult                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SettingValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, int32* SettingValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionPropertyInt");

	Params::UAdvancedSessionsLibrary_GetSessionPropertyInt_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SearchResult != nullptr)
		*SearchResult = Parms.SearchResult;

	if (SettingValue != nullptr)
		*SettingValue = Parms.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESessionSettingSearchResultSearchResult                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SettingValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, float* SettingValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionPropertyFloat");

	Params::UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SearchResult != nullptr)
		*SearchResult = Parms.SearchResult;

	if (SettingValue != nullptr)
		*SettingValue = Parms.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESessionSettingSearchResultSearchResult                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              SettingValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, uint8* SettingValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionPropertyByte");

	Params::UAdvancedSessionsLibrary_GetSessionPropertyByte_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SearchResult != nullptr)
		*SearchResult = Parms.SearchResult;

	if (SettingValue != nullptr)
		*SettingValue = Parms.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESessionSettingSearchResultSearchResult                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SettingValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class ESessionSettingSearchResult* SearchResult, bool* SettingValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionPropertyBool");

	Params::UAdvancedSessionsLibrary_GetSessionPropertyBool_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SearchResult != nullptr)
		*SearchResult = Parms.SearchResult;

	if (SettingValue != nullptr)
		*SettingValue = Parms.SettingValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult     SessionResult                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      SessionID                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetSessionID_AsString(struct FBlueprintSessionResult& SessionResult, class FString* SessionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetSessionID_AsString");

	Params::UAdvancedSessionsLibrary_GetSessionID_AsString_Params Parms{};

	Parms.SessionResult = SessionResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SessionID != nullptr)
		*SessionID = std::move(Parms.SessionID);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetPlayerName");

	Params::UAdvancedSessionsLibrary_GetPlayerName_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerName != nullptr)
		*PlayerName = std::move(Parms.PlayerName);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumNetPlayers                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32* NumNetPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetNumberOfNetworkPlayers");

	Params::UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumNetPlayers != nullptr)
		*NumNetPlayers = Parms.NumNetPlayers;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NetPlayerIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetNetPlayerIndex(class APlayerController* PlayerController, int32* NetPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetNetPlayerIndex");

	Params::UAdvancedSessionsLibrary_GetNetPlayerIndex_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NetPlayerIndex != nullptr)
		*NetPlayerIndex = Parms.NetPlayerIndex;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult     SessionResult                                                    (Parm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetExtraSettings");

	Params::UAdvancedSessionsLibrary_GetExtraSettings_Params Parms{};

	Parms.SessionResult = SessionResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExtraSettings != nullptr)
		*ExtraSettings = std::move(Parms.ExtraSettings);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              UniqueBuildId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(int32* UniqueBuildId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetCurrentUniqueBuildID");

	Params::UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UniqueBuildId != nullptr)
		*UniqueBuildId = Parms.UniqueBuildId;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SessionID                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::GetCurrentSessionID_AsString(class UObject* WorldContextObject, class FString* SessionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "GetCurrentSessionID_AsString");

	Params::UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SessionID != nullptr)
		*SessionID = std::move(Parms.SessionID);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingName, enum class EBlueprintResultSwitch* Result, int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "FindSessionPropertyIndexByName");

	Params::UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingName = SettingName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        SettingsName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBlueprintResultSwitch  Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSessionPropertyKeyPair     OutProperty                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class FName SettingsName, enum class EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "FindSessionPropertyByName");

	Params::UAdvancedSessionsLibrary_FindSessionPropertyByName_Params Parms{};

	Parms.ExtraSettings = ExtraSettings;
	Parms.SettingsName = SettingsName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	if (OutProperty != nullptr)
		*OutProperty = std::move(Parms.OutProperty);

}


// Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId              A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(struct FBPUniqueNetId& A, struct FBPUniqueNetId& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "EqualEqual_UNetIDUnetID");

	Params::UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerToBan                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        BanReason                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedSessionsLibrary::BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, class FText BanReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "BanPlayer");

	Params::UAdvancedSessionsLibrary_BanPlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerToBan = PlayerToBan;
	Parms.BanReason = BanReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSessionPropertyKeyPair>SettingsArray                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair>NewOrChangedSettings                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair>ModifiedSettingsArray                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAdvancedSessionsLibrary::AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>& SettingsArray, TArray<struct FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedSessionsLibrary", "AddOrModifyExtraSettings");

	Params::UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params Parms{};

	Parms.SettingsArray = SettingsArray;
	Parms.NewOrChangedSettings = NewOrChangedSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModifiedSettingsArray != nullptr)
		*ModifiedSettingsArray = std::move(Parms.ModifiedSettingsArray);

}


// Class AdvancedSessions.AdvancedVoiceLibrary
// (None)

class UClass* UAdvancedVoiceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdvancedVoiceLibrary");

	return Clss;
}


// AdvancedVoiceLibrary AdvancedSessions.Default__AdvancedVoiceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdvancedVoiceLibrary* UAdvancedVoiceLibrary::GetDefaultObj()
{
	static class UAdvancedVoiceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdvancedVoiceLibrary*>(UAdvancedVoiceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "UnRegisterRemoteTalker");

	Params::UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// uint8                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::UnRegisterLocalTalker(uint8 LocalPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "UnRegisterLocalTalker");

	Params::UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "UnRegisterAllLocalTalkers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsSystemWide                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(uint8 LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "UnMuteRemoteTalker");

	Params::UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.UniqueNetId = UniqueNetId;
	Parms.bIsSystemWide = bIsSystemWide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// uint8                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::StopNetworkedVoice(uint8 LocalPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "StopNetworkedVoice");

	Params::UAdvancedVoiceLibrary_StopNetworkedVoice_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// uint8                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::StartNetworkedVoice(uint8 LocalPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "StartNetworkedVoice");

	Params::UAdvancedVoiceLibrary_StartNetworkedVoice_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAdvancedVoiceLibrary::RemoveAllRemoteTalkers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "RemoveAllRemoteTalkers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::RegisterRemoteTalker(struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "RegisterRemoteTalker");

	Params::UAdvancedVoiceLibrary_RegisterRemoteTalker_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// uint8                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::RegisterLocalTalker(uint8 LocalPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "RegisterLocalTalker");

	Params::UAdvancedVoiceLibrary_RegisterLocalTalker_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAdvancedVoiceLibrary::RegisterAllLocalTalkers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "RegisterAllLocalTalkers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// uint8                              LocalUserNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsSystemWide                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::MuteRemoteTalker(uint8 LocalUserNum, struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "MuteRemoteTalker");

	Params::UAdvancedVoiceLibrary_MuteRemoteTalker_Params Parms{};

	Parms.LocalUserNum = LocalUserNum;
	Parms.UniqueNetId = UniqueNetId;
	Parms.bIsSystemWide = bIsSystemWide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "IsRemotePlayerTalking");

	Params::UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              LocalUserNumChecking                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::IsPlayerMuted(uint8 LocalUserNumChecking, struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "IsPlayerMuted");

	Params::UAdvancedVoiceLibrary_IsPlayerMuted_Params Parms{};

	Parms.LocalUserNumChecking = LocalUserNumChecking;
	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(uint8 LocalPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "IsLocalPlayerTalking");

	Params::UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bHasHeadset                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              LocalPlayerNum                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::IsHeadsetPresent(bool* bHasHeadset, uint8 LocalPlayerNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "IsHeadsetPresent");

	Params::UAdvancedVoiceLibrary_IsHeadsetPresent_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHasHeadset != nullptr)
		*bHasHeadset = Parms.bHasHeadset;

}


// Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              NumLocalTalkers                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAdvancedVoiceLibrary::GetNumLocalTalkers(int32* NumLocalTalkers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AdvancedVoiceLibrary", "GetNumLocalTalkers");

	Params::UAdvancedVoiceLibrary_GetNumLocalTalkers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NumLocalTalkers != nullptr)
		*NumLocalTalkers = Parms.NumLocalTalkers;

}


// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// (None)

class UClass* UCancelFindSessionsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CancelFindSessionsCallbackProxy");

	return Clss;
}


// CancelFindSessionsCallbackProxy AdvancedSessions.Default__CancelFindSessionsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::GetDefaultObj()
{
	static class UCancelFindSessionsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UCancelFindSessionsCallbackProxy*>(UCancelFindSessionsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCancelFindSessionsCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CancelFindSessionsCallbackProxy", "CancelFindSessions");

	Params::UCancelFindSessionsCallbackProxy_CancelFindSessions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// (None)

class UClass* UCreateSessionCallbackProxyAdvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreateSessionCallbackProxyAdvanced");

	return Clss;
}


// CreateSessionCallbackProxyAdvanced AdvancedSessions.Default__CreateSessionCallbackProxyAdvanced
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::GetDefaultObj()
{
	static class UCreateSessionCallbackProxyAdvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreateSessionCallbackProxyAdvanced*>(UCreateSessionCallbackProxyAdvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PublicConnections                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PrivateConnections                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowInvites                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDedicatedServer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePresence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLobbiesIfAvailable                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowJoinViaPresence                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowJoinViaPresenceFriendsOnly                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiCheatProtected                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsesStats                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldAdvertise                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionCallbackProxyAdvanced*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateSessionCallbackProxyAdvanced", "CreateAdvancedSession");

	Params::UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ExtraSettings = ExtraSettings;
	Parms.PlayerController = PlayerController;
	Parms.PublicConnections = PublicConnections;
	Parms.PrivateConnections = PrivateConnections;
	Parms.bUseLAN = bUseLAN;
	Parms.bAllowInvites = bAllowInvites;
	Parms.bIsDedicatedServer = bIsDedicatedServer;
	Parms.bUsePresence = bUsePresence;
	Parms.bUseLobbiesIfAvailable = bUseLobbiesIfAvailable;
	Parms.bAllowJoinViaPresence = bAllowJoinViaPresence;
	Parms.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	Parms.bAntiCheatProtected = bAntiCheatProtected;
	Parms.bUsesStats = bUsesStats;
	Parms.bShouldAdvertise = bShouldAdvertise;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.DestroySessionCallbackProxyAdvanced
// (None)

class UClass* UDestroySessionCallbackProxyAdvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestroySessionCallbackProxyAdvanced");

	return Clss;
}


// DestroySessionCallbackProxyAdvanced AdvancedSessions.Default__DestroySessionCallbackProxyAdvanced
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UDestroySessionCallbackProxyAdvanced* UDestroySessionCallbackProxyAdvanced::GetDefaultObj()
{
	static class UDestroySessionCallbackProxyAdvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestroySessionCallbackProxyAdvanced*>(UDestroySessionCallbackProxyAdvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionCallbackProxyAdvanced*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDestroySessionCallbackProxyAdvanced* UDestroySessionCallbackProxyAdvanced::DestroySession(class UWorld* WorldContextObject, class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestroySessionCallbackProxyAdvanced", "DestroySession");

	Params::UDestroySessionCallbackProxyAdvanced_DestroySession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.EndSessionCallbackProxy
// (None)

class UClass* UEndSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndSessionCallbackProxy");

	return Clss;
}


// EndSessionCallbackProxy AdvancedSessions.Default__EndSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UEndSessionCallbackProxy* UEndSessionCallbackProxy::GetDefaultObj()
{
	static class UEndSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndSessionCallbackProxy*>(UEndSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.EndSessionCallbackProxy.EndSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndSessionCallbackProxy*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEndSessionCallbackProxy* UEndSessionCallbackProxy::EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndSessionCallbackProxy", "EndSession");

	Params::UEndSessionCallbackProxy_EndSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.FindFriendSessionCallbackProxy
// (None)

class UClass* UFindFriendSessionCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindFriendSessionCallbackProxy");

	return Clss;
}


// FindFriendSessionCallbackProxy AdvancedSessions.Default__FindFriendSessionCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::GetDefaultObj()
{
	static class UFindFriendSessionCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindFriendSessionCallbackProxy*>(UFindFriendSessionCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              FriendUniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFindFriendSessionCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBPUniqueNetId& FriendUniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindFriendSessionCallbackProxy", "FindFriendSession");

	Params::UFindFriendSessionCallbackProxy_FindFriendSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.FriendUniqueNetId = FriendUniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// (None)

class UClass* UFindSessionsCallbackProxyAdvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FindSessionsCallbackProxyAdvanced");

	return Clss;
}


// FindSessionsCallbackProxyAdvanced AdvancedSessions.Default__FindSessionsCallbackProxyAdvanced
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::GetDefaultObj()
{
	static class UFindSessionsCallbackProxyAdvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UFindSessionsCallbackProxyAdvanced*>(UFindSessionsCallbackProxyAdvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxResults                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPServerPresenceSearchTypeServerTypeToSearch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting>Filters                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bEmptyServersOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNonEmptyServersOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSecureServersOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSearchLobbies                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinSlotsAvailable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsCallbackProxyAdvanced*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, enum class EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxyAdvanced", "FindSessionsAdvanced");

	Params::UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MaxResults = MaxResults;
	Parms.bUseLAN = bUseLAN;
	Parms.ServerTypeToSearch = ServerTypeToSearch;
	Parms.Filters = Filters;
	Parms.bEmptyServersOnly = bEmptyServersOnly;
	Parms.bNonEmptyServersOnly = bNonEmptyServersOnly;
	Parms.bSecureServersOnly = bSecureServersOnly;
	Parms.bSearchLobbies = bSearchLobbies;
	Parms.MinSlotsAvailable = MinSlotsAvailable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FBlueprintSessionResult>SessionResults                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FSessionsSearchSetting>Filters                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FBlueprintSessionResult>FilteredResults                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFindSessionsCallbackProxyAdvanced::FilterSessionResults(TArray<struct FBlueprintSessionResult>& SessionResults, TArray<struct FSessionsSearchSetting>& Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FindSessionsCallbackProxyAdvanced", "FilterSessionResults");

	Params::UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params Parms{};

	Parms.SessionResults = SessionResults;
	Parms.Filters = Filters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FilteredResults != nullptr)
		*FilteredResults = std::move(Parms.FilteredResults);

}


// Class AdvancedSessions.GetFriendsCallbackProxy
// (None)

class UClass* UGetFriendsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetFriendsCallbackProxy");

	return Clss;
}


// GetFriendsCallbackProxy AdvancedSessions.Default__GetFriendsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::GetDefaultObj()
{
	static class UGetFriendsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetFriendsCallbackProxy*>(UGetFriendsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetFriendsCallbackProxy*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetFriendsCallbackProxy", "GetAndStoreFriendsList");

	Params::UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// (None)

class UClass* UGetRecentPlayersCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetRecentPlayersCallbackProxy");

	return Clss;
}


// GetRecentPlayersCallbackProxy AdvancedSessions.Default__GetRecentPlayersCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::GetDefaultObj()
{
	static class UGetRecentPlayersCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetRecentPlayersCallbackProxy*>(UGetRecentPlayersCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetId                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetRecentPlayersCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(class UObject* WorldContextObject, struct FBPUniqueNetId& UniqueNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetRecentPlayersCallbackProxy", "GetAndStoreRecentPlayersList");

	Params::UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UniqueNetId = UniqueNetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// (None)

class UClass* UGetUserPrivilegeCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetUserPrivilegeCallbackProxy");

	return Clss;
}


// GetUserPrivilegeCallbackProxy AdvancedSessions.Default__GetUserPrivilegeCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::GetDefaultObj()
{
	static class UGetUserPrivilegeCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetUserPrivilegeCallbackProxy*>(UGetUserPrivilegeCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBPUserPrivileges       PrivilegeToCheck                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              PlayerUniqueNetID                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetUserPrivilegeCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::GetUserPrivilege(class UObject* WorldContextObject, enum class EBPUserPrivileges& PrivilegeToCheck, struct FBPUniqueNetId& PlayerUniqueNetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetUserPrivilegeCallbackProxy", "GetUserPrivilege");

	Params::UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PrivilegeToCheck = PrivilegeToCheck;
	Parms.PlayerUniqueNetID = PlayerUniqueNetID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.JoinSessionCallbackProxyAdvanced
// (None)

class UClass* UJoinSessionCallbackProxyAdvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinSessionCallbackProxyAdvanced");

	return Clss;
}


// JoinSessionCallbackProxyAdvanced AdvancedSessions.Default__JoinSessionCallbackProxyAdvanced
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UJoinSessionCallbackProxyAdvanced* UJoinSessionCallbackProxyAdvanced::GetDefaultObj()
{
	static class UJoinSessionCallbackProxyAdvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinSessionCallbackProxyAdvanced*>(UJoinSessionCallbackProxyAdvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWorld*                      WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     SearchResult                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionCallbackProxyAdvanced*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UJoinSessionCallbackProxyAdvanced* UJoinSessionCallbackProxyAdvanced::JoinSession(class UWorld* WorldContextObject, class APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinSessionCallbackProxyAdvanced", "JoinSession");

	Params::UJoinSessionCallbackProxyAdvanced_JoinSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.SearchResult = SearchResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.LoginUserCallbackProxy
// (None)

class UClass* ULoginUserCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginUserCallbackProxy");

	return Clss;
}


// LoginUserCallbackProxy AdvancedSessions.Default__LoginUserCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class ULoginUserCallbackProxy* ULoginUserCallbackProxy::GetDefaultObj()
{
	static class ULoginUserCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginUserCallbackProxy*>(ULoginUserCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserToken                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoginUserCallbackProxy*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoginUserCallbackProxy* ULoginUserCallbackProxy::LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& UserID, const class FString& UserToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginUserCallbackProxy", "LoginUser");

	Params::ULoginUserCallbackProxy_LoginUser_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.UserID = UserID;
	Parms.UserToken = UserToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.LogoutUserCallbackProxy
// (None)

class UClass* ULogoutUserCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LogoutUserCallbackProxy");

	return Clss;
}


// LogoutUserCallbackProxy AdvancedSessions.Default__LogoutUserCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::GetDefaultObj()
{
	static class ULogoutUserCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULogoutUserCallbackProxy*>(ULogoutUserCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULogoutUserCallbackProxy*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LogoutUserCallbackProxy", "LogoutUser");

	Params::ULogoutUserCallbackProxy_LogoutUser_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.SendFriendInviteCallbackProxy
// (None)

class UClass* USendFriendInviteCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SendFriendInviteCallbackProxy");

	return Clss;
}


// SendFriendInviteCallbackProxy AdvancedSessions.Default__SendFriendInviteCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::GetDefaultObj()
{
	static class USendFriendInviteCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<USendFriendInviteCallbackProxy*>(USendFriendInviteCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPUniqueNetId              UniqueNetIDInvited                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class USendFriendInviteCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBPUniqueNetId& UniqueNetIDInvited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SendFriendInviteCallbackProxy", "SendFriendInvite");

	Params::USendFriendInviteCallbackProxy_SendFriendInvite_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.UniqueNetIDInvited = UniqueNetIDInvited;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// (None)

class UClass* UUpdateSessionCallbackProxyAdvanced::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateSessionCallbackProxyAdvanced");

	return Clss;
}


// UpdateSessionCallbackProxyAdvanced AdvancedSessions.Default__UpdateSessionCallbackProxyAdvanced
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::GetDefaultObj()
{
	static class UUpdateSessionCallbackProxyAdvanced* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateSessionCallbackProxyAdvanced*>(UUpdateSessionCallbackProxyAdvanced::StaticClass()->DefaultObject);

	return Default;
}


// Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSessionPropertyKeyPair>ExtraSettings                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              PublicConnections                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PrivateConnections                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseLAN                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowInvites                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowJoinInProgress                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRefreshOnlineData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDedicatedServer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionCallbackProxyAdvanced*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateSessionCallbackProxyAdvanced", "UpdateSession");

	Params::UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ExtraSettings = ExtraSettings;
	Parms.PublicConnections = PublicConnections;
	Parms.PrivateConnections = PrivateConnections;
	Parms.bUseLAN = bUseLAN;
	Parms.bAllowInvites = bAllowInvites;
	Parms.bAllowJoinInProgress = bAllowJoinInProgress;
	Parms.bRefreshOnlineData = bRefreshOnlineData;
	Parms.bIsDedicatedServer = bIsDedicatedServer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


