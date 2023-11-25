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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NiagaraCore.NiagaraCompileHash
	 * Size -> 0x0010
	 */
	struct FNiagaraCompileHash
	{
	public:
		TArray<uint8_t>                                              DataHash;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
