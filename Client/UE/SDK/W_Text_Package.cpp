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
	 * 		Name   -> Function W_Text.W_Text_C.SetTextJustification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextJustify                                       Justification                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetTextJustification(ETextJustify Justification)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49134);
		
		struct
		{
			ETextJustify                                       Justification;
		} params;
		params.Justification = Justification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetOutline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFontOutlineSettings                        FontOutlineSettings                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetOutline(const struct FFontOutlineSettings& FontOutlineSettings)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49133);
		
		struct
		{
			struct FFontOutlineSettings                        FontOutlineSettings;
		} params;
		params.FontOutlineSettings = FontOutlineSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetFont(const struct FSlateFontInfo& Font)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49132);
		
		struct
		{
			struct FSlateFontInfo                              Font;
		} params;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetFontSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetFontSize(int32_t FontSize)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49131);
		
		struct
		{
			int32_t                                            FontSize;
			unsigned char                                      UnknownData_0000[0x4];
		} params;
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetTextTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETextTransformPolicy                               TextTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetTextTransform(ETextTransformPolicy TextTransform)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49130);
		
		struct
		{
			ETextTransformPolicy                               TextTransform;
		} params;
		params.TextTransform = TextTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetTextShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                      ShadowOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ShadowColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetTextShadow(const struct FVector2D& ShadowOffset, const struct FLinearColor& ShadowColor)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49129);
		
		struct
		{
			struct FVector2D                      ShadowOffset;
			struct FLinearColor                                ShadowColor;
		} params;
		params.ShadowOffset = ShadowOffset;
		params.ShadowColor = ShadowColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetTextLetterSpacing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LetterSpacing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetTextLetterSpacing(int32_t LetterSpacing)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49128);
		
		struct
		{
			int32_t                                            LetterSpacing;
			unsigned char                                      UnknownData_0001[0x4];
		} params;
		params.LetterSpacing = LetterSpacing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49127);
		
		struct
		{
			struct FLinearColor                                Color;
		} params;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        CurrentText                                                (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::GetText(class FText* CurrentText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49126);
		
		struct
		{
			class FText                                        CurrentText;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentText != nullptr)
			*CurrentText = params.CurrentText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::UpdateText(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49125);
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.TruncateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Truncate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CharacterLimit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      TruncationCharacters                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        TruncatedText                                              (Parm, OutParm)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::TruncateText(bool Truncate, int32_t CharacterLimit, const class FString& TruncationCharacters, class FText* TruncatedText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49124);
		
		struct
		{
			bool                                               Truncate;
			unsigned char                                      UnknownData_0002[0x3];
			int32_t                                            CharacterLimit;
			class FString                                      TruncationCharacters;
			class FText                                        TruncatedText;
		} params;
		params.Truncate = Truncate;
		params.CharacterLimit = CharacterLimit;
		params.TruncationCharacters = TruncationCharacters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TruncatedText != nullptr)
			*TruncatedText = params.TruncatedText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.UpdateFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::UpdateFont(const struct FSlateFontInfo& Font)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49123);
		
		struct
		{
			struct FSlateFontInfo                              Font;
		} params;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_Style_Text                              TextStyle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetStyle(const struct FST_Style_Text& TextStyle)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49122);
		
		struct
		{
			struct FST_Style_Text                              TextStyle;
		} params;
		params.TextStyle = TextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::SetText(const class FText& Text)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49121);
		
		struct
		{
			class FText                                        Text;
		} params;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Text.W_Text_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49120);
		
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
	 * 		Name   -> Function W_Text.W_Text_C.Construct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::Construct()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49119);
		
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
	 * 		Name   -> Function W_Text.W_Text_C.ExecuteUbergraph_W_Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void UW_Text_C::ExecuteUbergraph_W_Text(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(49118);
		
		struct
		{
			int32_t                                            EntryPoint;
		} params;
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Text_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Text_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(49117);
		return ptr;
	}

}


