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
	 * 		Name   -> PredefinedFunction UFMODAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODAsset::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(123);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODAnimNotifyPlay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODAnimNotifyPlay::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(122);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.VCASetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODVCA*                                    Vca                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::VCASetVolume(class UFMODVCA* Vca, float Volume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12364);
		
		struct
		{
			class UFMODVCA*                                    Vca;
			float                                              Volume;
		} params;
		params.Vca = Vca;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12363);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UFMODEvent*                                  Event;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::UnloadBankSampleData(class UFMODBank* Bank)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12362);
		
		struct
		{
			class UFMODBank*                                   Bank;
		} params;
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadBank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::UnloadBank(class UFMODBank* Bank)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12361);
		
		struct
		{
			class UFMODBank*                                   Bank;
		} params;
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewDriverName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::SetOutputDriverByName(const class FString& NewDriverName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12360);
		
		struct
		{
			class FString                                      NewDriverName;
		} params;
		params.NewDriverName = NewDriverName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewDriverIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::SetOutputDriverByIndex(int32_t NewDriverIndex)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12359);
		
		struct
		{
			int32_t                                            NewDriverIndex;
		} params;
		params.NewDriverIndex = NewDriverIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.SetLocale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Locale                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::SetLocale(const class FString& Locale)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12358);
		
		struct
		{
			class FString                                      Locale;
		} params;
		params.Locale = Locale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::SetGlobalParameterByName(const class FName& Name, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12357);
		
		struct
		{
			class FName                                        Name;
			float                                              Value;
		} params;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAttachLocation                                    LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODAudioComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFMODAudioComponent* UFMODBlueprintStatics::PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12356);
		
		struct
		{
			class UFMODEvent*                                  Event;
			class USceneComponent*                             AttachToComponent;
			class FName                                        AttachPointName;
			struct FVector                        Location;
			EAttachLocation                                    LocationType;
			bool                                               bStopWhenAttachedToDestroyed;
			bool                                               bAutoPlay;
			bool                                               bAutoDestroy;
			class UFMODAudioComponent*                         ReturnValue;
		} params;
		params.Event = Event;
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.LocationType = LocationType;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.bAutoPlay = bAutoPlay;
		params.bAutoDestroy = bAutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFMODEventInstance                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FFMODEventInstance UFMODBlueprintStatics::PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12355);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UFMODEvent*                                  Event;
			struct FTransform                     Location;
			bool                                               bAutoPlay;
			unsigned char                                      UnknownData_0000[0x7];
			struct FFMODEventInstance                          ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		params.Location = Location;
		params.bAutoPlay = bAutoPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFMODEventInstance                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FFMODEventInstance UFMODBlueprintStatics::PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12354);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UFMODEvent*                                  Event;
			bool                                               bAutoPlay;
			unsigned char                                      UnknownData_0001[0x7];
			struct FFMODEventInstance                          ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		params.bAutoPlay = bAutoPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.MixerSuspend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::MixerSuspend()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12353);
		
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
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.MixerResume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::MixerResume()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12352);
		
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
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12351);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UFMODEvent*                                  Event;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::LoadBankSampleData(class UFMODBank* Bank)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12350);
		
		struct
		{
			class UFMODBank*                                   Bank;
		} params;
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadBank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBlocking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoadSampleData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12349);
		
		struct
		{
			class UFMODBank*                                   Bank;
			bool                                               bBlocking;
			bool                                               bLoadSampleData;
		} params;
		params.Bank = Bank;
		params.bBlocking = bBlocking;
		params.bLoadSampleData = bLoadSampleData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.IsWorldAudible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFMODBlueprintStatics::IsWorldAudible(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12348);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			bool                                               ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFMODBlueprintStatics::IsBankLoaded(class UFMODBank* Bank)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12347);
		
		struct
		{
			class UFMODBank*                                   Bank;
			bool                                               ReturnValue;
		} params;
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFMODBlueprintStatics::GetOutputDrivers()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12346);
		
		struct
		{
			TArray<class FString>                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::GetGlobalParameterValueByName(const class FName& Name, float* UserValue, float* FinalValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12345);
		
		struct
		{
			class FName                                        Name;
			float                                              UserValue;
			float                                              FinalValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserValue != nullptr)
			*UserValue = params.UserValue;
		if (FinalValue != nullptr)
			*FinalValue = params.FinalValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFMODBlueprintStatics::GetGlobalParameterByName(const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12344);
		
		struct
		{
			class FName                                        Name;
			float                                              ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.FindEventInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FFMODEventInstance>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FFMODEventInstance> UFMODBlueprintStatics::FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12343);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			class UFMODEvent*                                  Event;
			TArray<struct FFMODEventInstance>                  ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.FindEventByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODEvent*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFMODEvent* UFMODBlueprintStatics::FindEventByName(const class FString& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12342);
		
		struct
		{
			class FString                                      Name;
			class UFMODEvent*                                  ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.FindAssetByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFMODAsset*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFMODAsset* UFMODBlueprintStatics::FindAssetByName(const class FString& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12341);
		
		struct
		{
			class FString                                      Name;
			class UFMODAsset*                                  ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Release                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12340);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			bool                                               Release;
		} params;
		params.EventInstance = EventInstance;
		params.Release = Release;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12339);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			float                                              Volume;
		} params;
		params.EventInstance = EventInstance;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12338);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			unsigned char                                      UnknownData_0002[0x8];
			struct FTransform                     Location;
		} params;
		params.EventInstance = EventInstance;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EFMODEventProperty                                 Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, EFMODEventProperty Property, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12337);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			EFMODEventProperty                                 Property;
			unsigned char                                      UnknownData_0003[0x3];
			float                                              Value;
		} params;
		params.EventInstance = EventInstance;
		params.Property = Property;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12336);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			float                                              Pitch;
		} params;
		params.EventInstance = EventInstance;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12335);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			bool                                               paused;
		} params;
		params.EventInstance = EventInstance;
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const class FName& Name, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12334);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			class FName                                        Name;
			float                                              Value;
		} params;
		params.EventInstance = EventInstance;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceRelease(const struct FFMODEventInstance& EventInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12333);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
		} params;
		params.EventInstance = EventInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstancePlay(const struct FFMODEventInstance& EventInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12332);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
		} params;
		params.EventInstance = EventInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceKeyOff(const struct FFMODEventInstance& EventInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12331);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
		} params;
		params.EventInstance = EventInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFMODBlueprintStatics::EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12330);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			bool                                               ReturnValue;
		} params;
		params.EventInstance = EventInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, const class FName& Name, float* UserValue, float* FinalValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12329);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			class FName                                        Name;
			float                                              UserValue;
			float                                              FinalValue;
		} params;
		params.EventInstance = EventInstance;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserValue != nullptr)
			*UserValue = params.UserValue;
		if (FinalValue != nullptr)
			*FinalValue = params.FinalValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFMODBlueprintStatics::EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12328);
		
		struct
		{
			struct FFMODEventInstance                          EventInstance;
			class FName                                        Name;
			float                                              ReturnValue;
		} params;
		params.EventInstance = EventInstance;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EFMOD_STUDIO_STOP_MODE                             stopMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::BusStopAllEvents(class UFMODBus* Bus, EFMOD_STUDIO_STOP_MODE stopMode)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12327);
		
		struct
		{
			class UFMODBus*                                    Bus;
			EFMOD_STUDIO_STOP_MODE                             stopMode;
		} params;
		params.Bus = Bus;
		params.stopMode = stopMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::BusSetVolume(class UFMODBus* Bus, float Volume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12326);
		
		struct
		{
			class UFMODBus*                                    Bus;
			float                                              Volume;
		} params;
		params.Bus = Bus;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::BusSetPaused(class UFMODBus* Bus, bool bPaused)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12325);
		
		struct
		{
			class UFMODBus*                                    Bus;
			bool                                               bPaused;
		} params;
		params.Bus = Bus;
		params.bPaused = bPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODBlueprintStatics::BusSetMute(class UFMODBus* Bus, bool bMute)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12324);
		
		struct
		{
			class UFMODBus*                                    Bus;
			bool                                               bMute;
		} params;
		params.Bus = Bus;
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODBlueprintStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODBlueprintStatics::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(127);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.Stop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::Stop()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12323);
		
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
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetVolume(float Volume)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12322);
		
		struct
		{
			float                                              Volume;
		} params;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetTimelinePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetTimelinePosition(int32_t Time)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12321);
		
		struct
		{
			int32_t                                            Time;
		} params;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFMODEventProperty                                 Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetProperty(EFMODEventProperty Property, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12320);
		
		struct
		{
			EFMODEventProperty                                 Property;
			unsigned char                                      UnknownData_0000[0x3];
			float                                              Value;
		} params;
		params.Property = Property;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetProgrammerSoundName(const class FString& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12319);
		
		struct
		{
			class FString                                      Value;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetPitch(float Pitch)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12318);
		
		struct
		{
			float                                              Pitch;
		} params;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetPaused(bool paused)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12317);
		
		struct
		{
			bool                                               paused;
		} params;
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetParameter(const class FName& Name, float Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12316);
		
		struct
		{
			class FName                                        Name;
			float                                              Value;
		} params;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.SetEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFMODEvent*                                  NewEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::SetEvent(class UFMODEvent* NewEvent)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12315);
		
		struct
		{
			class UFMODEvent*                                  NewEvent;
		} params;
		params.NewEvent = NewEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.Release
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::Release()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12314);
		
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
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::Play()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12313);
		
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
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.KeyOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::KeyOff()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12312);
		
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
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.IsPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFMODAudioComponent::IsPlaying()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12311);
		
		struct
		{
			bool                                               ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.GetTimelinePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFMODAudioComponent::GetTimelinePosition()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12310);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.GetProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFMODEventProperty                                 Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFMODAudioComponent::GetProperty(EFMODEventProperty Property)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12309);
		
		struct
		{
			EFMODEventProperty                                 Property;
			unsigned char                                      UnknownData_0001[0x3];
			float                                              ReturnValue;
		} params;
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.GetParameterValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UFMODAudioComponent::GetParameterValue(const class FName& Name, float* UserValue, float* FinalValue)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12308);
		
		struct
		{
			class FName                                        Name;
			float                                              UserValue;
			float                                              FinalValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UserValue != nullptr)
			*UserValue = params.UserValue;
		if (FinalValue != nullptr)
			*FinalValue = params.FinalValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.GetParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UFMODAudioComponent::GetParameter(const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12307);
		
		struct
		{
			class FName                                        Name;
			float                                              ReturnValue;
		} params;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FMODStudio.FMODAudioComponent.GetLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFMODAudioComponent::GetLength()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12306);
		
		struct
		{
			int32_t                                            ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODAudioComponent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(124);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODBus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODBus::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(128);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODBank::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(125);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODBankLookup.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODBankLookup::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(126);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODEventControlSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODEventControlSection::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(133);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFMODAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* AFMODAmbientSound::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(120);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODEvent::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(129);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODEventControlTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODEventControlTrack::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(136);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODEventParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODEventParameterTrack::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(137);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODSnapshot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODSnapshot::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(140);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODPort.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODPort::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(138);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODSnapshotReverb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODSnapshotReverb::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(142);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODSettings::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(139);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFMODVCA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UFMODVCA::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(143);
		return ptr;
	}

}


