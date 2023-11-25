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
	 * WidgetBlueprintGeneratedClass W_PreMission_PlanningMap.W_PreMission_PlanningMap_C
	 * Size -> 0x0060 (FullSize[0x02F0] - InheritedSize[0x0290])
	 */
	class UW_PreMission_PlanningMap_C : public UMissionPlanWidget
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                          MarkerCanvas;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<int32_t, class UW_PreMission_Tablet_MapMarker_C*>       MarkerMap;                                               // 0x02A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void Construct();
		void OnMarkerAdded(int32_t ID, const struct FPlanningMarker& Marker);
		void OnMarkerRemoved(int32_t ID);
		void OnLineAdded(int32_t ID, const struct FPlanningLine& Line);
		void OnLineRemoved(int32_t ID);
		void ExecuteUbergraph_W_PreMission_PlanningMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
