#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshModelingTools.AddPatchToolBuilder
// (None)

class UClass* UAddPatchToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPatchToolBuilder");

	return Clss;
}


// AddPatchToolBuilder MeshModelingTools.Default__AddPatchToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAddPatchToolBuilder* UAddPatchToolBuilder::GetDefaultObj()
{
	static class UAddPatchToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPatchToolBuilder*>(UAddPatchToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPatchToolProperties
// (None)

class UClass* UAddPatchToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPatchToolProperties");

	return Clss;
}


// AddPatchToolProperties MeshModelingTools.Default__AddPatchToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAddPatchToolProperties* UAddPatchToolProperties::GetDefaultObj()
{
	static class UAddPatchToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPatchToolProperties*>(UAddPatchToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPatchTool
// (None)

class UClass* UAddPatchTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPatchTool");

	return Clss;
}


// AddPatchTool MeshModelingTools.Default__AddPatchTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddPatchTool* UAddPatchTool::GetDefaultObj()
{
	static class UAddPatchTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPatchTool*>(UAddPatchTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPrimitiveToolBuilder
// (None)

class UClass* UAddPrimitiveToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPrimitiveToolBuilder");

	return Clss;
}


// AddPrimitiveToolBuilder MeshModelingTools.Default__AddPrimitiveToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAddPrimitiveToolBuilder* UAddPrimitiveToolBuilder::GetDefaultObj()
{
	static class UAddPrimitiveToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPrimitiveToolBuilder*>(UAddPrimitiveToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralShapeToolProperties
// (None)

class UClass* UProceduralShapeToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralShapeToolProperties");

	return Clss;
}


// ProceduralShapeToolProperties MeshModelingTools.Default__ProceduralShapeToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralShapeToolProperties* UProceduralShapeToolProperties::GetDefaultObj()
{
	static class UProceduralShapeToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralShapeToolProperties*>(UProceduralShapeToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralRectangleToolProperties
// (None)

class UClass* UProceduralRectangleToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralRectangleToolProperties");

	return Clss;
}


// ProceduralRectangleToolProperties MeshModelingTools.Default__ProceduralRectangleToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralRectangleToolProperties* UProceduralRectangleToolProperties::GetDefaultObj()
{
	static class UProceduralRectangleToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralRectangleToolProperties*>(UProceduralRectangleToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralBoxToolProperties
// (None)

class UClass* UProceduralBoxToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralBoxToolProperties");

	return Clss;
}


// ProceduralBoxToolProperties MeshModelingTools.Default__ProceduralBoxToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralBoxToolProperties* UProceduralBoxToolProperties::GetDefaultObj()
{
	static class UProceduralBoxToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralBoxToolProperties*>(UProceduralBoxToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralRoundedRectangleToolProperties
// (None)

class UClass* UProceduralRoundedRectangleToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralRoundedRectangleToolProperties");

	return Clss;
}


// ProceduralRoundedRectangleToolProperties MeshModelingTools.Default__ProceduralRoundedRectangleToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralRoundedRectangleToolProperties* UProceduralRoundedRectangleToolProperties::GetDefaultObj()
{
	static class UProceduralRoundedRectangleToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralRoundedRectangleToolProperties*>(UProceduralRoundedRectangleToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralDiscToolProperties
// (None)

class UClass* UProceduralDiscToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralDiscToolProperties");

	return Clss;
}


// ProceduralDiscToolProperties MeshModelingTools.Default__ProceduralDiscToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralDiscToolProperties* UProceduralDiscToolProperties::GetDefaultObj()
{
	static class UProceduralDiscToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralDiscToolProperties*>(UProceduralDiscToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralPuncturedDiscToolProperties
// (None)

class UClass* UProceduralPuncturedDiscToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralPuncturedDiscToolProperties");

	return Clss;
}


// ProceduralPuncturedDiscToolProperties MeshModelingTools.Default__ProceduralPuncturedDiscToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralPuncturedDiscToolProperties* UProceduralPuncturedDiscToolProperties::GetDefaultObj()
{
	static class UProceduralPuncturedDiscToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralPuncturedDiscToolProperties*>(UProceduralPuncturedDiscToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralTorusToolProperties
// (None)

class UClass* UProceduralTorusToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralTorusToolProperties");

	return Clss;
}


// ProceduralTorusToolProperties MeshModelingTools.Default__ProceduralTorusToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralTorusToolProperties* UProceduralTorusToolProperties::GetDefaultObj()
{
	static class UProceduralTorusToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralTorusToolProperties*>(UProceduralTorusToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralCylinderToolProperties
// (None)

class UClass* UProceduralCylinderToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralCylinderToolProperties");

	return Clss;
}


// ProceduralCylinderToolProperties MeshModelingTools.Default__ProceduralCylinderToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralCylinderToolProperties* UProceduralCylinderToolProperties::GetDefaultObj()
{
	static class UProceduralCylinderToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralCylinderToolProperties*>(UProceduralCylinderToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralConeToolProperties
// (None)

class UClass* UProceduralConeToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralConeToolProperties");

	return Clss;
}


// ProceduralConeToolProperties MeshModelingTools.Default__ProceduralConeToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralConeToolProperties* UProceduralConeToolProperties::GetDefaultObj()
{
	static class UProceduralConeToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralConeToolProperties*>(UProceduralConeToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralArrowToolProperties
// (None)

class UClass* UProceduralArrowToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralArrowToolProperties");

	return Clss;
}


// ProceduralArrowToolProperties MeshModelingTools.Default__ProceduralArrowToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralArrowToolProperties* UProceduralArrowToolProperties::GetDefaultObj()
{
	static class UProceduralArrowToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralArrowToolProperties*>(UProceduralArrowToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralSphereToolProperties
// (None)

class UClass* UProceduralSphereToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralSphereToolProperties");

	return Clss;
}


// ProceduralSphereToolProperties MeshModelingTools.Default__ProceduralSphereToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralSphereToolProperties* UProceduralSphereToolProperties::GetDefaultObj()
{
	static class UProceduralSphereToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralSphereToolProperties*>(UProceduralSphereToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProceduralSphericalBoxToolProperties
// (None)

class UClass* UProceduralSphericalBoxToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralSphericalBoxToolProperties");

	return Clss;
}


// ProceduralSphericalBoxToolProperties MeshModelingTools.Default__ProceduralSphericalBoxToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralSphericalBoxToolProperties* UProceduralSphericalBoxToolProperties::GetDefaultObj()
{
	static class UProceduralSphericalBoxToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralSphericalBoxToolProperties*>(UProceduralSphericalBoxToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.LastActorInfo
// (None)

class UClass* ULastActorInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LastActorInfo");

	return Clss;
}


// LastActorInfo MeshModelingTools.Default__LastActorInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class ULastActorInfo* ULastActorInfo::GetDefaultObj()
{
	static class ULastActorInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<ULastActorInfo*>(ULastActorInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPrimitiveTool
// (None)

class UClass* UAddPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPrimitiveTool");

	return Clss;
}


// AddPrimitiveTool MeshModelingTools.Default__AddPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddPrimitiveTool* UAddPrimitiveTool::GetDefaultObj()
{
	static class UAddPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPrimitiveTool*>(UAddPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddBoxPrimitiveTool
// (None)

class UClass* UAddBoxPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddBoxPrimitiveTool");

	return Clss;
}


// AddBoxPrimitiveTool MeshModelingTools.Default__AddBoxPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddBoxPrimitiveTool* UAddBoxPrimitiveTool::GetDefaultObj()
{
	static class UAddBoxPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddBoxPrimitiveTool*>(UAddBoxPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddCylinderPrimitiveTool
// (None)

class UClass* UAddCylinderPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddCylinderPrimitiveTool");

	return Clss;
}


// AddCylinderPrimitiveTool MeshModelingTools.Default__AddCylinderPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddCylinderPrimitiveTool* UAddCylinderPrimitiveTool::GetDefaultObj()
{
	static class UAddCylinderPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddCylinderPrimitiveTool*>(UAddCylinderPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddConePrimitiveTool
// (None)

class UClass* UAddConePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddConePrimitiveTool");

	return Clss;
}


// AddConePrimitiveTool MeshModelingTools.Default__AddConePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddConePrimitiveTool* UAddConePrimitiveTool::GetDefaultObj()
{
	static class UAddConePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddConePrimitiveTool*>(UAddConePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddRectanglePrimitiveTool
// (None)

class UClass* UAddRectanglePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddRectanglePrimitiveTool");

	return Clss;
}


// AddRectanglePrimitiveTool MeshModelingTools.Default__AddRectanglePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddRectanglePrimitiveTool* UAddRectanglePrimitiveTool::GetDefaultObj()
{
	static class UAddRectanglePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddRectanglePrimitiveTool*>(UAddRectanglePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddRoundedRectanglePrimitiveTool
// (None)

class UClass* UAddRoundedRectanglePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddRoundedRectanglePrimitiveTool");

	return Clss;
}


// AddRoundedRectanglePrimitiveTool MeshModelingTools.Default__AddRoundedRectanglePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddRoundedRectanglePrimitiveTool* UAddRoundedRectanglePrimitiveTool::GetDefaultObj()
{
	static class UAddRoundedRectanglePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddRoundedRectanglePrimitiveTool*>(UAddRoundedRectanglePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddDiscPrimitiveTool
// (None)

class UClass* UAddDiscPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddDiscPrimitiveTool");

	return Clss;
}


// AddDiscPrimitiveTool MeshModelingTools.Default__AddDiscPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddDiscPrimitiveTool* UAddDiscPrimitiveTool::GetDefaultObj()
{
	static class UAddDiscPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddDiscPrimitiveTool*>(UAddDiscPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddPuncturedDiscPrimitiveTool
// (None)

class UClass* UAddPuncturedDiscPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddPuncturedDiscPrimitiveTool");

	return Clss;
}


// AddPuncturedDiscPrimitiveTool MeshModelingTools.Default__AddPuncturedDiscPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddPuncturedDiscPrimitiveTool* UAddPuncturedDiscPrimitiveTool::GetDefaultObj()
{
	static class UAddPuncturedDiscPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPuncturedDiscPrimitiveTool*>(UAddPuncturedDiscPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddTorusPrimitiveTool
// (None)

class UClass* UAddTorusPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddTorusPrimitiveTool");

	return Clss;
}


// AddTorusPrimitiveTool MeshModelingTools.Default__AddTorusPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddTorusPrimitiveTool* UAddTorusPrimitiveTool::GetDefaultObj()
{
	static class UAddTorusPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddTorusPrimitiveTool*>(UAddTorusPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddArrowPrimitiveTool
// (None)

class UClass* UAddArrowPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddArrowPrimitiveTool");

	return Clss;
}


// AddArrowPrimitiveTool MeshModelingTools.Default__AddArrowPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddArrowPrimitiveTool* UAddArrowPrimitiveTool::GetDefaultObj()
{
	static class UAddArrowPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddArrowPrimitiveTool*>(UAddArrowPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddSpherePrimitiveTool
// (None)

class UClass* UAddSpherePrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddSpherePrimitiveTool");

	return Clss;
}


// AddSpherePrimitiveTool MeshModelingTools.Default__AddSpherePrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddSpherePrimitiveTool* UAddSpherePrimitiveTool::GetDefaultObj()
{
	static class UAddSpherePrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddSpherePrimitiveTool*>(UAddSpherePrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AddSphericalBoxPrimitiveTool
// (None)

class UClass* UAddSphericalBoxPrimitiveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AddSphericalBoxPrimitiveTool");

	return Clss;
}


// AddSphericalBoxPrimitiveTool MeshModelingTools.Default__AddSphericalBoxPrimitiveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAddSphericalBoxPrimitiveTool* UAddSphericalBoxPrimitiveTool::GetDefaultObj()
{
	static class UAddSphericalBoxPrimitiveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddSphericalBoxPrimitiveTool*>(UAddSphericalBoxPrimitiveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AlignObjectsToolBuilder
// (None)

class UClass* UAlignObjectsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlignObjectsToolBuilder");

	return Clss;
}


// AlignObjectsToolBuilder MeshModelingTools.Default__AlignObjectsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAlignObjectsToolBuilder* UAlignObjectsToolBuilder::GetDefaultObj()
{
	static class UAlignObjectsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlignObjectsToolBuilder*>(UAlignObjectsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AlignObjectsToolProperties
// (None)

class UClass* UAlignObjectsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlignObjectsToolProperties");

	return Clss;
}


// AlignObjectsToolProperties MeshModelingTools.Default__AlignObjectsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAlignObjectsToolProperties* UAlignObjectsToolProperties::GetDefaultObj()
{
	static class UAlignObjectsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlignObjectsToolProperties*>(UAlignObjectsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AlignObjectsTool
// (None)

class UClass* UAlignObjectsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlignObjectsTool");

	return Clss;
}


// AlignObjectsTool MeshModelingTools.Default__AlignObjectsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAlignObjectsTool* UAlignObjectsTool::GetDefaultObj()
{
	static class UAlignObjectsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlignObjectsTool*>(UAlignObjectsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder
// (None)

class UClass* UBakeMeshAttributeMapsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsToolBuilder");

	return Clss;
}


// BakeMeshAttributeMapsToolBuilder MeshModelingTools.Default__BakeMeshAttributeMapsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsToolBuilder* UBakeMeshAttributeMapsToolBuilder::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsToolBuilder*>(UBakeMeshAttributeMapsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakeMeshAttributeMapsToolProperties
// (None)

class UClass* UBakeMeshAttributeMapsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsToolProperties");

	return Clss;
}


// BakeMeshAttributeMapsToolProperties MeshModelingTools.Default__BakeMeshAttributeMapsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsToolProperties* UBakeMeshAttributeMapsToolProperties::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsToolProperties*>(UBakeMeshAttributeMapsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UBakeMeshAttributeMapsToolProperties::GetUVLayerNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BakeMeshAttributeMapsToolProperties", "GetUVLayerNamesFunc");

	Params::UBakeMeshAttributeMapsToolProperties_GetUVLayerNamesFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingTools.BakedNormalMapToolProperties
// (None)

class UClass* UBakedNormalMapToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakedNormalMapToolProperties");

	return Clss;
}


// BakedNormalMapToolProperties MeshModelingTools.Default__BakedNormalMapToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakedNormalMapToolProperties* UBakedNormalMapToolProperties::GetDefaultObj()
{
	static class UBakedNormalMapToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakedNormalMapToolProperties*>(UBakedNormalMapToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakedOcclusionMapToolProperties
// (None)

class UClass* UBakedOcclusionMapToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakedOcclusionMapToolProperties");

	return Clss;
}


// BakedOcclusionMapToolProperties MeshModelingTools.Default__BakedOcclusionMapToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakedOcclusionMapToolProperties* UBakedOcclusionMapToolProperties::GetDefaultObj()
{
	static class UBakedOcclusionMapToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakedOcclusionMapToolProperties*>(UBakedOcclusionMapToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakedOcclusionMapVisualizationProperties
// (None)

class UClass* UBakedOcclusionMapVisualizationProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakedOcclusionMapVisualizationProperties");

	return Clss;
}


// BakedOcclusionMapVisualizationProperties MeshModelingTools.Default__BakedOcclusionMapVisualizationProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakedOcclusionMapVisualizationProperties* UBakedOcclusionMapVisualizationProperties::GetDefaultObj()
{
	static class UBakedOcclusionMapVisualizationProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakedOcclusionMapVisualizationProperties*>(UBakedOcclusionMapVisualizationProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakedCurvatureMapToolProperties
// (None)

class UClass* UBakedCurvatureMapToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakedCurvatureMapToolProperties");

	return Clss;
}


// BakedCurvatureMapToolProperties MeshModelingTools.Default__BakedCurvatureMapToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakedCurvatureMapToolProperties* UBakedCurvatureMapToolProperties::GetDefaultObj()
{
	static class UBakedCurvatureMapToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakedCurvatureMapToolProperties*>(UBakedCurvatureMapToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakedTexture2DImageProperties
// (None)

class UClass* UBakedTexture2DImageProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakedTexture2DImageProperties");

	return Clss;
}


// BakedTexture2DImageProperties MeshModelingTools.Default__BakedTexture2DImageProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakedTexture2DImageProperties* UBakedTexture2DImageProperties::GetDefaultObj()
{
	static class UBakedTexture2DImageProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakedTexture2DImageProperties*>(UBakedTexture2DImageProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakeMeshAttributeMapsTool
// (None)

class UClass* UBakeMeshAttributeMapsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeMeshAttributeMapsTool");

	return Clss;
}


// BakeMeshAttributeMapsTool MeshModelingTools.Default__BakeMeshAttributeMapsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeMeshAttributeMapsTool* UBakeMeshAttributeMapsTool::GetDefaultObj()
{
	static class UBakeMeshAttributeMapsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeMeshAttributeMapsTool*>(UBakeMeshAttributeMapsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakeTransformToolBuilder
// (None)

class UClass* UBakeTransformToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTransformToolBuilder");

	return Clss;
}


// BakeTransformToolBuilder MeshModelingTools.Default__BakeTransformToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeTransformToolBuilder* UBakeTransformToolBuilder::GetDefaultObj()
{
	static class UBakeTransformToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTransformToolBuilder*>(UBakeTransformToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakeTransformToolProperties
// (None)

class UClass* UBakeTransformToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTransformToolProperties");

	return Clss;
}


// BakeTransformToolProperties MeshModelingTools.Default__BakeTransformToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBakeTransformToolProperties* UBakeTransformToolProperties::GetDefaultObj()
{
	static class UBakeTransformToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTransformToolProperties*>(UBakeTransformToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BakeTransformTool
// (None)

class UClass* UBakeTransformTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BakeTransformTool");

	return Clss;
}


// BakeTransformTool MeshModelingTools.Default__BakeTransformTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UBakeTransformTool* UBakeTransformTool::GetDefaultObj()
{
	static class UBakeTransformTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UBakeTransformTool*>(UBakeTransformTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PhysicsObjectToolPropertySet
// (None)

class UClass* UPhysicsObjectToolPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsObjectToolPropertySet");

	return Clss;
}


// PhysicsObjectToolPropertySet MeshModelingTools.Default__PhysicsObjectToolPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsObjectToolPropertySet* UPhysicsObjectToolPropertySet::GetDefaultObj()
{
	static class UPhysicsObjectToolPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsObjectToolPropertySet*>(UPhysicsObjectToolPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CollisionGeometryVisualizationProperties
// (None)

class UClass* UCollisionGeometryVisualizationProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollisionGeometryVisualizationProperties");

	return Clss;
}


// CollisionGeometryVisualizationProperties MeshModelingTools.Default__CollisionGeometryVisualizationProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCollisionGeometryVisualizationProperties* UCollisionGeometryVisualizationProperties::GetDefaultObj()
{
	static class UCollisionGeometryVisualizationProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollisionGeometryVisualizationProperties*>(UCollisionGeometryVisualizationProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CombineMeshesToolBuilder
// (None)

class UClass* UCombineMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombineMeshesToolBuilder");

	return Clss;
}


// CombineMeshesToolBuilder MeshModelingTools.Default__CombineMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCombineMeshesToolBuilder* UCombineMeshesToolBuilder::GetDefaultObj()
{
	static class UCombineMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombineMeshesToolBuilder*>(UCombineMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CombineMeshesToolProperties
// (None)

class UClass* UCombineMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombineMeshesToolProperties");

	return Clss;
}


// CombineMeshesToolProperties MeshModelingTools.Default__CombineMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCombineMeshesToolProperties* UCombineMeshesToolProperties::GetDefaultObj()
{
	static class UCombineMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombineMeshesToolProperties*>(UCombineMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CombineMeshesTool
// (None)

class UClass* UCombineMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CombineMeshesTool");

	return Clss;
}


// CombineMeshesTool MeshModelingTools.Default__CombineMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UCombineMeshesTool* UCombineMeshesTool::GetDefaultObj()
{
	static class UCombineMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UCombineMeshesTool*>(UCombineMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// (None)

class UClass* UConvertToPolygonsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsToolBuilder");

	return Clss;
}


// ConvertToPolygonsToolBuilder MeshModelingTools.Default__ConvertToPolygonsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsToolBuilder* UConvertToPolygonsToolBuilder::GetDefaultObj()
{
	static class UConvertToPolygonsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsToolBuilder*>(UConvertToPolygonsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ConvertToPolygonsToolProperties
// (None)

class UClass* UConvertToPolygonsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsToolProperties");

	return Clss;
}


// ConvertToPolygonsToolProperties MeshModelingTools.Default__ConvertToPolygonsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsToolProperties* UConvertToPolygonsToolProperties::GetDefaultObj()
{
	static class UConvertToPolygonsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsToolProperties*>(UConvertToPolygonsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ConvertToPolygonsTool
// (None)

class UClass* UConvertToPolygonsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConvertToPolygonsTool");

	return Clss;
}


// ConvertToPolygonsTool MeshModelingTools.Default__ConvertToPolygonsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UConvertToPolygonsTool* UConvertToPolygonsTool::GetDefaultObj()
{
	static class UConvertToPolygonsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UConvertToPolygonsTool*>(UConvertToPolygonsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CSGMeshesToolProperties
// (None)

class UClass* UCSGMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGMeshesToolProperties");

	return Clss;
}


// CSGMeshesToolProperties MeshModelingTools.Default__CSGMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSGMeshesToolProperties* UCSGMeshesToolProperties::GetDefaultObj()
{
	static class UCSGMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGMeshesToolProperties*>(UCSGMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CSGMeshesTool
// (None)

class UClass* UCSGMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGMeshesTool");

	return Clss;
}


// CSGMeshesTool MeshModelingTools.Default__CSGMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UCSGMeshesTool* UCSGMeshesTool::GetDefaultObj()
{
	static class UCSGMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGMeshesTool*>(UCSGMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.CSGMeshesToolBuilder
// (None)

class UClass* UCSGMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CSGMeshesToolBuilder");

	return Clss;
}


// CSGMeshesToolBuilder MeshModelingTools.Default__CSGMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UCSGMeshesToolBuilder* UCSGMeshesToolBuilder::GetDefaultObj()
{
	static class UCSGMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UCSGMeshesToolBuilder*>(UCSGMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// (None)

class UClass* UDeformMeshPolygonsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeformMeshPolygonsToolBuilder");

	return Clss;
}


// DeformMeshPolygonsToolBuilder MeshModelingTools.Default__DeformMeshPolygonsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeformMeshPolygonsToolBuilder* UDeformMeshPolygonsToolBuilder::GetDefaultObj()
{
	static class UDeformMeshPolygonsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeformMeshPolygonsToolBuilder*>(UDeformMeshPolygonsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// (None)

class UClass* UDeformMeshPolygonsTransformProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeformMeshPolygonsTransformProperties");

	return Clss;
}


// DeformMeshPolygonsTransformProperties MeshModelingTools.Default__DeformMeshPolygonsTransformProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDeformMeshPolygonsTransformProperties* UDeformMeshPolygonsTransformProperties::GetDefaultObj()
{
	static class UDeformMeshPolygonsTransformProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeformMeshPolygonsTransformProperties*>(UDeformMeshPolygonsTransformProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DeformMeshPolygonsTool
// (None)

class UClass* UDeformMeshPolygonsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeformMeshPolygonsTool");

	return Clss;
}


// DeformMeshPolygonsTool MeshModelingTools.Default__DeformMeshPolygonsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDeformMeshPolygonsTool* UDeformMeshPolygonsTool::GetDefaultObj()
{
	static class UDeformMeshPolygonsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeformMeshPolygonsTool*>(UDeformMeshPolygonsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DisplaceMeshCommonProperties
// (None)

class UClass* UDisplaceMeshCommonProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshCommonProperties");

	return Clss;
}


// DisplaceMeshCommonProperties MeshModelingTools.Default__DisplaceMeshCommonProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshCommonProperties* UDisplaceMeshCommonProperties::GetDefaultObj()
{
	static class UDisplaceMeshCommonProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshCommonProperties*>(UDisplaceMeshCommonProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DisplaceMeshCommonProperties", "GetWeightMapsFunc");

	Params::UDisplaceMeshCommonProperties_GetWeightMapsFunc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MeshModelingTools.DisplaceMeshTextureMapProperties
// (None)

class UClass* UDisplaceMeshTextureMapProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshTextureMapProperties");

	return Clss;
}


// DisplaceMeshTextureMapProperties MeshModelingTools.Default__DisplaceMeshTextureMapProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshTextureMapProperties* UDisplaceMeshTextureMapProperties::GetDefaultObj()
{
	static class UDisplaceMeshTextureMapProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshTextureMapProperties*>(UDisplaceMeshTextureMapProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties
// (None)

class UClass* UDisplaceMeshDirectionalFilterProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshDirectionalFilterProperties");

	return Clss;
}


// DisplaceMeshDirectionalFilterProperties MeshModelingTools.Default__DisplaceMeshDirectionalFilterProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshDirectionalFilterProperties* UDisplaceMeshDirectionalFilterProperties::GetDefaultObj()
{
	static class UDisplaceMeshDirectionalFilterProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshDirectionalFilterProperties*>(UDisplaceMeshDirectionalFilterProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties
// (None)

class UClass* UDisplaceMeshPerlinNoiseProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshPerlinNoiseProperties");

	return Clss;
}


// DisplaceMeshPerlinNoiseProperties MeshModelingTools.Default__DisplaceMeshPerlinNoiseProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshPerlinNoiseProperties* UDisplaceMeshPerlinNoiseProperties::GetDefaultObj()
{
	static class UDisplaceMeshPerlinNoiseProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshPerlinNoiseProperties*>(UDisplaceMeshPerlinNoiseProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DisplaceMeshSineWaveProperties
// (None)

class UClass* UDisplaceMeshSineWaveProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshSineWaveProperties");

	return Clss;
}


// DisplaceMeshSineWaveProperties MeshModelingTools.Default__DisplaceMeshSineWaveProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshSineWaveProperties* UDisplaceMeshSineWaveProperties::GetDefaultObj()
{
	static class UDisplaceMeshSineWaveProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshSineWaveProperties*>(UDisplaceMeshSineWaveProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DisplaceMeshToolBuilder
// (None)

class UClass* UDisplaceMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshToolBuilder");

	return Clss;
}


// DisplaceMeshToolBuilder MeshModelingTools.Default__DisplaceMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshToolBuilder* UDisplaceMeshToolBuilder::GetDefaultObj()
{
	static class UDisplaceMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshToolBuilder*>(UDisplaceMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DisplaceMeshTool
// (None)

class UClass* UDisplaceMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplaceMeshTool");

	return Clss;
}


// DisplaceMeshTool MeshModelingTools.Default__DisplaceMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDisplaceMeshTool* UDisplaceMeshTool::GetDefaultObj()
{
	static class UDisplaceMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplaceMeshTool*>(UDisplaceMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawAndRevolveToolBuilder
// (None)

class UClass* UDrawAndRevolveToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawAndRevolveToolBuilder");

	return Clss;
}


// DrawAndRevolveToolBuilder MeshModelingTools.Default__DrawAndRevolveToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawAndRevolveToolBuilder* UDrawAndRevolveToolBuilder::GetDefaultObj()
{
	static class UDrawAndRevolveToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawAndRevolveToolBuilder*>(UDrawAndRevolveToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveProperties
// (None)

class UClass* URevolveProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveProperties");

	return Clss;
}


// RevolveProperties MeshModelingTools.Default__RevolveProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveProperties* URevolveProperties::GetDefaultObj()
{
	static class URevolveProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveProperties*>(URevolveProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveToolProperties
// (None)

class UClass* URevolveToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveToolProperties");

	return Clss;
}


// RevolveToolProperties MeshModelingTools.Default__RevolveToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveToolProperties* URevolveToolProperties::GetDefaultObj()
{
	static class URevolveToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveToolProperties*>(URevolveToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveOperatorFactory
// (None)

class UClass* URevolveOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveOperatorFactory");

	return Clss;
}


// RevolveOperatorFactory MeshModelingTools.Default__RevolveOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveOperatorFactory* URevolveOperatorFactory::GetDefaultObj()
{
	static class URevolveOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveOperatorFactory*>(URevolveOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawAndRevolveTool
// (None)

class UClass* UDrawAndRevolveTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawAndRevolveTool");

	return Clss;
}


// DrawAndRevolveTool MeshModelingTools.Default__DrawAndRevolveTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDrawAndRevolveTool* UDrawAndRevolveTool::GetDefaultObj()
{
	static class UDrawAndRevolveTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawAndRevolveTool*>(UDrawAndRevolveTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonToolBuilder
// (None)

class UClass* UDrawPolygonToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonToolBuilder");

	return Clss;
}


// DrawPolygonToolBuilder MeshModelingTools.Default__DrawPolygonToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonToolBuilder* UDrawPolygonToolBuilder::GetDefaultObj()
{
	static class UDrawPolygonToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonToolBuilder*>(UDrawPolygonToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonToolStandardProperties
// (None)

class UClass* UDrawPolygonToolStandardProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonToolStandardProperties");

	return Clss;
}


// DrawPolygonToolStandardProperties MeshModelingTools.Default__DrawPolygonToolStandardProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonToolStandardProperties* UDrawPolygonToolStandardProperties::GetDefaultObj()
{
	static class UDrawPolygonToolStandardProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonToolStandardProperties*>(UDrawPolygonToolStandardProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonToolSnapProperties
// (None)

class UClass* UDrawPolygonToolSnapProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonToolSnapProperties");

	return Clss;
}


// DrawPolygonToolSnapProperties MeshModelingTools.Default__DrawPolygonToolSnapProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonToolSnapProperties* UDrawPolygonToolSnapProperties::GetDefaultObj()
{
	static class UDrawPolygonToolSnapProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonToolSnapProperties*>(UDrawPolygonToolSnapProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolygonTool
// (None)

class UClass* UDrawPolygonTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolygonTool");

	return Clss;
}


// DrawPolygonTool MeshModelingTools.Default__DrawPolygonTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDrawPolygonTool* UDrawPolygonTool::GetDefaultObj()
{
	static class UDrawPolygonTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolygonTool*>(UDrawPolygonTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolyPathToolBuilder
// (None)

class UClass* UDrawPolyPathToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathToolBuilder");

	return Clss;
}


// DrawPolyPathToolBuilder MeshModelingTools.Default__DrawPolyPathToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathToolBuilder* UDrawPolyPathToolBuilder::GetDefaultObj()
{
	static class UDrawPolyPathToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathToolBuilder*>(UDrawPolyPathToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolyPathProperties
// (None)

class UClass* UDrawPolyPathProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathProperties");

	return Clss;
}


// DrawPolyPathProperties MeshModelingTools.Default__DrawPolyPathProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathProperties* UDrawPolyPathProperties::GetDefaultObj()
{
	static class UDrawPolyPathProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathProperties*>(UDrawPolyPathProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// (None)

class UClass* UDrawPolyPathExtrudeProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathExtrudeProperties");

	return Clss;
}


// DrawPolyPathExtrudeProperties MeshModelingTools.Default__DrawPolyPathExtrudeProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathExtrudeProperties* UDrawPolyPathExtrudeProperties::GetDefaultObj()
{
	static class UDrawPolyPathExtrudeProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathExtrudeProperties*>(UDrawPolyPathExtrudeProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DrawPolyPathTool
// (None)

class UClass* UDrawPolyPathTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrawPolyPathTool");

	return Clss;
}


// DrawPolyPathTool MeshModelingTools.Default__DrawPolyPathTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDrawPolyPathTool* UDrawPolyPathTool::GetDefaultObj()
{
	static class UDrawPolyPathTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrawPolyPathTool*>(UDrawPolyPathTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DynamicMeshBrushTool
// (None)

class UClass* UDynamicMeshBrushTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshBrushTool");

	return Clss;
}


// DynamicMeshBrushTool MeshModelingTools.Default__DynamicMeshBrushTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshBrushTool* UDynamicMeshBrushTool::GetDefaultObj()
{
	static class UDynamicMeshBrushTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshBrushTool*>(UDynamicMeshBrushTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// (None)

class UClass* UDynamicMeshSculptToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshSculptToolBuilder");

	return Clss;
}


// DynamicMeshSculptToolBuilder MeshModelingTools.Default__DynamicMeshSculptToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshSculptToolBuilder* UDynamicMeshSculptToolBuilder::GetDefaultObj()
{
	static class UDynamicMeshSculptToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshSculptToolBuilder*>(UDynamicMeshSculptToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BrushSculptProperties
// (None)

class UClass* UBrushSculptProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushSculptProperties");

	return Clss;
}


// BrushSculptProperties MeshModelingTools.Default__BrushSculptProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushSculptProperties* UBrushSculptProperties::GetDefaultObj()
{
	static class UBrushSculptProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushSculptProperties*>(UBrushSculptProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DynamicSculptToolActions
// (None)

class UClass* UDynamicSculptToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicSculptToolActions");

	return Clss;
}


// DynamicSculptToolActions MeshModelingTools.Default__DynamicSculptToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicSculptToolActions* UDynamicSculptToolActions::GetDefaultObj()
{
	static class UDynamicSculptToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicSculptToolActions*>(UDynamicSculptToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes
// (Final, Native, Public)
// Parameters:

void UDynamicSculptToolActions::DiscardAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicSculptToolActions", "DiscardAttributes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.MeshConstraintProperties
// (None)

class UClass* UMeshConstraintProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshConstraintProperties");

	return Clss;
}


// MeshConstraintProperties MeshModelingTools.Default__MeshConstraintProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshConstraintProperties* UMeshConstraintProperties::GetDefaultObj()
{
	static class UMeshConstraintProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshConstraintProperties*>(UMeshConstraintProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemeshProperties
// (None)

class UClass* URemeshProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshProperties");

	return Clss;
}


// RemeshProperties MeshModelingTools.Default__RemeshProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshProperties* URemeshProperties::GetDefaultObj()
{
	static class URemeshProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshProperties*>(URemeshProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BrushRemeshProperties
// (None)

class UClass* UBrushRemeshProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushRemeshProperties");

	return Clss;
}


// BrushRemeshProperties MeshModelingTools.Default__BrushRemeshProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushRemeshProperties* UBrushRemeshProperties::GetDefaultObj()
{
	static class UBrushRemeshProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushRemeshProperties*>(UBrushRemeshProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.FixedPlaneBrushProperties
// (None)

class UClass* UFixedPlaneBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedPlaneBrushProperties");

	return Clss;
}


// FixedPlaneBrushProperties MeshModelingTools.Default__FixedPlaneBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedPlaneBrushProperties* UFixedPlaneBrushProperties::GetDefaultObj()
{
	static class UFixedPlaneBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedPlaneBrushProperties*>(UFixedPlaneBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DynamicMeshSculptTool
// (None)

class UClass* UDynamicMeshSculptTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicMeshSculptTool");

	return Clss;
}


// DynamicMeshSculptTool MeshModelingTools.Default__DynamicMeshSculptTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UDynamicMeshSculptTool* UDynamicMeshSculptTool::GetDefaultObj()
{
	static class UDynamicMeshSculptTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicMeshSculptTool*>(UDynamicMeshSculptTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EdgeLoopInsertionToolBuilder
// (None)

class UClass* UEdgeLoopInsertionToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeLoopInsertionToolBuilder");

	return Clss;
}


// EdgeLoopInsertionToolBuilder MeshModelingTools.Default__EdgeLoopInsertionToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEdgeLoopInsertionToolBuilder* UEdgeLoopInsertionToolBuilder::GetDefaultObj()
{
	static class UEdgeLoopInsertionToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeLoopInsertionToolBuilder*>(UEdgeLoopInsertionToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EdgeLoopInsertionProperties
// (None)

class UClass* UEdgeLoopInsertionProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeLoopInsertionProperties");

	return Clss;
}


// EdgeLoopInsertionProperties MeshModelingTools.Default__EdgeLoopInsertionProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEdgeLoopInsertionProperties* UEdgeLoopInsertionProperties::GetDefaultObj()
{
	static class UEdgeLoopInsertionProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeLoopInsertionProperties*>(UEdgeLoopInsertionProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EdgeLoopInsertionOperatorFactory
// (None)

class UClass* UEdgeLoopInsertionOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeLoopInsertionOperatorFactory");

	return Clss;
}


// EdgeLoopInsertionOperatorFactory MeshModelingTools.Default__EdgeLoopInsertionOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UEdgeLoopInsertionOperatorFactory* UEdgeLoopInsertionOperatorFactory::GetDefaultObj()
{
	static class UEdgeLoopInsertionOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeLoopInsertionOperatorFactory*>(UEdgeLoopInsertionOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EdgeLoopInsertionTool
// (None)

class UClass* UEdgeLoopInsertionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeLoopInsertionTool");

	return Clss;
}


// EdgeLoopInsertionTool MeshModelingTools.Default__EdgeLoopInsertionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEdgeLoopInsertionTool* UEdgeLoopInsertionTool::GetDefaultObj()
{
	static class UEdgeLoopInsertionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeLoopInsertionTool*>(UEdgeLoopInsertionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// (None)

class UClass* UEditMeshPolygonsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolBuilder");

	return Clss;
}


// EditMeshPolygonsToolBuilder MeshModelingTools.Default__EditMeshPolygonsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolBuilder* UEditMeshPolygonsToolBuilder::GetDefaultObj()
{
	static class UEditMeshPolygonsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolBuilder*>(UEditMeshPolygonsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditCommonProperties
// (None)

class UClass* UPolyEditCommonProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditCommonProperties");

	return Clss;
}


// PolyEditCommonProperties MeshModelingTools.Default__PolyEditCommonProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditCommonProperties* UPolyEditCommonProperties::GetDefaultObj()
{
	static class UPolyEditCommonProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditCommonProperties*>(UPolyEditCommonProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// (None)

class UClass* UEditMeshPolygonsToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolActionPropertySet");

	return Clss;
}


// EditMeshPolygonsToolActionPropertySet MeshModelingTools.Default__EditMeshPolygonsToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolActionPropertySet* UEditMeshPolygonsToolActionPropertySet::GetDefaultObj()
{
	static class UEditMeshPolygonsToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolActionPropertySet*>(UEditMeshPolygonsToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsToolActions
// (None)

class UClass* UEditMeshPolygonsToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolActions");

	return Clss;
}


// EditMeshPolygonsToolActions MeshModelingTools.Default__EditMeshPolygonsToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolActions* UEditMeshPolygonsToolActions::GetDefaultObj()
{
	static class UEditMeshPolygonsToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolActions*>(UEditMeshPolygonsToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Retriangulate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Retriangulate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::RecalcNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "RecalcNormals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Outset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Outset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Offset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Offset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Merge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Merge");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Inset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Inset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Extrude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Extrude");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Delete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Delete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::Decompose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "Decompose");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions::CutFaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions", "CutFaces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// (None)

class UClass* UEditMeshPolygonsToolActions_Triangles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolActions_Triangles");

	return Clss;
}


// EditMeshPolygonsToolActions_Triangles MeshModelingTools.Default__EditMeshPolygonsToolActions_Triangles
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolActions_Triangles* UEditMeshPolygonsToolActions_Triangles::GetDefaultObj()
{
	static class UEditMeshPolygonsToolActions_Triangles* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolActions_Triangles*>(UEditMeshPolygonsToolActions_Triangles::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::RecalcNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "RecalcNormals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Poke()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Poke");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Outset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Outset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Offset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Offset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Inset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Inset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Extrude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Extrude");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Disconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::Delete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "Delete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolActions_Triangles::CutFaces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolActions_Triangles", "CutFaces");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// (None)

class UClass* UEditMeshPolygonsToolUVActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolUVActions");

	return Clss;
}


// EditMeshPolygonsToolUVActions MeshModelingTools.Default__EditMeshPolygonsToolUVActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolUVActions* UEditMeshPolygonsToolUVActions::GetDefaultObj()
{
	static class UEditMeshPolygonsToolUVActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolUVActions*>(UEditMeshPolygonsToolUVActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolUVActions::PlanarProjection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolUVActions", "PlanarProjection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// (None)

class UClass* UEditMeshPolygonsToolEdgeActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolEdgeActions");

	return Clss;
}


// EditMeshPolygonsToolEdgeActions MeshModelingTools.Default__EditMeshPolygonsToolEdgeActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolEdgeActions* UEditMeshPolygonsToolEdgeActions::GetDefaultObj()
{
	static class UEditMeshPolygonsToolEdgeActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolEdgeActions*>(UEditMeshPolygonsToolEdgeActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::Weld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Weld");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::Straighten()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "Straighten");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions::FillHole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions", "FillHole");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// (None)

class UClass* UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsToolEdgeActions_Triangles");

	return Clss;
}


// EditMeshPolygonsToolEdgeActions_Triangles MeshModelingTools.Default__EditMeshPolygonsToolEdgeActions_Triangles
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsToolEdgeActions_Triangles* UEditMeshPolygonsToolEdgeActions_Triangles::GetDefaultObj()
{
	static class UEditMeshPolygonsToolEdgeActions_Triangles* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsToolEdgeActions_Triangles*>(UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Weld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Weld");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Split()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Split");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Flip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Flip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::FillHole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "FillHole");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
// (Final, Native, Public)
// Parameters:

void UEditMeshPolygonsToolEdgeActions_Triangles::Collapse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditMeshPolygonsToolEdgeActions_Triangles", "Collapse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.PolyEditExtrudeProperties
// (None)

class UClass* UPolyEditExtrudeProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditExtrudeProperties");

	return Clss;
}


// PolyEditExtrudeProperties MeshModelingTools.Default__PolyEditExtrudeProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditExtrudeProperties* UPolyEditExtrudeProperties::GetDefaultObj()
{
	static class UPolyEditExtrudeProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditExtrudeProperties*>(UPolyEditExtrudeProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditOffsetProperties
// (None)

class UClass* UPolyEditOffsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditOffsetProperties");

	return Clss;
}


// PolyEditOffsetProperties MeshModelingTools.Default__PolyEditOffsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditOffsetProperties* UPolyEditOffsetProperties::GetDefaultObj()
{
	static class UPolyEditOffsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditOffsetProperties*>(UPolyEditOffsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditInsetProperties
// (None)

class UClass* UPolyEditInsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditInsetProperties");

	return Clss;
}


// PolyEditInsetProperties MeshModelingTools.Default__PolyEditInsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditInsetProperties* UPolyEditInsetProperties::GetDefaultObj()
{
	static class UPolyEditInsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditInsetProperties*>(UPolyEditInsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditOutsetProperties
// (None)

class UClass* UPolyEditOutsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditOutsetProperties");

	return Clss;
}


// PolyEditOutsetProperties MeshModelingTools.Default__PolyEditOutsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditOutsetProperties* UPolyEditOutsetProperties::GetDefaultObj()
{
	static class UPolyEditOutsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditOutsetProperties*>(UPolyEditOutsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditCutProperties
// (None)

class UClass* UPolyEditCutProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditCutProperties");

	return Clss;
}


// PolyEditCutProperties MeshModelingTools.Default__PolyEditCutProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditCutProperties* UPolyEditCutProperties::GetDefaultObj()
{
	static class UPolyEditCutProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditCutProperties*>(UPolyEditCutProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PolyEditSetUVProperties
// (None)

class UClass* UPolyEditSetUVProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PolyEditSetUVProperties");

	return Clss;
}


// PolyEditSetUVProperties MeshModelingTools.Default__PolyEditSetUVProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPolyEditSetUVProperties* UPolyEditSetUVProperties::GetDefaultObj()
{
	static class UPolyEditSetUVProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPolyEditSetUVProperties*>(UPolyEditSetUVProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditMeshPolygonsTool
// (None)

class UClass* UEditMeshPolygonsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditMeshPolygonsTool");

	return Clss;
}


// EditMeshPolygonsTool MeshModelingTools.Default__EditMeshPolygonsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditMeshPolygonsTool* UEditMeshPolygonsTool::GetDefaultObj()
{
	static class UEditMeshPolygonsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditMeshPolygonsTool*>(UEditMeshPolygonsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditNormalsToolBuilder
// (None)

class UClass* UEditNormalsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsToolBuilder");

	return Clss;
}


// EditNormalsToolBuilder MeshModelingTools.Default__EditNormalsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsToolBuilder* UEditNormalsToolBuilder::GetDefaultObj()
{
	static class UEditNormalsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsToolBuilder*>(UEditNormalsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditNormalsToolProperties
// (None)

class UClass* UEditNormalsToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsToolProperties");

	return Clss;
}


// EditNormalsToolProperties MeshModelingTools.Default__EditNormalsToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsToolProperties* UEditNormalsToolProperties::GetDefaultObj()
{
	static class UEditNormalsToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsToolProperties*>(UEditNormalsToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditNormalsAdvancedProperties
// (None)

class UClass* UEditNormalsAdvancedProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsAdvancedProperties");

	return Clss;
}


// EditNormalsAdvancedProperties MeshModelingTools.Default__EditNormalsAdvancedProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsAdvancedProperties* UEditNormalsAdvancedProperties::GetDefaultObj()
{
	static class UEditNormalsAdvancedProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsAdvancedProperties*>(UEditNormalsAdvancedProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditNormalsOperatorFactory
// (None)

class UClass* UEditNormalsOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsOperatorFactory");

	return Clss;
}


// EditNormalsOperatorFactory MeshModelingTools.Default__EditNormalsOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditNormalsOperatorFactory* UEditNormalsOperatorFactory::GetDefaultObj()
{
	static class UEditNormalsOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsOperatorFactory*>(UEditNormalsOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditNormalsTool
// (None)

class UClass* UEditNormalsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNormalsTool");

	return Clss;
}


// EditNormalsTool MeshModelingTools.Default__EditNormalsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditNormalsTool* UEditNormalsTool::GetDefaultObj()
{
	static class UEditNormalsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNormalsTool*>(UEditNormalsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditPivotToolBuilder
// (None)

class UClass* UEditPivotToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotToolBuilder");

	return Clss;
}


// EditPivotToolBuilder MeshModelingTools.Default__EditPivotToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditPivotToolBuilder* UEditPivotToolBuilder::GetDefaultObj()
{
	static class UEditPivotToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotToolBuilder*>(UEditPivotToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditPivotToolProperties
// (None)

class UClass* UEditPivotToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotToolProperties");

	return Clss;
}


// EditPivotToolProperties MeshModelingTools.Default__EditPivotToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditPivotToolProperties* UEditPivotToolProperties::GetDefaultObj()
{
	static class UEditPivotToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotToolProperties*>(UEditPivotToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditPivotToolActionPropertySet
// (None)

class UClass* UEditPivotToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotToolActionPropertySet");

	return Clss;
}


// EditPivotToolActionPropertySet MeshModelingTools.Default__EditPivotToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditPivotToolActionPropertySet* UEditPivotToolActionPropertySet::GetDefaultObj()
{
	static class UEditPivotToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotToolActionPropertySet*>(UEditPivotToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Top
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Top()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Top");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Right
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Right");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Left
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Left");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Front
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Front()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Front");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Center
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Center()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Center");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Bottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Bottom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.EditPivotToolActionPropertySet.Back
// (Final, Native, Public)
// Parameters:

void UEditPivotToolActionPropertySet::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditPivotToolActionPropertySet", "Back");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.EditPivotTool
// (None)

class UClass* UEditPivotTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditPivotTool");

	return Clss;
}


// EditPivotTool MeshModelingTools.Default__EditPivotTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditPivotTool* UEditPivotTool::GetDefaultObj()
{
	static class UEditPivotTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditPivotTool*>(UEditPivotTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditUVIslandsToolBuilder
// (None)

class UClass* UEditUVIslandsToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditUVIslandsToolBuilder");

	return Clss;
}


// EditUVIslandsToolBuilder MeshModelingTools.Default__EditUVIslandsToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditUVIslandsToolBuilder* UEditUVIslandsToolBuilder::GetDefaultObj()
{
	static class UEditUVIslandsToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditUVIslandsToolBuilder*>(UEditUVIslandsToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EditUVIslandsTool
// (None)

class UClass* UEditUVIslandsTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditUVIslandsTool");

	return Clss;
}


// EditUVIslandsTool MeshModelingTools.Default__EditUVIslandsTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEditUVIslandsTool* UEditUVIslandsTool::GetDefaultObj()
{
	static class UEditUVIslandsTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditUVIslandsTool*>(UEditUVIslandsTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ExtractCollisionGeometryToolBuilder
// (None)

class UClass* UExtractCollisionGeometryToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtractCollisionGeometryToolBuilder");

	return Clss;
}


// ExtractCollisionGeometryToolBuilder MeshModelingTools.Default__ExtractCollisionGeometryToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UExtractCollisionGeometryToolBuilder* UExtractCollisionGeometryToolBuilder::GetDefaultObj()
{
	static class UExtractCollisionGeometryToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtractCollisionGeometryToolBuilder*>(UExtractCollisionGeometryToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ExtractCollisionGeometryTool
// (None)

class UClass* UExtractCollisionGeometryTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtractCollisionGeometryTool");

	return Clss;
}


// ExtractCollisionGeometryTool MeshModelingTools.Default__ExtractCollisionGeometryTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UExtractCollisionGeometryTool* UExtractCollisionGeometryTool::GetDefaultObj()
{
	static class UExtractCollisionGeometryTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtractCollisionGeometryTool*>(UExtractCollisionGeometryTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.GroupEdgeInsertionToolBuilder
// (None)

class UClass* UGroupEdgeInsertionToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupEdgeInsertionToolBuilder");

	return Clss;
}


// GroupEdgeInsertionToolBuilder MeshModelingTools.Default__GroupEdgeInsertionToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupEdgeInsertionToolBuilder* UGroupEdgeInsertionToolBuilder::GetDefaultObj()
{
	static class UGroupEdgeInsertionToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupEdgeInsertionToolBuilder*>(UGroupEdgeInsertionToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.GroupEdgeInsertionProperties
// (None)

class UClass* UGroupEdgeInsertionProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupEdgeInsertionProperties");

	return Clss;
}


// GroupEdgeInsertionProperties MeshModelingTools.Default__GroupEdgeInsertionProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupEdgeInsertionProperties* UGroupEdgeInsertionProperties::GetDefaultObj()
{
	static class UGroupEdgeInsertionProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupEdgeInsertionProperties*>(UGroupEdgeInsertionProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.GroupEdgeInsertionOperatorFactory
// (None)

class UClass* UGroupEdgeInsertionOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupEdgeInsertionOperatorFactory");

	return Clss;
}


// GroupEdgeInsertionOperatorFactory MeshModelingTools.Default__GroupEdgeInsertionOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UGroupEdgeInsertionOperatorFactory* UGroupEdgeInsertionOperatorFactory::GetDefaultObj()
{
	static class UGroupEdgeInsertionOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupEdgeInsertionOperatorFactory*>(UGroupEdgeInsertionOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.GroupEdgeInsertionTool
// (None)

class UClass* UGroupEdgeInsertionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GroupEdgeInsertionTool");

	return Clss;
}


// GroupEdgeInsertionTool MeshModelingTools.Default__GroupEdgeInsertionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UGroupEdgeInsertionTool* UGroupEdgeInsertionTool::GetDefaultObj()
{
	static class UGroupEdgeInsertionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupEdgeInsertionTool*>(UGroupEdgeInsertionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.HoleFillToolBuilder
// (None)

class UClass* UHoleFillToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillToolBuilder");

	return Clss;
}


// HoleFillToolBuilder MeshModelingTools.Default__HoleFillToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillToolBuilder* UHoleFillToolBuilder::GetDefaultObj()
{
	static class UHoleFillToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillToolBuilder*>(UHoleFillToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothHoleFillProperties
// (None)

class UClass* USmoothHoleFillProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothHoleFillProperties");

	return Clss;
}


// SmoothHoleFillProperties MeshModelingTools.Default__SmoothHoleFillProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothHoleFillProperties* USmoothHoleFillProperties::GetDefaultObj()
{
	static class USmoothHoleFillProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothHoleFillProperties*>(USmoothHoleFillProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.HoleFillToolProperties
// (None)

class UClass* UHoleFillToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillToolProperties");

	return Clss;
}


// HoleFillToolProperties MeshModelingTools.Default__HoleFillToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillToolProperties* UHoleFillToolProperties::GetDefaultObj()
{
	static class UHoleFillToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillToolProperties*>(UHoleFillToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.HoleFillToolActions
// (None)

class UClass* UHoleFillToolActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillToolActions");

	return Clss;
}


// HoleFillToolActions MeshModelingTools.Default__HoleFillToolActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillToolActions* UHoleFillToolActions::GetDefaultObj()
{
	static class UHoleFillToolActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillToolActions*>(UHoleFillToolActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.HoleFillToolActions.SelectAll
// (Final, Native, Public)
// Parameters:

void UHoleFillToolActions::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoleFillToolActions", "SelectAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.HoleFillToolActions.Clear
// (Final, Native, Public)
// Parameters:

void UHoleFillToolActions::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoleFillToolActions", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.HoleFillStatisticsProperties
// (None)

class UClass* UHoleFillStatisticsProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillStatisticsProperties");

	return Clss;
}


// HoleFillStatisticsProperties MeshModelingTools.Default__HoleFillStatisticsProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillStatisticsProperties* UHoleFillStatisticsProperties::GetDefaultObj()
{
	static class UHoleFillStatisticsProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillStatisticsProperties*>(UHoleFillStatisticsProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.HoleFillOperatorFactory
// (None)

class UClass* UHoleFillOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillOperatorFactory");

	return Clss;
}


// HoleFillOperatorFactory MeshModelingTools.Default__HoleFillOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UHoleFillOperatorFactory* UHoleFillOperatorFactory::GetDefaultObj()
{
	static class UHoleFillOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillOperatorFactory*>(UHoleFillOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.HoleFillTool
// (None)

class UClass* UHoleFillTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoleFillTool");

	return Clss;
}


// HoleFillTool MeshModelingTools.Default__HoleFillTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UHoleFillTool* UHoleFillTool::GetDefaultObj()
{
	static class UHoleFillTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoleFillTool*>(UHoleFillTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSculptBrushOpProps
// (None)

class UClass* UMeshSculptBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSculptBrushOpProps");

	return Clss;
}


// MeshSculptBrushOpProps MeshModelingTools.Default__MeshSculptBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSculptBrushOpProps* UMeshSculptBrushOpProps::GetDefaultObj()
{
	static class UMeshSculptBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSculptBrushOpProps*>(UMeshSculptBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BaseKelvinletBrushOpProps
// (None)

class UClass* UBaseKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseKelvinletBrushOpProps");

	return Clss;
}


// BaseKelvinletBrushOpProps MeshModelingTools.Default__BaseKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseKelvinletBrushOpProps* UBaseKelvinletBrushOpProps::GetDefaultObj()
{
	static class UBaseKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseKelvinletBrushOpProps*>(UBaseKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ScaleKelvinletBrushOpProps
// (None)

class UClass* UScaleKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleKelvinletBrushOpProps");

	return Clss;
}


// ScaleKelvinletBrushOpProps MeshModelingTools.Default__ScaleKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleKelvinletBrushOpProps* UScaleKelvinletBrushOpProps::GetDefaultObj()
{
	static class UScaleKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleKelvinletBrushOpProps*>(UScaleKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PullKelvinletBrushOpProps
// (None)

class UClass* UPullKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PullKelvinletBrushOpProps");

	return Clss;
}


// PullKelvinletBrushOpProps MeshModelingTools.Default__PullKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UPullKelvinletBrushOpProps* UPullKelvinletBrushOpProps::GetDefaultObj()
{
	static class UPullKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UPullKelvinletBrushOpProps*>(UPullKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SharpPullKelvinletBrushOpProps
// (None)

class UClass* USharpPullKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SharpPullKelvinletBrushOpProps");

	return Clss;
}


// SharpPullKelvinletBrushOpProps MeshModelingTools.Default__SharpPullKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USharpPullKelvinletBrushOpProps* USharpPullKelvinletBrushOpProps::GetDefaultObj()
{
	static class USharpPullKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USharpPullKelvinletBrushOpProps*>(USharpPullKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.TwistKelvinletBrushOpProps
// (None)

class UClass* UTwistKelvinletBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwistKelvinletBrushOpProps");

	return Clss;
}


// TwistKelvinletBrushOpProps MeshModelingTools.Default__TwistKelvinletBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwistKelvinletBrushOpProps* UTwistKelvinletBrushOpProps::GetDefaultObj()
{
	static class UTwistKelvinletBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwistKelvinletBrushOpProps*>(UTwistKelvinletBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshAnalysisProperties
// (None)

class UClass* UMeshAnalysisProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAnalysisProperties");

	return Clss;
}


// MeshAnalysisProperties MeshModelingTools.Default__MeshAnalysisProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAnalysisProperties* UMeshAnalysisProperties::GetDefaultObj()
{
	static class UMeshAnalysisProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAnalysisProperties*>(UMeshAnalysisProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshAttributePaintToolBuilder
// (None)

class UClass* UMeshAttributePaintToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintToolBuilder");

	return Clss;
}


// MeshAttributePaintToolBuilder MeshModelingTools.Default__MeshAttributePaintToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintToolBuilder* UMeshAttributePaintToolBuilder::GetDefaultObj()
{
	static class UMeshAttributePaintToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintToolBuilder*>(UMeshAttributePaintToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshAttributePaintToolProperties
// (None)

class UClass* UMeshAttributePaintToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintToolProperties");

	return Clss;
}


// MeshAttributePaintToolProperties MeshModelingTools.Default__MeshAttributePaintToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintToolProperties* UMeshAttributePaintToolProperties::GetDefaultObj()
{
	static class UMeshAttributePaintToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintToolProperties*>(UMeshAttributePaintToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshAttributePaintEditActions
// (None)

class UClass* UMeshAttributePaintEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintEditActions");

	return Clss;
}


// MeshAttributePaintEditActions MeshModelingTools.Default__MeshAttributePaintEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintEditActions* UMeshAttributePaintEditActions::GetDefaultObj()
{
	static class UMeshAttributePaintEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintEditActions*>(UMeshAttributePaintEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshAttributePaintTool
// (None)

class UClass* UMeshAttributePaintTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshAttributePaintTool");

	return Clss;
}


// MeshAttributePaintTool MeshModelingTools.Default__MeshAttributePaintTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshAttributePaintTool* UMeshAttributePaintTool::GetDefaultObj()
{
	static class UMeshAttributePaintTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshAttributePaintTool*>(UMeshAttributePaintTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshBoundaryToolBase
// (None)

class UClass* UMeshBoundaryToolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshBoundaryToolBase");

	return Clss;
}


// MeshBoundaryToolBase MeshModelingTools.Default__MeshBoundaryToolBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshBoundaryToolBase* UMeshBoundaryToolBase::GetDefaultObj()
{
	static class UMeshBoundaryToolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshBoundaryToolBase*>(UMeshBoundaryToolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.InflateBrushOpProps
// (None)

class UClass* UInflateBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InflateBrushOpProps");

	return Clss;
}


// InflateBrushOpProps MeshModelingTools.Default__InflateBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UInflateBrushOpProps* UInflateBrushOpProps::GetDefaultObj()
{
	static class UInflateBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UInflateBrushOpProps*>(UInflateBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshInspectorToolBuilder
// (None)

class UClass* UMeshInspectorToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshInspectorToolBuilder");

	return Clss;
}


// MeshInspectorToolBuilder MeshModelingTools.Default__MeshInspectorToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshInspectorToolBuilder* UMeshInspectorToolBuilder::GetDefaultObj()
{
	static class UMeshInspectorToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshInspectorToolBuilder*>(UMeshInspectorToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshInspectorProperties
// (None)

class UClass* UMeshInspectorProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshInspectorProperties");

	return Clss;
}


// MeshInspectorProperties MeshModelingTools.Default__MeshInspectorProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshInspectorProperties* UMeshInspectorProperties::GetDefaultObj()
{
	static class UMeshInspectorProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshInspectorProperties*>(UMeshInspectorProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshInspectorTool
// (None)

class UClass* UMeshInspectorTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshInspectorTool");

	return Clss;
}


// MeshInspectorTool MeshModelingTools.Default__MeshInspectorTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshInspectorTool* UMeshInspectorTool::GetDefaultObj()
{
	static class UMeshInspectorTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshInspectorTool*>(UMeshInspectorTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.NewMeshMaterialProperties
// (None)

class UClass* UNewMeshMaterialProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewMeshMaterialProperties");

	return Clss;
}


// NewMeshMaterialProperties MeshModelingTools.Default__NewMeshMaterialProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNewMeshMaterialProperties* UNewMeshMaterialProperties::GetDefaultObj()
{
	static class UNewMeshMaterialProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewMeshMaterialProperties*>(UNewMeshMaterialProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ExistingMeshMaterialProperties
// (None)

class UClass* UExistingMeshMaterialProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExistingMeshMaterialProperties");

	return Clss;
}


// ExistingMeshMaterialProperties MeshModelingTools.Default__ExistingMeshMaterialProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UExistingMeshMaterialProperties* UExistingMeshMaterialProperties::GetDefaultObj()
{
	static class UExistingMeshMaterialProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UExistingMeshMaterialProperties*>(UExistingMeshMaterialProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshEditingViewProperties
// (None)

class UClass* UMeshEditingViewProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshEditingViewProperties");

	return Clss;
}


// MeshEditingViewProperties MeshModelingTools.Default__MeshEditingViewProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshEditingViewProperties* UMeshEditingViewProperties::GetDefaultObj()
{
	static class UMeshEditingViewProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshEditingViewProperties*>(UMeshEditingViewProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MoveBrushOpProps
// (None)

class UClass* UMoveBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoveBrushOpProps");

	return Clss;
}


// MoveBrushOpProps MeshModelingTools.Default__MoveBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoveBrushOpProps* UMoveBrushOpProps::GetDefaultObj()
{
	static class UMoveBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoveBrushOpProps*>(UMoveBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PinchBrushOpProps
// (None)

class UClass* UPinchBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinchBrushOpProps");

	return Clss;
}


// PinchBrushOpProps MeshModelingTools.Default__PinchBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UPinchBrushOpProps* UPinchBrushOpProps::GetDefaultObj()
{
	static class UPinchBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UPinchBrushOpProps*>(UPinchBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BasePlaneBrushOpProps
// (None)

class UClass* UBasePlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePlaneBrushOpProps");

	return Clss;
}


// BasePlaneBrushOpProps MeshModelingTools.Default__BasePlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasePlaneBrushOpProps* UBasePlaneBrushOpProps::GetDefaultObj()
{
	static class UBasePlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasePlaneBrushOpProps*>(UBasePlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PlaneBrushOpProps
// (None)

class UClass* UPlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneBrushOpProps");

	return Clss;
}


// PlaneBrushOpProps MeshModelingTools.Default__PlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneBrushOpProps* UPlaneBrushOpProps::GetDefaultObj()
{
	static class UPlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneBrushOpProps*>(UPlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ViewAlignedPlaneBrushOpProps
// (None)

class UClass* UViewAlignedPlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewAlignedPlaneBrushOpProps");

	return Clss;
}


// ViewAlignedPlaneBrushOpProps MeshModelingTools.Default__ViewAlignedPlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UViewAlignedPlaneBrushOpProps* UViewAlignedPlaneBrushOpProps::GetDefaultObj()
{
	static class UViewAlignedPlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewAlignedPlaneBrushOpProps*>(UViewAlignedPlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.FixedPlaneBrushOpProps
// (None)

class UClass* UFixedPlaneBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FixedPlaneBrushOpProps");

	return Clss;
}


// FixedPlaneBrushOpProps MeshModelingTools.Default__FixedPlaneBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UFixedPlaneBrushOpProps* UFixedPlaneBrushOpProps::GetDefaultObj()
{
	static class UFixedPlaneBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UFixedPlaneBrushOpProps*>(UFixedPlaneBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.StandardSculptBrushOpProps
// (None)

class UClass* UStandardSculptBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandardSculptBrushOpProps");

	return Clss;
}


// StandardSculptBrushOpProps MeshModelingTools.Default__StandardSculptBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UStandardSculptBrushOpProps* UStandardSculptBrushOpProps::GetDefaultObj()
{
	static class UStandardSculptBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandardSculptBrushOpProps*>(UStandardSculptBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ViewAlignedSculptBrushOpProps
// (None)

class UClass* UViewAlignedSculptBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ViewAlignedSculptBrushOpProps");

	return Clss;
}


// ViewAlignedSculptBrushOpProps MeshModelingTools.Default__ViewAlignedSculptBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UViewAlignedSculptBrushOpProps* UViewAlignedSculptBrushOpProps::GetDefaultObj()
{
	static class UViewAlignedSculptBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewAlignedSculptBrushOpProps*>(UViewAlignedSculptBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SculptMaxBrushOpProps
// (None)

class UClass* USculptMaxBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SculptMaxBrushOpProps");

	return Clss;
}


// SculptMaxBrushOpProps MeshModelingTools.Default__SculptMaxBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USculptMaxBrushOpProps* USculptMaxBrushOpProps::GetDefaultObj()
{
	static class USculptMaxBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USculptMaxBrushOpProps*>(USculptMaxBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SculptBrushProperties
// (None)

class UClass* USculptBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SculptBrushProperties");

	return Clss;
}


// SculptBrushProperties MeshModelingTools.Default__SculptBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USculptBrushProperties* USculptBrushProperties::GetDefaultObj()
{
	static class USculptBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USculptBrushProperties*>(USculptBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.KelvinBrushProperties
// (None)

class UClass* UKelvinBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KelvinBrushProperties");

	return Clss;
}


// KelvinBrushProperties MeshModelingTools.Default__KelvinBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UKelvinBrushProperties* UKelvinBrushProperties::GetDefaultObj()
{
	static class UKelvinBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UKelvinBrushProperties*>(UKelvinBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.WorkPlaneProperties
// (None)

class UClass* UWorkPlaneProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorkPlaneProperties");

	return Clss;
}


// WorkPlaneProperties MeshModelingTools.Default__WorkPlaneProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UWorkPlaneProperties* UWorkPlaneProperties::GetDefaultObj()
{
	static class UWorkPlaneProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorkPlaneProperties*>(UWorkPlaneProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SculptMaxBrushProperties
// (None)

class UClass* USculptMaxBrushProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SculptMaxBrushProperties");

	return Clss;
}


// SculptMaxBrushProperties MeshModelingTools.Default__SculptMaxBrushProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USculptMaxBrushProperties* USculptMaxBrushProperties::GetDefaultObj()
{
	static class USculptMaxBrushProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USculptMaxBrushProperties*>(USculptMaxBrushProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSculptToolBase
// (None)

class UClass* UMeshSculptToolBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSculptToolBase");

	return Clss;
}


// MeshSculptToolBase MeshModelingTools.Default__MeshSculptToolBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSculptToolBase* UMeshSculptToolBase::GetDefaultObj()
{
	static class UMeshSculptToolBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSculptToolBase*>(UMeshSculptToolBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSelectionToolBuilder
// (None)

class UClass* UMeshSelectionToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionToolBuilder");

	return Clss;
}


// MeshSelectionToolBuilder MeshModelingTools.Default__MeshSelectionToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionToolBuilder* UMeshSelectionToolBuilder::GetDefaultObj()
{
	static class UMeshSelectionToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionToolBuilder*>(UMeshSelectionToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// (None)

class UClass* UMeshSelectionToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionToolActionPropertySet");

	return Clss;
}


// MeshSelectionToolActionPropertySet MeshModelingTools.Default__MeshSelectionToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionToolActionPropertySet* UMeshSelectionToolActionPropertySet::GetDefaultObj()
{
	static class UMeshSelectionToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionToolActionPropertySet*>(UMeshSelectionToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSelectionEditActions
// (None)

class UClass* UMeshSelectionEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionEditActions");

	return Clss;
}


// MeshSelectionEditActions MeshModelingTools.Default__MeshSelectionEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionEditActions* UMeshSelectionEditActions::GetDefaultObj()
{
	static class UMeshSelectionEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionEditActions*>(UMeshSelectionEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.MeshSelectionEditActions.Shrink
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Shrink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Shrink");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::SelectLargestComponentByTriCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectLargestComponentByTriCount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::SelectLargestComponentByArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectLargestComponentByArea");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.SelectAll
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "SelectAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::OptimizeSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "OptimizeSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.Invert
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Invert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Invert");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.Grow
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Grow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Grow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::ExpandToConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "ExpandToConnected");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionEditActions.Clear
// (Final, Native, Public)
// Parameters:

void UMeshSelectionEditActions::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionEditActions", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.MeshSelectionMeshEditActions
// (None)

class UClass* UMeshSelectionMeshEditActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionMeshEditActions");

	return Clss;
}


// MeshSelectionMeshEditActions MeshModelingTools.Default__MeshSelectionMeshEditActions
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionMeshEditActions* UMeshSelectionMeshEditActions::GetDefaultObj()
{
	static class UMeshSelectionMeshEditActions* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionMeshEditActions*>(UMeshSelectionMeshEditActions::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::SeparateTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "SeparateTriangles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::FlipNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "FlipNormals");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::DisconnectTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "DisconnectTriangles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::DeleteTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "DeleteTriangles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
// (Final, Native, Public)
// Parameters:

void UMeshSelectionMeshEditActions::CreatePolygroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshSelectionMeshEditActions", "CreatePolygroup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.MeshSelectionToolProperties
// (None)

class UClass* UMeshSelectionToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionToolProperties");

	return Clss;
}


// MeshSelectionToolProperties MeshModelingTools.Default__MeshSelectionToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionToolProperties* UMeshSelectionToolProperties::GetDefaultObj()
{
	static class UMeshSelectionToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionToolProperties*>(UMeshSelectionToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSelectionTool
// (None)

class UClass* UMeshSelectionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSelectionTool");

	return Clss;
}


// MeshSelectionTool MeshModelingTools.Default__MeshSelectionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSelectionTool* UMeshSelectionTool::GetDefaultObj()
{
	static class UMeshSelectionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSelectionTool*>(UMeshSelectionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.BaseSmoothBrushOpProps
// (None)

class UClass* UBaseSmoothBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSmoothBrushOpProps");

	return Clss;
}


// BaseSmoothBrushOpProps MeshModelingTools.Default__BaseSmoothBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UBaseSmoothBrushOpProps* UBaseSmoothBrushOpProps::GetDefaultObj()
{
	static class UBaseSmoothBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSmoothBrushOpProps*>(UBaseSmoothBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothBrushOpProps
// (None)

class UClass* USmoothBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothBrushOpProps");

	return Clss;
}


// SmoothBrushOpProps MeshModelingTools.Default__SmoothBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothBrushOpProps* USmoothBrushOpProps::GetDefaultObj()
{
	static class USmoothBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothBrushOpProps*>(USmoothBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SecondarySmoothBrushOpProps
// (None)

class UClass* USecondarySmoothBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SecondarySmoothBrushOpProps");

	return Clss;
}


// SecondarySmoothBrushOpProps MeshModelingTools.Default__SecondarySmoothBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USecondarySmoothBrushOpProps* USecondarySmoothBrushOpProps::GetDefaultObj()
{
	static class USecondarySmoothBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USecondarySmoothBrushOpProps*>(USecondarySmoothBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothFillBrushOpProps
// (None)

class UClass* USmoothFillBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothFillBrushOpProps");

	return Clss;
}


// SmoothFillBrushOpProps MeshModelingTools.Default__SmoothFillBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothFillBrushOpProps* USmoothFillBrushOpProps::GetDefaultObj()
{
	static class USmoothFillBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothFillBrushOpProps*>(USmoothFillBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.FlattenBrushOpProps
// (None)

class UClass* UFlattenBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlattenBrushOpProps");

	return Clss;
}


// FlattenBrushOpProps MeshModelingTools.Default__FlattenBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlattenBrushOpProps* UFlattenBrushOpProps::GetDefaultObj()
{
	static class UFlattenBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlattenBrushOpProps*>(UFlattenBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.EraseBrushOpProps
// (None)

class UClass* UEraseBrushOpProps::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EraseBrushOpProps");

	return Clss;
}


// EraseBrushOpProps MeshModelingTools.Default__EraseBrushOpProps
// (Public, ClassDefaultObject, ArchetypeObject)

class UEraseBrushOpProps* UEraseBrushOpProps::GetDefaultObj()
{
	static class UEraseBrushOpProps* Default = nullptr;

	if (!Default)
		Default = static_cast<UEraseBrushOpProps*>(UEraseBrushOpProps::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// (None)

class UClass* UMeshSpaceDeformerToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSpaceDeformerToolBuilder");

	return Clss;
}


// MeshSpaceDeformerToolBuilder MeshModelingTools.Default__MeshSpaceDeformerToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshSpaceDeformerToolBuilder* UMeshSpaceDeformerToolBuilder::GetDefaultObj()
{
	static class UMeshSpaceDeformerToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSpaceDeformerToolBuilder*>(UMeshSpaceDeformerToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SpaceDeformerOperatorFactory
// (None)

class UClass* USpaceDeformerOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceDeformerOperatorFactory");

	return Clss;
}


// SpaceDeformerOperatorFactory MeshModelingTools.Default__SpaceDeformerOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class USpaceDeformerOperatorFactory* USpaceDeformerOperatorFactory::GetDefaultObj()
{
	static class USpaceDeformerOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<USpaceDeformerOperatorFactory*>(USpaceDeformerOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshSpaceDeformerTool
// (None)

class UClass* UMeshSpaceDeformerTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshSpaceDeformerTool");

	return Clss;
}


// MeshSpaceDeformerTool MeshModelingTools.Default__MeshSpaceDeformerTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshSpaceDeformerTool* UMeshSpaceDeformerTool::GetDefaultObj()
{
	static class UMeshSpaceDeformerTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshSpaceDeformerTool*>(UMeshSpaceDeformerTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshStatisticsProperties
// (None)

class UClass* UMeshStatisticsProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshStatisticsProperties");

	return Clss;
}


// MeshStatisticsProperties MeshModelingTools.Default__MeshStatisticsProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshStatisticsProperties* UMeshStatisticsProperties::GetDefaultObj()
{
	static class UMeshStatisticsProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshStatisticsProperties*>(UMeshStatisticsProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshVertexSculptToolBuilder
// (None)

class UClass* UMeshVertexSculptToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexSculptToolBuilder");

	return Clss;
}


// MeshVertexSculptToolBuilder MeshModelingTools.Default__MeshVertexSculptToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshVertexSculptToolBuilder* UMeshVertexSculptToolBuilder::GetDefaultObj()
{
	static class UMeshVertexSculptToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshVertexSculptToolBuilder*>(UMeshVertexSculptToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VertexBrushSculptProperties
// (None)

class UClass* UVertexBrushSculptProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VertexBrushSculptProperties");

	return Clss;
}


// VertexBrushSculptProperties MeshModelingTools.Default__VertexBrushSculptProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVertexBrushSculptProperties* UVertexBrushSculptProperties::GetDefaultObj()
{
	static class UVertexBrushSculptProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVertexBrushSculptProperties*>(UVertexBrushSculptProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MeshVertexSculptTool
// (None)

class UClass* UMeshVertexSculptTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshVertexSculptTool");

	return Clss;
}


// MeshVertexSculptTool MeshModelingTools.Default__MeshVertexSculptTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMeshVertexSculptTool* UMeshVertexSculptTool::GetDefaultObj()
{
	static class UMeshVertexSculptTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshVertexSculptTool*>(UMeshVertexSculptTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MirrorToolBuilder
// (None)

class UClass* UMirrorToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorToolBuilder");

	return Clss;
}


// MirrorToolBuilder MeshModelingTools.Default__MirrorToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorToolBuilder* UMirrorToolBuilder::GetDefaultObj()
{
	static class UMirrorToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorToolBuilder*>(UMirrorToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MirrorToolProperties
// (None)

class UClass* UMirrorToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorToolProperties");

	return Clss;
}


// MirrorToolProperties MeshModelingTools.Default__MirrorToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorToolProperties* UMirrorToolProperties::GetDefaultObj()
{
	static class UMirrorToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorToolProperties*>(UMirrorToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MirrorOperatorFactory
// (None)

class UClass* UMirrorOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorOperatorFactory");

	return Clss;
}


// MirrorOperatorFactory MeshModelingTools.Default__MirrorOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorOperatorFactory* UMirrorOperatorFactory::GetDefaultObj()
{
	static class UMirrorOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorOperatorFactory*>(UMirrorOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.MirrorToolActionPropertySet
// (None)

class UClass* UMirrorToolActionPropertySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorToolActionPropertySet");

	return Clss;
}


// MirrorToolActionPropertySet MeshModelingTools.Default__MirrorToolActionPropertySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UMirrorToolActionPropertySet* UMirrorToolActionPropertySet::GetDefaultObj()
{
	static class UMirrorToolActionPropertySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorToolActionPropertySet*>(UMirrorToolActionPropertySet::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.MirrorToolActionPropertySet.Up
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Up");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::ShiftToCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "ShiftToCenter");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Right
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Right");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Left
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Left");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Forward
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Forward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Forward");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Down
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Down");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshModelingTools.MirrorToolActionPropertySet.Backward
// (Final, Native, Public)
// Parameters:

void UMirrorToolActionPropertySet::Backward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MirrorToolActionPropertySet", "Backward");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.MirrorTool
// (None)

class UClass* UMirrorTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirrorTool");

	return Clss;
}


// MirrorTool MeshModelingTools.Default__MirrorTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMirrorTool* UMirrorTool::GetDefaultObj()
{
	static class UMirrorTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirrorTool*>(UMirrorTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.OffsetMeshToolProperties
// (None)

class UClass* UOffsetMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetMeshToolProperties");

	return Clss;
}


// OffsetMeshToolProperties MeshModelingTools.Default__OffsetMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOffsetMeshToolProperties* UOffsetMeshToolProperties::GetDefaultObj()
{
	static class UOffsetMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetMeshToolProperties*>(UOffsetMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.OffsetWeightMapSetProperties
// (None)

class UClass* UOffsetWeightMapSetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetWeightMapSetProperties");

	return Clss;
}


// OffsetWeightMapSetProperties MeshModelingTools.Default__OffsetWeightMapSetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UOffsetWeightMapSetProperties* UOffsetWeightMapSetProperties::GetDefaultObj()
{
	static class UOffsetWeightMapSetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetWeightMapSetProperties*>(UOffsetWeightMapSetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.IterativeOffsetProperties
// (None)

class UClass* UIterativeOffsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IterativeOffsetProperties");

	return Clss;
}


// IterativeOffsetProperties MeshModelingTools.Default__IterativeOffsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UIterativeOffsetProperties* UIterativeOffsetProperties::GetDefaultObj()
{
	static class UIterativeOffsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UIterativeOffsetProperties*>(UIterativeOffsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ImplicitOffsetProperties
// (None)

class UClass* UImplicitOffsetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImplicitOffsetProperties");

	return Clss;
}


// ImplicitOffsetProperties MeshModelingTools.Default__ImplicitOffsetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UImplicitOffsetProperties* UImplicitOffsetProperties::GetDefaultObj()
{
	static class UImplicitOffsetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UImplicitOffsetProperties*>(UImplicitOffsetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.OffsetMeshTool
// (None)

class UClass* UOffsetMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetMeshTool");

	return Clss;
}


// OffsetMeshTool MeshModelingTools.Default__OffsetMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UOffsetMeshTool* UOffsetMeshTool::GetDefaultObj()
{
	static class UOffsetMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetMeshTool*>(UOffsetMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.OffsetMeshToolBuilder
// (None)

class UClass* UOffsetMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OffsetMeshToolBuilder");

	return Clss;
}


// OffsetMeshToolBuilder MeshModelingTools.Default__OffsetMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UOffsetMeshToolBuilder* UOffsetMeshToolBuilder::GetDefaultObj()
{
	static class UOffsetMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UOffsetMeshToolBuilder*>(UOffsetMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PhysicsInspectorToolBuilder
// (None)

class UClass* UPhysicsInspectorToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsInspectorToolBuilder");

	return Clss;
}


// PhysicsInspectorToolBuilder MeshModelingTools.Default__PhysicsInspectorToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPhysicsInspectorToolBuilder* UPhysicsInspectorToolBuilder::GetDefaultObj()
{
	static class UPhysicsInspectorToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsInspectorToolBuilder*>(UPhysicsInspectorToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PhysicsInspectorTool
// (None)

class UClass* UPhysicsInspectorTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhysicsInspectorTool");

	return Clss;
}


// PhysicsInspectorTool MeshModelingTools.Default__PhysicsInspectorTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPhysicsInspectorTool* UPhysicsInspectorTool::GetDefaultObj()
{
	static class UPhysicsInspectorTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhysicsInspectorTool*>(UPhysicsInspectorTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PlaneCutToolBuilder
// (None)

class UClass* UPlaneCutToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutToolBuilder");

	return Clss;
}


// PlaneCutToolBuilder MeshModelingTools.Default__PlaneCutToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneCutToolBuilder* UPlaneCutToolBuilder::GetDefaultObj()
{
	static class UPlaneCutToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutToolBuilder*>(UPlaneCutToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.AcceptOutputProperties
// (None)

class UClass* UAcceptOutputProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcceptOutputProperties");

	return Clss;
}


// AcceptOutputProperties MeshModelingTools.Default__AcceptOutputProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UAcceptOutputProperties* UAcceptOutputProperties::GetDefaultObj()
{
	static class UAcceptOutputProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UAcceptOutputProperties*>(UAcceptOutputProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PlaneCutToolProperties
// (None)

class UClass* UPlaneCutToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutToolProperties");

	return Clss;
}


// PlaneCutToolProperties MeshModelingTools.Default__PlaneCutToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneCutToolProperties* UPlaneCutToolProperties::GetDefaultObj()
{
	static class UPlaneCutToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutToolProperties*>(UPlaneCutToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PlaneCutOperatorFactory
// (None)

class UClass* UPlaneCutOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutOperatorFactory");

	return Clss;
}


// PlaneCutOperatorFactory MeshModelingTools.Default__PlaneCutOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneCutOperatorFactory* UPlaneCutOperatorFactory::GetDefaultObj()
{
	static class UPlaneCutOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutOperatorFactory*>(UPlaneCutOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PlaneCutTool
// (None)

class UClass* UPlaneCutTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneCutTool");

	return Clss;
}


// PlaneCutTool MeshModelingTools.Default__PlaneCutTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPlaneCutTool* UPlaneCutTool::GetDefaultObj()
{
	static class UPlaneCutTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneCutTool*>(UPlaneCutTool::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshModelingTools.PlaneCutTool.Cut
// (Final, Native, Protected)
// Parameters:

void UPlaneCutTool::Cut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneCutTool", "Cut");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshModelingTools.PositionPlaneGizmoBuilder
// (None)

class UClass* UPositionPlaneGizmoBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PositionPlaneGizmoBuilder");

	return Clss;
}


// PositionPlaneGizmoBuilder MeshModelingTools.Default__PositionPlaneGizmoBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UPositionPlaneGizmoBuilder* UPositionPlaneGizmoBuilder::GetDefaultObj()
{
	static class UPositionPlaneGizmoBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UPositionPlaneGizmoBuilder*>(UPositionPlaneGizmoBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PositionPlaneGizmo
// (None)

class UClass* UPositionPlaneGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PositionPlaneGizmo");

	return Clss;
}


// PositionPlaneGizmo MeshModelingTools.Default__PositionPlaneGizmo
// (Public, ClassDefaultObject, ArchetypeObject, Transient)

class UPositionPlaneGizmo* UPositionPlaneGizmo::GetDefaultObj()
{
	static class UPositionPlaneGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<UPositionPlaneGizmo*>(UPositionPlaneGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// (None)

class UClass* UPositionPlaneOnSceneInputBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PositionPlaneOnSceneInputBehavior");

	return Clss;
}


// PositionPlaneOnSceneInputBehavior MeshModelingTools.Default__PositionPlaneOnSceneInputBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UPositionPlaneOnSceneInputBehavior* UPositionPlaneOnSceneInputBehavior::GetDefaultObj()
{
	static class UPositionPlaneOnSceneInputBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UPositionPlaneOnSceneInputBehavior*>(UPositionPlaneOnSceneInputBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProjectToTargetToolBuilder
// (None)

class UClass* UProjectToTargetToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectToTargetToolBuilder");

	return Clss;
}


// ProjectToTargetToolBuilder MeshModelingTools.Default__ProjectToTargetToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UProjectToTargetToolBuilder* UProjectToTargetToolBuilder::GetDefaultObj()
{
	static class UProjectToTargetToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectToTargetToolBuilder*>(UProjectToTargetToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemeshMeshToolProperties
// (None)

class UClass* URemeshMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshMeshToolProperties");

	return Clss;
}


// RemeshMeshToolProperties MeshModelingTools.Default__RemeshMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshMeshToolProperties* URemeshMeshToolProperties::GetDefaultObj()
{
	static class URemeshMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshMeshToolProperties*>(URemeshMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProjectToTargetToolProperties
// (None)

class UClass* UProjectToTargetToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectToTargetToolProperties");

	return Clss;
}


// ProjectToTargetToolProperties MeshModelingTools.Default__ProjectToTargetToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UProjectToTargetToolProperties* UProjectToTargetToolProperties::GetDefaultObj()
{
	static class UProjectToTargetToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectToTargetToolProperties*>(UProjectToTargetToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemeshMeshTool
// (None)

class UClass* URemeshMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshMeshTool");

	return Clss;
}


// RemeshMeshTool MeshModelingTools.Default__RemeshMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URemeshMeshTool* URemeshMeshTool::GetDefaultObj()
{
	static class URemeshMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshMeshTool*>(URemeshMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ProjectToTargetTool
// (None)

class UClass* UProjectToTargetTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjectToTargetTool");

	return Clss;
}


// ProjectToTargetTool MeshModelingTools.Default__ProjectToTargetTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UProjectToTargetTool* UProjectToTargetTool::GetDefaultObj()
{
	static class UProjectToTargetTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UProjectToTargetTool*>(UProjectToTargetTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemeshMeshToolBuilder
// (None)

class UClass* URemeshMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemeshMeshToolBuilder");

	return Clss;
}


// RemeshMeshToolBuilder MeshModelingTools.Default__RemeshMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URemeshMeshToolBuilder* URemeshMeshToolBuilder::GetDefaultObj()
{
	static class URemeshMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URemeshMeshToolBuilder*>(URemeshMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// (None)

class UClass* URemoveOccludedTrianglesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesToolBuilder");

	return Clss;
}


// RemoveOccludedTrianglesToolBuilder MeshModelingTools.Default__RemoveOccludedTrianglesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesToolBuilder* URemoveOccludedTrianglesToolBuilder::GetDefaultObj()
{
	static class URemoveOccludedTrianglesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesToolBuilder*>(URemoveOccludedTrianglesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// (None)

class UClass* URemoveOccludedTrianglesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesToolProperties");

	return Clss;
}


// RemoveOccludedTrianglesToolProperties MeshModelingTools.Default__RemoveOccludedTrianglesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesToolProperties* URemoveOccludedTrianglesToolProperties::GetDefaultObj()
{
	static class URemoveOccludedTrianglesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesToolProperties*>(URemoveOccludedTrianglesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// (None)

class UClass* URemoveOccludedTrianglesAdvancedProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesAdvancedProperties");

	return Clss;
}


// RemoveOccludedTrianglesAdvancedProperties MeshModelingTools.Default__RemoveOccludedTrianglesAdvancedProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesAdvancedProperties* URemoveOccludedTrianglesAdvancedProperties::GetDefaultObj()
{
	static class URemoveOccludedTrianglesAdvancedProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesAdvancedProperties*>(URemoveOccludedTrianglesAdvancedProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// (None)

class UClass* URemoveOccludedTrianglesOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesOperatorFactory");

	return Clss;
}


// RemoveOccludedTrianglesOperatorFactory MeshModelingTools.Default__RemoveOccludedTrianglesOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesOperatorFactory* URemoveOccludedTrianglesOperatorFactory::GetDefaultObj()
{
	static class URemoveOccludedTrianglesOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesOperatorFactory*>(URemoveOccludedTrianglesOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RemoveOccludedTrianglesTool
// (None)

class UClass* URemoveOccludedTrianglesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RemoveOccludedTrianglesTool");

	return Clss;
}


// RemoveOccludedTrianglesTool MeshModelingTools.Default__RemoveOccludedTrianglesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URemoveOccludedTrianglesTool* URemoveOccludedTrianglesTool::GetDefaultObj()
{
	static class URemoveOccludedTrianglesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URemoveOccludedTrianglesTool*>(URemoveOccludedTrianglesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveBoundaryToolBuilder
// (None)

class UClass* URevolveBoundaryToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryToolBuilder");

	return Clss;
}


// RevolveBoundaryToolBuilder MeshModelingTools.Default__RevolveBoundaryToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryToolBuilder* URevolveBoundaryToolBuilder::GetDefaultObj()
{
	static class URevolveBoundaryToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryToolBuilder*>(URevolveBoundaryToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveBoundaryOperatorFactory
// (None)

class UClass* URevolveBoundaryOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryOperatorFactory");

	return Clss;
}


// RevolveBoundaryOperatorFactory MeshModelingTools.Default__RevolveBoundaryOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryOperatorFactory* URevolveBoundaryOperatorFactory::GetDefaultObj()
{
	static class URevolveBoundaryOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryOperatorFactory*>(URevolveBoundaryOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveBoundaryToolProperties
// (None)

class UClass* URevolveBoundaryToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryToolProperties");

	return Clss;
}


// RevolveBoundaryToolProperties MeshModelingTools.Default__RevolveBoundaryToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryToolProperties* URevolveBoundaryToolProperties::GetDefaultObj()
{
	static class URevolveBoundaryToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryToolProperties*>(URevolveBoundaryToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.RevolveBoundaryTool
// (None)

class UClass* URevolveBoundaryTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RevolveBoundaryTool");

	return Clss;
}


// RevolveBoundaryTool MeshModelingTools.Default__RevolveBoundaryTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class URevolveBoundaryTool* URevolveBoundaryTool::GetDefaultObj()
{
	static class URevolveBoundaryTool* Default = nullptr;

	if (!Default)
		Default = static_cast<URevolveBoundaryTool*>(URevolveBoundaryTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SeamSculptToolBuilder
// (None)

class UClass* USeamSculptToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeamSculptToolBuilder");

	return Clss;
}


// SeamSculptToolBuilder MeshModelingTools.Default__SeamSculptToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USeamSculptToolBuilder* USeamSculptToolBuilder::GetDefaultObj()
{
	static class USeamSculptToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USeamSculptToolBuilder*>(USeamSculptToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SeamSculptToolProperties
// (None)

class UClass* USeamSculptToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeamSculptToolProperties");

	return Clss;
}


// SeamSculptToolProperties MeshModelingTools.Default__SeamSculptToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USeamSculptToolProperties* USeamSculptToolProperties::GetDefaultObj()
{
	static class USeamSculptToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USeamSculptToolProperties*>(USeamSculptToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SeamSculptTool
// (None)

class UClass* USeamSculptTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SeamSculptTool");

	return Clss;
}


// SeamSculptTool MeshModelingTools.Default__SeamSculptTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USeamSculptTool* USeamSculptTool::GetDefaultObj()
{
	static class USeamSculptTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USeamSculptTool*>(USeamSculptTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SelfUnionMeshesToolProperties
// (None)

class UClass* USelfUnionMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelfUnionMeshesToolProperties");

	return Clss;
}


// SelfUnionMeshesToolProperties MeshModelingTools.Default__SelfUnionMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USelfUnionMeshesToolProperties* USelfUnionMeshesToolProperties::GetDefaultObj()
{
	static class USelfUnionMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USelfUnionMeshesToolProperties*>(USelfUnionMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SelfUnionMeshesTool
// (None)

class UClass* USelfUnionMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelfUnionMeshesTool");

	return Clss;
}


// SelfUnionMeshesTool MeshModelingTools.Default__SelfUnionMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USelfUnionMeshesTool* USelfUnionMeshesTool::GetDefaultObj()
{
	static class USelfUnionMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USelfUnionMeshesTool*>(USelfUnionMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SelfUnionMeshesToolBuilder
// (None)

class UClass* USelfUnionMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelfUnionMeshesToolBuilder");

	return Clss;
}


// SelfUnionMeshesToolBuilder MeshModelingTools.Default__SelfUnionMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USelfUnionMeshesToolBuilder* USelfUnionMeshesToolBuilder::GetDefaultObj()
{
	static class USelfUnionMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USelfUnionMeshesToolBuilder*>(USelfUnionMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SetCollisionGeometryToolBuilder
// (None)

class UClass* USetCollisionGeometryToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetCollisionGeometryToolBuilder");

	return Clss;
}


// SetCollisionGeometryToolBuilder MeshModelingTools.Default__SetCollisionGeometryToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USetCollisionGeometryToolBuilder* USetCollisionGeometryToolBuilder::GetDefaultObj()
{
	static class USetCollisionGeometryToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USetCollisionGeometryToolBuilder*>(USetCollisionGeometryToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SetCollisionGeometryToolProperties
// (None)

class UClass* USetCollisionGeometryToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetCollisionGeometryToolProperties");

	return Clss;
}


// SetCollisionGeometryToolProperties MeshModelingTools.Default__SetCollisionGeometryToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USetCollisionGeometryToolProperties* USetCollisionGeometryToolProperties::GetDefaultObj()
{
	static class USetCollisionGeometryToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USetCollisionGeometryToolProperties*>(USetCollisionGeometryToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SetCollisionGeometryTool
// (None)

class UClass* USetCollisionGeometryTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetCollisionGeometryTool");

	return Clss;
}


// SetCollisionGeometryTool MeshModelingTools.Default__SetCollisionGeometryTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USetCollisionGeometryTool* USetCollisionGeometryTool::GetDefaultObj()
{
	static class USetCollisionGeometryTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USetCollisionGeometryTool*>(USetCollisionGeometryTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothMeshToolProperties
// (None)

class UClass* USmoothMeshToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothMeshToolProperties");

	return Clss;
}


// SmoothMeshToolProperties MeshModelingTools.Default__SmoothMeshToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothMeshToolProperties* USmoothMeshToolProperties::GetDefaultObj()
{
	static class USmoothMeshToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothMeshToolProperties*>(USmoothMeshToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.IterativeSmoothProperties
// (None)

class UClass* UIterativeSmoothProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IterativeSmoothProperties");

	return Clss;
}


// IterativeSmoothProperties MeshModelingTools.Default__IterativeSmoothProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UIterativeSmoothProperties* UIterativeSmoothProperties::GetDefaultObj()
{
	static class UIterativeSmoothProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UIterativeSmoothProperties*>(UIterativeSmoothProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.DiffusionSmoothProperties
// (None)

class UClass* UDiffusionSmoothProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiffusionSmoothProperties");

	return Clss;
}


// DiffusionSmoothProperties MeshModelingTools.Default__DiffusionSmoothProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UDiffusionSmoothProperties* UDiffusionSmoothProperties::GetDefaultObj()
{
	static class UDiffusionSmoothProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiffusionSmoothProperties*>(UDiffusionSmoothProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.ImplicitSmoothProperties
// (None)

class UClass* UImplicitSmoothProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImplicitSmoothProperties");

	return Clss;
}


// ImplicitSmoothProperties MeshModelingTools.Default__ImplicitSmoothProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UImplicitSmoothProperties* UImplicitSmoothProperties::GetDefaultObj()
{
	static class UImplicitSmoothProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UImplicitSmoothProperties*>(UImplicitSmoothProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothWeightMapSetProperties
// (None)

class UClass* USmoothWeightMapSetProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothWeightMapSetProperties");

	return Clss;
}


// SmoothWeightMapSetProperties MeshModelingTools.Default__SmoothWeightMapSetProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothWeightMapSetProperties* USmoothWeightMapSetProperties::GetDefaultObj()
{
	static class USmoothWeightMapSetProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothWeightMapSetProperties*>(USmoothWeightMapSetProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothMeshTool
// (None)

class UClass* USmoothMeshTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothMeshTool");

	return Clss;
}


// SmoothMeshTool MeshModelingTools.Default__SmoothMeshTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USmoothMeshTool* USmoothMeshTool::GetDefaultObj()
{
	static class USmoothMeshTool* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothMeshTool*>(USmoothMeshTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.SmoothMeshToolBuilder
// (None)

class UClass* USmoothMeshToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmoothMeshToolBuilder");

	return Clss;
}


// SmoothMeshToolBuilder MeshModelingTools.Default__SmoothMeshToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class USmoothMeshToolBuilder* USmoothMeshToolBuilder::GetDefaultObj()
{
	static class USmoothMeshToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<USmoothMeshToolBuilder*>(USmoothMeshToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.TransformMeshesToolBuilder
// (None)

class UClass* UTransformMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformMeshesToolBuilder");

	return Clss;
}


// TransformMeshesToolBuilder MeshModelingTools.Default__TransformMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformMeshesToolBuilder* UTransformMeshesToolBuilder::GetDefaultObj()
{
	static class UTransformMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformMeshesToolBuilder*>(UTransformMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.TransformMeshesToolProperties
// (None)

class UClass* UTransformMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformMeshesToolProperties");

	return Clss;
}


// TransformMeshesToolProperties MeshModelingTools.Default__TransformMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformMeshesToolProperties* UTransformMeshesToolProperties::GetDefaultObj()
{
	static class UTransformMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformMeshesToolProperties*>(UTransformMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.TransformMeshesTool
// (None)

class UClass* UTransformMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformMeshesTool");

	return Clss;
}


// TransformMeshesTool MeshModelingTools.Default__TransformMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UTransformMeshesTool* UTransformMeshesTool::GetDefaultObj()
{
	static class UTransformMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformMeshesTool*>(UTransformMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionToolBuilder
// (None)

class UClass* UUVProjectionToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionToolBuilder");

	return Clss;
}


// UVProjectionToolBuilder MeshModelingTools.Default__UVProjectionToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionToolBuilder* UUVProjectionToolBuilder::GetDefaultObj()
{
	static class UUVProjectionToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionToolBuilder*>(UUVProjectionToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionToolProperties
// (None)

class UClass* UUVProjectionToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionToolProperties");

	return Clss;
}


// UVProjectionToolProperties MeshModelingTools.Default__UVProjectionToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionToolProperties* UUVProjectionToolProperties::GetDefaultObj()
{
	static class UUVProjectionToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionToolProperties*>(UUVProjectionToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionAdvancedProperties
// (None)

class UClass* UUVProjectionAdvancedProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionAdvancedProperties");

	return Clss;
}


// UVProjectionAdvancedProperties MeshModelingTools.Default__UVProjectionAdvancedProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionAdvancedProperties* UUVProjectionAdvancedProperties::GetDefaultObj()
{
	static class UUVProjectionAdvancedProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionAdvancedProperties*>(UUVProjectionAdvancedProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionOperatorFactory
// (None)

class UClass* UUVProjectionOperatorFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionOperatorFactory");

	return Clss;
}


// UVProjectionOperatorFactory MeshModelingTools.Default__UVProjectionOperatorFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class UUVProjectionOperatorFactory* UUVProjectionOperatorFactory::GetDefaultObj()
{
	static class UUVProjectionOperatorFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionOperatorFactory*>(UUVProjectionOperatorFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.UVProjectionTool
// (None)

class UClass* UUVProjectionTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UVProjectionTool");

	return Clss;
}


// UVProjectionTool MeshModelingTools.Default__UVProjectionTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UUVProjectionTool* UUVProjectionTool::GetDefaultObj()
{
	static class UUVProjectionTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UUVProjectionTool*>(UUVProjectionTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelBlendMeshesToolProperties
// (None)

class UClass* UVoxelBlendMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelBlendMeshesToolProperties");

	return Clss;
}


// VoxelBlendMeshesToolProperties MeshModelingTools.Default__VoxelBlendMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelBlendMeshesToolProperties* UVoxelBlendMeshesToolProperties::GetDefaultObj()
{
	static class UVoxelBlendMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelBlendMeshesToolProperties*>(UVoxelBlendMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelBlendMeshesTool
// (None)

class UClass* UVoxelBlendMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelBlendMeshesTool");

	return Clss;
}


// VoxelBlendMeshesTool MeshModelingTools.Default__VoxelBlendMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVoxelBlendMeshesTool* UVoxelBlendMeshesTool::GetDefaultObj()
{
	static class UVoxelBlendMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelBlendMeshesTool*>(UVoxelBlendMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelBlendMeshesToolBuilder
// (None)

class UClass* UVoxelBlendMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelBlendMeshesToolBuilder");

	return Clss;
}


// VoxelBlendMeshesToolBuilder MeshModelingTools.Default__VoxelBlendMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelBlendMeshesToolBuilder* UVoxelBlendMeshesToolBuilder::GetDefaultObj()
{
	static class UVoxelBlendMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelBlendMeshesToolBuilder*>(UVoxelBlendMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelMorphologyMeshesToolProperties
// (None)

class UClass* UVoxelMorphologyMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelMorphologyMeshesToolProperties");

	return Clss;
}


// VoxelMorphologyMeshesToolProperties MeshModelingTools.Default__VoxelMorphologyMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelMorphologyMeshesToolProperties* UVoxelMorphologyMeshesToolProperties::GetDefaultObj()
{
	static class UVoxelMorphologyMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelMorphologyMeshesToolProperties*>(UVoxelMorphologyMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelMorphologyMeshesTool
// (None)

class UClass* UVoxelMorphologyMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelMorphologyMeshesTool");

	return Clss;
}


// VoxelMorphologyMeshesTool MeshModelingTools.Default__VoxelMorphologyMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVoxelMorphologyMeshesTool* UVoxelMorphologyMeshesTool::GetDefaultObj()
{
	static class UVoxelMorphologyMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelMorphologyMeshesTool*>(UVoxelMorphologyMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder
// (None)

class UClass* UVoxelMorphologyMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelMorphologyMeshesToolBuilder");

	return Clss;
}


// VoxelMorphologyMeshesToolBuilder MeshModelingTools.Default__VoxelMorphologyMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelMorphologyMeshesToolBuilder* UVoxelMorphologyMeshesToolBuilder::GetDefaultObj()
{
	static class UVoxelMorphologyMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelMorphologyMeshesToolBuilder*>(UVoxelMorphologyMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelSolidifyMeshesToolProperties
// (None)

class UClass* UVoxelSolidifyMeshesToolProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelSolidifyMeshesToolProperties");

	return Clss;
}


// VoxelSolidifyMeshesToolProperties MeshModelingTools.Default__VoxelSolidifyMeshesToolProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelSolidifyMeshesToolProperties* UVoxelSolidifyMeshesToolProperties::GetDefaultObj()
{
	static class UVoxelSolidifyMeshesToolProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelSolidifyMeshesToolProperties*>(UVoxelSolidifyMeshesToolProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelSolidifyMeshesTool
// (None)

class UClass* UVoxelSolidifyMeshesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelSolidifyMeshesTool");

	return Clss;
}


// VoxelSolidifyMeshesTool MeshModelingTools.Default__VoxelSolidifyMeshesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UVoxelSolidifyMeshesTool* UVoxelSolidifyMeshesTool::GetDefaultObj()
{
	static class UVoxelSolidifyMeshesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelSolidifyMeshesTool*>(UVoxelSolidifyMeshesTool::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder
// (None)

class UClass* UVoxelSolidifyMeshesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoxelSolidifyMeshesToolBuilder");

	return Clss;
}


// VoxelSolidifyMeshesToolBuilder MeshModelingTools.Default__VoxelSolidifyMeshesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoxelSolidifyMeshesToolBuilder* UVoxelSolidifyMeshesToolBuilder::GetDefaultObj()
{
	static class UVoxelSolidifyMeshesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoxelSolidifyMeshesToolBuilder*>(UVoxelSolidifyMeshesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// (None)

class UClass* UWeldMeshEdgesToolBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeldMeshEdgesToolBuilder");

	return Clss;
}


// WeldMeshEdgesToolBuilder MeshModelingTools.Default__WeldMeshEdgesToolBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UWeldMeshEdgesToolBuilder* UWeldMeshEdgesToolBuilder::GetDefaultObj()
{
	static class UWeldMeshEdgesToolBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeldMeshEdgesToolBuilder*>(UWeldMeshEdgesToolBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshModelingTools.WeldMeshEdgesTool
// (None)

class UClass* UWeldMeshEdgesTool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeldMeshEdgesTool");

	return Clss;
}


// WeldMeshEdgesTool MeshModelingTools.Default__WeldMeshEdgesTool
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UWeldMeshEdgesTool* UWeldMeshEdgesTool::GetDefaultObj()
{
	static class UWeldMeshEdgesTool* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeldMeshEdgesTool*>(UWeldMeshEdgesTool::StaticClass()->DefaultObject);

	return Default;
}

}


