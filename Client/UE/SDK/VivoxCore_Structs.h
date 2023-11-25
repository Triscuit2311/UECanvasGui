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
	 * Enum VivoxCore.EAudioFadeModel
	 */
	enum class EAudioFadeModel : uint8_t
	{
		InverseByDistance     = 0,
		LinearByDistance      = 1,
		ExponentialByDistance = 2,
		MAX                   = 3
	};

	/**
	 * Enum VivoxCore.DeviceType
	 */
	enum class EDeviceType : uint8_t
	{
		DeviceTypeNullDevice                 = 0,
		DeviceTypeSpecificDevice             = 1,
		DeviceTypeDefaultSystemDevice        = 2,
		DeviceTypeDefaultCommunicationDevice = 3,
		DeviceTypeDeviceType_MAX             = 4
	};

	/**
	 * Enum VivoxCore.ChannelType
	 */
	enum class EChannelType : uint8_t
	{
		ChannelTypeNonPositional   = 0,
		ChannelTypePositional      = 1,
		ChannelTypeEcho            = 2,
		ChannelTypeChannelType_MAX = 3
	};

	/**
	 * Enum VivoxCore.ConnectionState
	 */
	enum class EConnectionState : uint8_t
	{
		ConnectionStateDisconnected        = 0,
		ConnectionStateConnecting          = 1,
		ConnectionStateConnected           = 2,
		ConnectionStateDisconnecting       = 3,
		ConnectionStateConnectionState_MAX = 4
	};

	/**
	 * Enum VivoxCore.ParticipantSpeakingUpdateRate
	 */
	enum class EParticipantSpeakingUpdateRate : uint8_t
	{
		ParticipantSpeakingUpdateRateStateChange                       = 0,
		ParticipantSpeakingUpdateRateNever                             = 1,
		ParticipantSpeakingUpdateRateUpdate1Hz                         = 2,
		ParticipantSpeakingUpdateRateUpdate5Hz                         = 3,
		ParticipantSpeakingUpdateRateUpdate10Hz                        = 4,
		ParticipantSpeakingUpdateRateParticipantSpeakingUpdateRate_MAX = 5
	};

	/**
	 * Enum VivoxCore.TTSMessageState
	 */
	enum class ETTSMessageState : uint8_t
	{
		TTSMessageStatePlaying             = 0,
		TTSMessageStateEnqueued            = 1,
		TTSMessageStateTTSMessageState_MAX = 2
	};

	/**
	 * Enum VivoxCore.TransmissionMode
	 */
	enum class ETransmissionMode : uint8_t
	{
		TransmissionModeNone                 = 0,
		TransmissionModeSingle               = 1,
		TransmissionModeAll                  = 2,
		TransmissionModeTransmissionMode_MAX = 3
	};

	/**
	 * Enum VivoxCore.TTSDestination
	 */
	enum class ETTSDestination : uint8_t
	{
		TTSDestinationDefault                                   = 0,
		TTSDestinationRemoteTransmission                        = 1,
		TTSDestinationLocalPlayback                             = 2,
		TTSDestinationRemoteTransmissionWithLocalPlayback       = 3,
		TTSDestinationQueuedRemoteTransmission                  = 4,
		TTSDestinationQueuedLocalPlayback                       = 5,
		TTSDestinationQueuedRemoteTransmissionWithLocalPlayback = 6,
		TTSDestinationScreenReader                              = 7,
		TTSDestinationTTSDestination_MAX                        = 8
	};

	/**
	 * Enum VivoxCore.SubscriptionReply
	 */
	enum class ESubscriptionReply : uint8_t
	{
		SubscriptionReplyAllow                 = 0,
		SubscriptionReplyBlock                 = 1,
		SubscriptionReplySubscriptionReply_MAX = 2
	};

	/**
	 * Enum VivoxCore.PresenceStatus
	 */
	enum class EPresenceStatus : uint8_t
	{
		PresenceStatusUnavailable        = 0,
		PresenceStatusAvailable          = 1,
		PresenceStatusChat               = 2,
		PresenceStatusDoNotDisturb       = 3,
		PresenceStatusAway               = 4,
		PresenceStatusExtendedAway       = 5,
		PresenceStatusPresenceStatus_MAX = 6
	};

	/**
	 * Enum VivoxCore.SubscriptionMode
	 */
	enum class ESubscriptionMode : uint8_t
	{
		SubscriptionModeAccept               = 0,
		SubscriptionModeBlock                = 1,
		SubscriptionModeDefer                = 2,
		SubscriptionModeSubscriptionMode_MAX = 3
	};

	/**
	 * Enum VivoxCore.LoginState
	 */
	enum class ELoginState_ : uint8_t
	{
		LoginStateLoggedOut      = 0,
		LoginStateLoggingIn      = 1,
		LoginStateLoggedIn       = 2,
		LoginStateLoggingOut     = 3,
		LoginStateLoginState_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
