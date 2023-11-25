/**
 * Name: ron
 * Version: 25346
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamupdateBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4629);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4628);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4630);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTeam                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamgetBPS__DelegateSignature(const struct FZeuzTeam& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4624);
		
		struct
		{
			struct FZeuzTeam                                   Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4623);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTeam                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamgetBP__DelegateSignature(const struct FZeuzTeam& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4626);
		
		struct
		{
			struct FZeuzTeam                                   Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4619);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4618);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4620);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4614);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4613);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountTeamcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4615);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountQuotasetBPS__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4610);
		
		struct
		{
			struct FZeuzAccountQuotaInfo                       Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountQuotasetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4609);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountQuotasetBP__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4611);
		
		struct
		{
			struct FZeuzAccountQuotaInfo                       Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountQuotagetBPS__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4605);
		
		struct
		{
			struct FZeuzAccountQuotaInfo                       Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountQuotagetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4604);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountQuotagetBP__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4607);
		
		struct
		{
			struct FZeuzAccountQuotaInfo                       Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectupdateBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4601);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4600);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4602);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectsgetBPS__DelegateSignature(TArray<struct FZeuzProj> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4597);
		
		struct
		{
			TArray<struct FZeuzProj>                           Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectsgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4596);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectsgetBP__DelegateSignature(TArray<struct FZeuzProj> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4598);
		
		struct
		{
			TArray<struct FZeuzProj>                           Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProj                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectgetBPS__DelegateSignature(const struct FZeuzProj& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4593);
		
		struct
		{
			struct FZeuzProj                                   Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4592);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProj                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectgetBP__DelegateSignature(const struct FZeuzProj& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4594);
		
		struct
		{
			struct FZeuzProj                                   Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4588);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4587);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4589);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4582);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4581);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountProjectcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4583);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvupdateBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4578);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4577);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4579);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvsgetBPS__DelegateSignature(TArray<struct FZeuzEnv> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4574);
		
		struct
		{
			TArray<struct FZeuzEnv>                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvsgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4573);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvsgetBP__DelegateSignature(TArray<struct FZeuzEnv> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4575);
		
		struct
		{
			TArray<struct FZeuzEnv>                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvserviceupdateBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4570);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvserviceupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4569);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvserviceupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4571);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvservicedeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4566);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvservicedeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4565);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvservicedeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4567);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEnv                                    Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvgetBPS__DelegateSignature(const struct FZeuzEnv& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4562);
		
		struct
		{
			struct FZeuzEnv                                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4561);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEnv                                    Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvgetBP__DelegateSignature(const struct FZeuzEnv& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4563);
		
		struct
		{
			struct FZeuzEnv                                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4557);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4556);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4558);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4552);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4551);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountEnvcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4553);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDevQuickSetupOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevquicksetupBPS__DelegateSignature(const struct FZeuzAccountDevQuickSetupOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4546);
		
		struct
		{
			struct FZeuzAccountDevQuickSetupOut                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevquicksetupBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4545);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDevQuickSetupOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevquicksetupBP__DelegateSignature(const struct FZeuzAccountDevQuickSetupOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4548);
		
		struct
		{
			struct FZeuzAccountDevQuickSetupOut                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperupdateBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4542);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4541);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4543);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersgetBPS__DelegateSignature(TArray<struct FZeuzDeveloper> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4538);
		
		struct
		{
			TArray<struct FZeuzDeveloper>                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4537);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersgetBP__DelegateSignature(TArray<struct FZeuzDeveloper> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4539);
		
		struct
		{
			TArray<struct FZeuzDeveloper>                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4533);
		
		struct
		{
			struct FZeuzDeveloper                              Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4532);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4534);
		
		struct
		{
			struct FZeuzDeveloper                              Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperrevokeBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4529);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperrevokeBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4528);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperrevokeBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4530);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4524);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4523);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4525);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4519);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4518);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4520);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature(bool Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4515);
		
		struct
		{
			bool                                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4514);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature(bool Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4516);
		
		struct
		{
			bool                                               Result;
			unsigned char                                      UnknownData_0000[0x7];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperinviteBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4511);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperinviteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4510);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperinviteBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4512);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopergetBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4507);
		
		struct
		{
			struct FZeuzDeveloper                              Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopergetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4506);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopergetBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4508);
		
		struct
		{
			struct FZeuzDeveloper                              Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4502);
		
		struct
		{
			struct FZeuzDeveloper                              Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4501);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4503);
		
		struct
		{
			struct FZeuzDeveloper                              Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4497);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4496);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4498);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountupdateBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4493);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4492);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4494);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccount                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountgetBPS__DelegateSignature(const struct FZeuzAccount& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4489);
		
		struct
		{
			struct FZeuzAccount                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4488);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccount                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountgetBP__DelegateSignature(const struct FZeuzAccount& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4490);
		
		struct
		{
			struct FZeuzAccount                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4484);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4483);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::DelegateAccountAccountcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4485);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTeam                                   In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountTeamupdateBP(const struct FZeuzTeam& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4627);
		
		struct
		{
			struct FZeuzTeam                                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountTeamgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4622);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountTeamDeleteIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountTeamdeleteBP(const struct FZeuzAccountTeamDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4617);
		
		struct
		{
			struct FZeuzAccountTeamDeleteIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountTeamCreateIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountTeamcreateBP(const struct FZeuzAccountTeamCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4612);
		
		struct
		{
			struct FZeuzAccountTeamCreateIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountQuotasetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountQuotasetBP(const struct FZeuzAccountQuotaInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4608);
		
		struct
		{
			struct FZeuzAccountQuotaInfo                       In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountQuotagetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountQuotagetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4603);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProj                                   In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountProjectupdateBP(const struct FZeuzProj& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4599);
		
		struct
		{
			struct FZeuzProj                                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectsgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountProjectsgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4595);
		
		struct
		{
			TArray<class FString>                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountProjectgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4591);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountProjectDeleteIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountProjectdeleteBP(const struct FZeuzAccountProjectDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4586);
		
		struct
		{
			struct FZeuzAccountProjectDeleteIn                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountProjectCreateIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountProjectcreateBP(const struct FZeuzAccountProjectCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4580);
		
		struct
		{
			struct FZeuzAccountProjectCreateIn                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEnv                                    In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvupdateBP(const struct FZeuzEnv& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4576);
		
		struct
		{
			struct FZeuzEnv                                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvsgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvsgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4572);
		
		struct
		{
			TArray<class FString>                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvserviceupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServiceCfg                             In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvserviceupdateBP(const struct FZeuzServiceCfg& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4568);
		
		struct
		{
			struct FZeuzServiceCfg                             In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvservicedeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvservicedeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4564);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4560);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountEnvDeleteIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvdeleteBP(const struct FZeuzAccountEnvDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4555);
		
		struct
		{
			struct FZeuzAccountEnvDeleteIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountEnvCreateIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountEnvcreateBP(const struct FZeuzAccountEnvCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4550);
		
		struct
		{
			struct FZeuzAccountEnvCreateIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevquicksetupBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDevQuickSetupIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDevquicksetupBP(const struct FZeuzAccountDevQuickSetupIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4544);
		
		struct
		{
			struct FZeuzAccountDevQuickSetupIn                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDeveloperupdateBP(const struct FZeuzDeveloper& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4540);
		
		struct
		{
			struct FZeuzDeveloper                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDevelopersgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4536);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperSetPwHashIn            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDevelopersetpwhashBP(const struct FZeuzAccountDeveloperSetPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4531);
		
		struct
		{
			struct FZeuzAccountDeveloperSetPwHashIn            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperrevokeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDeveloperrevokeBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4527);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetrequestBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperPasswordResetIn        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDeveloperpasswordresetrequestBP(const struct FZeuzAccountDeveloperPasswordResetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4522);
		
		struct
		{
			struct FZeuzAccountDeveloperPasswordResetIn        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDeveloperpasswordresetBP(const struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4517);
		
		struct
		{
			struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperispasswordresethashexpiredBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDeveloperispasswordresethashexpiredBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4513);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperinviteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperCreateIn               In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDeveloperinviteBP(const struct FZeuzAccountDeveloperCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4509);
		
		struct
		{
			struct FZeuzAccountDeveloperCreateIn               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopergetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDevelopergetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4505);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreatepwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperCreatePwHashIn         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDevelopercreatepwhashBP(const struct FZeuzAccountDeveloperCreatePwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4500);
		
		struct
		{
			struct FZeuzAccountDeveloperCreatePwHashIn         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperCreateIn               In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountDevelopercreateBP(const struct FZeuzAccountDeveloperCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4495);
		
		struct
		{
			struct FZeuzAccountDeveloperCreateIn               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountAccountupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccount                                In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountAccountupdateBP(const struct FZeuzAccount& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4491);
		
		struct
		{
			struct FZeuzAccount                                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountAccountgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountAccountgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4487);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountAccountcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountCreateIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAccount::AccountAccountcreateBP(const struct FZeuzAccountCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4482);
		
		struct
		{
			struct FZeuzAccountCreateIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiAccount::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(239);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminStatsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminStatsBPS__DelegateSignature(const struct FZeuzAdminStatsOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4294);
		
		struct
		{
			struct FZeuzAdminStatsOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminStatsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4293);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminStatsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminStatsBP__DelegateSignature(const struct FZeuzAdminStatsOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4297);
		
		struct
		{
			struct FZeuzAdminStatsOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminProjectsBPS__DelegateSignature(TArray<struct FZeuzProj> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4288);
		
		struct
		{
			TArray<struct FZeuzProj>                           Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminProjectsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4287);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminProjectsBP__DelegateSignature(TArray<struct FZeuzProj> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4291);
		
		struct
		{
			TArray<struct FZeuzProj>                           Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchOut                           Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminLogsBPS__DelegateSignature(const struct FZeuzLogsearchOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4282);
		
		struct
		{
			struct FZeuzLogsearchOut                           Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminLogsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4281);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchOut                           Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminLogsBP__DelegateSignature(const struct FZeuzLogsearchOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4284);
		
		struct
		{
			struct FZeuzLogsearchOut                           Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminItemsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminItemsBPS__DelegateSignature(const struct FZeuzAdminItemsOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4275);
		
		struct
		{
			struct FZeuzAdminItemsOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminItemsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4274);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminItemsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminItemsBP__DelegateSignature(const struct FZeuzAdminItemsOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4278);
		
		struct
		{
			struct FZeuzAdminItemsOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminGetquotaBPS__DelegateSignature(int32_t Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4271);
		
		struct
		{
			int32_t                                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminGetquotaBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4270);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminGetquotaBP__DelegateSignature(int32_t Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4272);
		
		struct
		{
			int32_t                                            Result;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminEnvironmentsBPS__DelegateSignature(TArray<struct FZeuzEnv> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4264);
		
		struct
		{
			TArray<struct FZeuzEnv>                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminEnvironmentsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4263);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminEnvironmentsBP__DelegateSignature(TArray<struct FZeuzEnv> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4267);
		
		struct
		{
			TArray<struct FZeuzEnv>                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminDevelopersBPS__DelegateSignature(TArray<struct FZeuzDeveloper> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4258);
		
		struct
		{
			TArray<struct FZeuzDeveloper>                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminDevelopersBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4257);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminDevelopersBP__DelegateSignature(TArray<struct FZeuzDeveloper> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4260);
		
		struct
		{
			TArray<struct FZeuzDeveloper>                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBPS__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4252);
		
		struct
		{
			TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4251);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBP__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4254);
		
		struct
		{
			TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesBPS__DelegateSignature(int32_t Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4247);
		
		struct
		{
			int32_t                                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4246);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesBP__DelegateSignature(int32_t Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4248);
		
		struct
		{
			int32_t                                            Result;
			unsigned char                                      UnknownData_0001[0x4];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAccount>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminAccountsBPS__DelegateSignature(TArray<struct FZeuzAccount> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4234);
		
		struct
		{
			TArray<struct FZeuzAccount>                        Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminAccountsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4233);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAccount>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::DelegateAdminAccountsBP__DelegateSignature(TArray<struct FZeuzAccount> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4243);
		
		struct
		{
			TArray<struct FZeuzAccount>                        Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminStatsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminStatsIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminStatsBP(const struct FZeuzAdminStatsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4292);
		
		struct
		{
			struct FZeuzAdminStatsIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminProjectsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminAccountIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminProjectsBP(const struct FZeuzAdminAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4286);
		
		struct
		{
			struct FZeuzAdminAccountIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminLogsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminLogsIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminLogsBP(const struct FZeuzAdminLogsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4280);
		
		struct
		{
			struct FZeuzAdminLogsIn                            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminItemsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminItemsIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminItemsBP(const struct FZeuzAdminItemsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4273);
		
		struct
		{
			struct FZeuzAdminItemsIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminGetquotaBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminTestpoolIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminGetquotaBP(const struct FZeuzAdminTestpoolIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4269);
		
		struct
		{
			struct FZeuzAdminTestpoolIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminEnvironmentsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminEnvIn                             In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminEnvironmentsBP(const struct FZeuzAdminEnvIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4262);
		
		struct
		{
			struct FZeuzAdminEnvIn                             In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminDevelopersBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminAccountIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminDevelopersBP(const struct FZeuzAdminAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4256);
		
		struct
		{
			struct FZeuzAdminAccountIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesperaccBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminTestpoolIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminCountresourcesperaccBP(const struct FZeuzAdminTestpoolIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4250);
		
		struct
		{
			struct FZeuzAdminTestpoolIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminCountResoucesIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminCountresourcesBP(const struct FZeuzAdminCountResoucesIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4245);
		
		struct
		{
			struct FZeuzAdminCountResoucesIn                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminAccountsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminAccountsIn                        In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAdmin::AdminAccountsBP(const struct FZeuzAdminAccountsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4230);
		
		struct
		{
			struct FZeuzAdminAccountsIn                        In;
			unsigned char                                      UnknownData_0002[0x3];
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			unsigned char                                      UnknownData_0003[0x4];
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAdmin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiAdmin::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(240);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyUpdateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4357);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4356);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyUpdateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4358);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeySetpwhashBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4352);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeySetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4351);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeySetpwhashBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4353);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyRevokeBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4348);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyRevokeBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4347);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyRevokeBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4349);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGetBPS__DelegateSignature(TArray<struct FZeuzAPIKey> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4344);
		
		struct
		{
			TArray<struct FZeuzAPIKey>                         Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4343);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGetBP__DelegateSignature(TArray<struct FZeuzAPIKey> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4345);
		
		struct
		{
			TArray<struct FZeuzAPIKey>                         Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGetallBPS__DelegateSignature(TArray<struct FZeuzAPIKey> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4339);
		
		struct
		{
			TArray<struct FZeuzAPIKey>                         Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGetallBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4338);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGetallBP__DelegateSignature(TArray<struct FZeuzAPIKey> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4340);
		
		struct
		{
			TArray<struct FZeuzAPIKey>                         Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGenerateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4334);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGenerateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4333);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyGenerateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4335);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyDeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4329);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyDeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4328);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyDeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4330);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyCreateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4324);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4323);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::DelegateApikeyCreateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4326);
		
		struct
		{
			struct FZeuzAPIKey                                 Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyUpdateBP(const struct FZeuzAPIKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4355);
		
		struct
		{
			struct FZeuzAPIKey                                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeySetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyPwHashIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeySetpwhashBP(const struct FZeuzAPIKeyPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4350);
		
		struct
		{
			struct FZeuzAPIKeyPwHashIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyRevokeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyDeleteIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyRevokeBP(const struct FZeuzAPIKeyDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4346);
		
		struct
		{
			struct FZeuzAPIKeyDeleteIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyGetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4342);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyGetallBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyGetIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyGetallBP(const struct FZeuzAPIKeyGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4337);
		
		struct
		{
			struct FZeuzAPIKeyGetIn                            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyGenerateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyGenerateIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyGenerateBP(const struct FZeuzAPIKeyGenerateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4332);
		
		struct
		{
			struct FZeuzAPIKeyGenerateIn                       In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyDeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyDeleteIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyDeleteBP(const struct FZeuzAPIKeyDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4327);
		
		struct
		{
			struct FZeuzAPIKeyDeleteIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiApikey::ApikeyCreateBP(const struct FZeuzAPIKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4322);
		
		struct
		{
			struct FZeuzAPIKey                                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiApikey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiApikey::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(242);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushFileUrlBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPresignedFileUrlIn         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerPushFileUrlBP(const struct FZeuzImageManagerPresignedFileUrlIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4787);
		
		struct
		{
			struct FZeuzImageManagerPresignedFileUrlIn         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerManifest                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerPushBP(const struct FZeuzImageManagerManifest& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4786);
		
		struct
		{
			struct FZeuzImageManagerManifest                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullFileUrlBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPresignedFileUrlIn         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerPullFileUrlBP(const struct FZeuzImageManagerPresignedFileUrlIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4784);
		
		struct
		{
			struct FZeuzImageManagerPresignedFileUrlIn         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPullInput                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerPullBP(const struct FZeuzImageManagerPullInput& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4782);
		
		struct
		{
			struct FZeuzImageManagerPullInput                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPublishBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPublishInput               In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerPublishBP(const struct FZeuzImageManagerPublishInput& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4780);
		
		struct
		{
			struct FZeuzImageManagerPublishInput               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerListBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerListBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4779);
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerGetpublishstateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerGetpublishstateBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4778);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerDiscardBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::ImagemanagerDiscardBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4777);
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4776);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4775);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4774);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushBPS__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4773);
		
		struct
		{
			struct FZeuzImageManagerPushPullOutput             Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4772);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushBP__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4771);
		
		struct
		{
			struct FZeuzImageManagerPushPullOutput             Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4770);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4769);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4768);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullBPS__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4767);
		
		struct
		{
			struct FZeuzImageManagerPushPullOutput             Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4766);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullBP__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4761);
		
		struct
		{
			struct FZeuzImageManagerPushPullOutput             Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPublishBPS__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4760);
		
		struct
		{
			struct FZeuzImagemanagerPublishState               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPublishBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4759);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPublishBP__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4758);
		
		struct
		{
			struct FZeuzImagemanagerPublishState               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzImageManagerListEntry>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerListBPS__DelegateSignature(TArray<struct FZeuzImageManagerListEntry> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4757);
		
		struct
		{
			TArray<struct FZeuzImageManagerListEntry>          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerListBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4756);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzImageManagerListEntry>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerListBP__DelegateSignature(TArray<struct FZeuzImageManagerListEntry> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4754);
		
		struct
		{
			TArray<struct FZeuzImageManagerListEntry>          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBPS__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4753);
		
		struct
		{
			struct FZeuzImagemanagerPublishState               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4752);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBP__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4749);
		
		struct
		{
			struct FZeuzImagemanagerPublishState               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerDiscardBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4748);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerDiscardBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4747);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerDiscardBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4746);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiImagemanager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiImagemanager::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationUpdateBPS__DelegateSignature(const struct FZeuzAllocationInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4722);
		
		struct
		{
			struct FZeuzAllocationInfo                         Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4721);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationUpdateBP__DelegateSignature(const struct FZeuzAllocationInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4723);
		
		struct
		{
			struct FZeuzAllocationInfo                         Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAllocationPayloadInfo>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationRequestServicesBPS__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4714);
		
		struct
		{
			TArray<struct FZeuzAllocationPayloadInfo>          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationRequestServicesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4713);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAllocationPayloadInfo>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationRequestServicesBP__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4717);
		
		struct
		{
			TArray<struct FZeuzAllocationPayloadInfo>          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationGetOut                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationGetBPS__DelegateSignature(const struct FZeuzAllocationGetOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4707);
		
		struct
		{
			struct FZeuzAllocationGetOut                       Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4706);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationGetOut                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationGetBP__DelegateSignature(const struct FZeuzAllocationGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4709);
		
		struct
		{
			struct FZeuzAllocationGetOut                       Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationCreateBPS__DelegateSignature(const struct FZeuzAllocationInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4691);
		
		struct
		{
			struct FZeuzAllocationInfo                         Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4690);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::DelegateAllocationCreateBP__DelegateSignature(const struct FZeuzAllocationInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4702);
		
		struct
		{
			struct FZeuzAllocationInfo                         Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationUpdateIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::AllocationUpdateBP(const struct FZeuzAllocationUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4720);
		
		struct
		{
			struct FZeuzAllocationUpdateIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationRequestServicesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationRequestServiceIn             In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::AllocationRequestServicesBP(const struct FZeuzAllocationRequestServiceIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4712);
		
		struct
		{
			struct FZeuzAllocationRequestServiceIn             In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationGetIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::AllocationGetBP(const struct FZeuzAllocationGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4705);
		
		struct
		{
			struct FZeuzAllocationGetIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationCreateIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAllocation::AllocationCreateBP(const struct FZeuzAllocationCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4689);
		
		struct
		{
			struct FZeuzAllocationCreateIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAllocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiAllocation::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(241);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiKVStore.KVStorePutBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStorePutIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::KVStorePutBP(const struct FZeuzKVStorePutIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4802);
		
		struct
		{
			struct FZeuzKVStorePutIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiKVStore.KVStoreGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreKey                             In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::KVStoreGetBP(const struct FZeuzKVStoreKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4801);
		
		struct
		{
			struct FZeuzKVStoreKey                             In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiKVStore.KVStoreDelBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreDelIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::KVStoreDelBP(const struct FZeuzKVStoreDelIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4798);
		
		struct
		{
			struct FZeuzKVStoreDelIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStorePutBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4797);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStorePutBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4796);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStorePutBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4795);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreKVEntry                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStoreGetBPS__DelegateSignature(const struct FZeuzKVStoreKVEntry& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4794);
		
		struct
		{
			struct FZeuzKVStoreKVEntry                         Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStoreGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4793);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreKVEntry                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStoreGetBP__DelegateSignature(const struct FZeuzKVStoreKVEntry& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4791);
		
		struct
		{
			struct FZeuzKVStoreKVEntry                         Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStoreDelBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4790);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStoreDelBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4789);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiKVStore::DelegateKVStoreDelBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4788);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiKVStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiKVStore::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(246);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchStartexportBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::LogsearchStartexportBP(const struct FZeuzLogsearchAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4933);
		
		struct
		{
			struct FZeuzLogsearchAccountIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchDownloadexportBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::LogsearchDownloadexportBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4932);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchCheckexportBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::LogsearchCheckexportBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4931);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchAccountBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::LogsearchAccountBP(const struct FZeuzLogsearchAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4929);
		
		struct
		{
			struct FZeuzLogsearchAccountIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchStartexportBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4928);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchStartexportBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4927);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchStartexportBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4926);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4925);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4924);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4923);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchLogsStatus                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchCheckexportBPS__DelegateSignature(const struct FZeuzLogsearchLogsStatus& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4922);
		
		struct
		{
			struct FZeuzLogsearchLogsStatus                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchCheckexportBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4921);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchLogsStatus                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchCheckexportBP__DelegateSignature(const struct FZeuzLogsearchLogsStatus& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4919);
		
		struct
		{
			struct FZeuzLogsearchLogsStatus                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchAccountBPS__DelegateSignature(const struct FZeuzLogsearchAccountOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4918);
		
		struct
		{
			struct FZeuzLogsearchAccountOut                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchAccountBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4917);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLogsearch::DelegateLogsearchAccountBP__DelegateSignature(const struct FZeuzLogsearchAccountOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4914);
		
		struct
		{
			struct FZeuzLogsearchAccountOut                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiLogsearch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiLogsearch::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(249);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyUserBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUserIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyUserBP(const struct FZeuzLobbyUserIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4857);
		
		struct
		{
			struct FZeuzLobbyUserIn                            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStateIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyUpdateBP(const struct FZeuzLobbyStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4856);
		
		struct
		{
			struct FZeuzLobbyStateIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyStartBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStartDestroy                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyStartBP(const struct FZeuzLobbyStartDestroy& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4855);
		
		struct
		{
			struct FZeuzLobbyStartDestroy                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyRefreshBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyRefresh                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyRefreshBP(const struct FZeuzLobbyRefresh& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4853);
		
		struct
		{
			struct FZeuzLobbyRefresh                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyQueryBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyQueryIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyQueryBP(const struct FZeuzLobbyQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4851);
		
		struct
		{
			struct FZeuzLobbyQueryIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyLeaveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyJoin                              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyLeaveBP(const struct FZeuzLobbyJoin& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4850);
		
		struct
		{
			struct FZeuzLobbyJoin                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyKickBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyKick                              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyKickBP(const struct FZeuzLobbyKick& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4848);
		
		struct
		{
			struct FZeuzLobbyKick                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyJoinBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyJoin                              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyJoinBP(const struct FZeuzLobbyJoin& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4846);
		
		struct
		{
			struct FZeuzLobbyJoin                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyDestroyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStartDestroy                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyDestroyBP(const struct FZeuzLobbyStartDestroy& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4844);
		
		struct
		{
			struct FZeuzLobbyStartDestroy                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStateIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::LobbyCreateBP(const struct FZeuzLobbyStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4842);
		
		struct
		{
			struct FZeuzLobbyStateIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyUserBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4841);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyUserBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4840);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyUserBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4839);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyUpdateBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4838);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4837);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyUpdateBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4836);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyServerConnect                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyStartBPS__DelegateSignature(const struct FZeuzLobbyServerConnect& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4835);
		
		struct
		{
			struct FZeuzLobbyServerConnect                     Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyStartBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4834);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyServerConnect                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyStartBP__DelegateSignature(const struct FZeuzLobbyServerConnect& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4832);
		
		struct
		{
			struct FZeuzLobbyServerConnect                     Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyRefreshBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4831);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyRefreshBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4830);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyRefreshBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4829);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyQueryOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyQueryBPS__DelegateSignature(const struct FZeuzLobbyQueryOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4828);
		
		struct
		{
			struct FZeuzLobbyQueryOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyQueryBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4827);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyQueryOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyQueryBP__DelegateSignature(const struct FZeuzLobbyQueryOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4825);
		
		struct
		{
			struct FZeuzLobbyQueryOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyLeaveBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4824);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyLeaveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4823);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyLeaveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4822);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyKickBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4821);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyKickBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4820);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyKickBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4819);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyJoinBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4818);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyJoinBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4817);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyJoinBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4816);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyDestroyBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4815);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyDestroyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4814);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyDestroyBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4813);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyCreateBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4812);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4811);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLobby::DelegateLobbyCreateBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4805);
		
		struct
		{
			struct FZeuzLobbyUsersOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiLobby::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(247);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadUpdateIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadUpdateBP(const struct FZeuzPayloadUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5059);
		
		struct
		{
			struct FZeuzPayloadUpdateIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadUnreserveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadUnreserveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5058);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadStateupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadStateGetIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadStateupdateBP(const struct FZeuzPayloadStateGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5057);
		
		struct
		{
			struct FZeuzPayloadStateGetIn                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadStateinfoBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadStateGetIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadStateinfoBP(const struct FZeuzPayloadStateGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5055);
		
		struct
		{
			struct FZeuzPayloadStateGetIn                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadResumeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadResumeIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadResumeBP(const struct FZeuzPayloadResumeIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5053);
		
		struct
		{
			struct FZeuzPayloadResumeIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadRestartBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadRestartBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5052);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadReserveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadReserveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5051);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5050);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadGetIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadGetBP(const struct FZeuzPayloadGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5047);
		
		struct
		{
			struct FZeuzPayloadGetIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadCreateIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadCreateBP(const struct FZeuzPayloadCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5045);
		
		struct
		{
			struct FZeuzPayloadCreateIn                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadAllocateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadAllocateIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::PayloadAllocateBP(const struct FZeuzPayloadAllocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5043);
		
		struct
		{
			struct FZeuzPayloadAllocateIn                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadUpdateBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5042);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5041);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadUpdateBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5040);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadUnreserveBPS__DelegateSignature(bool Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5039);
		
		struct
		{
			bool                                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadUnreserveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5038);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadUnreserveBP__DelegateSignature(bool Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5037);
		
		struct
		{
			bool                                               Result;
			unsigned char                                      UnknownData_0000[0x7];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadStateupdateBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5036);
		
		struct
		{
			TArray<struct FZeuzPayloadStateInfo>               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadStateupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5035);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadStateupdateBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5034);
		
		struct
		{
			TArray<struct FZeuzPayloadStateInfo>               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadStateinfoBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5033);
		
		struct
		{
			TArray<struct FZeuzPayloadStateInfo>               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadStateinfoBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5032);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadStateinfoBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5030);
		
		struct
		{
			TArray<struct FZeuzPayloadStateInfo>               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadResumeBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5029);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadResumeBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5028);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadResumeBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5027);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadRestartBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5026);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadRestartBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5025);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadRestartBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5024);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadReserveBPS__DelegateSignature(bool Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5023);
		
		struct
		{
			bool                                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadReserveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5022);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadReserveBP__DelegateSignature(bool Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5021);
		
		struct
		{
			bool                                               Result;
			unsigned char                                      UnknownData_0001[0x7];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5020);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5019);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5018);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadGetBPS__DelegateSignature(const struct FZeuzPayloadGetOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5017);
		
		struct
		{
			struct FZeuzPayloadGetOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5016);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadGetBP__DelegateSignature(const struct FZeuzPayloadGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5014);
		
		struct
		{
			struct FZeuzPayloadGetOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadCreateBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5013);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5012);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadCreateBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5011);
		
		struct
		{
			struct FZeuzPayloadInfo                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadAllocateBPS__DelegateSignature(TArray<struct FZeuzPayloadInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5010);
		
		struct
		{
			TArray<struct FZeuzPayloadInfo>                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadAllocateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5009);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPayload::DelegatePayloadAllocateBP__DelegateSignature(TArray<struct FZeuzPayloadInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5006);
		
		struct
		{
			TArray<struct FZeuzPayloadInfo>                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiPayload::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(253);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo4BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::Echo4BP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4745);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo3BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho3In                                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::Echo3BP(const struct FZeuzEcho3In& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4743);
		
		struct
		{
			struct FZeuzEcho3In                                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			unsigned char                                      UnknownData_0000[0x4];
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo2BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho2In                                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::Echo2BP(const struct FZeuzEcho2In& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4741);
		
		struct
		{
			struct FZeuzEcho2In                                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo1BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoIn                                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::Echo1BP(const struct FZeuzEchoIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4739);
		
		struct
		{
			struct FZeuzEchoIn                                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho4BPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4738);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho4BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4737);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho4BP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4736);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho3BPS__DelegateSignature(const struct FZeuzEchoOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4735);
		
		struct
		{
			struct FZeuzEchoOut                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho3BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4734);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho3BP__DelegateSignature(const struct FZeuzEchoOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4733);
		
		struct
		{
			struct FZeuzEchoOut                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho2Out                               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho2BPS__DelegateSignature(const struct FZeuzEcho2Out& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4732);
		
		struct
		{
			struct FZeuzEcho2Out                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho2BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4731);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho2Out                               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho2BP__DelegateSignature(const struct FZeuzEcho2Out& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4729);
		
		struct
		{
			struct FZeuzEcho2Out                               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho1BPS__DelegateSignature(const struct FZeuzEchoOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4728);
		
		struct
		{
			struct FZeuzEchoOut                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho1BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4727);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiEcho::DelegateEcho1BP__DelegateSignature(const struct FZeuzEchoOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4725);
		
		struct
		{
			struct FZeuzEchoOut                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiEcho.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiEcho::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(244);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthSessiondelBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4320);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthSessiondelBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4319);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthSessiondelBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4321);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthLogoutBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4316);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthLogoutBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4315);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthLogoutBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4317);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAuthLoginResult                        Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzAuthLoginResult& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4310);
		
		struct
		{
			struct FZeuzAuthLoginResult                        Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthLoginBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4309);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAuthLoginResult                        Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthLoginBP__DelegateSignature(const struct FZeuzAuthLoginResult& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4312);
		
		struct
		{
			struct FZeuzAuthLoginResult                        Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Result                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthCheckBPS__DelegateSignature(const struct FZeuzTimestamp& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4306);
		
		struct
		{
			struct FZeuzTimestamp                              Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthCheckBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4305);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Result                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthCheckBP__DelegateSignature(const struct FZeuzTimestamp& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4307);
		
		struct
		{
			struct FZeuzTimestamp                              Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzSession>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthActivesessionsgetBPS__DelegateSignature(TArray<struct FZeuzSession> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4301);
		
		struct
		{
			TArray<struct FZeuzSession>                        Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthActivesessionsgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4300);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzSession>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::DelegateAuthActivesessionsgetBP__DelegateSignature(TArray<struct FZeuzSession> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4303);
		
		struct
		{
			TArray<struct FZeuzSession>                        Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthSessiondelBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::AuthSessiondelBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4318);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthLogoutBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::AuthLogoutBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4314);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthLoginBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAuthLoginIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::AuthLoginBP(const struct FZeuzAuthLoginIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4308);
		
		struct
		{
			struct FZeuzAuthLoginIn                            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthCheckBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::AuthCheckBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4304);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthActivesessionsgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiAuth::AuthActivesessionsgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4299);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiAuth::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(243);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityRegionUpdateBP(const struct FZeuzRegion& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4913);
		
		struct
		{
			struct FZeuzRegion                                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityRegionRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4912);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocalityRegionGetIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityRegionGetBP(const struct FZeuzLocalityRegionGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4910);
		
		struct
		{
			struct FZeuzLocalityRegionGetIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityRegionCreateBP(const struct FZeuzRegion& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4909);
		
		struct
		{
			struct FZeuzRegion                                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityProviderUpdateBP(const struct FZeuzProvider& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4908);
		
		struct
		{
			struct FZeuzProvider                               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityProviderRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4907);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocalityProviderGetIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityProviderGetBP(const struct FZeuzLocalityProviderGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4905);
		
		struct
		{
			struct FZeuzLocalityProviderGetIn                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityProviderCreateBP(const struct FZeuzProvider& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4904);
		
		struct
		{
			struct FZeuzProvider                               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityLocationUpdateBP(const struct FZeuzLocation& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4903);
		
		struct
		{
			struct FZeuzLocation                               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityLocationRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4902);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocalityLocationGetIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityLocationGetBP(const struct FZeuzLocalityLocationGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4900);
		
		struct
		{
			struct FZeuzLocalityLocationGetIn                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::LocalityLocationCreateBP(const struct FZeuzLocation& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4899);
		
		struct
		{
			struct FZeuzLocation                               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionUpdateBPS__DelegateSignature(const struct FZeuzRegion& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4898);
		
		struct
		{
			struct FZeuzRegion                                 Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4897);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionUpdateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4896);
		
		struct
		{
			struct FZeuzRegion                                 Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4895);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4894);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4893);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzRegion>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionGetBPS__DelegateSignature(TArray<struct FZeuzRegion> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4892);
		
		struct
		{
			TArray<struct FZeuzRegion>                         Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4891);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzRegion>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionGetBP__DelegateSignature(TArray<struct FZeuzRegion> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4890);
		
		struct
		{
			TArray<struct FZeuzRegion>                         Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionCreateBPS__DelegateSignature(const struct FZeuzRegion& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4889);
		
		struct
		{
			struct FZeuzRegion                                 Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4888);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityRegionCreateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4886);
		
		struct
		{
			struct FZeuzRegion                                 Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderUpdateBPS__DelegateSignature(const struct FZeuzProvider& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4885);
		
		struct
		{
			struct FZeuzProvider                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4884);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderUpdateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4883);
		
		struct
		{
			struct FZeuzProvider                               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4882);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4881);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4880);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProvider>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderGetBPS__DelegateSignature(TArray<struct FZeuzProvider> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4879);
		
		struct
		{
			TArray<struct FZeuzProvider>                       Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4878);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProvider>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderGetBP__DelegateSignature(TArray<struct FZeuzProvider> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4877);
		
		struct
		{
			TArray<struct FZeuzProvider>                       Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderCreateBPS__DelegateSignature(const struct FZeuzProvider& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4876);
		
		struct
		{
			struct FZeuzProvider                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4875);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityProviderCreateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4873);
		
		struct
		{
			struct FZeuzProvider                               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationUpdateBPS__DelegateSignature(const struct FZeuzLocation& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4872);
		
		struct
		{
			struct FZeuzLocation                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4871);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationUpdateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4870);
		
		struct
		{
			struct FZeuzLocation                               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4869);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4868);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4867);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzLocation>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationGetBPS__DelegateSignature(TArray<struct FZeuzLocation> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4866);
		
		struct
		{
			TArray<struct FZeuzLocation>                       Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4865);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzLocation>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationGetBP__DelegateSignature(TArray<struct FZeuzLocation> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4864);
		
		struct
		{
			TArray<struct FZeuzLocation>                       Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationCreateBPS__DelegateSignature(const struct FZeuzLocation& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4863);
		
		struct
		{
			struct FZeuzLocation                               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4862);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiLocality::DelegateLocalityLocationCreateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4860);
		
		struct
		{
			struct FZeuzLocation                               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiLocality.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiLocality::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(248);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserslookupBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProfileUserLookupIn>            In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUserslookupBP(TArray<struct FZeuzProfileUserLookupIn> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4481);
		
		struct
		{
			TArray<struct FZeuzProfileUserLookupIn>            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserslistBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUsersListIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUserslistBP(const struct FZeuzProfileUsersListIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4479);
		
		struct
		{
			struct FZeuzProfileUsersListIn                     In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsersgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUsersgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4478);
		
		struct
		{
			TArray<class FString>                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUserPwHashIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUsersetpwhashBP(const struct FZeuzProfileUserPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4476);
		
		struct
		{
			struct FZeuzProfileUserPwHashIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUser                                   In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUsersetBP(const struct FZeuzUser& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4475);
		
		struct
		{
			struct FZeuzUser                                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserlookupBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUserLookupIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUserlookupBP(const struct FZeuzProfileUserLookupIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4473);
		
		struct
		{
			struct FZeuzProfileUserLookupIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUsergetpwhashBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4472);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUsergetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4471);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUserdeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4470);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsercreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUserCreateIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileUsercreateBP(const struct FZeuzProfileUserCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4468);
		
		struct
		{
			struct FZeuzProfileUserCreateIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileProfilesgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4467);
		
		struct
		{
			TArray<class FString>                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUserProfile                            In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileProfilesetBP(const struct FZeuzUserProfile& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4466);
		
		struct
		{
			struct FZeuzUserProfile                            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfilegetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileProfilegetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4465);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfiledeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileProfiledeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4464);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemtransferBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemTransferIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemtransferBP(const struct FZeuzProfileItemTransferIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4462);
		
		struct
		{
			struct FZeuzProfileItemTransferIn                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemsetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemsetBP(const struct FZeuzInvItem& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4461);
		
		struct
		{
			struct FZeuzInvItem                                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemrembynameBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemRemByNameIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemrembynameBP(const struct FZeuzProfileItemRemByNameIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4459);
		
		struct
		{
			struct FZeuzProfileItemRemByNameIn                 In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemremBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemRemIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemremBP(const struct FZeuzProfileItemRemIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4457);
		
		struct
		{
			struct FZeuzProfileItemRemIn                       In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemlistBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemlistBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4456);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetbynameBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemUserName                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemgetbynameBP(const struct FZeuzProfileItemUserName& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4454);
		
		struct
		{
			struct FZeuzProfileItemUserName                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4453);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemcreateBP(const struct FZeuzInvItem& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4452);
		
		struct
		{
			struct FZeuzInvItem                                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemconfiggetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemconfiggetBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4451);
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItembuyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemAddIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItembuyBP(const struct FZeuzProfileItemAddIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4450);
		
		struct
		{
			struct FZeuzProfileItemAddIn                       In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItembarterBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemBarterIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItembarterBP(const struct FZeuzProfileItemBarterIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4447);
		
		struct
		{
			struct FZeuzProfileItemBarterIn                    In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemaddBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemAddIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::ProfileItemaddBP(const struct FZeuzProfileItemAddIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4445);
		
		struct
		{
			struct FZeuzProfileItemAddIn                       In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserslookupBPS__DelegateSignature(TArray<class FString> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4444);
		
		struct
		{
			TArray<class FString>                              Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserslookupBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4443);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserslookupBP__DelegateSignature(TArray<class FString> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4442);
		
		struct
		{
			TArray<class FString>                              Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUsersListOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserslistBPS__DelegateSignature(const struct FZeuzProfileUsersListOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4441);
		
		struct
		{
			struct FZeuzProfileUsersListOut                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserslistBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4440);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUsersListOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserslistBP__DelegateSignature(const struct FZeuzProfileUsersListOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4438);
		
		struct
		{
			struct FZeuzProfileUsersListOut                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUser>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersgetBPS__DelegateSignature(TArray<struct FZeuzUser> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4437);
		
		struct
		{
			TArray<struct FZeuzUser>                           Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4436);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUser>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersgetBP__DelegateSignature(TArray<struct FZeuzUser> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4435);
		
		struct
		{
			TArray<struct FZeuzUser>                           Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersetpwhashBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4434);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4433);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersetpwhashBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4432);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersetBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4431);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4430);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsersetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4429);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserlookupBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4428);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserlookupBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4427);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserlookupBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4426);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsergetpwhashBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4425);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsergetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4424);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsergetpwhashBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4423);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUser                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsergetBPS__DelegateSignature(const struct FZeuzUser& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4422);
		
		struct
		{
			struct FZeuzUser                                   Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsergetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4421);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUser                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsergetBP__DelegateSignature(const struct FZeuzUser& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4419);
		
		struct
		{
			struct FZeuzUser                                   Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4418);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4417);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUserdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4416);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsercreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4415);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsercreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4414);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4413);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUserProfile>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilesgetBPS__DelegateSignature(TArray<struct FZeuzUserProfile> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4412);
		
		struct
		{
			TArray<struct FZeuzUserProfile>                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilesgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4411);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUserProfile>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilesgetBP__DelegateSignature(TArray<struct FZeuzUserProfile> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4410);
		
		struct
		{
			TArray<struct FZeuzUserProfile>                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilesetBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4409);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilesetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4408);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilesetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4407);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUserProfile                            Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilegetBPS__DelegateSignature(const struct FZeuzUserProfile& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4406);
		
		struct
		{
			struct FZeuzUserProfile                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilegetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4405);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUserProfile                            Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfilegetBP__DelegateSignature(const struct FZeuzUserProfile& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4403);
		
		struct
		{
			struct FZeuzUserProfile                            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfiledeleteBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4402);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfiledeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4401);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileProfiledeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4400);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemtransferBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4399);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemtransferBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4398);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemtransferBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4397);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemsetBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4396);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemsetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4395);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemsetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4394);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemrembynameBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4393);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemrembynameBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4392);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemrembynameBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4391);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemremBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4390);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemremBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4389);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemremBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4388);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzInvItem>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemlistBPS__DelegateSignature(TArray<struct FZeuzInvItem> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4387);
		
		struct
		{
			TArray<struct FZeuzInvItem>                        Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemlistBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4386);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzInvItem>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemlistBP__DelegateSignature(TArray<struct FZeuzInvItem> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4385);
		
		struct
		{
			TArray<struct FZeuzInvItem>                        Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemgetbynameBPS__DelegateSignature(const struct FZeuzInvItem& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4384);
		
		struct
		{
			struct FZeuzInvItem                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemgetbynameBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4383);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemgetbynameBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4382);
		
		struct
		{
			struct FZeuzInvItem                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemgetBPS__DelegateSignature(const struct FZeuzInvItem& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4381);
		
		struct
		{
			struct FZeuzInvItem                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4380);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemgetBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4378);
		
		struct
		{
			struct FZeuzInvItem                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4377);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4376);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4375);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemConfigGetOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemconfiggetBPS__DelegateSignature(const struct FZeuzProfileItemConfigGetOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4374);
		
		struct
		{
			struct FZeuzProfileItemConfigGetOut                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemconfiggetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4373);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemConfigGetOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemconfiggetBP__DelegateSignature(const struct FZeuzProfileItemConfigGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4368);
		
		struct
		{
			struct FZeuzProfileItemConfigGetOut                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItembuyBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4367);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItembuyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4366);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItembuyBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4365);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItembarterBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4364);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItembarterBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4363);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItembarterBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4362);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemaddBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4361);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemaddBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4360);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiProfile::DelegateProfileItemaddBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4359);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiProfile::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(254);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzID.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzID::IsValid(const class FString& ID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12876);
		
		struct
		{
			class FString                                      ID;
			bool                                               ReturnValue;
		} params;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzID.IsType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EZeuzIDType                                        typ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzID::IsType(const class FString& ID, EZeuzIDType typ)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12875);
		
		struct
		{
			class FString                                      ID;
			EZeuzIDType                                        typ;
			bool                                               ReturnValue;
		} params;
		params.ID = ID;
		params.typ = typ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzID.GetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EZeuzIDType                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EZeuzIDType UZeuzID::GetType(const class FString& ID)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12874);
		
		struct
		{
			class FString                                      ID;
			EZeuzIDType                                        ReturnValue;
		} params;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzID.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzID::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(258);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserRefreshBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserStateIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::ServerbrowserRefreshBP(const struct FZeuzServerBrowserStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5076);
		
		struct
		{
			struct FZeuzServerBrowserStateIn                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserQueryBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserQueryIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::ServerbrowserQueryBP(const struct FZeuzServerBrowserQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5074);
		
		struct
		{
			struct FZeuzServerBrowserQueryIn                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserDestroyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::ServerbrowserDestroyBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5073);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5072);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5071);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5070);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserQueryOut                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserQueryBPS__DelegateSignature(const struct FZeuzServerBrowserQueryOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5069);
		
		struct
		{
			struct FZeuzServerBrowserQueryOut                  Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserQueryBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5068);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserQueryOut                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserQueryBP__DelegateSignature(const struct FZeuzServerBrowserQueryOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5064);
		
		struct
		{
			struct FZeuzServerBrowserQueryOut                  Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5063);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5062);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5061);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiServerbrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiServerbrowser::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(255);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineUpdateresourceBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceUpdateIn                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineUpdateresourceBP(const struct FZeuzMachineResourceUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4687);
		
		struct
		{
			struct FZeuzMachineResourceUpdateIn                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineSettagsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineSettagsBP(TArray<struct FZeuzMachineTagsSetIn> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4686);
		
		struct
		{
			TArray<struct FZeuzMachineTagsSetIn>               In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineResourcedeprovisionBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceDeprovisionIn           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineResourcedeprovisionBP(const struct FZeuzMachineResourceDeprovisionIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4684);
		
		struct
		{
			struct FZeuzMachineResourceDeprovisionIn           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGettagsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineGettagsBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4683);
		
		struct
		{
			TArray<class FString>                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGetresourcesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceGetIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineGetresourcesBP(const struct FZeuzMachineResourceGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4681);
		
		struct
		{
			struct FZeuzMachineResourceGetIn                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGetinfoBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineGetinfoBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4680);
		
		struct
		{
			TArray<class FString>                              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineGetIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineGetBP(const struct FZeuzMachineGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4677);
		
		struct
		{
			struct FZeuzMachineGetIn                           In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineDeallocateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceDeallocateIn            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineDeallocateBP(const struct FZeuzMachineResourceDeallocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4675);
		
		struct
		{
			struct FZeuzMachineResourceDeallocateIn            In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineCountresourcesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourcesCountIn                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineCountresourcesBP(const struct FZeuzMachineResourcesCountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4673);
		
		struct
		{
			struct FZeuzMachineResourcesCountIn                In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineAllocateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceAllocateIn              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineAllocateBP(const struct FZeuzMachineResourceAllocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4671);
		
		struct
		{
			struct FZeuzMachineResourceAllocateIn              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineAddresourceBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceDataIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::MachineAddresourceBP(const struct FZeuzMachineResourceDataIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4669);
		
		struct
		{
			struct FZeuzMachineResourceDataIn                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineUpdateresourceBPS__DelegateSignature(const struct FZeuzMachineResourceInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4668);
		
		struct
		{
			struct FZeuzMachineResourceInfo                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineUpdateresourceBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4667);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineUpdateresourceBP__DelegateSignature(const struct FZeuzMachineResourceInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4666);
		
		struct
		{
			struct FZeuzMachineResourceInfo                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineSettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4665);
		
		struct
		{
			TArray<struct FZeuzMachineTagsSetIn>               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineSettagsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4664);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineSettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4663);
		
		struct
		{
			TArray<struct FZeuzMachineTagsSetIn>               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineResourcedeprovisionBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4662);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineResourcedeprovisionBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4661);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineResourcedeprovisionBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4660);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4659);
		
		struct
		{
			TArray<struct FZeuzMachineTagsSetIn>               Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGettagsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4658);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4656);
		
		struct
		{
			TArray<struct FZeuzMachineTagsSetIn>               Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineResourceInfo>            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetresourcesBPS__DelegateSignature(TArray<struct FZeuzMachineResourceInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4655);
		
		struct
		{
			TArray<struct FZeuzMachineResourceInfo>            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetresourcesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4654);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineResourceInfo>            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetresourcesBP__DelegateSignature(TArray<struct FZeuzMachineResourceInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4653);
		
		struct
		{
			TArray<struct FZeuzMachineResourceInfo>            Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetinfoBPS__DelegateSignature(TArray<struct FZeuzMachineInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4652);
		
		struct
		{
			TArray<struct FZeuzMachineInfo>                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetinfoBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4651);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetinfoBP__DelegateSignature(TArray<struct FZeuzMachineInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4650);
		
		struct
		{
			TArray<struct FZeuzMachineInfo>                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetBPS__DelegateSignature(const struct FZeuzMachineGetOut& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4649);
		
		struct
		{
			struct FZeuzMachineGetOut                          Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4648);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineGetBP__DelegateSignature(const struct FZeuzMachineGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4646);
		
		struct
		{
			struct FZeuzMachineGetOut                          Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineDeallocateBPS__DelegateSignature(TArray<class FString> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4645);
		
		struct
		{
			TArray<class FString>                              Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineDeallocateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4644);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineDeallocateBP__DelegateSignature(TArray<class FString> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4643);
		
		struct
		{
			TArray<class FString>                              Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineCountresourcesBPS__DelegateSignature(int32_t Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4642);
		
		struct
		{
			int32_t                                            Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineCountresourcesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4641);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineCountresourcesBP__DelegateSignature(int32_t Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4640);
		
		struct
		{
			int32_t                                            Result;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineAllocateBPS__DelegateSignature(TArray<struct FZeuzMachineInfo> Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4639);
		
		struct
		{
			TArray<struct FZeuzMachineInfo>                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineAllocateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4638);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineAllocateBP__DelegateSignature(TArray<struct FZeuzMachineInfo> Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4636);
		
		struct
		{
			TArray<struct FZeuzMachineInfo>                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineAddresourceBPS__DelegateSignature(const struct FZeuzMachineResourceInfo& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4635);
		
		struct
		{
			struct FZeuzMachineResourceInfo                    Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineAddresourceBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4634);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMachine::DelegateMachineAddresourceBP__DelegateSignature(const struct FZeuzMachineResourceInfo& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4631);
		
		struct
		{
			struct FZeuzMachineResourceInfo                    Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiMachine::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(250);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPing.DoPingBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPing::DoPingBP(const class FString& Target, float Timeout, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5097);
		
		struct
		{
			class FString                                      Target;
			float                                              Timeout;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			unsigned char                                      UnknownData_0000[0x4];
			struct FZeuzContext                                Ctx;
		} params;
		params.Target = Target;
		params.Timeout = Timeout;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Resolved                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPing::DelegateDoPingBPS__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5096);
		
		struct
		{
			class FString                                      Target;
			float                                              Duration;
			unsigned char                                      UnknownData_0001[0x4];
			class FString                                      Resolved;
		} params;
		params.Target = Target;
		params.Duration = Duration;
		params.Resolved = Resolved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPing::DelegateDoPingBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5095);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Resolved                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPing::DelegateDoPingBP__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5094);
		
		struct
		{
			class FString                                      Target;
			float                                              Duration;
			unsigned char                                      UnknownData_0002[0x4];
			class FString                                      Resolved;
			class FString                                      Error;
		} params;
		params.Target = Target;
		params.Duration = Duration;
		params.Resolved = Resolved;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiPing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiPing::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(259);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzTagsUtil.TagsToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTags                                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzTagsUtil::TagsToString(const struct FZeuzTags& In)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12878);
		
		struct
		{
			struct FZeuzTags                                   In;
			class FString                                      ReturnValue;
		} params;
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzTagsUtil.StringToTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzTags                                   Out                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzTagsUtil::StringToTags(const class FString& In, struct FZeuzTags* Out)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12877);
		
		struct
		{
			class FString                                      In;
			struct FZeuzTags                                   Out;
		} params;
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzTagsUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzTagsUtil::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(261);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiContext.SetDefaultContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiContext::SetDefaultContext(const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12873);
		
		struct
		{
			struct FZeuzContext                                Ctx;
		} params;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiContext.GetDefaultContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	 */
	struct FZeuzContext UZeuzApiContext::GetDefaultContext()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12872);
		
		struct
		{
			struct FZeuzContext                                ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiContext::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(257);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingUpdateBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4968);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingStatsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingStatsBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4967);
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerrefreshBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingServerInfo                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingServerrefreshBP(const struct FZeuzMatchMakingServerInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4966);
		
		struct
		{
			struct FZeuzMatchMakingServerInfo                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerdestroyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingServerInfo                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingServerdestroyBP(const struct FZeuzMatchMakingServerInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4964);
		
		struct
		{
			struct FZeuzMatchMakingServerInfo                  In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreatepartyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingPartyInit                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingCreatepartyBP(const struct FZeuzMatchMakingPartyInit& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4962);
		
		struct
		{
			struct FZeuzMatchMakingPartyInit                   In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingInit                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingCreateBP(const struct FZeuzMatchMakingInit& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4960);
		
		struct
		{
			struct FZeuzMatchMakingInit                        In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCloseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::MatchmakingCloseBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4959);
		
		struct
		{
			class FString                                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4958);
		
		struct
		{
			struct FZeuzMatchMakingStatus                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4957);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4956);
		
		struct
		{
			struct FZeuzMatchMakingStatus                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStats                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingStatsBPS__DelegateSignature(const struct FZeuzMatchMakingStats& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4955);
		
		struct
		{
			struct FZeuzMatchMakingStats                       Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingStatsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4954);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStats                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingStatsBP__DelegateSignature(const struct FZeuzMatchMakingStats& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4952);
		
		struct
		{
			struct FZeuzMatchMakingStats                       Result;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4951);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4950);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4949);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4948);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4947);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4946);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4945);
		
		struct
		{
			struct FZeuzMatchMakingStatus                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4944);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4943);
		
		struct
		{
			struct FZeuzMatchMakingStatus                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreateBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4942);
		
		struct
		{
			struct FZeuzMatchMakingStatus                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4941);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreateBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4937);
		
		struct
		{
			struct FZeuzMatchMakingStatus                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCloseBPS__DelegateSignature()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4936);
		
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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCloseBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4935);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCloseBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4934);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiMatchmaking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiMatchmaking::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(251);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.StringHash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Val                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzApiSimpleAuth::StringHash(const class FString& Val)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5093);
		
		struct
		{
			class FString                                      Val;
			class FString                                      ReturnValue;
		} params;
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.SimpleProfileUsercreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzSimpleProfileUserCreateIn              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::SimpleProfileUsercreateBP(const struct FZeuzSimpleProfileUserCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5091);
		
		struct
		{
			struct FZeuzSimpleProfileUserCreateIn              In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5090);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5089);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5088);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzContext& Context)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5084);
		
		struct
		{
			struct FZeuzContext                                Context;
		} params;
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateAuthLoginBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5083);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateAuthLoginBP__DelegateSignature(const struct FZeuzContext& Context, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5085);
		
		struct
		{
			struct FZeuzContext                                Context;
			class FString                                      Error;
		} params;
		params.Context = Context;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Expires                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBPS__DelegateSignature(const struct FZeuzTimestamp& Expires)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5080);
		
		struct
		{
			struct FZeuzTimestamp                              Expires;
		} params;
		params.Expires = Expires;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5079);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Expires                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBP__DelegateSignature(const struct FZeuzTimestamp& Expires, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5081);
		
		struct
		{
			struct FZeuzTimestamp                              Expires;
			class FString                                      Error;
		} params;
		params.Expires = Expires;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.CalcPWHash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Login                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzApiSimpleAuth::CalcPWHash(const class FString& Login, const class FString& Password)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5087);
		
		struct
		{
			class FString                                      Login;
			class FString                                      Password;
			class FString                                      ReturnValue;
		} params;
		params.Login = Login;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.AuthLoginBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzSimpleAuthLoginIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveDefaultContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::AuthLoginBP(const struct FZeuzSimpleAuthLoginIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx, bool SaveDefaultContext)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5082);
		
		struct
		{
			struct FZeuzSimpleAuthLoginIn                      In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
			bool                                               SaveDefaultContext;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		params.SaveDefaultContext = SaveDefaultContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.AuthCheckSessionBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiSimpleAuth::AuthCheckSessionBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5078);
		
		struct
		{
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiSimpleAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiSimpleAuth::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(256);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPubIP.GetPublicIPBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               v6                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPubIP::GetPublicIPBP(bool v6, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5101);
		
		struct
		{
			bool                                               v6;
			unsigned char                                      UnknownData_0000[0x3];
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			unsigned char                                      UnknownData_0001[0x4];
			struct FZeuzContext                                Ctx;
		} params;
		params.v6 = v6;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPubIP::DelegateGetPublicIPBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5100);
		
		struct
		{
			class FString                                      Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPubIP::DelegateGetPublicIPBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5099);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiPubIP::DelegateGetPublicIPBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5098);
		
		struct
		{
			class FString                                      Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiPubIP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiPubIP::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(260);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworksentBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsPayloadnetworksentBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5005);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworkreceivedBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsPayloadnetworkreceivedBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5004);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadmemoryusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsPayloadmemoryusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5003);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcpuusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsPayloadcpuusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5002);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcountBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsPayloadcountBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5001);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworksentBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsMachinenetworksentBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(5000);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworkreceivedBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsMachinenetworkreceivedBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4999);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinememoryusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsMachinememoryusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4998);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinecpuusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::MetricsMachinecpuusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4996);
		
		struct
		{
			struct FZeuzMetricsQueryIn                         In;
			class FScriptDelegate                              Callback;
			class FScriptDelegate                              OnSuccess;
			class FScriptDelegate                              OnFailure;
			struct FZeuzContext                                Ctx;
		} params;
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4995);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4994);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4993);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4992);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4991);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4990);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4989);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4988);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4987);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4986);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4985);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4984);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcountBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4983);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcountBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4982);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcountBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4981);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4980);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4979);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4978);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4977);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4976);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4975);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4974);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4973);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4972);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4971);
		
		struct
		{
			struct FZeuzVariant                                Result;
		} params;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4970);
		
		struct
		{
			class FString                                      Error;
		} params;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4969);
		
		struct
		{
			struct FZeuzVariant                                Result;
			class FString                                      Error;
		} params;
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiMetrics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiMetrics::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(252);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.ToDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              T                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct PCoreUObject_FDateTime                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct PCoreUObject_FDateTime UZeuzApiTime::ToDateTime(const struct FZeuzTimestamp& T)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12884);
		
		struct
		{
			struct FZeuzTimestamp                              T;
			struct PCoreUObject_FDateTime                      ReturnValue;
		} params;
		params.T = T;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.Now
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               adjusted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzTimestamp                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FZeuzTimestamp UZeuzApiTime::Now(bool adjusted)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12883);
		
		struct
		{
			bool                                               adjusted;
			unsigned char                                      UnknownData_0000[0x7];
			struct FZeuzTimestamp                              ReturnValue;
		} params;
		params.adjusted = adjusted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.IsZero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              T                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiTime::IsZero(const struct FZeuzTimestamp& T)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12882);
		
		struct
		{
			struct FZeuzTimestamp                              T;
			bool                                               ReturnValue;
		} params;
		params.T = T;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.GetOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FZeuzTimestamp UZeuzApiTime::GetOffset()
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12881);
		
		struct
		{
			struct FZeuzTimestamp                              ReturnValue;
		} params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.FromDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct PCoreUObject_FDateTime                      T                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               adjusted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzTimestamp                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FZeuzTimestamp UZeuzApiTime::FromDateTime(const struct PCoreUObject_FDateTime& T, bool adjusted)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12880);
		
		struct
		{
			struct PCoreUObject_FDateTime                      T;
			bool                                               adjusted;
			unsigned char                                      UnknownData_0001[0x7];
			struct FZeuzTimestamp                              ReturnValue;
		} params;
		params.T = T;
		params.adjusted = adjusted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.AdjustOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              ofs                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiTime::AdjustOffset(const struct FZeuzTimestamp& ofs)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(12879);
		
		struct
		{
			struct FZeuzTimestamp                              ofs;
		} params;
		params.ofs = ofs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiTime::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(262);
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.TimerWithString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiUtil::TimerWithString(const class FScriptDelegate& Event, float Time, const class FString& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4229);
		
		struct
		{
			class FScriptDelegate                              Event;
			float                                              Time;
			unsigned char                                      UnknownData_0000[0x4];
			class FString                                      Value;
		} params;
		params.Event = Event;
		params.Time = Time;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiUtil.TimerDynamicDelegateS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		void                                               ReturnValue
	 */
	void UZeuzApiUtil::TimerDynamicDelegateS__DelegateSignature(const class FString& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4228);
		
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
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructToVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzVariant                                Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructToVariant(class UProperty* AnyStruct, struct FZeuzVariant* Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4227);
		
		struct
		{
			class UProperty*                                   AnyStruct;
			struct FZeuzVariant                                Value;
			bool                                               ReturnValue;
		} params;
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayJSON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructToByteArrayJSON(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4226);
		
		struct
		{
			class UProperty*                                   AnyStruct;
			struct FZeuzByteArray                              Value;
			bool                                               ReturnValue;
		} params;
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructToByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4225);
		
		struct
		{
			class UProperty*                                   AnyStruct;
			struct FZeuzByteArray                              Value;
			bool                                               ReturnValue;
		} params;
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructFromVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzVariant                                Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructFromVariant(class UProperty** AnyStruct, const struct FZeuzVariant& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4224);
		
		struct
		{
			class UProperty*                                   AnyStruct;
			struct FZeuzVariant                                Value;
			bool                                               ReturnValue;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnyStruct != nullptr)
			*AnyStruct = params.AnyStruct;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayJSON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructFromByteArrayJSON(class UProperty** AnyStruct, const struct FZeuzByteArray& Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4223);
		
		struct
		{
			class UProperty*                                   AnyStruct;
			struct FZeuzByteArray                              Value;
			bool                                               ReturnValue;
		} params;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnyStruct != nullptr)
			*AnyStruct = params.AnyStruct;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructFromByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4222);
		
		struct
		{
			class UProperty*                                   AnyStruct;
			struct FZeuzByteArray                              Value;
			bool                                               ReturnValue;
		} params;
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StringNotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StringNotEmpty(const class FString& String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4221);
		
		struct
		{
			class FString                                      String;
			bool                                               ReturnValue;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StringIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StringIsEmpty(const class FString& String)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4220);
		
		struct
		{
			class FString                                      String;
			bool                                               ReturnValue;
		} params;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.SaveGameToByteArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::SaveGameToByteArray(const class FString& Filename, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4219);
		
		struct
		{
			class FString                                      Filename;
			struct FZeuzByteArray                              Value;
			bool                                               ReturnValue;
		} params;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.SaveGameFromByteArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzByteArray                              Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::SaveGameFromByteArray(const struct FZeuzByteArray& Value, const class FString& Filename)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4217);
		
		struct
		{
			struct FZeuzByteArray                              Value;
			class FString                                      Filename;
			bool                                               ReturnValue;
		} params;
		params.Value = Value;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.JsonToVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Json                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzVariant                                Variant                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::JsonToVariant(const class FString& Json, struct FZeuzVariant* Variant)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4216);
		
		struct
		{
			class FString                                      Json;
			struct FZeuzVariant                                Variant;
			bool                                               ReturnValue;
		} params;
		params.Json = Json;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Variant != nullptr)
			*Variant = params.Variant;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.JsonFromVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Variant                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Json                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::JsonFromVariant(const struct FZeuzVariant& Variant, class FString* Json)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4214);
		
		struct
		{
			struct FZeuzVariant                                Variant;
			class FString                                      Json;
			bool                                               ReturnValue;
		} params;
		params.Variant = Variant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Json != nullptr)
			*Json = params.Json;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.GetSaveGamePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzApiUtil::GetSaveGamePath(const class FString& Name)
	{
		static UFunction* fn = UObject::GetObjectCasted<UFunction>(4213);
		
		struct
		{
			class FString                                      Name;
			class FString                                      ReturnValue;
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
	 * 		Name   -> PredefinedFunction UZeuzApiUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 * Parameters:
	 * 		UClass*                                            ReturnValue
	 */
	UClass* UZeuzApiUtil::StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(263);
		return ptr;
	}

}


