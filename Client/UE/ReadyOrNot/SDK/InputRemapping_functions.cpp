#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class InputRemapping.InputRemappingNodes
// (None)

class UClass* UInputRemappingNodes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputRemappingNodes");

	return Clss;
}


// InputRemappingNodes InputRemapping.Default__InputRemappingNodes
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputRemappingNodes* UInputRemappingNodes::GetDefaultObj()
{
	static class UInputRemappingNodes* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputRemappingNodes*>(UInputRemappingNodes::StaticClass()->DefaultObject);

	return Default;
}


// Function InputRemapping.InputRemappingNodes.RemoveAxisMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAxisMappingStruct          MappingData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputRemappingNodes::RemoveAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "RemoveAxisMapping");

	Params::UInputRemappingNodes_RemoveAxisMapping_Params Parms{};

	Parms.MappingData = MappingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.RemoveActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FActionMappingStruct        MappingData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputRemappingNodes::RemoveActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "RemoveActionMapping");

	Params::UInputRemappingNodes_RemoveActionMapping_Params Parms{};

	Parms.MappingData = MappingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.RebindAxisMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAxisMappingStruct          AxisMapping                                                      (Parm, NativeAccessSpecifierPublic)
// struct FAxisMappingStruct          NewData                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputRemappingNodes::RebindAxisMapping(const struct FAxisMappingStruct& AxisMapping, const struct FAxisMappingStruct& NewData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "RebindAxisMapping");

	Params::UInputRemappingNodes_RebindAxisMapping_Params Parms{};

	Parms.AxisMapping = AxisMapping;
	Parms.NewData = NewData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.RebindActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FActionMappingStruct        ActionMapping                                                    (Parm, NativeAccessSpecifierPublic)
// struct FActionMappingStruct        NewData                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputRemappingNodes::RebindActionMapping(const struct FActionMappingStruct& ActionMapping, const struct FActionMappingStruct& NewData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "RebindActionMapping");

	Params::UInputRemappingNodes_RebindActionMapping_Params Parms{};

	Parms.ActionMapping = ActionMapping;
	Parms.NewData = NewData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.GetAllAxisMappings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAxisMappingStruct          FilterData                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<enum class EAxisMappingFilter>Filters                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAxisMappingStruct>  AxisMappings                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInputRemappingNodes::GetAllAxisMappings(const struct FAxisMappingStruct& FilterData, const TArray<enum class EAxisMappingFilter>& Filters, bool* ReturnValue, TArray<struct FAxisMappingStruct>* AxisMappings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "GetAllAxisMappings");

	Params::UInputRemappingNodes_GetAllAxisMappings_Params Parms{};

	Parms.FilterData = FilterData;
	Parms.Filters = Filters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (AxisMappings != nullptr)
		*AxisMappings = std::move(Parms.AxisMappings);

}


// Function InputRemapping.InputRemappingNodes.GetAllActionMappings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActionMappingStruct        FilterData                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<enum class EActionMappingFilter>Filters                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActionMappingStruct>ActionMappings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UInputRemappingNodes::GetAllActionMappings(const struct FActionMappingStruct& FilterData, const TArray<enum class EActionMappingFilter>& Filters, bool* ReturnValue, TArray<struct FActionMappingStruct>* ActionMappings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "GetAllActionMappings");

	Params::UInputRemappingNodes_GetAllActionMappings_Params Parms{};

	Parms.FilterData = FilterData;
	Parms.Filters = Filters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (ActionMappings != nullptr)
		*ActionMappings = std::move(Parms.ActionMappings);

}


// Function InputRemapping.InputRemappingNodes.CreateNewAxisMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAxisMappingStruct          MappingData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputRemappingNodes::CreateNewAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "CreateNewAxisMapping");

	Params::UInputRemappingNodes_CreateNewAxisMapping_Params Parms{};

	Parms.MappingData = MappingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.CreateNewActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FActionMappingStruct        MappingData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputRemappingNodes::CreateNewActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "CreateNewActionMapping");

	Params::UInputRemappingNodes_CreateNewActionMapping_Params Parms{};

	Parms.MappingData = MappingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAxisMappingStruct          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAxisMappingStruct          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputRemappingNodes::AxisMappingNotEqualActionMapping(struct FAxisMappingStruct& A, struct FAxisMappingStruct& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "AxisMappingNotEqualActionMapping");

	Params::UInputRemappingNodes_AxisMappingNotEqualActionMapping_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAxisMappingStruct          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAxisMappingStruct          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputRemappingNodes::AxisMappingEqualActionMapping(struct FAxisMappingStruct& A, struct FAxisMappingStruct& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "AxisMappingEqualActionMapping");

	Params::UInputRemappingNodes_AxisMappingEqualActionMapping_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActionMappingStruct        A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActionMappingStruct        B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputRemappingNodes::ActionMappingNotEqualActionMapping(struct FActionMappingStruct& A, struct FActionMappingStruct& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "ActionMappingNotEqualActionMapping");

	Params::UInputRemappingNodes_ActionMappingNotEqualActionMapping_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActionMappingStruct        A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActionMappingStruct        B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputRemappingNodes::ActionMappingEqualActionMapping(struct FActionMappingStruct& A, struct FActionMappingStruct& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputRemappingNodes", "ActionMappingEqualActionMapping");

	Params::UInputRemappingNodes_ActionMappingEqualActionMapping_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


