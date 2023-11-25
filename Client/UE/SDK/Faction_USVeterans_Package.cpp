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
	 * 		Name   -> Function Faction_USVeterans.Faction_USVeterans_C.OnAIAdded_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACyberneticCharacter*                        Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AFaction_USVeterans_C::OnAIAdded_Blueprint(class ACyberneticCharacter* Character)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112928);
		
		struct
		{
			class ACyberneticCharacter*                        Character;
		} params;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Faction_USVeterans.Faction_USVeterans_C.AlertOtherSuspectsInTeam_Blueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASuspectCharacter*                           Suspect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AReadyOrNotCharacter*                        Enemy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AFaction_USVeterans_C::AlertOtherSuspectsInTeam_Blueprint(class ASuspectCharacter* Suspect, class AReadyOrNotCharacter* Enemy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112929);
		
		struct
		{
			class ASuspectCharacter*                           Suspect;
			class AReadyOrNotCharacter*                        Enemy;
		} params;
		params.Suspect = Suspect;
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Faction_USVeterans.Faction_USVeterans_C.ExecuteUbergraph_Faction_USVeterans
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		void                                               ReturnValue
	 */
	void AFaction_USVeterans_C::ExecuteUbergraph_Faction_USVeterans(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(112931);
		
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
	 * 		Name   -> PredefinedFunction AFaction_USVeterans_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AFaction_USVeterans_C::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(112932);
		return ptr;
	}

}


