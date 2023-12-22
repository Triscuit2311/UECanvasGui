#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapSecureStorage.MagicLeapSecureStorage
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapSecureStorage* GetDefaultObj();

	bool PutSecureVector(const class FString& Key, struct FVector& DataToStore);
	bool PutSecureTransform(const class FString& Key, struct FTransform& DataToStore);
	bool PutSecureString(const class FString& Key, const class FString& DataToStore);
	bool PutSecureSaveGame(const class FString& Key, class USaveGame* ObjectToStore);
	bool PutSecureRotator(const class FString& Key, struct FRotator& DataToStore);
	bool PutSecureInt64(const class FString& Key, int64 DataToStore);
	bool PutSecureInt(const class FString& Key, int32 DataToStore);
	bool PutSecureFloat(const class FString& Key, float DataToStore);
	bool PutSecureByte(const class FString& Key, uint8 DataToStore);
	bool PutSecureBool(const class FString& Key, bool DataToStore);
	bool PutSecureArray(const class FString& Key, TArray<int32>& DataToStore);
	bool GetSecureVector(const class FString& Key, struct FVector* DataToRetrieve);
	bool GetSecureTransform(const class FString& Key, struct FTransform* DataToRetrieve);
	bool GetSecureString(const class FString& Key, class FString* DataToRetrieve);
	bool GetSecureSaveGame(const class FString& Key, class USaveGame** ObjectToRetrieve);
	bool GetSecureRotator(const class FString& Key, struct FRotator* DataToRetrieve);
	bool GetSecureInt64(const class FString& Key, int64* DataToRetrieve);
	bool GetSecureInt(const class FString& Key, int32* DataToRetrieve);
	bool GetSecureFloat(const class FString& Key, float* DataToRetrieve);
	bool GetSecureByte(const class FString& Key, uint8* DataToRetrieve);
	bool GetSecureBool(const class FString& Key, bool* DataToRetrieve);
	bool GetSecureArray(const class FString& Key, TArray<int32>* DataToRetrieve);
	bool DeleteSecureData(const class FString& Key);
};

}


