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
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     AssetPtr                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14418);
		
		struct
		{
			class UObject*                                     AssetPtr;
			TArray<class FName>                                ReturnValue;
		} params;
		params.AssetPtr = AssetPtr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  AssetData                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14417);
		
		struct
		{
			struct FAssetData                                  AssetData;
			TArray<class FName>                                ReturnValue;
		} params;
		params.AssetData = AssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AssetPathName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(const class FName& AssetPathName)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14416);
		
		struct
		{
			class FName                                        AssetPathName;
			TArray<class FName>                                ReturnValue;
		} params;
		params.AssetPathName = AssetPathName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetCollections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UAssetTagsSubsystem::GetCollections()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14415);
		
		struct
		{
			TArray<class FName>                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetData>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14414);
		
		struct
		{
			class FName                                        Name;
			TArray<struct FAssetData>                          ReturnValue;
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
	 * 		Name   -> Function AssetTags.AssetTagsSubsystem.CollectionExists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetTagsSubsystem::CollectionExists(const class FName& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14413);
		
		struct
		{
			class FName                                        Name;
			bool                                               ReturnValue;
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
	 * 		Name   -> PredefinedFunction UAssetTagsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UAssetTagsSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(808);
		return ptr;
	}

}


