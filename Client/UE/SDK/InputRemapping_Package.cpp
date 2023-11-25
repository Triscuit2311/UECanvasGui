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
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RemoveAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::RemoveAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11776);
		
		struct
		{
			struct FAxisMappingStruct                          MappingData;
			bool                                               ReturnValue;
		} params;
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RemoveActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::RemoveActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11775);
		
		struct
		{
			struct FActionMappingStruct                        MappingData;
			bool                                               ReturnValue;
		} params;
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RebindAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          AxisMapping                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAxisMappingStruct                          NewData                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::RebindAxisMapping(const struct FAxisMappingStruct& AxisMapping, const struct FAxisMappingStruct& NewData, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11774);
		
		struct
		{
			struct FAxisMappingStruct                          AxisMapping;
			struct FAxisMappingStruct                          NewData;
			bool                                               ReturnValue;
		} params;
		params.AxisMapping = AxisMapping;
		params.NewData = NewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.RebindActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        ActionMapping                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FActionMappingStruct                        NewData                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::RebindActionMapping(const struct FActionMappingStruct& ActionMapping, const struct FActionMappingStruct& NewData, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11773);
		
		struct
		{
			struct FActionMappingStruct                        ActionMapping;
			struct FActionMappingStruct                        NewData;
			bool                                               ReturnValue;
		} params;
		params.ActionMapping = ActionMapping;
		params.NewData = NewData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.GetAllAxisMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          FilterData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<EAxisMappingFilter>                         Filters                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAxisMappingStruct>                  AxisMappings                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::GetAllAxisMappings(const struct FAxisMappingStruct& FilterData, TArray<EAxisMappingFilter> Filters, bool* ReturnValue, TArray<struct FAxisMappingStruct>* AxisMappings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11772);
		
		struct
		{
			struct FAxisMappingStruct                          FilterData;
			TArray<EAxisMappingFilter>                         Filters;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0000[0x7];
			TArray<struct FAxisMappingStruct>                  AxisMappings;
		} params;
		params.FilterData = FilterData;
		params.Filters = Filters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (AxisMappings != nullptr)
			*AxisMappings = params.AxisMappings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.GetAllActionMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        FilterData                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<EActionMappingFilter>                       Filters                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FActionMappingStruct>                ActionMappings                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::GetAllActionMappings(const struct FActionMappingStruct& FilterData, TArray<EActionMappingFilter> Filters, bool* ReturnValue, TArray<struct FActionMappingStruct>* ActionMappings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11771);
		
		struct
		{
			struct FActionMappingStruct                        FilterData;
			TArray<EActionMappingFilter>                       Filters;
			bool                                               ReturnValue;
			unsigned char                                      UnknownData_0001[0x7];
			TArray<struct FActionMappingStruct>                ActionMappings;
		} params;
		params.FilterData = FilterData;
		params.Filters = Filters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
		if (ActionMappings != nullptr)
			*ActionMappings = params.ActionMappings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.CreateNewAxisMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::CreateNewAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11770);
		
		struct
		{
			struct FAxisMappingStruct                          MappingData;
			bool                                               ReturnValue;
		} params;
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.CreateNewActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        MappingData                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UInputRemappingNodes::CreateNewActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11769);
		
		struct
		{
			struct FActionMappingStruct                        MappingData;
			bool                                               ReturnValue;
		} params;
		params.MappingData = MappingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAxisMappingStruct                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::AxisMappingNotEqualActionMapping(const struct FAxisMappingStruct& A, const struct FAxisMappingStruct& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11768);
		
		struct
		{
			struct FAxisMappingStruct                          A;
			struct FAxisMappingStruct                          B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAxisMappingStruct                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAxisMappingStruct                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::AxisMappingEqualActionMapping(const struct FAxisMappingStruct& A, const struct FAxisMappingStruct& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11767);
		
		struct
		{
			struct FAxisMappingStruct                          A;
			struct FAxisMappingStruct                          B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActionMappingStruct                        B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::ActionMappingNotEqualActionMapping(const struct FActionMappingStruct& A, const struct FActionMappingStruct& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11766);
		
		struct
		{
			struct FActionMappingStruct                        A;
			struct FActionMappingStruct                        B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActionMappingStruct                        A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FActionMappingStruct                        B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInputRemappingNodes::ActionMappingEqualActionMapping(const struct FActionMappingStruct& A, const struct FActionMappingStruct& B)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(11765);
		
		struct
		{
			struct FActionMappingStruct                        A;
			struct FActionMappingStruct                        B;
			bool                                               ReturnValue;
		} params;
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputRemappingNodes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UInputRemappingNodes::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(5);
		return ptr;
	}

}


