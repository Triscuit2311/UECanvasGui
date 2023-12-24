#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PlanningMap_Lines.BPI_PlanningMap_Lines_C
class IBPI_PlanningMap_Lines_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlanningMap_Lines_C* GetDefaultObj();

	void ScaleLineWeightByZoom(float CurrentZoom);
};

}


