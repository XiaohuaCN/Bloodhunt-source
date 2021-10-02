// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBrandingMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Vehicle_01_DataInterface_C::GetBrandingMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBrandingMaterial");

	UTBP_Vehicle_01_DataInterface_C_GetBrandingMaterial_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetLootableAsset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UClass*                                      OutAsset                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Vehicle_01_DataInterface_C::GetLootableAsset(class UClass** OutAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetLootableAsset");

	UTBP_Vehicle_01_DataInterface_C_GetLootableAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAsset != nullptr)
		*OutAsset = params.OutAsset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBodyMesh
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Vehicle_01_DataInterface_C::GetBodyMesh(class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01_DataInterface.TBP_Vehicle_01_DataInterface_C.GetBodyMesh");

	UTBP_Vehicle_01_DataInterface_C_GetBodyMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
