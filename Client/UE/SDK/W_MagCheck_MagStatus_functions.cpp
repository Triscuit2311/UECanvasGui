#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MagCheck_MagStatus.W_MagCheck_MagStatus_C
// (None)

class UClass* UW_MagCheck_MagStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MagCheck_MagStatus_C");

	return Clss;
}


// W_MagCheck_MagStatus_C W_MagCheck_MagStatus.Default__W_MagCheck_MagStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MagCheck_MagStatus_C* UW_MagCheck_MagStatus_C::GetDefaultObj()
{
	static class UW_MagCheck_MagStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MagCheck_MagStatus_C*>(UW_MagCheck_MagStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Unhighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MagCheck_MagStatus_C::Unhighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_MagStatus_C", "Unhighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MagCheck_MagStatus_C::Highlight(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_MagStatus_C", "Highlight");

	Params::UW_MagCheck_MagStatus_C_Highlight_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_MagCheck_MagStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_MagStatus_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MagCheck_MagStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_MagStatus_C", "Tick");

	Params::UW_MagCheck_MagStatus_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MagIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        AmmoTypeText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_MagCheck_MagStatus_C::Init(int32 MagIndex, class FText AmmoTypeText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_MagStatus_C", "Init");

	Params::UW_MagCheck_MagStatus_C_Init_Params Parms{};

	Parms.MagIndex = MagIndex;
	Parms.AmmoTypeText = AmmoTypeText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MagCheck_MagStatus.W_MagCheck_MagStatus_C.ExecuteUbergraph_W_MagCheck_MagStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseMagazineWeapon*         K2Node_DynamicCast_AsBase_Magazine_Weapon                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMagazineAmmoPercentage_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MagIndex                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_AmmoTypeText                                  (None)

void UW_MagCheck_MagStatus_C::ExecuteUbergraph_W_MagCheck_MagStatus(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, float CallFunc_GetMagazineAmmoPercentage_ReturnValue, int32 K2Node_CustomEvent_MagIndex, class FText K2Node_CustomEvent_AmmoTypeText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MagCheck_MagStatus_C", "ExecuteUbergraph_W_MagCheck_MagStatus");

	Params::UW_MagCheck_MagStatus_C_ExecuteUbergraph_W_MagCheck_MagStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Magazine_Weapon = K2Node_DynamicCast_AsBase_Magazine_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetMagazineAmmoPercentage_ReturnValue = CallFunc_GetMagazineAmmoPercentage_ReturnValue;
	Parms.K2Node_CustomEvent_MagIndex = K2Node_CustomEvent_MagIndex;
	Parms.K2Node_CustomEvent_AmmoTypeText = K2Node_CustomEvent_AmmoTypeText;

	UObject::ProcessEvent(Func, &Parms);

}

}


