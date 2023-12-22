#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiAccount
class UZeuzApiAccount : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiAccount* GetDefaultObj();

	void DelegateAccountTeamupdateBPS__DelegateSignature();
	void DelegateAccountTeamupdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountTeamupdateBP__DelegateSignature(const class FString& Error);
	void DelegateAccountTeamgetBPS__DelegateSignature(const struct FZeuzTeam& Result);
	void DelegateAccountTeamgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountTeamgetBP__DelegateSignature(const struct FZeuzTeam& Result, const class FString& Error);
	void DelegateAccountTeamdeleteBPS__DelegateSignature();
	void DelegateAccountTeamdeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountTeamdeleteBP__DelegateSignature(const class FString& Error);
	void DelegateAccountTeamcreateBPS__DelegateSignature(const class FString& Result);
	void DelegateAccountTeamcreateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountTeamcreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateAccountQuotasetBPS__DelegateSignature(struct FZeuzAccountQuotaInfo& Result);
	void DelegateAccountQuotasetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountQuotasetBP__DelegateSignature(struct FZeuzAccountQuotaInfo& Result, const class FString& Error);
	void DelegateAccountQuotagetBPS__DelegateSignature(struct FZeuzAccountQuotaInfo& Result);
	void DelegateAccountQuotagetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountQuotagetBP__DelegateSignature(struct FZeuzAccountQuotaInfo& Result, const class FString& Error);
	void DelegateAccountProjectupdateBPS__DelegateSignature();
	void DelegateAccountProjectupdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectupdateBP__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectsgetBPS__DelegateSignature(TArray<struct FZeuzProj>& Result);
	void DelegateAccountProjectsgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectsgetBP__DelegateSignature(TArray<struct FZeuzProj>& Result, const class FString& Error);
	void DelegateAccountProjectgetBPS__DelegateSignature(const struct FZeuzProj& Result);
	void DelegateAccountProjectgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectgetBP__DelegateSignature(const struct FZeuzProj& Result, const class FString& Error);
	void DelegateAccountProjectdeleteBPS__DelegateSignature();
	void DelegateAccountProjectdeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectdeleteBP__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectcreateBPS__DelegateSignature(const class FString& Result);
	void DelegateAccountProjectcreateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountProjectcreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateAccountEnvupdateBPS__DelegateSignature();
	void DelegateAccountEnvupdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvupdateBP__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvsgetBPS__DelegateSignature(TArray<struct FZeuzEnv>& Result);
	void DelegateAccountEnvsgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvsgetBP__DelegateSignature(TArray<struct FZeuzEnv>& Result, const class FString& Error);
	void DelegateAccountEnvserviceupdateBPS__DelegateSignature();
	void DelegateAccountEnvserviceupdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvserviceupdateBP__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvservicedeleteBPS__DelegateSignature();
	void DelegateAccountEnvservicedeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvservicedeleteBP__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvgetBPS__DelegateSignature(const struct FZeuzEnv& Result);
	void DelegateAccountEnvgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvgetBP__DelegateSignature(const struct FZeuzEnv& Result, const class FString& Error);
	void DelegateAccountEnvdeleteBPS__DelegateSignature();
	void DelegateAccountEnvdeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvdeleteBP__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvcreateBPS__DelegateSignature(const class FString& Result);
	void DelegateAccountEnvcreateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountEnvcreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateAccountDevquicksetupBPS__DelegateSignature(struct FZeuzAccountDevQuickSetupOut& Result);
	void DelegateAccountDevquicksetupBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDevquicksetupBP__DelegateSignature(struct FZeuzAccountDevQuickSetupOut& Result, const class FString& Error);
	void DelegateAccountDeveloperupdateBPS__DelegateSignature();
	void DelegateAccountDeveloperupdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperupdateBP__DelegateSignature(const class FString& Error);
	void DelegateAccountDevelopersgetBPS__DelegateSignature(TArray<struct FZeuzDeveloper>& Result);
	void DelegateAccountDevelopersgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDevelopersgetBP__DelegateSignature(TArray<struct FZeuzDeveloper>& Result, const class FString& Error);
	void DelegateAccountDevelopersetpwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result);
	void DelegateAccountDevelopersetpwhashBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDevelopersetpwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error);
	void DelegateAccountDeveloperrevokeBPS__DelegateSignature();
	void DelegateAccountDeveloperrevokeBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperrevokeBP__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature();
	void DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperpasswordresetBPS__DelegateSignature();
	void DelegateAccountDeveloperpasswordresetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperpasswordresetBP__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature(bool Result);
	void DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature(bool Result, const class FString& Error);
	void DelegateAccountDeveloperinviteBPS__DelegateSignature(const class FString& Result);
	void DelegateAccountDeveloperinviteBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDeveloperinviteBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateAccountDevelopergetBPS__DelegateSignature(const struct FZeuzDeveloper& Result);
	void DelegateAccountDevelopergetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDevelopergetBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error);
	void DelegateAccountDevelopercreatepwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result);
	void DelegateAccountDevelopercreatepwhashBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDevelopercreatepwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error);
	void DelegateAccountDevelopercreateBPS__DelegateSignature(const class FString& Result);
	void DelegateAccountDevelopercreateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountDevelopercreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateAccountAccountupdateBPS__DelegateSignature();
	void DelegateAccountAccountupdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountAccountupdateBP__DelegateSignature(const class FString& Error);
	void DelegateAccountAccountgetBPS__DelegateSignature(const struct FZeuzAccount& Result);
	void DelegateAccountAccountgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountAccountgetBP__DelegateSignature(const struct FZeuzAccount& Result, const class FString& Error);
	void DelegateAccountAccountcreateBPS__DelegateSignature(const class FString& Result);
	void DelegateAccountAccountcreateBPF__DelegateSignature(const class FString& Error);
	void DelegateAccountAccountcreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void AccountTeamupdateBP(const struct FZeuzTeam& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountTeamgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountTeamdeleteBP(struct FZeuzAccountTeamDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountTeamcreateBP(struct FZeuzAccountTeamCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountQuotasetBP(struct FZeuzAccountQuotaInfo& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountQuotagetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountProjectupdateBP(const struct FZeuzProj& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountProjectsgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountProjectgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountProjectdeleteBP(struct FZeuzAccountProjectDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountProjectcreateBP(struct FZeuzAccountProjectCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvupdateBP(const struct FZeuzEnv& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvsgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvserviceupdateBP(const struct FZeuzServiceCfg& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvservicedeleteBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvdeleteBP(struct FZeuzAccountEnvDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountEnvcreateBP(struct FZeuzAccountEnvCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDevquicksetupBP(struct FZeuzAccountDevQuickSetupIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDeveloperupdateBP(const struct FZeuzDeveloper& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDevelopersgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDevelopersetpwhashBP(struct FZeuzAccountDeveloperSetPwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDeveloperrevokeBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDeveloperpasswordresetrequestBP(struct FZeuzAccountDeveloperPasswordResetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDeveloperpasswordresetBP(struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDeveloperispasswordresethashexpiredBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDeveloperinviteBP(struct FZeuzAccountDeveloperCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDevelopergetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDevelopercreatepwhashBP(struct FZeuzAccountDeveloperCreatePwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountDevelopercreateBP(struct FZeuzAccountDeveloperCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountAccountupdateBP(const struct FZeuzAccount& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountAccountgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AccountAccountcreateBP(struct FZeuzAccountCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiAdmin
class UZeuzApiAdmin : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiAdmin* GetDefaultObj();

	void DelegateAdminStatsBPS__DelegateSignature(struct FZeuzAdminStatsOut& Result);
	void DelegateAdminStatsBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminStatsBP__DelegateSignature(struct FZeuzAdminStatsOut& Result, const class FString& Error);
	void DelegateAdminProjectsBPS__DelegateSignature(TArray<struct FZeuzProj>& Result);
	void DelegateAdminProjectsBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminProjectsBP__DelegateSignature(TArray<struct FZeuzProj>& Result, const class FString& Error);
	void DelegateAdminLogsBPS__DelegateSignature(const struct FZeuzLogsearchOut& Result);
	void DelegateAdminLogsBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminLogsBP__DelegateSignature(const struct FZeuzLogsearchOut& Result, const class FString& Error);
	void DelegateAdminItemsBPS__DelegateSignature(struct FZeuzAdminItemsOut& Result);
	void DelegateAdminItemsBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminItemsBP__DelegateSignature(struct FZeuzAdminItemsOut& Result, const class FString& Error);
	void DelegateAdminGetquotaBPS__DelegateSignature(int32 Result);
	void DelegateAdminGetquotaBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminGetquotaBP__DelegateSignature(int32 Result, const class FString& Error);
	void DelegateAdminEnvironmentsBPS__DelegateSignature(TArray<struct FZeuzEnv>& Result);
	void DelegateAdminEnvironmentsBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminEnvironmentsBP__DelegateSignature(TArray<struct FZeuzEnv>& Result, const class FString& Error);
	void DelegateAdminDevelopersBPS__DelegateSignature(TArray<struct FZeuzDeveloper>& Result);
	void DelegateAdminDevelopersBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminDevelopersBP__DelegateSignature(TArray<struct FZeuzDeveloper>& Result, const class FString& Error);
	void DelegateAdminCountresourcesperaccBPS__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut>& Result);
	void DelegateAdminCountresourcesperaccBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminCountresourcesperaccBP__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut>& Result, const class FString& Error);
	void DelegateAdminCountresourcesBPS__DelegateSignature(int32 Result);
	void DelegateAdminCountresourcesBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminCountresourcesBP__DelegateSignature(int32 Result, const class FString& Error);
	void DelegateAdminAccountsBPS__DelegateSignature(TArray<struct FZeuzAccount>& Result);
	void DelegateAdminAccountsBPF__DelegateSignature(const class FString& Error);
	void DelegateAdminAccountsBP__DelegateSignature(TArray<struct FZeuzAccount>& Result, const class FString& Error);
	void AdminStatsBP(struct FZeuzAdminStatsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminProjectsBP(struct FZeuzAdminAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminLogsBP(struct FZeuzAdminLogsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminItemsBP(struct FZeuzAdminItemsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminGetquotaBP(struct FZeuzAdminTestpoolIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminEnvironmentsBP(struct FZeuzAdminEnvIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminDevelopersBP(struct FZeuzAdminAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminCountresourcesperaccBP(struct FZeuzAdminTestpoolIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminCountresourcesBP(struct FZeuzAdminCountResoucesIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AdminAccountsBP(struct FZeuzAdminAccountsIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiAllocation
class UZeuzApiAllocation : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiAllocation* GetDefaultObj();

	void DelegateAllocationUpdateBPS__DelegateSignature(struct FZeuzAllocationInfo& Result);
	void DelegateAllocationUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateAllocationUpdateBP__DelegateSignature(struct FZeuzAllocationInfo& Result, const class FString& Error);
	void DelegateAllocationRequestServicesBPS__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo>& Result);
	void DelegateAllocationRequestServicesBPF__DelegateSignature(const class FString& Error);
	void DelegateAllocationRequestServicesBP__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo>& Result, const class FString& Error);
	void DelegateAllocationGetBPS__DelegateSignature(struct FZeuzAllocationGetOut& Result);
	void DelegateAllocationGetBPF__DelegateSignature(const class FString& Error);
	void DelegateAllocationGetBP__DelegateSignature(struct FZeuzAllocationGetOut& Result, const class FString& Error);
	void DelegateAllocationCreateBPS__DelegateSignature(struct FZeuzAllocationInfo& Result);
	void DelegateAllocationCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateAllocationCreateBP__DelegateSignature(struct FZeuzAllocationInfo& Result, const class FString& Error);
	void AllocationUpdateBP(struct FZeuzAllocationUpdateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AllocationRequestServicesBP(struct FZeuzAllocationRequestServiceIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AllocationGetBP(struct FZeuzAllocationGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AllocationCreateBP(struct FZeuzAllocationCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiApikey
class UZeuzApiApikey : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiApikey* GetDefaultObj();

	void DelegateApikeyUpdateBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
	void DelegateApikeyUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyUpdateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
	void DelegateApikeySetpwhashBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
	void DelegateApikeySetpwhashBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeySetpwhashBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
	void DelegateApikeyRevokeBPS__DelegateSignature();
	void DelegateApikeyRevokeBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyRevokeBP__DelegateSignature(const class FString& Error);
	void DelegateApikeyGetBPS__DelegateSignature(TArray<struct FZeuzAPIKey>& Result);
	void DelegateApikeyGetBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyGetBP__DelegateSignature(TArray<struct FZeuzAPIKey>& Result, const class FString& Error);
	void DelegateApikeyGetallBPS__DelegateSignature(TArray<struct FZeuzAPIKey>& Result);
	void DelegateApikeyGetallBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyGetallBP__DelegateSignature(TArray<struct FZeuzAPIKey>& Result, const class FString& Error);
	void DelegateApikeyGenerateBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
	void DelegateApikeyGenerateBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyGenerateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
	void DelegateApikeyDeleteBPS__DelegateSignature();
	void DelegateApikeyDeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyDeleteBP__DelegateSignature(const class FString& Error);
	void DelegateApikeyCreateBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
	void DelegateApikeyCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateApikeyCreateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
	void ApikeyUpdateBP(const struct FZeuzAPIKey& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeySetpwhashBP(struct FZeuzAPIKeyPwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeyRevokeBP(struct FZeuzAPIKeyDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeyGetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeyGetallBP(struct FZeuzAPIKeyGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeyGenerateBP(struct FZeuzAPIKeyGenerateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeyDeleteBP(struct FZeuzAPIKeyDeleteIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ApikeyCreateBP(const struct FZeuzAPIKey& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiAuth
class UZeuzApiAuth : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiAuth* GetDefaultObj();

	void DelegateAuthSessiondelBPS__DelegateSignature();
	void DelegateAuthSessiondelBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthSessiondelBP__DelegateSignature(const class FString& Error);
	void DelegateAuthLogoutBPS__DelegateSignature();
	void DelegateAuthLogoutBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthLogoutBP__DelegateSignature(const class FString& Error);
	void DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzAuthLoginResult& Result);
	void DelegateAuthLoginBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthLoginBP__DelegateSignature(const struct FZeuzAuthLoginResult& Result, const class FString& Error);
	void DelegateAuthCheckBPS__DelegateSignature(const struct FZeuzTimestamp& Result);
	void DelegateAuthCheckBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthCheckBP__DelegateSignature(const struct FZeuzTimestamp& Result, const class FString& Error);
	void DelegateAuthActivesessionsgetBPS__DelegateSignature(TArray<struct FZeuzSession>& Result);
	void DelegateAuthActivesessionsgetBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthActivesessionsgetBP__DelegateSignature(TArray<struct FZeuzSession>& Result, const class FString& Error);
	void AuthSessiondelBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AuthLogoutBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AuthLoginBP(struct FZeuzAuthLoginIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AuthCheckBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void AuthActivesessionsgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiEcho
class UZeuzApiEcho : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiEcho* GetDefaultObj();

	void Echo4BP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void Echo3BP(struct FZeuzEcho3In& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void Echo2BP(struct FZeuzEcho2In& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void Echo1BP(struct FZeuzEchoIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateEcho4BPS__DelegateSignature(const class FString& Result);
	void DelegateEcho4BPF__DelegateSignature(const class FString& Error);
	void DelegateEcho4BP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateEcho3BPS__DelegateSignature(struct FZeuzEchoOut& Result);
	void DelegateEcho3BPF__DelegateSignature(const class FString& Error);
	void DelegateEcho3BP__DelegateSignature(struct FZeuzEchoOut& Result, const class FString& Error);
	void DelegateEcho2BPS__DelegateSignature(struct FZeuzEcho2Out& Result);
	void DelegateEcho2BPF__DelegateSignature(const class FString& Error);
	void DelegateEcho2BP__DelegateSignature(struct FZeuzEcho2Out& Result, const class FString& Error);
	void DelegateEcho1BPS__DelegateSignature(struct FZeuzEchoOut& Result);
	void DelegateEcho1BPF__DelegateSignature(const class FString& Error);
	void DelegateEcho1BP__DelegateSignature(struct FZeuzEchoOut& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiImagemanager
class UZeuzApiImagemanager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiImagemanager* GetDefaultObj();

	void ImagemanagerPushFileUrlBP(struct FZeuzImageManagerPresignedFileUrlIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerPushBP(struct FZeuzImageManagerManifest& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerPullFileUrlBP(struct FZeuzImageManagerPresignedFileUrlIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerPullBP(struct FZeuzImageManagerPullInput& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerPublishBP(struct FZeuzImageManagerPublishInput& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerListBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerGetpublishstateBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ImagemanagerDiscardBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateImagemanagerPushFileUrlBPS__DelegateSignature(const class FString& Result);
	void DelegateImagemanagerPushFileUrlBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerPushFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateImagemanagerPushBPS__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result);
	void DelegateImagemanagerPushBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerPushBP__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error);
	void DelegateImagemanagerPullFileUrlBPS__DelegateSignature(const class FString& Result);
	void DelegateImagemanagerPullFileUrlBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerPullFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateImagemanagerPullBPS__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result);
	void DelegateImagemanagerPullBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerPullBP__DelegateSignature(struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error);
	void DelegateImagemanagerPublishBPS__DelegateSignature(struct FZeuzImagemanagerPublishState& Result);
	void DelegateImagemanagerPublishBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerPublishBP__DelegateSignature(struct FZeuzImagemanagerPublishState& Result, const class FString& Error);
	void DelegateImagemanagerListBPS__DelegateSignature(TArray<struct FZeuzImageManagerListEntry>& Result);
	void DelegateImagemanagerListBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerListBP__DelegateSignature(TArray<struct FZeuzImageManagerListEntry>& Result, const class FString& Error);
	void DelegateImagemanagerGetpublishstateBPS__DelegateSignature(struct FZeuzImagemanagerPublishState& Result);
	void DelegateImagemanagerGetpublishstateBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerGetpublishstateBP__DelegateSignature(struct FZeuzImagemanagerPublishState& Result, const class FString& Error);
	void DelegateImagemanagerDiscardBPS__DelegateSignature();
	void DelegateImagemanagerDiscardBPF__DelegateSignature(const class FString& Error);
	void DelegateImagemanagerDiscardBP__DelegateSignature(const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiKVStore
class UZeuzApiKVStore : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiKVStore* GetDefaultObj();

	void KVStorePutBP(struct FZeuzKVStorePutIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void KVStoreGetBP(struct FZeuzKVStoreKey& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void KVStoreDelBP(struct FZeuzKVStoreDelIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateKVStorePutBPS__DelegateSignature();
	void DelegateKVStorePutBPF__DelegateSignature(const class FString& Error);
	void DelegateKVStorePutBP__DelegateSignature(const class FString& Error);
	void DelegateKVStoreGetBPS__DelegateSignature(struct FZeuzKVStoreKVEntry& Result);
	void DelegateKVStoreGetBPF__DelegateSignature(const class FString& Error);
	void DelegateKVStoreGetBP__DelegateSignature(struct FZeuzKVStoreKVEntry& Result, const class FString& Error);
	void DelegateKVStoreDelBPS__DelegateSignature();
	void DelegateKVStoreDelBPF__DelegateSignature(const class FString& Error);
	void DelegateKVStoreDelBP__DelegateSignature(const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiLobby
class UZeuzApiLobby : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiLobby* GetDefaultObj();

	void LobbyUserBP(struct FZeuzLobbyUserIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyUpdateBP(struct FZeuzLobbyStateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyStartBP(struct FZeuzLobbyStartDestroy& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyRefreshBP(struct FZeuzLobbyRefresh& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyQueryBP(struct FZeuzLobbyQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyLeaveBP(struct FZeuzLobbyJoin& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyKickBP(struct FZeuzLobbyKick& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyJoinBP(struct FZeuzLobbyJoin& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyDestroyBP(struct FZeuzLobbyStartDestroy& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LobbyCreateBP(struct FZeuzLobbyStateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateLobbyUserBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result);
	void DelegateLobbyUserBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyUserBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error);
	void DelegateLobbyUpdateBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result);
	void DelegateLobbyUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyUpdateBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error);
	void DelegateLobbyStartBPS__DelegateSignature(struct FZeuzLobbyServerConnect& Result);
	void DelegateLobbyStartBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyStartBP__DelegateSignature(struct FZeuzLobbyServerConnect& Result, const class FString& Error);
	void DelegateLobbyRefreshBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result);
	void DelegateLobbyRefreshBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyRefreshBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error);
	void DelegateLobbyQueryBPS__DelegateSignature(struct FZeuzLobbyQueryOut& Result);
	void DelegateLobbyQueryBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyQueryBP__DelegateSignature(struct FZeuzLobbyQueryOut& Result, const class FString& Error);
	void DelegateLobbyLeaveBPS__DelegateSignature();
	void DelegateLobbyLeaveBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyLeaveBP__DelegateSignature(const class FString& Error);
	void DelegateLobbyKickBPS__DelegateSignature();
	void DelegateLobbyKickBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyKickBP__DelegateSignature(const class FString& Error);
	void DelegateLobbyJoinBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result);
	void DelegateLobbyJoinBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyJoinBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error);
	void DelegateLobbyDestroyBPS__DelegateSignature();
	void DelegateLobbyDestroyBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyDestroyBP__DelegateSignature(const class FString& Error);
	void DelegateLobbyCreateBPS__DelegateSignature(struct FZeuzLobbyUsersOut& Result);
	void DelegateLobbyCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateLobbyCreateBP__DelegateSignature(struct FZeuzLobbyUsersOut& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiLocality
class UZeuzApiLocality : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiLocality* GetDefaultObj();

	void LocalityRegionUpdateBP(const struct FZeuzRegion& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityRegionRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityRegionGetBP(struct FZeuzLocalityRegionGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityRegionCreateBP(const struct FZeuzRegion& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityProviderUpdateBP(const struct FZeuzProvider& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityProviderRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityProviderGetBP(struct FZeuzLocalityProviderGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityProviderCreateBP(const struct FZeuzProvider& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityLocationUpdateBP(const struct FZeuzLocation& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityLocationRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityLocationGetBP(struct FZeuzLocalityLocationGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LocalityLocationCreateBP(const struct FZeuzLocation& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateLocalityRegionUpdateBPS__DelegateSignature(const struct FZeuzRegion& Result);
	void DelegateLocalityRegionUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityRegionUpdateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error);
	void DelegateLocalityRegionRemoveBPS__DelegateSignature();
	void DelegateLocalityRegionRemoveBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityRegionRemoveBP__DelegateSignature(const class FString& Error);
	void DelegateLocalityRegionGetBPS__DelegateSignature(TArray<struct FZeuzRegion>& Result);
	void DelegateLocalityRegionGetBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityRegionGetBP__DelegateSignature(TArray<struct FZeuzRegion>& Result, const class FString& Error);
	void DelegateLocalityRegionCreateBPS__DelegateSignature(const struct FZeuzRegion& Result);
	void DelegateLocalityRegionCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityRegionCreateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error);
	void DelegateLocalityProviderUpdateBPS__DelegateSignature(const struct FZeuzProvider& Result);
	void DelegateLocalityProviderUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityProviderUpdateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error);
	void DelegateLocalityProviderRemoveBPS__DelegateSignature();
	void DelegateLocalityProviderRemoveBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityProviderRemoveBP__DelegateSignature(const class FString& Error);
	void DelegateLocalityProviderGetBPS__DelegateSignature(TArray<struct FZeuzProvider>& Result);
	void DelegateLocalityProviderGetBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityProviderGetBP__DelegateSignature(TArray<struct FZeuzProvider>& Result, const class FString& Error);
	void DelegateLocalityProviderCreateBPS__DelegateSignature(const struct FZeuzProvider& Result);
	void DelegateLocalityProviderCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityProviderCreateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error);
	void DelegateLocalityLocationUpdateBPS__DelegateSignature(const struct FZeuzLocation& Result);
	void DelegateLocalityLocationUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityLocationUpdateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error);
	void DelegateLocalityLocationRemoveBPS__DelegateSignature();
	void DelegateLocalityLocationRemoveBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityLocationRemoveBP__DelegateSignature(const class FString& Error);
	void DelegateLocalityLocationGetBPS__DelegateSignature(TArray<struct FZeuzLocation>& Result);
	void DelegateLocalityLocationGetBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityLocationGetBP__DelegateSignature(TArray<struct FZeuzLocation>& Result, const class FString& Error);
	void DelegateLocalityLocationCreateBPS__DelegateSignature(const struct FZeuzLocation& Result);
	void DelegateLocalityLocationCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateLocalityLocationCreateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiLogsearch
class UZeuzApiLogsearch : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiLogsearch* GetDefaultObj();

	void LogsearchStartexportBP(struct FZeuzLogsearchAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LogsearchDownloadexportBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LogsearchCheckexportBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void LogsearchAccountBP(struct FZeuzLogsearchAccountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateLogsearchStartexportBPS__DelegateSignature(const class FString& Result);
	void DelegateLogsearchStartexportBPF__DelegateSignature(const class FString& Error);
	void DelegateLogsearchStartexportBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateLogsearchDownloadexportBPS__DelegateSignature(const class FString& Result);
	void DelegateLogsearchDownloadexportBPF__DelegateSignature(const class FString& Error);
	void DelegateLogsearchDownloadexportBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateLogsearchCheckexportBPS__DelegateSignature(struct FZeuzLogsearchLogsStatus& Result);
	void DelegateLogsearchCheckexportBPF__DelegateSignature(const class FString& Error);
	void DelegateLogsearchCheckexportBP__DelegateSignature(struct FZeuzLogsearchLogsStatus& Result, const class FString& Error);
	void DelegateLogsearchAccountBPS__DelegateSignature(struct FZeuzLogsearchAccountOut& Result);
	void DelegateLogsearchAccountBPF__DelegateSignature(const class FString& Error);
	void DelegateLogsearchAccountBP__DelegateSignature(struct FZeuzLogsearchAccountOut& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiMachine
class UZeuzApiMachine : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiMachine* GetDefaultObj();

	void MachineUpdateresourceBP(struct FZeuzMachineResourceUpdateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineSettagsBP(TArray<struct FZeuzMachineTagsSetIn>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineResourcedeprovisionBP(struct FZeuzMachineResourceDeprovisionIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineGettagsBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineGetresourcesBP(struct FZeuzMachineResourceGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineGetinfoBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineGetBP(struct FZeuzMachineGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineDeallocateBP(struct FZeuzMachineResourceDeallocateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineCountresourcesBP(struct FZeuzMachineResourcesCountIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineAllocateBP(struct FZeuzMachineResourceAllocateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MachineAddresourceBP(struct FZeuzMachineResourceDataIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateMachineUpdateresourceBPS__DelegateSignature(struct FZeuzMachineResourceInfo& Result);
	void DelegateMachineUpdateresourceBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineUpdateresourceBP__DelegateSignature(struct FZeuzMachineResourceInfo& Result, const class FString& Error);
	void DelegateMachineSettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result);
	void DelegateMachineSettagsBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineSettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result, const class FString& Error);
	void DelegateMachineResourcedeprovisionBPS__DelegateSignature();
	void DelegateMachineResourcedeprovisionBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineResourcedeprovisionBP__DelegateSignature(const class FString& Error);
	void DelegateMachineGettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result);
	void DelegateMachineGettagsBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineGettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn>& Result, const class FString& Error);
	void DelegateMachineGetresourcesBPS__DelegateSignature(TArray<struct FZeuzMachineResourceInfo>& Result);
	void DelegateMachineGetresourcesBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineGetresourcesBP__DelegateSignature(TArray<struct FZeuzMachineResourceInfo>& Result, const class FString& Error);
	void DelegateMachineGetinfoBPS__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result);
	void DelegateMachineGetinfoBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineGetinfoBP__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result, const class FString& Error);
	void DelegateMachineGetBPS__DelegateSignature(struct FZeuzMachineGetOut& Result);
	void DelegateMachineGetBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineGetBP__DelegateSignature(struct FZeuzMachineGetOut& Result, const class FString& Error);
	void DelegateMachineDeallocateBPS__DelegateSignature(TArray<class FString>& Result);
	void DelegateMachineDeallocateBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineDeallocateBP__DelegateSignature(TArray<class FString>& Result, const class FString& Error);
	void DelegateMachineCountresourcesBPS__DelegateSignature(int32 Result);
	void DelegateMachineCountresourcesBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineCountresourcesBP__DelegateSignature(int32 Result, const class FString& Error);
	void DelegateMachineAllocateBPS__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result);
	void DelegateMachineAllocateBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineAllocateBP__DelegateSignature(TArray<struct FZeuzMachineInfo>& Result, const class FString& Error);
	void DelegateMachineAddresourceBPS__DelegateSignature(struct FZeuzMachineResourceInfo& Result);
	void DelegateMachineAddresourceBPF__DelegateSignature(const class FString& Error);
	void DelegateMachineAddresourceBP__DelegateSignature(struct FZeuzMachineResourceInfo& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiMatchmaking
class UZeuzApiMatchmaking : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiMatchmaking* GetDefaultObj();

	void MatchmakingUpdateBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MatchmakingStatsBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MatchmakingServerrefreshBP(struct FZeuzMatchMakingServerInfo& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MatchmakingServerdestroyBP(struct FZeuzMatchMakingServerInfo& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MatchmakingCreatepartyBP(struct FZeuzMatchMakingPartyInit& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MatchmakingCreateBP(struct FZeuzMatchMakingInit& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MatchmakingCloseBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateMatchmakingUpdateBPS__DelegateSignature(struct FZeuzMatchMakingStatus& Result);
	void DelegateMatchmakingUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingUpdateBP__DelegateSignature(struct FZeuzMatchMakingStatus& Result, const class FString& Error);
	void DelegateMatchmakingStatsBPS__DelegateSignature(struct FZeuzMatchMakingStats& Result);
	void DelegateMatchmakingStatsBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingStatsBP__DelegateSignature(struct FZeuzMatchMakingStats& Result, const class FString& Error);
	void DelegateMatchmakingServerrefreshBPS__DelegateSignature();
	void DelegateMatchmakingServerrefreshBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingServerrefreshBP__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingServerdestroyBPS__DelegateSignature();
	void DelegateMatchmakingServerdestroyBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingServerdestroyBP__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingCreatepartyBPS__DelegateSignature(struct FZeuzMatchMakingStatus& Result);
	void DelegateMatchmakingCreatepartyBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingCreatepartyBP__DelegateSignature(struct FZeuzMatchMakingStatus& Result, const class FString& Error);
	void DelegateMatchmakingCreateBPS__DelegateSignature(struct FZeuzMatchMakingStatus& Result);
	void DelegateMatchmakingCreateBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingCreateBP__DelegateSignature(struct FZeuzMatchMakingStatus& Result, const class FString& Error);
	void DelegateMatchmakingCloseBPS__DelegateSignature();
	void DelegateMatchmakingCloseBPF__DelegateSignature(const class FString& Error);
	void DelegateMatchmakingCloseBP__DelegateSignature(const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiMetrics
class UZeuzApiMetrics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiMetrics* GetDefaultObj();

	void MetricsPayloadnetworksentBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsPayloadnetworkreceivedBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsPayloadmemoryusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsPayloadcpuusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsPayloadcountBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsMachinenetworksentBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsMachinenetworkreceivedBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsMachinememoryusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void MetricsMachinecpuusageBP(struct FZeuzMetricsQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateMetricsPayloadnetworksentBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsPayloadnetworksentBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsPayloadnetworksentBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsPayloadmemoryusageBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsPayloadmemoryusageBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsPayloadmemoryusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsPayloadcpuusageBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsPayloadcpuusageBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsPayloadcpuusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsPayloadcountBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsPayloadcountBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsPayloadcountBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsMachinenetworksentBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsMachinenetworksentBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsMachinenetworksentBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsMachinenetworkreceivedBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsMachinememoryusageBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsMachinememoryusageBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsMachinememoryusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
	void DelegateMetricsMachinecpuusageBPS__DelegateSignature(struct FZeuzVariant& Result);
	void DelegateMetricsMachinecpuusageBPF__DelegateSignature(const class FString& Error);
	void DelegateMetricsMachinecpuusageBP__DelegateSignature(struct FZeuzVariant& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiPayload
class UZeuzApiPayload : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiPayload* GetDefaultObj();

	void PayloadUpdateBP(struct FZeuzPayloadUpdateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadUnreserveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadStateupdateBP(struct FZeuzPayloadStateGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadStateinfoBP(struct FZeuzPayloadStateGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadResumeBP(struct FZeuzPayloadResumeIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadRestartBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadReserveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadRemoveBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadGetBP(struct FZeuzPayloadGetIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadCreateBP(struct FZeuzPayloadCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void PayloadAllocateBP(struct FZeuzPayloadAllocateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegatePayloadUpdateBPS__DelegateSignature(struct FZeuzPayloadInfo& Result);
	void DelegatePayloadUpdateBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadUpdateBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error);
	void DelegatePayloadUnreserveBPS__DelegateSignature(bool Result);
	void DelegatePayloadUnreserveBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadUnreserveBP__DelegateSignature(bool Result, const class FString& Error);
	void DelegatePayloadStateupdateBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result);
	void DelegatePayloadStateupdateBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadStateupdateBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result, const class FString& Error);
	void DelegatePayloadStateinfoBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result);
	void DelegatePayloadStateinfoBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadStateinfoBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo>& Result, const class FString& Error);
	void DelegatePayloadResumeBPS__DelegateSignature(struct FZeuzPayloadInfo& Result);
	void DelegatePayloadResumeBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadResumeBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error);
	void DelegatePayloadRestartBPS__DelegateSignature(struct FZeuzPayloadInfo& Result);
	void DelegatePayloadRestartBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadRestartBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error);
	void DelegatePayloadReserveBPS__DelegateSignature(bool Result);
	void DelegatePayloadReserveBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadReserveBP__DelegateSignature(bool Result, const class FString& Error);
	void DelegatePayloadRemoveBPS__DelegateSignature();
	void DelegatePayloadRemoveBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadRemoveBP__DelegateSignature(const class FString& Error);
	void DelegatePayloadGetBPS__DelegateSignature(struct FZeuzPayloadGetOut& Result);
	void DelegatePayloadGetBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadGetBP__DelegateSignature(struct FZeuzPayloadGetOut& Result, const class FString& Error);
	void DelegatePayloadCreateBPS__DelegateSignature(struct FZeuzPayloadInfo& Result);
	void DelegatePayloadCreateBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadCreateBP__DelegateSignature(struct FZeuzPayloadInfo& Result, const class FString& Error);
	void DelegatePayloadAllocateBPS__DelegateSignature(TArray<struct FZeuzPayloadInfo>& Result);
	void DelegatePayloadAllocateBPF__DelegateSignature(const class FString& Error);
	void DelegatePayloadAllocateBP__DelegateSignature(TArray<struct FZeuzPayloadInfo>& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiProfile
class UZeuzApiProfile : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiProfile* GetDefaultObj();

	void ProfileUserslookupBP(TArray<struct FZeuzProfileUserLookupIn>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUserslistBP(struct FZeuzProfileUsersListIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUsersgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUsersetpwhashBP(struct FZeuzProfileUserPwHashIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUsersetBP(const struct FZeuzUser& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUserlookupBP(struct FZeuzProfileUserLookupIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUsergetpwhashBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUsergetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUserdeleteBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileUsercreateBP(struct FZeuzProfileUserCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileProfilesgetBP(TArray<class FString>& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileProfilesetBP(const struct FZeuzUserProfile& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileProfilegetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileProfiledeleteBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemtransferBP(struct FZeuzProfileItemTransferIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemsetBP(const struct FZeuzInvItem& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemrembynameBP(struct FZeuzProfileItemRemByNameIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemremBP(struct FZeuzProfileItemRemIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemlistBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemgetbynameBP(struct FZeuzProfileItemUserName& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemgetBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemcreateBP(const struct FZeuzInvItem& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemconfiggetBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItembuyBP(struct FZeuzProfileItemAddIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItembarterBP(struct FZeuzProfileItemBarterIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ProfileItemaddBP(struct FZeuzProfileItemAddIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateProfileUserslookupBPS__DelegateSignature(TArray<class FString>& Result);
	void DelegateProfileUserslookupBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUserslookupBP__DelegateSignature(TArray<class FString>& Result, const class FString& Error);
	void DelegateProfileUserslistBPS__DelegateSignature(struct FZeuzProfileUsersListOut& Result);
	void DelegateProfileUserslistBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUserslistBP__DelegateSignature(struct FZeuzProfileUsersListOut& Result, const class FString& Error);
	void DelegateProfileUsersgetBPS__DelegateSignature(TArray<struct FZeuzUser>& Result);
	void DelegateProfileUsersgetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUsersgetBP__DelegateSignature(TArray<struct FZeuzUser>& Result, const class FString& Error);
	void DelegateProfileUsersetpwhashBPS__DelegateSignature();
	void DelegateProfileUsersetpwhashBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUsersetpwhashBP__DelegateSignature(const class FString& Error);
	void DelegateProfileUsersetBPS__DelegateSignature();
	void DelegateProfileUsersetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUsersetBP__DelegateSignature(const class FString& Error);
	void DelegateProfileUserlookupBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileUserlookupBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUserlookupBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateProfileUsergetpwhashBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileUsergetpwhashBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUsergetpwhashBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateProfileUsergetBPS__DelegateSignature(const struct FZeuzUser& Result);
	void DelegateProfileUsergetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUsergetBP__DelegateSignature(const struct FZeuzUser& Result, const class FString& Error);
	void DelegateProfileUserdeleteBPS__DelegateSignature();
	void DelegateProfileUserdeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUserdeleteBP__DelegateSignature(const class FString& Error);
	void DelegateProfileUsercreateBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileUsercreateBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateProfileProfilesgetBPS__DelegateSignature(TArray<struct FZeuzUserProfile>& Result);
	void DelegateProfileProfilesgetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileProfilesgetBP__DelegateSignature(TArray<struct FZeuzUserProfile>& Result, const class FString& Error);
	void DelegateProfileProfilesetBPS__DelegateSignature();
	void DelegateProfileProfilesetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileProfilesetBP__DelegateSignature(const class FString& Error);
	void DelegateProfileProfilegetBPS__DelegateSignature(const struct FZeuzUserProfile& Result);
	void DelegateProfileProfilegetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileProfilegetBP__DelegateSignature(const struct FZeuzUserProfile& Result, const class FString& Error);
	void DelegateProfileProfiledeleteBPS__DelegateSignature();
	void DelegateProfileProfiledeleteBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileProfiledeleteBP__DelegateSignature(const class FString& Error);
	void DelegateProfileItemtransferBPS__DelegateSignature();
	void DelegateProfileItemtransferBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemtransferBP__DelegateSignature(const class FString& Error);
	void DelegateProfileItemsetBPS__DelegateSignature();
	void DelegateProfileItemsetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemsetBP__DelegateSignature(const class FString& Error);
	void DelegateProfileItemrembynameBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileItemrembynameBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemrembynameBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateProfileItemremBPS__DelegateSignature();
	void DelegateProfileItemremBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemremBP__DelegateSignature(const class FString& Error);
	void DelegateProfileItemlistBPS__DelegateSignature(TArray<struct FZeuzInvItem>& Result);
	void DelegateProfileItemlistBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemlistBP__DelegateSignature(TArray<struct FZeuzInvItem>& Result, const class FString& Error);
	void DelegateProfileItemgetbynameBPS__DelegateSignature(const struct FZeuzInvItem& Result);
	void DelegateProfileItemgetbynameBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemgetbynameBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error);
	void DelegateProfileItemgetBPS__DelegateSignature(const struct FZeuzInvItem& Result);
	void DelegateProfileItemgetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemgetBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error);
	void DelegateProfileItemcreateBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileItemcreateBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemcreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateProfileItemconfiggetBPS__DelegateSignature(struct FZeuzProfileItemConfigGetOut& Result);
	void DelegateProfileItemconfiggetBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemconfiggetBP__DelegateSignature(struct FZeuzProfileItemConfigGetOut& Result, const class FString& Error);
	void DelegateProfileItembuyBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileItembuyBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItembuyBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateProfileItembarterBPS__DelegateSignature();
	void DelegateProfileItembarterBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItembarterBP__DelegateSignature(const class FString& Error);
	void DelegateProfileItemaddBPS__DelegateSignature(const class FString& Result);
	void DelegateProfileItemaddBPF__DelegateSignature(const class FString& Error);
	void DelegateProfileItemaddBP__DelegateSignature(const class FString& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiServerbrowser
class UZeuzApiServerbrowser : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiServerbrowser* GetDefaultObj();

	void ServerbrowserRefreshBP(struct FZeuzServerBrowserStateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ServerbrowserQueryBP(struct FZeuzServerBrowserQueryIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void ServerbrowserDestroyBP(const class FString& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateServerbrowserRefreshBPS__DelegateSignature();
	void DelegateServerbrowserRefreshBPF__DelegateSignature(const class FString& Error);
	void DelegateServerbrowserRefreshBP__DelegateSignature(const class FString& Error);
	void DelegateServerbrowserQueryBPS__DelegateSignature(struct FZeuzServerBrowserQueryOut& Result);
	void DelegateServerbrowserQueryBPF__DelegateSignature(const class FString& Error);
	void DelegateServerbrowserQueryBP__DelegateSignature(struct FZeuzServerBrowserQueryOut& Result, const class FString& Error);
	void DelegateServerbrowserDestroyBPS__DelegateSignature();
	void DelegateServerbrowserDestroyBPF__DelegateSignature(const class FString& Error);
	void DelegateServerbrowserDestroyBP__DelegateSignature(const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiSimpleAuth
class UZeuzApiSimpleAuth : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiSimpleAuth* GetDefaultObj();

	class FString StringHash(const class FString& Val);
	void SimpleProfileUsercreateBP(struct FZeuzSimpleProfileUserCreateIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateSimpleProfileUsercreateBPS__DelegateSignature(const class FString& Result);
	void DelegateSimpleProfileUsercreateBPF__DelegateSignature(const class FString& Error);
	void DelegateSimpleProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
	void DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzContext& Context);
	void DelegateAuthLoginBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthLoginBP__DelegateSignature(const struct FZeuzContext& Context, const class FString& Error);
	void DelegateAuthCheckSessionBPS__DelegateSignature(const struct FZeuzTimestamp& Expires);
	void DelegateAuthCheckSessionBPF__DelegateSignature(const class FString& Error);
	void DelegateAuthCheckSessionBP__DelegateSignature(const struct FZeuzTimestamp& Expires, const class FString& Error);
	class FString CalcPWHash(const class FString& Login, const class FString& Password);
	void AuthLoginBP(struct FZeuzSimpleAuthLoginIn& In, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx, bool SaveDefaultContext);
	void AuthCheckSessionBP(FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, const struct FZeuzContext& Ctx);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiContext
class UZeuzApiContext : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiContext* GetDefaultObj();

	void SetDefaultContext(struct FZeuzContext& Ctx);
	struct FZeuzContext GetDefaultContext();
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzID
class UZeuzID : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzID* GetDefaultObj();

	bool IsValid(const class FString& ID);
	bool IsType(const class FString& ID, enum class EZeuzIDType Typ);
	enum class EZeuzIDType GetType(const class FString& ID);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiPing
class UZeuzApiPing : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiPing* GetDefaultObj();

	void DoPingBP(const class FString& Target, float Timeout, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateDoPingBPS__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved);
	void DelegateDoPingBPF__DelegateSignature(const class FString& Error);
	void DelegateDoPingBP__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiPubIP
class UZeuzApiPubIP : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiPubIP* GetDefaultObj();

	void GetPublicIPBP(bool V6, FDelegateProperty_& Callback, FDelegateProperty_& OnSuccess, FDelegateProperty_& OnFailure, struct FZeuzContext& Ctx);
	void DelegateGetPublicIPBPS__DelegateSignature(const class FString& Result);
	void DelegateGetPublicIPBPF__DelegateSignature(const class FString& Error);
	void DelegateGetPublicIPBP__DelegateSignature(const class FString& Result, const class FString& Error);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzTagsUtil
class UZeuzTagsUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzTagsUtil* GetDefaultObj();

	class FString TagsToString(struct FZeuzTags& In);
	void StringToTags(const class FString& In, struct FZeuzTags* Out);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiTime
class UZeuzApiTime : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiTime* GetDefaultObj();

	struct FDateTime ToDateTime(const struct FZeuzTimestamp& T);
	struct FZeuzTimestamp Now(bool Adjusted);
	bool IsZero(const struct FZeuzTimestamp& T);
	struct FZeuzTimestamp GetOffset();
	struct FZeuzTimestamp FromDateTime(const struct FDateTime& T, bool Adjusted);
	void AdjustOffset(const struct FZeuzTimestamp& Ofs);
};

// 0x0 (0x28 - 0x28)
// Class Zeuzsdk.ZeuzApiUtil
class UZeuzApiUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UZeuzApiUtil* GetDefaultObj();

	void TimerWithString(FDelegateProperty_& Event, float Time, const class FString& Value);
	void TimerDynamicDelegateS__DelegateSignature(const class FString& Value);
	bool StructToVariant(class UProperty* AnyStruct, struct FZeuzVariant* Value);
	bool StructToByteArrayJSON(class UProperty* AnyStruct, struct FZeuzByteArray* Value);
	bool StructToByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value);
	bool StructFromVariant(class UProperty** AnyStruct, struct FZeuzVariant& Value);
	bool StructFromByteArrayJSON(class UProperty** AnyStruct, struct FZeuzByteArray& Value);
	bool StructFromByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value);
	bool StringNotEmpty(const class FString& String);
	bool StringIsEmpty(const class FString& String);
	bool SaveGameToByteArray(const class FString& Filename, struct FZeuzByteArray* Value);
	bool SaveGameFromByteArray(struct FZeuzByteArray& Value, const class FString& Filename);
	bool JsonToVariant(const class FString& Json, struct FZeuzVariant* Variant);
	bool JsonFromVariant(struct FZeuzVariant& Variant, class FString* Json);
	class FString GetSaveGamePath(const class FString& Name);
};

}


