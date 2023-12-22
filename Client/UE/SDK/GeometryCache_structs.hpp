#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct GeometryCache.TrackRenderData
struct FTrackRenderData
{
public:
	uint8                                        Pad_BCC[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshData
struct FGeometryCacheMeshData
{
public:
	uint8                                        Pad_BCE[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheVertexInfo
struct FGeometryCacheVertexInfo
{
public:
	uint8                                        Pad_BCF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
struct FGeometryCacheMeshBatchInfo
{
public:
	uint8                                        Pad_BD1[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


