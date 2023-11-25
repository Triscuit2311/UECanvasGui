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
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Using Modifier Key?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                KeyList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<EKeyModifiers>                              Modifiers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void URebindFieldFunctionLibrary_C::UsingModifierKey(TArray<struct FKey>* KeyList, TArray<EKeyModifiers>* Modifiers, class UObject* __WorldContext, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30640);
		
		struct
		{
			TArray<struct FKey>                                KeyList;
			TArray<EKeyModifiers>                              Modifiers;
			class UObject*                                     __WorldContext;
			bool                                               ReturnValue;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyList != nullptr)
			*KeyList = params.KeyList;
		if (Modifiers != nullptr)
			*Modifiers = params.Modifiers;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key list has Non Modifier Key
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                KeyList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void URebindFieldFunctionLibrary_C::KeylisthasNonModifierKey(TArray<struct FKey>* KeyList, class UObject* __WorldContext, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30639);
		
		struct
		{
			TArray<struct FKey>                                KeyList;
			class UObject*                                     __WorldContext;
			bool                                               ReturnValue;
		} params;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KeyList != nullptr)
			*KeyList = params.KeyList;
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Abbreviate Key
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AbreviatedName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void URebindFieldFunctionLibrary_C::AbbreviateKey(const struct FKey& Key, class UObject* __WorldContext, class FString* AbreviatedName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30638);
		
		struct
		{
			struct FKey                                        Key;
			class UObject*                                     __WorldContext;
			class FString                                      AbreviatedName;
		} params;
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbreviatedName != nullptr)
			*AbreviatedName = params.AbreviatedName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RebindFieldFunctionLibrary.RebindFieldFunctionLibrary_C.Key is Non Modifier Key?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void URebindFieldFunctionLibrary_C::KeyisNonModifierKey(const struct FKey& Key, class UObject* __WorldContext, bool* ReturnValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(30637);
		
		struct
		{
			struct FKey                                        Key;
			class UObject*                                     __WorldContext;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URebindFieldFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* URebindFieldFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(30636);
		return ptr;
	}

}


