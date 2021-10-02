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

// Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalBottom
struct UBP_LightningRod_01DataInterface_C_GetMetalBottom_Params
{
	class UStaticMesh*                                 OutMesh;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalTop
struct UBP_LightningRod_01DataInterface_C_GetMetalTop_Params
{
	class UStaticMesh*                                 OutMesh;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C.GetMetalMiddle
struct UBP_LightningRod_01DataInterface_C_GetMetalMiddle_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 OutMesh;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
