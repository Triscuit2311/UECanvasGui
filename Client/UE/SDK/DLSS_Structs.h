#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DLSS.EDLSSSettingOverride
	 */
	enum class EDLSSSettingOverride : uint8_t
	{
		Enabled            = 0,
		Disabled           = 1,
		UseProjectSettings = 2,
		MAX                = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
