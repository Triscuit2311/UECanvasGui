﻿#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * Class NiagaraShader.NiagaraScriptBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraScriptBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
