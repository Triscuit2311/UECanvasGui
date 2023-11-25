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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MoviePlayer.EMoviePlaybackType
	 */
	enum class EMoviePlaybackType : uint8_t
	{
		MT_Normal      = 0,
		MT_Looped      = 1,
		MT_LoadingLoop = 2,
		MT_MAX         = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
