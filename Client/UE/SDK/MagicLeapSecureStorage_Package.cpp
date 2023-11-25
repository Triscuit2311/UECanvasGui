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
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureVector(const class FString& Key, const struct FVector& DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14324);
		
		struct
		{
			class FString                                      Key;
			struct FVector                        DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     DataToStore                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureTransform(const class FString& Key, const struct FTransform& DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14323);
		
		struct
		{
			class FString                                      Key;
			struct FTransform                     DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DataToStore                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureString(const class FString& Key, const class FString& DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14322);
		
		struct
		{
			class FString                                      Key;
			class FString                                      DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USaveGame*                                   ObjectToStore                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureSaveGame(const class FString& Key, class USaveGame* ObjectToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14321);
		
		struct
		{
			class FString                                      Key;
			class USaveGame*                                   ObjectToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.ObjectToStore = ObjectToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureRotator(const class FString& Key, const struct FRotator& DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14320);
		
		struct
		{
			class FString                                      Key;
			struct FRotator                       DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureInt64(const class FString& Key, int64_t DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14319);
		
		struct
		{
			class FString                                      Key;
			int64_t                                            DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureInt(const class FString& Key, int32_t DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14318);
		
		struct
		{
			class FString                                      Key;
			int32_t                                            DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureFloat(const class FString& Key, float DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14317);
		
		struct
		{
			class FString                                      Key;
			float                                              DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureByte(const class FString& Key, uint8_t DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14316);
		
		struct
		{
			class FString                                      Key;
			uint8_t                                            DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DataToStore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureBool(const class FString& Key, bool DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14315);
		
		struct
		{
			class FString                                      Key;
			bool                                               DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    DataToStore                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::PutSecureArray(const class FString& Key, TArray<int32_t> DataToStore)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14314);
		
		struct
		{
			class FString                                      Key;
			TArray<int32_t>                                    DataToStore;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		params.DataToStore = DataToStore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                        DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureVector(const class FString& Key, struct FVector* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14313);
		
		struct
		{
			class FString                                      Key;
			struct FVector                        DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                     DataToRetrieve                                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureTransform(const class FString& Key, struct FTransform* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14312);
		
		struct
		{
			class FString                                      Key;
			struct FTransform                     DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureString(const class FString& Key, class FString* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14311);
		
		struct
		{
			class FString                                      Key;
			class FString                                      DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USaveGame*                                   ObjectToRetrieve                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureSaveGame(const class FString& Key, class USaveGame** ObjectToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14310);
		
		struct
		{
			class FString                                      Key;
			class USaveGame*                                   ObjectToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectToRetrieve != nullptr)
			*ObjectToRetrieve = params.ObjectToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                       DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureRotator(const class FString& Key, struct FRotator* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14309);
		
		struct
		{
			class FString                                      Key;
			struct FRotator                       DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureInt64(const class FString& Key, int64_t* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14308);
		
		struct
		{
			class FString                                      Key;
			int64_t                                            DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureInt(const class FString& Key, int32_t* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14307);
		
		struct
		{
			class FString                                      Key;
			int32_t                                            DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureFloat(const class FString& Key, float* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14306);
		
		struct
		{
			class FString                                      Key;
			float                                              DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		uint8_t                                            DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureByte(const class FString& Key, uint8_t* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14305);
		
		struct
		{
			class FString                                      Key;
			uint8_t                                            DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureBool(const class FString& Key, bool* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14304);
		
		struct
		{
			class FString                                      Key;
			bool                                               DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    DataToRetrieve                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::GetSecureArray(const class FString& Key, TArray<int32_t>* DataToRetrieve)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14303);
		
		struct
		{
			class FString                                      Key;
			TArray<int32_t>                                    DataToRetrieve;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataToRetrieve != nullptr)
			*DataToRetrieve = params.DataToRetrieve;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMagicLeapSecureStorage::DeleteSecureData(const class FString& Key)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(14302);
		
		struct
		{
			class FString                                      Key;
			bool                                               ReturnValue;
		} params;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMagicLeapSecureStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UMagicLeapSecureStorage::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(760);
		return ptr;
	}

}


