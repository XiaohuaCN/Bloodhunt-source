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

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GetPiercingSlots
struct UTBP_HeadConfiguration_Master_C_GetPiercingSlots_Params
{
	class UTigerCharacterMeshManager*                  InMeshManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FName, struct FTigerCharacterHeadPiercingSocket> OutSlots;                                                  // 0x0058(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.GatherPoseableMeshSetupData
struct UTBP_HeadConfiguration_Master_C_GatherPoseableMeshSetupData_Params
{
	class UClass*                                      Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerCharacterPoseableMeshBoneSetupData> Data;                                                      // 0x0058(0x0010)  (Parm, OutParm)
};

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPoseableBeard
struct UTBP_HeadConfiguration_Master_C_SetPoseableBeard_Params
{
	class UTigerCharacterBeardCustomization*           InBeard;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerCharacterMeshManager*                  InMeshManager;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetEyewearOffset
struct UTBP_HeadConfiguration_Master_C_SetEyewearOffset_Params
{
	class UTigerCharacterMeshManager*                  MeshManager;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercings
struct UTBP_HeadConfiguration_Master_C_SetPiercings_Params
{
	class UTigerCharacterPiercingSetCustomization*     InPiercingSet;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerCharacterMeshManager*                  InMeshManager;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.SetPiercingSlotLocationAndRotation
struct UTBP_HeadConfiguration_Master_C_SetPiercingSlotLocationAndRotation_Params
{
	class UTigerCharacterMeshManager*                  InMeshManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InName;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InLocation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    InRotation;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C.ExecuteUbergraph_TBP_HeadConfiguration_Master
struct UTBP_HeadConfiguration_Master_C_ExecuteUbergraph_TBP_HeadConfiguration_Master_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
