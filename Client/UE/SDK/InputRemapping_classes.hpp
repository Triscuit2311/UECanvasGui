#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class InputRemapping.InputRemappingNodes
class UInputRemappingNodes : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UInputRemappingNodes* GetDefaultObj();

	void RemoveAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue);
	void RemoveActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue);
	void RebindAxisMapping(const struct FAxisMappingStruct& AxisMapping, const struct FAxisMappingStruct& NewData, bool* ReturnValue);
	void RebindActionMapping(const struct FActionMappingStruct& ActionMapping, const struct FActionMappingStruct& NewData, bool* ReturnValue);
	void GetAllAxisMappings(const struct FAxisMappingStruct& FilterData, const TArray<enum class EAxisMappingFilter>& Filters, bool* ReturnValue, TArray<struct FAxisMappingStruct>* AxisMappings);
	void GetAllActionMappings(const struct FActionMappingStruct& FilterData, const TArray<enum class EActionMappingFilter>& Filters, bool* ReturnValue, TArray<struct FActionMappingStruct>* ActionMappings);
	void CreateNewAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue);
	void CreateNewActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue);
	bool AxisMappingNotEqualActionMapping(struct FAxisMappingStruct& A, struct FAxisMappingStruct& B);
	bool AxisMappingEqualActionMapping(struct FAxisMappingStruct& A, struct FAxisMappingStruct& B);
	bool ActionMappingNotEqualActionMapping(struct FActionMappingStruct& A, struct FActionMappingStruct& B);
	bool ActionMappingEqualActionMapping(struct FActionMappingStruct& A, struct FActionMappingStruct& B);
};

}


