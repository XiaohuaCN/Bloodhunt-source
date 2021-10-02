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

// Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBrandingMaterial
struct UTBP_Vehicle_01_DataInterface_C_GetBrandingMaterial_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           OutMaterial;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetLootableAsset
struct UTBP_Vehicle_01_DataInterface_C_GetLootableAsset_Params
{
	class UClass*                                      OutAsset;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBodyMesh
struct UTBP_Vehicle_01_DataInterface_C_GetBodyMesh_Params
{
	class UStaticMesh*                                 OutMesh;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
