#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class MagicLeapIdentity.MagicLeapIdentity
class UMagicLeapIdentity : public UObject
{
public:
	uint8                                        Pad_190E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapIdentity* GetDefaultObj();

	void RequestIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute>& AttributeValue);
	enum class EMagicLeapIdentityError RequestAttributeValueAsync(TArray<enum class EMagicLeapIdentityKey>& RequestedAttributeList, FDelegateProperty_& ResultDelegate);
	enum class EMagicLeapIdentityError RequestAttributeValue(TArray<enum class EMagicLeapIdentityKey>& RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues);
	void ModifyIdentityAttributeValueDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey>& AttributesUpdatedSuccessfully);
	void GetAllAvailableAttributesAsync(FDelegateProperty_& ResultDelegate);
	enum class EMagicLeapIdentityError GetAllAvailableAttributes(TArray<enum class EMagicLeapIdentityKey>* AvailableAttributes);
	void AvailableIdentityAttributesDelegate__DelegateSignature(enum class EMagicLeapIdentityError ResultCode, TArray<enum class EMagicLeapIdentityKey>& AvailableAttributes);
};

}


