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
//		Name   -> Function BP_LightMasterData.BP_LightMasterData_C.GetIESProfile
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextureLightProfile*                        OutIESProfile                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterData_C::GetIESProfile(int InIndex, class UTextureLightProfile** OutIESProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterData.BP_LightMasterData_C.GetIESProfile");

	UBP_LightMasterData_C_GetIESProfile_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIESProfile != nullptr)
		*OutIESProfile = params.OutIESProfile;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterData.BP_LightMasterData_C.GetLightMateriales
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterData_C::GetLightMateriales(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterData.BP_LightMasterData_C.GetLightMateriales");

	UBP_LightMasterData_C_GetLightMateriales_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterData.BP_LightMasterData_C.GetLightMeshes
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterData_C::GetLightMeshes(int InIndex, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterData.BP_LightMasterData_C.GetLightMeshes");

	UBP_LightMasterData_C_GetLightMeshes_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterData.BP_LightMasterData_C.GetLightFlickerMaterial
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterData_C::GetLightFlickerMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterData.BP_LightMasterData_C.GetLightFlickerMaterial");

	UBP_LightMasterData_C_GetLightFlickerMaterial_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMaterial != nullptr)
		*OutMaterial = params.OutMaterial;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMasterData.BP_LightMasterData_C.GetLightOffMaterial
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstance*                           OutMaterial                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LightMasterData_C::GetLightOffMaterial(int InIndex, class UMaterialInstance** OutMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMasterData.BP_LightMasterData_C.GetLightOffMaterial");

	UBP_LightMasterData_C_GetLightOffMaterial_Params params;
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
