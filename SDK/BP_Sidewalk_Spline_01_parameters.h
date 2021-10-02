#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetSectionLengthBasedOnMesh
struct ABP_Sidewalk_Spline_01_C_GetSectionLengthBasedOnMesh_Params
{
	class UStaticMesh*                                 InMesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetReversedOffsetAmount
struct ABP_Sidewalk_Spline_01_C_GetReversedOffsetAmount_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.AddSplineMeshes
struct ABP_Sidewalk_Spline_01_C_AddSplineMeshes_Params
{
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshesFromDistance
struct ABP_Sidewalk_Spline_01_C_GetBestMeshesFromDistance_Params
{
	float                                              InDistance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDA_SidewalkMeshPreset_C*                    InPreset;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         OutMeshes;                                                 // 0x0010(0x0010)  (Parm, OutParm)
	float                                              OutCombinedLength;                                         // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.LoadPreset
struct ABP_Sidewalk_Spline_01_C_LoadPreset_Params
{
	class UDA_SidewalkMeshPreset_C*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetMeshLength
struct ABP_Sidewalk_Spline_01_C_GetMeshLength_Params
{
	class UStaticMesh*                                 InMesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterialOnAllComponents
struct ABP_Sidewalk_Spline_01_C_SetOverrideMaterialOnAllComponents_Params
{
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshFromDistance
struct ABP_Sidewalk_Spline_01_C_GetBestMeshFromDistance_Params
{
	float                                              InDistance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDA_SidewalkMeshPreset_C*                    InPreset;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 OutMesh;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.HandleCollisionResponse
struct ABP_Sidewalk_Spline_01_C_HandleCollisionResponse_Params
{
	class UPrimitiveComponent*                         Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterial
struct ABP_Sidewalk_Spline_01_C_SetOverrideMaterial_Params
{
	class UPrimitiveComponent*                         Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.OnRebuild
struct ABP_Sidewalk_Spline_01_C_OnRebuild_Params
{
};

// Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.ExecuteUbergraph_BP_Sidewalk_Spline_01
struct ABP_Sidewalk_Spline_01_C_ExecuteUbergraph_BP_Sidewalk_Spline_01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
