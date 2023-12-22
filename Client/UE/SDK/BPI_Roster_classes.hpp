#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Roster.BPI_Roster_C
class IBPI_Roster_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Roster_C* GetDefaultObj();

	void UpdateHealth();
	void UpdateCard();
};

}


