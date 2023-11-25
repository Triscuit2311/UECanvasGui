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
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14353);
		
		struct
		{
			class AActor*                                      InActor;
			struct FActorLayer                                 Layer;
		} params;
		params.InActor = InActor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 ActorLayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14352);
		
		struct
		{
			class UObject*                                     WorldContextObject;
			struct FActorLayer                                 ActorLayer;
			TArray<class AActor*>                              ReturnValue;
		} params;
		params.WorldContextObject = WorldContextObject;
		params.ActorLayer = ActorLayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void ULayersBlueprintLibrary::AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14351);
		
		struct
		{
			class AActor*                                      InActor;
			struct FActorLayer                                 Layer;
		} params;
		params.InActor = InActor;
		params.Layer = Layer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULayersBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* ULayersBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(793);
		return ptr;
	}

}


