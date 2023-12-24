#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_SawnOff.Primary_SawnOff_C
// (Actor)

class UClass* APrimary_SawnOff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_SawnOff_C");

	return Clss;
}


// Primary_SawnOff_C Primary_SawnOff.Default__Primary_SawnOff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_SawnOff_C* APrimary_SawnOff_C::GetDefaultObj()
{
	static class APrimary_SawnOff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_SawnOff_C*>(APrimary_SawnOff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Primary_SawnOff.Primary_SawnOff_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_SawnOff_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "ReceiveTick");

	Params::APrimary_SawnOff_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_SawnOff.Primary_SawnOff_C.Multicast_EnableLight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APrimary_SawnOff_C::Multicast_EnableLight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "Multicast_EnableLight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SawnOff.Primary_SawnOff_C.Multicast_DisableLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrimary_SawnOff_C::Multicast_DisableLight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "Multicast_DisableLight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SawnOff.Primary_SawnOff_C.OnAttachmentActivated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemAttachment         AttachmentChanged                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_SawnOff_C::OnAttachmentActivated_Event_0(enum class EItemAttachment AttachmentChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "OnAttachmentActivated_Event_0");

	Params::APrimary_SawnOff_C_OnAttachmentActivated_Event_0_Params Parms{};

	Parms.AttachmentChanged = AttachmentChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_SawnOff.Primary_SawnOff_C.OnAttachmentDeactivated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemAttachment         AttachmentChanged                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrimary_SawnOff_C::OnAttachmentDeactivated_Event_0(enum class EItemAttachment AttachmentChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "OnAttachmentDeactivated_Event_0");

	Params::APrimary_SawnOff_C_OnAttachmentDeactivated_Event_0_Params Parms{};

	Parms.AttachmentChanged = AttachmentChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Primary_SawnOff.Primary_SawnOff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimary_SawnOff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SawnOff.Primary_SawnOff_C.Server_DisableLight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APrimary_SawnOff_C::Server_DisableLight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "Server_DisableLight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SawnOff.Primary_SawnOff_C.Server_EnableLight
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void APrimary_SawnOff_C::Server_EnableLight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "Server_EnableLight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Primary_SawnOff.Primary_SawnOff_C.ExecuteUbergraph_Primary_SawnOff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemAttachment         K2Node_CustomEvent_AttachmentChanged_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemAttachment         K2Node_CustomEvent_AttachmentChanged                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void APrimary_SawnOff_C::ExecuteUbergraph_Primary_SawnOff(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, enum class EItemAttachment K2Node_CustomEvent_AttachmentChanged_1, enum class EItemAttachment K2Node_CustomEvent_AttachmentChanged, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Primary_SawnOff_C", "ExecuteUbergraph_Primary_SawnOff");

	Params::APrimary_SawnOff_C_ExecuteUbergraph_Primary_SawnOff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_AttachmentChanged_1 = K2Node_CustomEvent_AttachmentChanged_1;
	Parms.K2Node_CustomEvent_AttachmentChanged = K2Node_CustomEvent_AttachmentChanged;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


