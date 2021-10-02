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
//		Name   -> Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetIESProfile
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextureLightProfile*                        OutIESProfile                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterDataInterface_C::GetIESProfile(int InIndex, class UTextureLightProfile** OutIESProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetIESProfile");

	UBP_LightMasterDataInterface_C_GetIESProfile_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIESProfile != nullptr)
		*OutIESProfile = params.OutIESProfile;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightMateriales
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterDataInterface_C::GetLightMateriales(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightMateriales");

	UBP_LightMasterDataInterface_C_GetLightMateriales_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightMeshes
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterDataInterface_C::GetLightMeshes(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightMeshes");

	UBP_LightMasterDataInterface_C_GetLightMeshes_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightFlickerMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterDataInterface_C::GetLightFlickerMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightFlickerMaterial");

	UBP_LightMasterDataInterface_C_GetLightFlickerMaterial_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightOffMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterDataInterface_C::GetLightOffMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterDataInterface.BP_LightMasterDataInterface_C.GetLightOffMaterial");

	UBP_LightMasterDataInterface_C_GetLightOffMaterial_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
