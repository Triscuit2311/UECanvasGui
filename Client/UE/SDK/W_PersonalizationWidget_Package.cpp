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
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleHeads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::DeselectAndDisableAllIncompatibleHeads()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89191);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAndDisableAllIncompatibleBodies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::DeselectAndDisableAllIncompatibleBodies()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89190);
		
		struct
		{
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllHeads
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    Except                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::DeselectAllHeads(class UW_PersonalizationItem_C* Except)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89189);
		
		struct
		{
			class UW_PersonalizationItem_C*                    Except;
		} params;
		params.Except = Except;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.DeselectAllBodys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    Except                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::DeselectAllBodys(class UW_PersonalizationItem_C* Except)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89188);
		
		struct
		{
			class UW_PersonalizationItem_C*                    Except;
		} params;
		params.Except = Except;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89187);
		
		struct
		{
			bool                                               IsDesignTime;
		} params;
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadEventClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    PersonalizationItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::HeadEventClicked(class UW_PersonalizationItem_C* PersonalizationItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89186);
		
		struct
		{
			class UW_PersonalizationItem_C*                    PersonalizationItem;
		} params;
		params.PersonalizationItem = PersonalizationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyEventClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationItem_C*                    PersonalizationItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::BodyEventClicked(class UW_PersonalizationItem_C* PersonalizationItem)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89185);
		
		struct
		{
			class UW_PersonalizationItem_C*                    PersonalizationItem;
		} params;
		params.PersonalizationItem = PersonalizationItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.Apply Personalization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::ApplyPersonalization(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89184);
		
		struct
		{
			class UW_PersonalizationCategory_C*                PersonalizationCategory;
		} params;
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.Cancel Personalization
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::CancelPersonalization(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89183);
		
		struct
		{
			class UW_PersonalizationCategory_C*                PersonalizationCategory;
		} params;
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.HeadCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::HeadCategoryClicked(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89182);
		
		struct
		{
			class UW_PersonalizationCategory_C*                PersonalizationCategory;
		} params;
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.BodyCategoryClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_PersonalizationCategory_C*                PersonalizationCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::BodyCategoryClicked(class UW_PersonalizationCategory_C* PersonalizationCategory)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89181);
		
		struct
		{
			class UW_PersonalizationCategory_C*                PersonalizationCategory;
		} params;
		params.PersonalizationCategory = PersonalizationCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89180);
		
		struct
		{
			struct FGeometry                                   MyGeometry;
			float                                              InDeltaTime;
		} params;
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PersonalizationWidget.W_PersonalizationWidget_C.ExecuteUbergraph_W_PersonalizationWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_PersonalizationWidget_C::ExecuteUbergraph_W_PersonalizationWidget(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(89179);
		
		struct
		{
			int32_t                                            EntryPoint;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PersonalizationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_PersonalizationWidget_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89178);
		return ptr;
	}

}


