#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MagicLeapPrivileges.MagicLeapPrivilegesFunctionLibrary
class UMagicLeapPrivilegesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapPrivilegesFunctionLibrary* GetDefaultObj();

	bool RequestPrivilegeAsync(enum class EMagicLeapPrivilege Privilege, FDelegateProperty_& ResultDelegate);
	bool RequestPrivilege(enum class EMagicLeapPrivilege Privilege);
	bool CheckPrivilege(enum class EMagicLeapPrivilege Privilege);
};

}


