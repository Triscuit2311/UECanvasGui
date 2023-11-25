#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Zeuzsdk.ZeuzApiAccount
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiAccount : public UBlueprintFunctionLibrary
	{
	public:
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
		void DelegateAccountQuotasetBPS__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result);
		void DelegateAccountQuotasetBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountQuotasetBP__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result, const class FString& Error);
		void DelegateAccountQuotagetBPS__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result);
		void DelegateAccountQuotagetBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountQuotagetBP__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result, const class FString& Error);
		void DelegateAccountProjectupdateBPS__DelegateSignature();
		void DelegateAccountProjectupdateBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountProjectupdateBP__DelegateSignature(const class FString& Error);
		void DelegateAccountProjectsgetBPS__DelegateSignature(TArray<struct FZeuzProj> Result);
		void DelegateAccountProjectsgetBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountProjectsgetBP__DelegateSignature(TArray<struct FZeuzProj> Result, const class FString& Error);
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
		void DelegateAccountEnvsgetBPS__DelegateSignature(TArray<struct FZeuzEnv> Result);
		void DelegateAccountEnvsgetBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountEnvsgetBP__DelegateSignature(TArray<struct FZeuzEnv> Result, const class FString& Error);
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
		void DelegateAccountDevquicksetupBPS__DelegateSignature(const struct FZeuzAccountDevQuickSetupOut& Result);
		void DelegateAccountDevquicksetupBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountDevquicksetupBP__DelegateSignature(const struct FZeuzAccountDevQuickSetupOut& Result, const class FString& Error);
		void DelegateAccountDeveloperupdateBPS__DelegateSignature();
		void DelegateAccountDeveloperupdateBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountDeveloperupdateBP__DelegateSignature(const class FString& Error);
		void DelegateAccountDevelopersgetBPS__DelegateSignature(TArray<struct FZeuzDeveloper> Result);
		void DelegateAccountDevelopersgetBPF__DelegateSignature(const class FString& Error);
		void DelegateAccountDevelopersgetBP__DelegateSignature(TArray<struct FZeuzDeveloper> Result, const class FString& Error);
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
		void AccountTeamupdateBP(const struct FZeuzTeam& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountTeamgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountTeamdeleteBP(const struct FZeuzAccountTeamDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountTeamcreateBP(const struct FZeuzAccountTeamCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountQuotasetBP(const struct FZeuzAccountQuotaInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountQuotagetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountProjectupdateBP(const struct FZeuzProj& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountProjectsgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountProjectgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountProjectdeleteBP(const struct FZeuzAccountProjectDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountProjectcreateBP(const struct FZeuzAccountProjectCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvupdateBP(const struct FZeuzEnv& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvsgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvserviceupdateBP(const struct FZeuzServiceCfg& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvservicedeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvdeleteBP(const struct FZeuzAccountEnvDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountEnvcreateBP(const struct FZeuzAccountEnvCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDevquicksetupBP(const struct FZeuzAccountDevQuickSetupIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDeveloperupdateBP(const struct FZeuzDeveloper& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDevelopersgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDevelopersetpwhashBP(const struct FZeuzAccountDeveloperSetPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDeveloperrevokeBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDeveloperpasswordresetrequestBP(const struct FZeuzAccountDeveloperPasswordResetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDeveloperpasswordresetBP(const struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDeveloperispasswordresethashexpiredBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDeveloperinviteBP(const struct FZeuzAccountDeveloperCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDevelopergetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDevelopercreatepwhashBP(const struct FZeuzAccountDeveloperCreatePwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountDevelopercreateBP(const struct FZeuzAccountDeveloperCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountAccountupdateBP(const struct FZeuzAccount& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountAccountgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AccountAccountcreateBP(const struct FZeuzAccountCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiAdmin
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiAdmin : public UBlueprintFunctionLibrary
	{
	public:
		void DelegateAdminStatsBPS__DelegateSignature(const struct FZeuzAdminStatsOut& Result);
		void DelegateAdminStatsBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminStatsBP__DelegateSignature(const struct FZeuzAdminStatsOut& Result, const class FString& Error);
		void DelegateAdminProjectsBPS__DelegateSignature(TArray<struct FZeuzProj> Result);
		void DelegateAdminProjectsBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminProjectsBP__DelegateSignature(TArray<struct FZeuzProj> Result, const class FString& Error);
		void DelegateAdminLogsBPS__DelegateSignature(const struct FZeuzLogsearchOut& Result);
		void DelegateAdminLogsBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminLogsBP__DelegateSignature(const struct FZeuzLogsearchOut& Result, const class FString& Error);
		void DelegateAdminItemsBPS__DelegateSignature(const struct FZeuzAdminItemsOut& Result);
		void DelegateAdminItemsBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminItemsBP__DelegateSignature(const struct FZeuzAdminItemsOut& Result, const class FString& Error);
		void DelegateAdminGetquotaBPS__DelegateSignature(int32_t Result);
		void DelegateAdminGetquotaBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminGetquotaBP__DelegateSignature(int32_t Result, const class FString& Error);
		void DelegateAdminEnvironmentsBPS__DelegateSignature(TArray<struct FZeuzEnv> Result);
		void DelegateAdminEnvironmentsBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminEnvironmentsBP__DelegateSignature(TArray<struct FZeuzEnv> Result, const class FString& Error);
		void DelegateAdminDevelopersBPS__DelegateSignature(TArray<struct FZeuzDeveloper> Result);
		void DelegateAdminDevelopersBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminDevelopersBP__DelegateSignature(TArray<struct FZeuzDeveloper> Result, const class FString& Error);
		void DelegateAdminCountresourcesperaccBPS__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result);
		void DelegateAdminCountresourcesperaccBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminCountresourcesperaccBP__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result, const class FString& Error);
		void DelegateAdminCountresourcesBPS__DelegateSignature(int32_t Result);
		void DelegateAdminCountresourcesBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminCountresourcesBP__DelegateSignature(int32_t Result, const class FString& Error);
		void DelegateAdminAccountsBPS__DelegateSignature(TArray<struct FZeuzAccount> Result);
		void DelegateAdminAccountsBPF__DelegateSignature(const class FString& Error);
		void DelegateAdminAccountsBP__DelegateSignature(TArray<struct FZeuzAccount> Result, const class FString& Error);
		void AdminStatsBP(const struct FZeuzAdminStatsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminProjectsBP(const struct FZeuzAdminAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminLogsBP(const struct FZeuzAdminLogsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminItemsBP(const struct FZeuzAdminItemsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminGetquotaBP(const struct FZeuzAdminTestpoolIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminEnvironmentsBP(const struct FZeuzAdminEnvIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminDevelopersBP(const struct FZeuzAdminAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminCountresourcesperaccBP(const struct FZeuzAdminTestpoolIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminCountresourcesBP(const struct FZeuzAdminCountResoucesIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AdminAccountsBP(const struct FZeuzAdminAccountsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiApikey
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiApikey : public UBlueprintFunctionLibrary
	{
	public:
		void DelegateApikeyUpdateBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
		void DelegateApikeyUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyUpdateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
		void DelegateApikeySetpwhashBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
		void DelegateApikeySetpwhashBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeySetpwhashBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
		void DelegateApikeyRevokeBPS__DelegateSignature();
		void DelegateApikeyRevokeBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyRevokeBP__DelegateSignature(const class FString& Error);
		void DelegateApikeyGetBPS__DelegateSignature(TArray<struct FZeuzAPIKey> Result);
		void DelegateApikeyGetBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyGetBP__DelegateSignature(TArray<struct FZeuzAPIKey> Result, const class FString& Error);
		void DelegateApikeyGetallBPS__DelegateSignature(TArray<struct FZeuzAPIKey> Result);
		void DelegateApikeyGetallBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyGetallBP__DelegateSignature(TArray<struct FZeuzAPIKey> Result, const class FString& Error);
		void DelegateApikeyGenerateBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
		void DelegateApikeyGenerateBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyGenerateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
		void DelegateApikeyDeleteBPS__DelegateSignature();
		void DelegateApikeyDeleteBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyDeleteBP__DelegateSignature(const class FString& Error);
		void DelegateApikeyCreateBPS__DelegateSignature(const struct FZeuzAPIKey& Result);
		void DelegateApikeyCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateApikeyCreateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error);
		void ApikeyUpdateBP(const struct FZeuzAPIKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeySetpwhashBP(const struct FZeuzAPIKeyPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeyRevokeBP(const struct FZeuzAPIKeyDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeyGetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeyGetallBP(const struct FZeuzAPIKeyGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeyGenerateBP(const struct FZeuzAPIKeyGenerateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeyDeleteBP(const struct FZeuzAPIKeyDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ApikeyCreateBP(const struct FZeuzAPIKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiImagemanager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiImagemanager : public UBlueprintFunctionLibrary
	{
	public:
		void ImagemanagerPushFileUrlBP(const struct FZeuzImageManagerPresignedFileUrlIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerPushBP(const struct FZeuzImageManagerManifest& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerPullFileUrlBP(const struct FZeuzImageManagerPresignedFileUrlIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerPullBP(const struct FZeuzImageManagerPullInput& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerPublishBP(const struct FZeuzImageManagerPublishInput& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerListBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerGetpublishstateBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ImagemanagerDiscardBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateImagemanagerPushFileUrlBPS__DelegateSignature(const class FString& Result);
		void DelegateImagemanagerPushFileUrlBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerPushFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateImagemanagerPushBPS__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result);
		void DelegateImagemanagerPushBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerPushBP__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error);
		void DelegateImagemanagerPullFileUrlBPS__DelegateSignature(const class FString& Result);
		void DelegateImagemanagerPullFileUrlBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerPullFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateImagemanagerPullBPS__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result);
		void DelegateImagemanagerPullBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerPullBP__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error);
		void DelegateImagemanagerPublishBPS__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result);
		void DelegateImagemanagerPublishBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerPublishBP__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result, const class FString& Error);
		void DelegateImagemanagerListBPS__DelegateSignature(TArray<struct FZeuzImageManagerListEntry> Result);
		void DelegateImagemanagerListBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerListBP__DelegateSignature(TArray<struct FZeuzImageManagerListEntry> Result, const class FString& Error);
		void DelegateImagemanagerGetpublishstateBPS__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result);
		void DelegateImagemanagerGetpublishstateBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerGetpublishstateBP__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result, const class FString& Error);
		void DelegateImagemanagerDiscardBPS__DelegateSignature();
		void DelegateImagemanagerDiscardBPF__DelegateSignature(const class FString& Error);
		void DelegateImagemanagerDiscardBP__DelegateSignature(const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiAllocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiAllocation : public UBlueprintFunctionLibrary
	{
	public:
		void DelegateAllocationUpdateBPS__DelegateSignature(const struct FZeuzAllocationInfo& Result);
		void DelegateAllocationUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateAllocationUpdateBP__DelegateSignature(const struct FZeuzAllocationInfo& Result, const class FString& Error);
		void DelegateAllocationRequestServicesBPS__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo> Result);
		void DelegateAllocationRequestServicesBPF__DelegateSignature(const class FString& Error);
		void DelegateAllocationRequestServicesBP__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo> Result, const class FString& Error);
		void DelegateAllocationGetBPS__DelegateSignature(const struct FZeuzAllocationGetOut& Result);
		void DelegateAllocationGetBPF__DelegateSignature(const class FString& Error);
		void DelegateAllocationGetBP__DelegateSignature(const struct FZeuzAllocationGetOut& Result, const class FString& Error);
		void DelegateAllocationCreateBPS__DelegateSignature(const struct FZeuzAllocationInfo& Result);
		void DelegateAllocationCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateAllocationCreateBP__DelegateSignature(const struct FZeuzAllocationInfo& Result, const class FString& Error);
		void AllocationUpdateBP(const struct FZeuzAllocationUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AllocationRequestServicesBP(const struct FZeuzAllocationRequestServiceIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AllocationGetBP(const struct FZeuzAllocationGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AllocationCreateBP(const struct FZeuzAllocationCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiKVStore
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiKVStore : public UBlueprintFunctionLibrary
	{
	public:
		void KVStorePutBP(const struct FZeuzKVStorePutIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void KVStoreGetBP(const struct FZeuzKVStoreKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void KVStoreDelBP(const struct FZeuzKVStoreDelIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateKVStorePutBPS__DelegateSignature();
		void DelegateKVStorePutBPF__DelegateSignature(const class FString& Error);
		void DelegateKVStorePutBP__DelegateSignature(const class FString& Error);
		void DelegateKVStoreGetBPS__DelegateSignature(const struct FZeuzKVStoreKVEntry& Result);
		void DelegateKVStoreGetBPF__DelegateSignature(const class FString& Error);
		void DelegateKVStoreGetBP__DelegateSignature(const struct FZeuzKVStoreKVEntry& Result, const class FString& Error);
		void DelegateKVStoreDelBPS__DelegateSignature();
		void DelegateKVStoreDelBPF__DelegateSignature(const class FString& Error);
		void DelegateKVStoreDelBP__DelegateSignature(const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiLogsearch
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiLogsearch : public UBlueprintFunctionLibrary
	{
	public:
		void LogsearchStartexportBP(const struct FZeuzLogsearchAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LogsearchDownloadexportBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LogsearchCheckexportBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LogsearchAccountBP(const struct FZeuzLogsearchAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateLogsearchStartexportBPS__DelegateSignature(const class FString& Result);
		void DelegateLogsearchStartexportBPF__DelegateSignature(const class FString& Error);
		void DelegateLogsearchStartexportBP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateLogsearchDownloadexportBPS__DelegateSignature(const class FString& Result);
		void DelegateLogsearchDownloadexportBPF__DelegateSignature(const class FString& Error);
		void DelegateLogsearchDownloadexportBP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateLogsearchCheckexportBPS__DelegateSignature(const struct FZeuzLogsearchLogsStatus& Result);
		void DelegateLogsearchCheckexportBPF__DelegateSignature(const class FString& Error);
		void DelegateLogsearchCheckexportBP__DelegateSignature(const struct FZeuzLogsearchLogsStatus& Result, const class FString& Error);
		void DelegateLogsearchAccountBPS__DelegateSignature(const struct FZeuzLogsearchAccountOut& Result);
		void DelegateLogsearchAccountBPF__DelegateSignature(const class FString& Error);
		void DelegateLogsearchAccountBP__DelegateSignature(const struct FZeuzLogsearchAccountOut& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiLobby
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiLobby : public UBlueprintFunctionLibrary
	{
	public:
		void LobbyUserBP(const struct FZeuzLobbyUserIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyUpdateBP(const struct FZeuzLobbyStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyStartBP(const struct FZeuzLobbyStartDestroy& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyRefreshBP(const struct FZeuzLobbyRefresh& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyQueryBP(const struct FZeuzLobbyQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyLeaveBP(const struct FZeuzLobbyJoin& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyKickBP(const struct FZeuzLobbyKick& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyJoinBP(const struct FZeuzLobbyJoin& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyDestroyBP(const struct FZeuzLobbyStartDestroy& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LobbyCreateBP(const struct FZeuzLobbyStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateLobbyUserBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result);
		void DelegateLobbyUserBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyUserBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error);
		void DelegateLobbyUpdateBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result);
		void DelegateLobbyUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyUpdateBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error);
		void DelegateLobbyStartBPS__DelegateSignature(const struct FZeuzLobbyServerConnect& Result);
		void DelegateLobbyStartBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyStartBP__DelegateSignature(const struct FZeuzLobbyServerConnect& Result, const class FString& Error);
		void DelegateLobbyRefreshBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result);
		void DelegateLobbyRefreshBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyRefreshBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error);
		void DelegateLobbyQueryBPS__DelegateSignature(const struct FZeuzLobbyQueryOut& Result);
		void DelegateLobbyQueryBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyQueryBP__DelegateSignature(const struct FZeuzLobbyQueryOut& Result, const class FString& Error);
		void DelegateLobbyLeaveBPS__DelegateSignature();
		void DelegateLobbyLeaveBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyLeaveBP__DelegateSignature(const class FString& Error);
		void DelegateLobbyKickBPS__DelegateSignature();
		void DelegateLobbyKickBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyKickBP__DelegateSignature(const class FString& Error);
		void DelegateLobbyJoinBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result);
		void DelegateLobbyJoinBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyJoinBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error);
		void DelegateLobbyDestroyBPS__DelegateSignature();
		void DelegateLobbyDestroyBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyDestroyBP__DelegateSignature(const class FString& Error);
		void DelegateLobbyCreateBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result);
		void DelegateLobbyCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateLobbyCreateBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiPayload
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiPayload : public UBlueprintFunctionLibrary
	{
	public:
		void PayloadUpdateBP(const struct FZeuzPayloadUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadUnreserveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadStateupdateBP(const struct FZeuzPayloadStateGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadStateinfoBP(const struct FZeuzPayloadStateGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadResumeBP(const struct FZeuzPayloadResumeIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadRestartBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadReserveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadGetBP(const struct FZeuzPayloadGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadCreateBP(const struct FZeuzPayloadCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void PayloadAllocateBP(const struct FZeuzPayloadAllocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegatePayloadUpdateBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result);
		void DelegatePayloadUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadUpdateBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error);
		void DelegatePayloadUnreserveBPS__DelegateSignature(bool Result);
		void DelegatePayloadUnreserveBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadUnreserveBP__DelegateSignature(bool Result, const class FString& Error);
		void DelegatePayloadStateupdateBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result);
		void DelegatePayloadStateupdateBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadStateupdateBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result, const class FString& Error);
		void DelegatePayloadStateinfoBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result);
		void DelegatePayloadStateinfoBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadStateinfoBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result, const class FString& Error);
		void DelegatePayloadResumeBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result);
		void DelegatePayloadResumeBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadResumeBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error);
		void DelegatePayloadRestartBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result);
		void DelegatePayloadRestartBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadRestartBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error);
		void DelegatePayloadReserveBPS__DelegateSignature(bool Result);
		void DelegatePayloadReserveBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadReserveBP__DelegateSignature(bool Result, const class FString& Error);
		void DelegatePayloadRemoveBPS__DelegateSignature();
		void DelegatePayloadRemoveBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadRemoveBP__DelegateSignature(const class FString& Error);
		void DelegatePayloadGetBPS__DelegateSignature(const struct FZeuzPayloadGetOut& Result);
		void DelegatePayloadGetBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadGetBP__DelegateSignature(const struct FZeuzPayloadGetOut& Result, const class FString& Error);
		void DelegatePayloadCreateBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result);
		void DelegatePayloadCreateBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadCreateBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error);
		void DelegatePayloadAllocateBPS__DelegateSignature(TArray<struct FZeuzPayloadInfo> Result);
		void DelegatePayloadAllocateBPF__DelegateSignature(const class FString& Error);
		void DelegatePayloadAllocateBP__DelegateSignature(TArray<struct FZeuzPayloadInfo> Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiEcho
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiEcho : public UBlueprintFunctionLibrary
	{
	public:
		void Echo4BP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void Echo3BP(const struct FZeuzEcho3In& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void Echo2BP(const struct FZeuzEcho2In& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void Echo1BP(const struct FZeuzEchoIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateEcho4BPS__DelegateSignature(const class FString& Result);
		void DelegateEcho4BPF__DelegateSignature(const class FString& Error);
		void DelegateEcho4BP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateEcho3BPS__DelegateSignature(const struct FZeuzEchoOut& Result);
		void DelegateEcho3BPF__DelegateSignature(const class FString& Error);
		void DelegateEcho3BP__DelegateSignature(const struct FZeuzEchoOut& Result, const class FString& Error);
		void DelegateEcho2BPS__DelegateSignature(const struct FZeuzEcho2Out& Result);
		void DelegateEcho2BPF__DelegateSignature(const class FString& Error);
		void DelegateEcho2BP__DelegateSignature(const struct FZeuzEcho2Out& Result, const class FString& Error);
		void DelegateEcho1BPS__DelegateSignature(const struct FZeuzEchoOut& Result);
		void DelegateEcho1BPF__DelegateSignature(const class FString& Error);
		void DelegateEcho1BP__DelegateSignature(const struct FZeuzEchoOut& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiAuth
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiAuth : public UBlueprintFunctionLibrary
	{
	public:
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
		void DelegateAuthActivesessionsgetBPS__DelegateSignature(TArray<struct FZeuzSession> Result);
		void DelegateAuthActivesessionsgetBPF__DelegateSignature(const class FString& Error);
		void DelegateAuthActivesessionsgetBP__DelegateSignature(TArray<struct FZeuzSession> Result, const class FString& Error);
		void AuthSessiondelBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AuthLogoutBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AuthLoginBP(const struct FZeuzAuthLoginIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AuthCheckBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void AuthActivesessionsgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiLocality
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiLocality : public UBlueprintFunctionLibrary
	{
	public:
		void LocalityRegionUpdateBP(const struct FZeuzRegion& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityRegionRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityRegionGetBP(const struct FZeuzLocalityRegionGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityRegionCreateBP(const struct FZeuzRegion& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityProviderUpdateBP(const struct FZeuzProvider& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityProviderRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityProviderGetBP(const struct FZeuzLocalityProviderGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityProviderCreateBP(const struct FZeuzProvider& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityLocationUpdateBP(const struct FZeuzLocation& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityLocationRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityLocationGetBP(const struct FZeuzLocalityLocationGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void LocalityLocationCreateBP(const struct FZeuzLocation& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateLocalityRegionUpdateBPS__DelegateSignature(const struct FZeuzRegion& Result);
		void DelegateLocalityRegionUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityRegionUpdateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error);
		void DelegateLocalityRegionRemoveBPS__DelegateSignature();
		void DelegateLocalityRegionRemoveBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityRegionRemoveBP__DelegateSignature(const class FString& Error);
		void DelegateLocalityRegionGetBPS__DelegateSignature(TArray<struct FZeuzRegion> Result);
		void DelegateLocalityRegionGetBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityRegionGetBP__DelegateSignature(TArray<struct FZeuzRegion> Result, const class FString& Error);
		void DelegateLocalityRegionCreateBPS__DelegateSignature(const struct FZeuzRegion& Result);
		void DelegateLocalityRegionCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityRegionCreateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error);
		void DelegateLocalityProviderUpdateBPS__DelegateSignature(const struct FZeuzProvider& Result);
		void DelegateLocalityProviderUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityProviderUpdateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error);
		void DelegateLocalityProviderRemoveBPS__DelegateSignature();
		void DelegateLocalityProviderRemoveBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityProviderRemoveBP__DelegateSignature(const class FString& Error);
		void DelegateLocalityProviderGetBPS__DelegateSignature(TArray<struct FZeuzProvider> Result);
		void DelegateLocalityProviderGetBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityProviderGetBP__DelegateSignature(TArray<struct FZeuzProvider> Result, const class FString& Error);
		void DelegateLocalityProviderCreateBPS__DelegateSignature(const struct FZeuzProvider& Result);
		void DelegateLocalityProviderCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityProviderCreateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error);
		void DelegateLocalityLocationUpdateBPS__DelegateSignature(const struct FZeuzLocation& Result);
		void DelegateLocalityLocationUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityLocationUpdateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error);
		void DelegateLocalityLocationRemoveBPS__DelegateSignature();
		void DelegateLocalityLocationRemoveBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityLocationRemoveBP__DelegateSignature(const class FString& Error);
		void DelegateLocalityLocationGetBPS__DelegateSignature(TArray<struct FZeuzLocation> Result);
		void DelegateLocalityLocationGetBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityLocationGetBP__DelegateSignature(TArray<struct FZeuzLocation> Result, const class FString& Error);
		void DelegateLocalityLocationCreateBPS__DelegateSignature(const struct FZeuzLocation& Result);
		void DelegateLocalityLocationCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateLocalityLocationCreateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiProfile
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiProfile : public UBlueprintFunctionLibrary
	{
	public:
		void ProfileUserslookupBP(TArray<struct FZeuzProfileUserLookupIn> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUserslistBP(const struct FZeuzProfileUsersListIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUsersgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUsersetpwhashBP(const struct FZeuzProfileUserPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUsersetBP(const struct FZeuzUser& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUserlookupBP(const struct FZeuzProfileUserLookupIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUsergetpwhashBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUsergetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUserdeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileUsercreateBP(const struct FZeuzProfileUserCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileProfilesgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileProfilesetBP(const struct FZeuzUserProfile& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileProfilegetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileProfiledeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemtransferBP(const struct FZeuzProfileItemTransferIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemsetBP(const struct FZeuzInvItem& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemrembynameBP(const struct FZeuzProfileItemRemByNameIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemremBP(const struct FZeuzProfileItemRemIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemlistBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemgetbynameBP(const struct FZeuzProfileItemUserName& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemcreateBP(const struct FZeuzInvItem& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemconfiggetBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItembuyBP(const struct FZeuzProfileItemAddIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItembarterBP(const struct FZeuzProfileItemBarterIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ProfileItemaddBP(const struct FZeuzProfileItemAddIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateProfileUserslookupBPS__DelegateSignature(TArray<class FString> Result);
		void DelegateProfileUserslookupBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileUserslookupBP__DelegateSignature(TArray<class FString> Result, const class FString& Error);
		void DelegateProfileUserslistBPS__DelegateSignature(const struct FZeuzProfileUsersListOut& Result);
		void DelegateProfileUserslistBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileUserslistBP__DelegateSignature(const struct FZeuzProfileUsersListOut& Result, const class FString& Error);
		void DelegateProfileUsersgetBPS__DelegateSignature(TArray<struct FZeuzUser> Result);
		void DelegateProfileUsersgetBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileUsersgetBP__DelegateSignature(TArray<struct FZeuzUser> Result, const class FString& Error);
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
		void DelegateProfileProfilesgetBPS__DelegateSignature(TArray<struct FZeuzUserProfile> Result);
		void DelegateProfileProfilesgetBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileProfilesgetBP__DelegateSignature(TArray<struct FZeuzUserProfile> Result, const class FString& Error);
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
		void DelegateProfileItemlistBPS__DelegateSignature(TArray<struct FZeuzInvItem> Result);
		void DelegateProfileItemlistBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItemlistBP__DelegateSignature(TArray<struct FZeuzInvItem> Result, const class FString& Error);
		void DelegateProfileItemgetbynameBPS__DelegateSignature(const struct FZeuzInvItem& Result);
		void DelegateProfileItemgetbynameBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItemgetbynameBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error);
		void DelegateProfileItemgetBPS__DelegateSignature(const struct FZeuzInvItem& Result);
		void DelegateProfileItemgetBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItemgetBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error);
		void DelegateProfileItemcreateBPS__DelegateSignature(const class FString& Result);
		void DelegateProfileItemcreateBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItemcreateBP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateProfileItemconfiggetBPS__DelegateSignature(const struct FZeuzProfileItemConfigGetOut& Result);
		void DelegateProfileItemconfiggetBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItemconfiggetBP__DelegateSignature(const struct FZeuzProfileItemConfigGetOut& Result, const class FString& Error);
		void DelegateProfileItembuyBPS__DelegateSignature(const class FString& Result);
		void DelegateProfileItembuyBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItembuyBP__DelegateSignature(const class FString& Result, const class FString& Error);
		void DelegateProfileItembarterBPS__DelegateSignature();
		void DelegateProfileItembarterBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItembarterBP__DelegateSignature(const class FString& Error);
		void DelegateProfileItemaddBPS__DelegateSignature(const class FString& Result);
		void DelegateProfileItemaddBPF__DelegateSignature(const class FString& Error);
		void DelegateProfileItemaddBP__DelegateSignature(const class FString& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzID
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzID : public UBlueprintFunctionLibrary
	{
	public:
		bool IsValid(const class FString& ID);
		bool IsType(const class FString& ID, EZeuzIDType typ);
		EZeuzIDType GetType(const class FString& ID);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiServerbrowser
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiServerbrowser : public UBlueprintFunctionLibrary
	{
	public:
		void ServerbrowserRefreshBP(const struct FZeuzServerBrowserStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ServerbrowserQueryBP(const struct FZeuzServerBrowserQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void ServerbrowserDestroyBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateServerbrowserRefreshBPS__DelegateSignature();
		void DelegateServerbrowserRefreshBPF__DelegateSignature(const class FString& Error);
		void DelegateServerbrowserRefreshBP__DelegateSignature(const class FString& Error);
		void DelegateServerbrowserQueryBPS__DelegateSignature(const struct FZeuzServerBrowserQueryOut& Result);
		void DelegateServerbrowserQueryBPF__DelegateSignature(const class FString& Error);
		void DelegateServerbrowserQueryBP__DelegateSignature(const struct FZeuzServerBrowserQueryOut& Result, const class FString& Error);
		void DelegateServerbrowserDestroyBPS__DelegateSignature();
		void DelegateServerbrowserDestroyBPF__DelegateSignature(const class FString& Error);
		void DelegateServerbrowserDestroyBP__DelegateSignature(const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiMachine
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiMachine : public UBlueprintFunctionLibrary
	{
	public:
		void MachineUpdateresourceBP(const struct FZeuzMachineResourceUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineSettagsBP(TArray<struct FZeuzMachineTagsSetIn> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineResourcedeprovisionBP(const struct FZeuzMachineResourceDeprovisionIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineGettagsBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineGetresourcesBP(const struct FZeuzMachineResourceGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineGetinfoBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineGetBP(const struct FZeuzMachineGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineDeallocateBP(const struct FZeuzMachineResourceDeallocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineCountresourcesBP(const struct FZeuzMachineResourcesCountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineAllocateBP(const struct FZeuzMachineResourceAllocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MachineAddresourceBP(const struct FZeuzMachineResourceDataIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateMachineUpdateresourceBPS__DelegateSignature(const struct FZeuzMachineResourceInfo& Result);
		void DelegateMachineUpdateresourceBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineUpdateresourceBP__DelegateSignature(const struct FZeuzMachineResourceInfo& Result, const class FString& Error);
		void DelegateMachineSettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result);
		void DelegateMachineSettagsBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineSettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result, const class FString& Error);
		void DelegateMachineResourcedeprovisionBPS__DelegateSignature();
		void DelegateMachineResourcedeprovisionBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineResourcedeprovisionBP__DelegateSignature(const class FString& Error);
		void DelegateMachineGettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result);
		void DelegateMachineGettagsBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineGettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result, const class FString& Error);
		void DelegateMachineGetresourcesBPS__DelegateSignature(TArray<struct FZeuzMachineResourceInfo> Result);
		void DelegateMachineGetresourcesBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineGetresourcesBP__DelegateSignature(TArray<struct FZeuzMachineResourceInfo> Result, const class FString& Error);
		void DelegateMachineGetinfoBPS__DelegateSignature(TArray<struct FZeuzMachineInfo> Result);
		void DelegateMachineGetinfoBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineGetinfoBP__DelegateSignature(TArray<struct FZeuzMachineInfo> Result, const class FString& Error);
		void DelegateMachineGetBPS__DelegateSignature(const struct FZeuzMachineGetOut& Result);
		void DelegateMachineGetBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineGetBP__DelegateSignature(const struct FZeuzMachineGetOut& Result, const class FString& Error);
		void DelegateMachineDeallocateBPS__DelegateSignature(TArray<class FString> Result);
		void DelegateMachineDeallocateBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineDeallocateBP__DelegateSignature(TArray<class FString> Result, const class FString& Error);
		void DelegateMachineCountresourcesBPS__DelegateSignature(int32_t Result);
		void DelegateMachineCountresourcesBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineCountresourcesBP__DelegateSignature(int32_t Result, const class FString& Error);
		void DelegateMachineAllocateBPS__DelegateSignature(TArray<struct FZeuzMachineInfo> Result);
		void DelegateMachineAllocateBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineAllocateBP__DelegateSignature(TArray<struct FZeuzMachineInfo> Result, const class FString& Error);
		void DelegateMachineAddresourceBPS__DelegateSignature(const struct FZeuzMachineResourceInfo& Result);
		void DelegateMachineAddresourceBPF__DelegateSignature(const class FString& Error);
		void DelegateMachineAddresourceBP__DelegateSignature(const struct FZeuzMachineResourceInfo& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiPing
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiPing : public UBlueprintFunctionLibrary
	{
	public:
		void DoPingBP(const class FString& Target, float Timeout, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateDoPingBPS__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved);
		void DelegateDoPingBPF__DelegateSignature(const class FString& Error);
		void DelegateDoPingBP__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzTagsUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzTagsUtil : public UBlueprintFunctionLibrary
	{
	public:
		class FString TagsToString(const struct FZeuzTags& In);
		void StringToTags(const class FString& In, struct FZeuzTags* Out);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiContext : public UBlueprintFunctionLibrary
	{
	public:
		void SetDefaultContext(const struct FZeuzContext& Ctx);
		struct FZeuzContext GetDefaultContext();
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiMatchmaking
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiMatchmaking : public UBlueprintFunctionLibrary
	{
	public:
		void MatchmakingUpdateBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MatchmakingStatsBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MatchmakingServerrefreshBP(const struct FZeuzMatchMakingServerInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MatchmakingServerdestroyBP(const struct FZeuzMatchMakingServerInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MatchmakingCreatepartyBP(const struct FZeuzMatchMakingPartyInit& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MatchmakingCreateBP(const struct FZeuzMatchMakingInit& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MatchmakingCloseBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateMatchmakingUpdateBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result);
		void DelegateMatchmakingUpdateBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingUpdateBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error);
		void DelegateMatchmakingStatsBPS__DelegateSignature(const struct FZeuzMatchMakingStats& Result);
		void DelegateMatchmakingStatsBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingStatsBP__DelegateSignature(const struct FZeuzMatchMakingStats& Result, const class FString& Error);
		void DelegateMatchmakingServerrefreshBPS__DelegateSignature();
		void DelegateMatchmakingServerrefreshBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingServerrefreshBP__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingServerdestroyBPS__DelegateSignature();
		void DelegateMatchmakingServerdestroyBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingServerdestroyBP__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingCreatepartyBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result);
		void DelegateMatchmakingCreatepartyBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingCreatepartyBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error);
		void DelegateMatchmakingCreateBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result);
		void DelegateMatchmakingCreateBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingCreateBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error);
		void DelegateMatchmakingCloseBPS__DelegateSignature();
		void DelegateMatchmakingCloseBPF__DelegateSignature(const class FString& Error);
		void DelegateMatchmakingCloseBP__DelegateSignature(const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiSimpleAuth
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiSimpleAuth : public UBlueprintFunctionLibrary
	{
	public:
		class FString StringHash(const class FString& Val);
		void SimpleProfileUsercreateBP(const struct FZeuzSimpleProfileUserCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
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
		void AuthLoginBP(const struct FZeuzSimpleAuthLoginIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx, bool SaveDefaultContext);
		void AuthCheckSessionBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiPubIP
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiPubIP : public UBlueprintFunctionLibrary
	{
	public:
		void GetPublicIPBP(bool v6, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateGetPublicIPBPS__DelegateSignature(const class FString& Result);
		void DelegateGetPublicIPBPF__DelegateSignature(const class FString& Error);
		void DelegateGetPublicIPBP__DelegateSignature(const class FString& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiMetrics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiMetrics : public UBlueprintFunctionLibrary
	{
	public:
		void MetricsPayloadnetworksentBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsPayloadnetworkreceivedBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsPayloadmemoryusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsPayloadcpuusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsPayloadcountBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsMachinenetworksentBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsMachinenetworkreceivedBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsMachinememoryusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void MetricsMachinecpuusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx);
		void DelegateMetricsPayloadnetworksentBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsPayloadnetworksentBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsPayloadnetworksentBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsPayloadmemoryusageBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsPayloadmemoryusageBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsPayloadmemoryusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsPayloadcpuusageBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsPayloadcpuusageBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsPayloadcpuusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsPayloadcountBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsPayloadcountBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsPayloadcountBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsMachinenetworksentBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsMachinenetworksentBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsMachinenetworksentBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsMachinenetworkreceivedBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsMachinememoryusageBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsMachinememoryusageBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsMachinememoryusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		void DelegateMetricsMachinecpuusageBPS__DelegateSignature(const struct FZeuzVariant& Result);
		void DelegateMetricsMachinecpuusageBPF__DelegateSignature(const class FString& Error);
		void DelegateMetricsMachinecpuusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiTime
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiTime : public UBlueprintFunctionLibrary
	{
	public:
		struct PCoreUObject_FDateTime ToDateTime(const struct FZeuzTimestamp& T);
		struct FZeuzTimestamp Now(bool adjusted);
		bool IsZero(const struct FZeuzTimestamp& T);
		struct FZeuzTimestamp GetOffset();
		struct FZeuzTimestamp FromDateTime(const struct PCoreUObject_FDateTime& T, bool adjusted);
		void AdjustOffset(const struct FZeuzTimestamp& ofs);
		static UClass* StaticClass();
	};

	/**
	 * Class Zeuzsdk.ZeuzApiUtil
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UZeuzApiUtil : public UBlueprintFunctionLibrary
	{
	public:
		void TimerWithString(const class FScriptDelegate& Event, float Time, const class FString& Value);
		void TimerDynamicDelegateS__DelegateSignature(const class FString& Value);
		bool StructToVariant(class UProperty* AnyStruct, struct FZeuzVariant* Value);
		bool StructToByteArrayJSON(class UProperty* AnyStruct, struct FZeuzByteArray* Value);
		bool StructToByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value);
		bool StructFromVariant(class UProperty** AnyStruct, const struct FZeuzVariant& Value);
		bool StructFromByteArrayJSON(class UProperty** AnyStruct, const struct FZeuzByteArray& Value);
		bool StructFromByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value);
		bool StringNotEmpty(const class FString& String);
		bool StringIsEmpty(const class FString& String);
		bool SaveGameToByteArray(const class FString& Filename, struct FZeuzByteArray* Value);
		bool SaveGameFromByteArray(const struct FZeuzByteArray& Value, const class FString& Filename);
		bool JsonToVariant(const class FString& Json, struct FZeuzVariant* Variant);
		bool JsonFromVariant(const struct FZeuzVariant& Variant, class FString* Json);
		class FString GetSaveGamePath(const class FString& Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
