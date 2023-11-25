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
	 * 		Name   -> Function W_Briefing_Dossier_Bio.W_Briefing_Dossier_Bio_C.SetBioText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BioText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		void                                               ReturnValue
	 */
	void UW_Briefing_Dossier_Bio_C::SetBioText(const class FText& BioText)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(31272);
		
		struct
		{
			class FText                                        BioText;
		} params;
		params.BioText = BioText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Briefing_Dossier_Bio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UW_Briefing_Dossier_Bio_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(31271);
		return ptr;
	}

}


