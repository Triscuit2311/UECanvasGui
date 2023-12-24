#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1BB8 - 0x1BA8)
// Class SteamSockets.SteamSocketsNetConnection
class USteamSocketsNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_9D7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetConnection* GetDefaultObj();

};

// 0x10 (0x770 - 0x760)
// Class SteamSockets.SteamSocketsNetDriver
class USteamSocketsNetDriver : public UNetDriver
{
public:
	uint8                                        Pad_9DF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetDriver* GetDefaultObj();

};

}


