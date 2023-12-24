#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EZeuzSessionType : uint8
{
	ST_Developer                   = 0,
	ST_ApiKey                      = 1,
	ST_User                        = 2,
	ST_MAX                         = 3,
};

enum class EZeuzIDType : uint8
{
	Invalid                        = 0,
	Account                        = 1,
	Proj                           = 16,
	Env                            = 17,
	User                           = 18,
	Developer                      = 19,
	Team                           = 20,
	Session                        = 32,
	TempFile                       = 49,
	Lobby                          = 50,
	MatchMaking                    = 51,
	Message                        = 52,
	Inbox                          = 53,
	ConfigRule                     = 64,
	APIKey                         = 99,
	ZeuzIDType_MAX                 = 100,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzVariant
struct FZeuzVariant
{
public:
	uint8                                        Pad_1862[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzByteArray
struct FZeuzByteArray
{
public:
	uint8                                        Pad_1864[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzContext
struct FZeuzContext
{
public:
	class FString                                Endpoint;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionID;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionKey;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeveloperID;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjID;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvID;                                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Login;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EZeuzSessionType                  LoginType;                                         // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1867[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzACLEntry
struct FZeuzACLEntry
{
public:
	class FString                                GenID;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Grant;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Deny;                                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzACL
struct FZeuzACL
{
public:
	TArray<struct FZeuzACLEntry>                 List;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzTags
struct FZeuzTags
{
public:
	TArray<class FString>                        Tags;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProperties
struct FZeuzProperties
{
public:
	int32                                        Version;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTags                             Tags;                                              // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Val;                                               // 0x18(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzTimestamp
struct FZeuzTimestamp
{
public:
	uint8                                        Pad_186D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzItemCommon
struct FZeuzItemCommon
{
public:
	int32                                        Version;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzACL                              ACL;                                               // 0x18(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzProperties                       Props;                                             // 0x28(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Created;                                           // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CreatedBy;                                         // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Modified;                                          // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModifiedBy;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Expires;                                           // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProvisioningAccount
struct FZeuzProvisioningAccount
{
public:
	class FString                                ProviderID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpawnInstances;                                    // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1871[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Username;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApiKey;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecretKey;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubscriptionID;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TenantID;                                          // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientId;                                          // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSecret;                                      // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GcpCredentialsFile;                                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GcpFileName;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        GcpUploadFileDate;                                 // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x168 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzAccount
struct FZeuzAccount : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Managers;                                          // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Projects;                                          // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Teams;                                             // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Devs;                                              // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EMail;                                             // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Company;                                           // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Department;                                        // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Country;                                           // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZIP;                                               // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                City;                                              // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StreetAddr;                                        // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProvisioningAccount>      ProvisioningAccounts;                              // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminAccountsIn
struct FZeuzAdminAccountsIn
{
public:
	uint8                                        Pad_1874[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminCountResoucesIn
struct FZeuzAdminCountResoucesIn
{
public:
	bool                                         OnlyInUse;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1876[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RegionID;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminCountResoucesPerAccountOut
struct FZeuzAdminCountResoucesPerAccountOut
{
public:
	class FString                                AccountID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1877[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminTestpoolIn
struct FZeuzAdminTestpoolIn
{
public:
	class FString                                RegionID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x120 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzDeveloper
struct FZeuzDeveloper : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Account;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Role;                                              // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1879[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Login;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        LastLogin;                                         // 0xE0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Projects;                                          // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Teams;                                             // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Revoked;                                           // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTimestamp                        RevokedAt;                                         // 0x110(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        PasswordRequestExpiry;                             // 0x118(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminAccountIn
struct FZeuzAdminAccountIn
{
public:
	class FString                                AccountID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzServiceCfg
struct FZeuzServiceCfg
{
public:
	class FString                                ServiceType;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxScale;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurScale;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CloudScale;                                        // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Busy;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Idle;                                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Params;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0xE8 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzEnv
struct FZeuzEnv : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Proj;                                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Account;                                           // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1882[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Desc;                                              // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxScale;                                          // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurScale;                                          // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzServiceCfg>               Services;                                          // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminEnvIn
struct FZeuzAdminEnvIn
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminItem
struct FZeuzAdminItem
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminItemsOut
struct FZeuzAdminItemsOut
{
public:
	TArray<struct FZeuzAdminItem>                Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminItemsIn
struct FZeuzAdminItemsIn
{
public:
	class FString                                Table;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Query;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLogsearchOut
struct FZeuzLogsearchOut
{
public:
	struct FZeuzVariant                          Stats;                                             // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminLogsIn
struct FZeuzAdminLogsIn
{
public:
	class FString                                Start;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                End;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Account;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Project;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProjEnvInfo
struct FZeuzProjEnvInfo
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0xC8 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzProj
struct FZeuzProj : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Account;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProjEnvInfo>              Envs;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminStat
struct FZeuzAdminStat
{
public:
	class FString                                GroupCol;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountVal;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1886[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminStatsOut
struct FZeuzAdminStatsOut
{
public:
	TArray<struct FZeuzAdminStat>                Stats;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAdminStatsIn
struct FZeuzAdminStatsIn
{
public:
	class FString                                Table;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Start;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                End;                                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupBy;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Count;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0xF0 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzSession
struct FZeuzSession : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionKey;                                        // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dev;                                               // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                User;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApiKey;                                            // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Proj;                                              // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Admin;                                             // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAuthLoginResult
struct FZeuzAuthLoginResult
{
public:
	class FString                                Dev;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                User;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApiKey;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Proj;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionID;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionNonce;                                      // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        ValidThru;                                         // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAuthLoginIn
struct FZeuzAuthLoginIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUser;                                            // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsApi;                                             // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1895[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTimestamp                        Time;                                              // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nonce;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0xE0 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzAPIKey
struct FZeuzAPIKey : public FZeuzItemCommon
{
public:
	class FString                                APIKeyID;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjID;                                            // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Revoked;                                           // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTimestamp                        RevokedAt;                                         // 0xD0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        LastLogin;                                         // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAPIKeyDeleteIn
struct FZeuzAPIKeyDeleteIn
{
public:
	class FString                                APIKeyID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAPIKeyGenerateIn
struct FZeuzAPIKeyGenerateIn
{
public:
	class FString                                ProjID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAPIKeyGetIn
struct FZeuzAPIKeyGetIn
{
public:
	class FString                                APIKeyID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NotRevoked;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAPIKeyPwHashIn
struct FZeuzAPIKeyPwHashIn
{
public:
	class FString                                APIKeyID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemClassConfig
struct FZeuzProfileItemClassConfig
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountMaxU;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTimestamp                        LimitAddInterval;                                  // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Params;                                            // 0x20(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemNameCount
struct FZeuzProfileItemNameCount
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemConfig
struct FZeuzProfileItemConfig
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Class;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CountMaxU;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Stackable;                                         // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTimestamp                        LimitAddInterval;                                  // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Params;                                            // 0x30(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProfileItemNameCount>     BuyPrice;                                          // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemConfigGetOut
struct FZeuzProfileItemConfigGetOut
{
public:
	TArray<struct FZeuzProfileItemClassConfig>   Classes;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProfileItemConfig>        Items;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0xC0 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzInvItem
struct FZeuzInvItem : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzUserProfile
struct FZeuzUserProfile
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTags                             Tags;                                              // 0x10(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        FirstLogin;                                        // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        BanStart;                                          // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        BanEnd;                                            // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Comments;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Data;                                              // 0x48(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                        LinkedAccounts;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Friends;                                           // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Blocked;                                           // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0xD8 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzUser
struct FZeuzUser : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Login;                                             // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileUsersListOut
struct FZeuzProfileUsersListOut
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        UserIDs;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Zeuzsdk.ZeuzProfileItemAddIn
struct FZeuzProfileItemAddIn : public FZeuzProfileItemNameCount
{
public:
	class FString                                UserID;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemMove
struct FZeuzProfileItemMove
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemBarterIn
struct FZeuzProfileItemBarterIn
{
public:
	class FString                                UserIDA;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserIDB;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProfileItemMove>          OfferA;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProfileItemMove>          OfferB;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemUserName
struct FZeuzProfileItemUserName
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemRemIn
struct FZeuzProfileItemRemIn
{
public:
	class FString                                ItemID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileItemRemByNameIn
struct FZeuzProfileItemRemByNameIn
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct Zeuzsdk.ZeuzProfileItemTransferIn
struct FZeuzProfileItemTransferIn : public FZeuzProfileItemMove
{
public:
	class FString                                UserIDTo;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileUserCreateIn
struct FZeuzProfileUserCreateIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileUserLookupIn
struct FZeuzProfileUserLookupIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileUserPwHashIn
struct FZeuzProfileUserPwHashIn
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProfileUsersListIn
struct FZeuzProfileUsersListIn
{
public:
	class FString                                Offset;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountCreateIn
struct FZeuzAccountCreateIn
{
public:
	class FString                                Title;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EMail;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Company;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Department;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Country;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ZIP;                                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                City;                                              // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StreetAddr;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzProperties                       Props;                                             // 0x90(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProvisioningAccount>      ProvisioningAccounts;                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDeveloperCreateIn
struct FZeuzAccountDeveloperCreateIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountID;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccountRole;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PWHash;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzProperties                       Props;                                             // 0x58(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDeveloperCreatePwHashIn
struct FZeuzAccountDeveloperCreatePwHashIn
{
public:
	class FString                                DevID;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountID;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDeveloperPasswordResetExecuteRequestIn
struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn
{
public:
	class FString                                EMail;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hash;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PasswordHash;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PasswordConfirmHash;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDeveloperPasswordResetIn
struct FZeuzAccountDeveloperPasswordResetIn
{
public:
	class FString                                EMail;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDeveloperSetPwHashIn
struct FZeuzAccountDeveloperSetPwHashIn
{
public:
	class FString                                CurrentPWHash;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewPWHash;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDevQuickSetupOut
struct FZeuzAccountDevQuickSetupOut
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Account;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                User;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Dev;                                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Team;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Proj;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Env;                                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ApiKey;                                            // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountDevQuickSetupIn
struct FZeuzAccountDevQuickSetupIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PWHash;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountEnvCreateIn
struct FZeuzAccountEnvCreateIn
{
public:
	class FString                                Proj;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzProperties                       Props;                                             // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountEnvDeleteIn
struct FZeuzAccountEnvDeleteIn
{
public:
	class FString                                Proj;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Env;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountChange
struct FZeuzAccountChange
{
public:
	class FString                                Account;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x58 - 0x10)
// ScriptStruct Zeuzsdk.ZeuzAccountProjectCreateIn
struct FZeuzAccountProjectCreateIn : public FZeuzAccountChange
{
public:
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzProperties                       Props;                                             // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Zeuzsdk.ZeuzAccountProjectDeleteIn
struct FZeuzAccountProjectDeleteIn : public FZeuzAccountChange
{
public:
	class FString                                Proj;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAccountQuotaInfo
struct FZeuzAccountQuotaInfo
{
public:
	class FString                                Account;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuotaCL;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuotaBM;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x68 - 0x10)
// ScriptStruct Zeuzsdk.ZeuzAccountTeamCreateIn
struct FZeuzAccountTeamCreateIn : public FZeuzAccountChange
{
public:
	class FString                                Title;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzProperties                       Props;                                             // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                        Devs;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct Zeuzsdk.ZeuzAccountTeamDeleteIn
struct FZeuzAccountTeamDeleteIn : public FZeuzAccountChange
{
public:
	class FString                                Team;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0xC8 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzTeam
struct FZeuzTeam : public FZeuzItemCommon
{
public:
	class FString                                ID;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Account;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Devs;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineSpec
struct FZeuzMachineSpec
{
public:
	class FString                                OS;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CoreCount;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CoreMhz;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MemoryMB;                                          // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageGB;                                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IOBandwidthMBps;                                   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InetBandwidthMBps;                                 // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceInfo
struct FZeuzMachineResourceInfo
{
public:
	class FString                                ResourceID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocationID;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzMachineSpec                      Spec;                                              // 0x20(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Provider;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hostname;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreOnAlloc;                                     // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bound;                                             // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MachineID;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountID;                                         // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TierLevel;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTags                             Tags;                                              // 0xA8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                ProvisionJobID;                                    // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResourceClusterID;                                 // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeID;                                            // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllocatingDisabled;                                // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineInfo
struct FZeuzMachineInfo
{
public:
	class FString                                MachineID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResourceID;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocationID;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountID;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzMachineSpec                      Spec;                                              // 0x50(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzTags                             Tags;                                              // 0x78(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                LocationType;                                      // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Created;                                           // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Finished;                                          // 0xC0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineGetOut
struct FZeuzMachineGetOut
{
public:
	TArray<struct FZeuzMachineInfo>              Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineTagsSetIn
struct FZeuzMachineTagsSetIn
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTags                             Tags;                                              // 0x10(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceDataIn
struct FZeuzMachineResourceDataIn
{
public:
	class FString                                LocationID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzMachineSpec                      Spec;                                              // 0x10(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Hostname;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Provider;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreOnAlloc;                                     // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AccountID;                                         // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TierLevel;                                         // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzTags                             Tags;                                              // 0x88(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                ResourceClusterID;                                 // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeID;                                            // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllocatingDisabled;                                // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceAllocateIn
struct FZeuzMachineResourceAllocateIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Resources;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourcesCountIn
struct FZeuzMachineResourcesCountIn
{
public:
	class FString                                AccountID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceDeallocateIn
struct FZeuzMachineResourceDeallocateIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Machines;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachinePagination
struct FZeuzMachinePagination
{
public:
	bool                                         GetTotal;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Offset;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Limit;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1900[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OrderBy;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderAsc;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1902[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x88 - 0x28)
// ScriptStruct Zeuzsdk.ZeuzMachineGetIn
struct FZeuzMachineGetIn : public FZeuzMachinePagination
{
public:
	class FString                                MachineID;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionID;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocationType;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Start;                                             // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        End;                                               // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceGetIn
struct FZeuzMachineResourceGetIn
{
public:
	TArray<class FString>                        ResourceIDs;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                RegionID;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzMachineSpec                      MinSpec;                                           // 0x20(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                        MachineType;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Accounts;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Machines;                                          // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Providers;                                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MinTierLevel;                                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetBound;                                          // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetUnbound;                                        // 0x8D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForAllocation;                                     // 0x8E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForDeprovisioning;                                 // 0x8F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceDeprovisionIn
struct FZeuzMachineResourceDeprovisionIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Resources;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineResourceUpdateIn
struct FZeuzMachineResourceUpdateIn
{
public:
	class FString                                ResourceID;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzMachineResourceDataIn            Data;                                              // 0x10(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMetricsEvalCondition
struct FZeuzMetricsEvalCondition
{
public:
	int32                                        TimeFrame;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CoreUsageThreshold;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MemoryUsageThreshold;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IOBandwidthThreshold;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InetBandwidthThreshold;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzProviderResourceTypes
struct FZeuzProviderResourceTypes
{
public:
	class FString                                Provider;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ResourceTypes;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMachineScalingRules
struct FZeuzMachineScalingRules
{
public:
	bool                                         EnableScaling;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCloudMachines;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseAllBareMetalMachines;                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxBareMetalMachines;                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinFreePayloadCapacity;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFreePayloadCapacity;                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseMetrics;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CapEvalTimeFrame;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzMetricsEvalCondition>     BlockedConditions;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZeuzMetricsEvalCondition>     IdleConditions;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZeuzProviderResourceTypes>    AllowedResourceTypes;                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPortDef
struct FZeuzPortDef
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1912[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadDef
struct FZeuzPayloadDef
{
public:
	class FString                                HostOS;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Cmd;                                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FZeuzPortDef>                  Ports;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadQuota
struct FZeuzPayloadQuota
{
public:
	float                                        CpuCores;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MemoryMB;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageGB;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IOBandwidthMBps;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InetBandwidthMBps;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzSafetyLimits
struct FZeuzSafetyLimits
{
public:
	float                                        CoreMaxUsageThreshold;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CpuRemainingCores;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MemoryMBFree;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StorageGBFree;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IOMBpsFree;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InetMBpsFree;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadScalingRules
struct FZeuzPayloadScalingRules
{
public:
	bool                                         EnableScaling;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1919[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzPayloadDef                       PayloadDef;                                        // 0x8(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzPayloadQuota                     PayloadQuota;                                      // 0x48(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FZeuzSafetyLimits                     SafetyLimits;                                      // 0x5C(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinUnreservedPayloads;                             // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxUnreservedPayloads;                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzScalingRules
struct FZeuzScalingRules
{
public:
	struct FZeuzMachineScalingRules              Machine;                                           // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzPayloadScalingRules              Payload;                                           // 0x50(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationInfo
struct FZeuzAllocationInfo
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvID;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Machines;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzScalingRules                     ScalingRules;                                      // 0x68(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzMachineSpec                      MachineMinSpec;                                    // 0x138(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ActivePayloads;                                    // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReservedPayloads;                                  // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationDef
struct FZeuzAllocationDef
{
public:
	class FString                                Description;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FZeuzScalingRules                     ScalingRules;                                      // 0x20(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzMachineSpec                      MachineMinSpec;                                    // 0xF0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationCreateIn
struct FZeuzAllocationCreateIn
{
public:
	class FString                                ProjID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvID;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzAllocationDef                    AllocationDef;                                     // 0x20(0x118)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationGetOut
struct FZeuzAllocationGetOut
{
public:
	TArray<struct FZeuzAllocationInfo>           Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1920[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationPagination
struct FZeuzAllocationPagination
{
public:
	bool                                         GetTotal;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Offset;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Limit;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1923[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OrderBy;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderAsc;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1924[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x60 - 0x28)
// ScriptStruct Zeuzsdk.ZeuzAllocationGetIn
struct FZeuzAllocationGetIn : public FZeuzAllocationPagination
{
public:
	TArray<class FString>                        AllocationIDs;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         GetDisabled;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetEnabled;                                        // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1925[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Region;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OS;                                                // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationPayloadPortMapping
struct FZeuzAllocationPayloadPortMapping
{
public:
	int32                                        InternalPort;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExternalPort;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationPayloadInfo
struct FZeuzAllocationPayloadInfo
{
public:
	class FString                                PayloadID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineID;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvID;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FZeuzPayloadDef                       PayloadDef;                                        // 0x50(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reserved;                                          // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IP;                                                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzAllocationPayloadPortMapping> PortMapping;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Handling;                                          // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocationType;                                      // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Created;                                           // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Modified;                                          // 0xE0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationRegionCount
struct FZeuzAllocationRegionCount
{
public:
	class FString                                RegionID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationRequestServiceIn
struct FZeuzAllocationRequestServiceIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzAllocationRegionCount>    RegionCount;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TimeoutSeconds;                                    // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzAllocationUpdateIn
struct FZeuzAllocationUpdateIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzAllocationDef                    AllocationDef;                                     // 0x10(0x118)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzEchoOut
struct FZeuzEchoOut
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzEcho2Out
struct FZeuzEcho2Out
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzEchoIn
struct FZeuzEchoIn
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzEcho2In
struct FZeuzEcho2In
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzEcho3In
struct FZeuzEcho3In
{
public:
	int32                                        Num;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerPublishOutput
struct FZeuzImageManagerPublishOutput
{
public:
	class FString                                ImageHash;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageURL;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImagemanagerPublishState
struct FZeuzImagemanagerPublishState
{
public:
	class FString                                ImageID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageHash;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzImageManagerPublishOutput        Result;                                            // 0x40(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerListEntry
struct FZeuzImageManagerListEntry
{
public:
	struct FZeuzTimestamp                        Timestamp;                                         // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageHash;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ImageURL;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerManifestEntryPart
struct FZeuzImageManagerManifestEntryPart
{
public:
	class FString                                Hash;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartByte;                                         // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Length;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1939[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerManifestEntry
struct FZeuzImageManagerManifestEntry
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Filesize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Hash;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzImageManagerManifestEntryPart> Parts;                                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerManifest
struct FZeuzImageManagerManifest
{
public:
	TArray<struct FZeuzImageManagerManifestEntry> Entries;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerPushPullOutput
struct FZeuzImageManagerPushPullOutput
{
public:
	struct FZeuzImageManagerManifest             Manifest;                                          // 0x0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                ManifestHash;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TransferHashes;                                    // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerPublishInput
struct FZeuzImageManagerPublishInput
{
public:
	class FString                                Description;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerPullInput
struct FZeuzImageManagerPullInput
{
public:
	class FString                                ImageHash;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzImageManagerPresignedFileUrlIn
struct FZeuzImageManagerPresignedFileUrlIn
{
public:
	class FString                                ManifestHash;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzKVStoreKVEntry
struct FZeuzKVStoreKVEntry
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1940[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Partition;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzKVStoreKey
struct FZeuzKVStoreKey
{
public:
	class FString                                Partition;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Zeuzsdk.ZeuzKVStoreDelIn
struct FZeuzKVStoreDelIn : public FZeuzKVStoreKey
{
public:
};

// 0x10 (0x30 - 0x20)
// ScriptStruct Zeuzsdk.ZeuzKVStoreKeyValue
struct FZeuzKVStoreKeyValue : public FZeuzKVStoreKey
{
public:
	class FString                                Value;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct Zeuzsdk.ZeuzKVStorePutIn
struct FZeuzKVStorePutIn : public FZeuzKVStoreKeyValue
{
public:
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyStateBase
struct FZeuzLobbyStateBase
{
public:
	class FString                                LobbyID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsersMax;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Private;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasStarted;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1941[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Compatibility;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Params;                                            // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x58 - 0x38)
// ScriptStruct Zeuzsdk.ZeuzLobbyStateOut
struct FZeuzLobbyStateOut : public FZeuzLobbyStateBase
{
public:
	class FString                                InboxID;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasPassword;                                       // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1943[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UsersCur;                                          // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1947[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyUser
struct FZeuzLobbyUser
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Team;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Slot;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Info;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x78 - 0x50)
// ScriptStruct Zeuzsdk.ZeuzLobbyUserBase
struct FZeuzLobbyUserBase : public FZeuzLobbyUser
{
public:
	bool                                         Ready;                                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FZeuzVariant                          Params;                                            // 0x58(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Created;                                           // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Updated;                                           // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyUsersOut
struct FZeuzLobbyUsersOut
{
public:
	struct FZeuzLobbyStateOut                    Lobby;                                             // 0x0(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FZeuzLobbyUserBase>            Users;                                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ServerConnect;                                     // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyQueryOut
struct FZeuzLobbyQueryOut
{
public:
	TArray<struct FZeuzLobbyStateOut>            Results;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ResultOfs;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResultTotal;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyServerConnect
struct FZeuzLobbyServerConnect
{
public:
	class FString                                ServerConnect;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x58 - 0x38)
// ScriptStruct Zeuzsdk.ZeuzLobbyStateIn
struct FZeuzLobbyStateIn : public FZeuzLobbyStateBase
{
public:
	class FString                                UserID;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyStartDestroy
struct FZeuzLobbyStartDestroy
{
public:
	class FString                                LobbyID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyJoin
struct FZeuzLobbyJoin
{
public:
	class FString                                LobbyID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyKick
struct FZeuzLobbyKick
{
public:
	class FString                                LobbyID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetID;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ban;                                               // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1958[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyQueryIn
struct FZeuzLobbyQueryIn
{
public:
	int32                                        ListMax;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ListOfs;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Compatibility;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Params;                                            // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLobbyRefresh
struct FZeuzLobbyRefresh
{
public:
	class FString                                LobbyID;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastVersion;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x88 - 0x78)
// ScriptStruct Zeuzsdk.ZeuzLobbyUserState
struct FZeuzLobbyUserState : public FZeuzLobbyUserBase
{
public:
	class FString                                ServerConnect;                                     // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x98 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzLobbyUserIn
struct FZeuzLobbyUserIn : public FZeuzLobbyUserState
{
public:
	class FString                                LobbyID;                                           // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0x150 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzLocation
struct FZeuzLocation : public FZeuzItemCommon
{
public:
	class FString                                LocationID;                                        // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Provider;                                          // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ranking;                                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1960[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PingServer;                                        // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ProvisionTemplateName;                             // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ProvisionTemplateParams;                           // 0x100(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0xB0 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzProvider
struct FZeuzProvider : public FZeuzItemCommon
{
public:
	class FString                                ProviderID;                                        // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientProvisionable;                               // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ProvisioningAllowed;                               // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1963[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xA8 - 0x88)
// ScriptStruct Zeuzsdk.ZeuzRegion
struct FZeuzRegion : public FZeuzItemCommon
{
public:
	class FString                                RegionID;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLocalityLocationGetIn
struct FZeuzLocalityLocationGetIn
{
public:
	TArray<class FString>                        LocationIDs;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DisplayNames;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Providers;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LocationType;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                WithinRegion;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLocalityProviderGetIn
struct FZeuzLocalityProviderGetIn
{
public:
	TArray<class FString>                        ProviderIDs;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Names;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         GetClientProvisionable;                            // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetNonClientProvisionable;                         // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLocalityRegionGetIn
struct FZeuzLocalityRegionGetIn
{
public:
	TArray<class FString>                        RegionIDs;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DisplayNames;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        ContainsLocations;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLogsearchAccountLog
struct FZeuzLogsearchAccountLog
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Time;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1973[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1974[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Subroutine;                                        // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Container;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Proj;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Env;                                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Allocation;                                        // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Payload;                                           // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Machine;                                           // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLogsearchAccountOut
struct FZeuzLogsearchAccountOut
{
public:
	TArray<struct FZeuzLogsearchAccountLog>      Logs;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Total;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLogsearchLogsStatus
struct FZeuzLogsearchLogsStatus
{
public:
	class FString                                Status;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Step;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Total;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzLogsearchAccountIn
struct FZeuzLogsearchAccountIn
{
public:
	struct FZeuzTimestamp                        Start;                                             // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        End;                                               // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Level;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Payload;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Query;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OrderBy;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderAsc;                                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastLevel;                                         // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastTime;                                          // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1981[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastID;                                            // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMatchmakingUser
struct FZeuzMatchmakingUser
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Team;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Slot;                                              // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Info;                                              // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMatchMakingResult
struct FZeuzMatchMakingResult
{
public:
	class FString                                Result;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Map;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzMatchmakingUser>          Users;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ServerConnect;                                     // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ServerPorts;                                       // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Opt;                                               // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Signature;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Timestamp;                                         // 0x90(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMatchMakingStatus
struct FZeuzMatchMakingStatus
{
public:
	class FString                                MatchMakingId;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        ETA;                                               // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzMatchMakingResult                Result;                                            // 0x18(0x98)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Error;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                State;                                             // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMatchMakingStats
struct FZeuzMatchMakingStats
{
public:
	int32                                        UsersCount;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMatchMakingInit
struct FZeuzMatchMakingInit
{
public:
	struct FZeuzMatchmakingUser                  User;                                              // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Compatibility;                                     // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Params;                                            // 0x70(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0xB0 - 0x80)
// ScriptStruct Zeuzsdk.ZeuzMatchMakingPartyInit
struct FZeuzMatchMakingPartyInit : public FZeuzMatchMakingInit
{
public:
	TArray<struct FZeuzMatchmakingUser>          Party;                                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerConnect;                                     // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMatchMakingServerInfo
struct FZeuzMatchMakingServerInfo
{
public:
	class FString                                PayloadID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Allocatable;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1990[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UserCount;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IP;                                                // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Ports;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                MachineID;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Created;                                           // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Updated;                                           // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzMetricsQueryIn
struct FZeuzMetricsQueryIn
{
public:
	struct FZeuzTimestamp                        Start;                                             // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        End;                                               // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Step;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1993[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GroupBy;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PayloadIDs;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        MachineIDs;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AllocationIDs;                                     // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadPortMapping
struct FZeuzPayloadPortMapping
{
public:
	int32                                        InternalPort;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExternalPort;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadInfo
struct FZeuzPayloadInfo
{
public:
	class FString                                PayloadID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineID;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvID;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Regions;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FZeuzPayloadDef                       PayloadDef;                                        // 0x50(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reserved;                                          // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1998[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                IP;                                                // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FZeuzPayloadPortMapping>       PortMapping;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Handling;                                          // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LocationType;                                      // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Created;                                           // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzTimestamp                        Modified;                                          // 0xE0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadGetOut
struct FZeuzPayloadGetOut
{
public:
	TArray<struct FZeuzPayloadInfo>              Items;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1999[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadStateInfo
struct FZeuzPayloadStateInfo
{
public:
	class FString                                PayloadID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        State;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerCount;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           PlayerList;                                        // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadAllocateIn
struct FZeuzPayloadAllocateIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionID;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadCreateIn
struct FZeuzPayloadCreateIn
{
public:
	class FString                                AllocationID;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineID;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzPayloadDef                       PayloadDef;                                        // 0x20(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Hostname;                                          // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TTL;                                               // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadPagination
struct FZeuzPayloadPagination
{
public:
	bool                                         GetTotal;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Offset;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Limit;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OrderBy;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderAsc;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x80 - 0x28)
// ScriptStruct Zeuzsdk.ZeuzPayloadGetIn
struct FZeuzPayloadGetIn : public FZeuzPayloadPagination
{
public:
	TArray<class FString>                        AllocationIDs;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        MachineIDs;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PayloadIDs;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                LocationType;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionID;                                          // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetReserved;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetUnreserved;                                     // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetActive;                                         // 0x7A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GetInactive;                                       // 0x7B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadResumeIn
struct FZeuzPayloadResumeIn
{
public:
	class FString                                PayloadID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AllocationID;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineID;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzPayloadDef                       PayloadDef;                                        // 0x30(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Hostname;                                          // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TTL;                                               // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadStateGetIn
struct FZeuzPayloadStateGetIn
{
public:
	TArray<class FString>                        AllocationIDs;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        MachineIDs;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PayloadIDs;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPayloadUpdateIn
struct FZeuzPayloadUpdateIn
{
public:
	class FString                                PayloadID;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzPayloadDef                       PayloadDef;                                        // 0x10(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzServerBrowserStateBase
struct FZeuzServerBrowserStateBase
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientAddr;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsersCur;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsersMax;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Compatibility;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Params;                                            // 0x38(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x48 - 0x48)
// ScriptStruct Zeuzsdk.ZeuzServerBrowserStateOut
struct FZeuzServerBrowserStateOut : public FZeuzServerBrowserStateBase
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzServerBrowserQueryOut
struct FZeuzServerBrowserQueryOut
{
public:
	TArray<struct FZeuzServerBrowserStateOut>    Results;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ResultOfs;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResultTotal;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Errors;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzServerBrowserQueryIn
struct FZeuzServerBrowserQueryIn
{
public:
	int32                                        ListMax;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ListOfs;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filter;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Compatibility;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZeuzVariant                          Params;                                            // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x48 - 0x48)
// ScriptStruct Zeuzsdk.ZeuzServerBrowserStateIn
struct FZeuzServerBrowserStateIn : public FZeuzServerBrowserStateBase
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzSimpleAuthLoginIn
struct FZeuzSimpleAuthLoginIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EZeuzSessionType                  LoginType;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzSimpleProfileUserCreateIn
struct FZeuzSimpleProfileUserCreateIn
{
public:
	class FString                                Login;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzItem
struct FZeuzItem
{
public:
	uint8                                        Pad_19BA[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzACLPermission
struct FZeuzACLPermission
{
public:
	uint8                                        Pad_19BC[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Zeuzsdk.ZeuzPropVal
struct FZeuzPropVal
{
public:
	uint8                                        Pad_19BD[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


