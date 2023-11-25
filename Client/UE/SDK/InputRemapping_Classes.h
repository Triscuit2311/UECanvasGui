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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class InputRemapping.InputRemappingNodes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInputRemappingNodes : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue);
		void RemoveActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue);
		void RebindAxisMapping(const struct FAxisMappingStruct& AxisMapping, const struct FAxisMappingStruct& NewData, bool* ReturnValue);
		void RebindActionMapping(const struct FActionMappingStruct& ActionMapping, const struct FActionMappingStruct& NewData, bool* ReturnValue);
		void GetAllAxisMappings(const struct FAxisMappingStruct& FilterData, TArray<EAxisMappingFilter> Filters, bool* ReturnValue, TArray<struct FAxisMappingStruct>* AxisMappings);
		void GetAllActionMappings(const struct FActionMappingStruct& FilterData, TArray<EActionMappingFilter> Filters, bool* ReturnValue, TArray<struct FActionMappingStruct>* ActionMappings);
		void CreateNewAxisMapping(const struct FAxisMappingStruct& MappingData, bool* ReturnValue);
		void CreateNewActionMapping(const struct FActionMappingStruct& MappingData, bool* ReturnValue);
		bool AxisMappingNotEqualActionMapping(const struct FAxisMappingStruct& A, const struct FAxisMappingStruct& B);
		bool AxisMappingEqualActionMapping(const struct FAxisMappingStruct& A, const struct FAxisMappingStruct& B);
		bool ActionMappingNotEqualActionMapping(const struct FActionMappingStruct& A, const struct FActionMappingStruct& B);
		bool ActionMappingEqualActionMapping(const struct FActionMappingStruct& A, const struct FActionMappingStruct& B);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
