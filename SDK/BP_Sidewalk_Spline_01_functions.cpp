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
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetSectionLengthBasedOnMesh
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UStaticMesh*                                 InMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_Sidewalk_Spline_01_C::GetSectionLengthBasedOnMesh(class UStaticMesh* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetSectionLengthBasedOnMesh");

	ABP_Sidewalk_Spline_01_C_GetSectionLengthBasedOnMesh_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetReversedOffsetAmount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_Sidewalk_Spline_01_C::GetReversedOffsetAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetReversedOffsetAmount");

	ABP_Sidewalk_Spline_01_C_GetReversedOffsetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.AddSplineMeshes
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Sidewalk_Spline_01_C::AddSplineMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.AddSplineMeshes");

	ABP_Sidewalk_Spline_01_C_AddSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshesFromDistance
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDA_SidewalkMeshPreset_C*                    InPreset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UStaticMesh*>                         OutMeshes                                                  (Parm, OutParm)
//		float                                              OutCombinedLength                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sidewalk_Spline_01_C::GetBestMeshesFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, TArray<class UStaticMesh*>* OutMeshes, float* OutCombinedLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshesFromDistance");

	ABP_Sidewalk_Spline_01_C_GetBestMeshesFromDistance_Params params;
	params.InDistance = InDistance;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMeshes != nullptr)
		*OutMeshes = params.OutMeshes;
	if (OutCombinedLength != nullptr)
		*OutCombinedLength = params.OutCombinedLength;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.LoadPreset
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDA_SidewalkMeshPreset_C*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UDA_SidewalkMeshPreset_C* ABP_Sidewalk_Spline_01_C::LoadPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.LoadPreset");

	ABP_Sidewalk_Spline_01_C_LoadPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetMeshLength
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UStaticMesh*                                 InMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_Sidewalk_Spline_01_C::GetMeshLength(class UStaticMesh* InMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetMeshLength");

	ABP_Sidewalk_Spline_01_C_GetMeshLength_Params params;
	params.InMesh = InMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterialOnAllComponents
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Sidewalk_Spline_01_C::SetOverrideMaterialOnAllComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterialOnAllComponents");

	ABP_Sidewalk_Spline_01_C_SetOverrideMaterialOnAllComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshFromDistance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDA_SidewalkMeshPreset_C*                    InPreset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMesh*                                 OutMesh                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sidewalk_Spline_01_C::GetBestMeshFromDistance(float InDistance, class UDA_SidewalkMeshPreset_C* InPreset, class UStaticMesh** OutMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.GetBestMeshFromDistance");

	ABP_Sidewalk_Spline_01_C_GetBestMeshFromDistance_Params params;
	params.InDistance = InDistance;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMesh != nullptr)
		*OutMesh = params.OutMesh;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.HandleCollisionResponse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sidewalk_Spline_01_C::HandleCollisionResponse(class UPrimitiveComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.HandleCollisionResponse");

	ABP_Sidewalk_Spline_01_C_HandleCollisionResponse_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sidewalk_Spline_01_C::SetOverrideMaterial(class UPrimitiveComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.SetOverrideMaterial");

	ABP_Sidewalk_Spline_01_C_SetOverrideMaterial_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.OnRebuild
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Sidewalk_Spline_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.OnRebuild");

	ABP_Sidewalk_Spline_01_C_OnRebuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.ExecuteUbergraph_BP_Sidewalk_Spline_01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Sidewalk_Spline_01_C::ExecuteUbergraph_BP_Sidewalk_Spline_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sidewalk_Spline_01.BP_Sidewalk_Spline_01_C.ExecuteUbergraph_BP_Sidewalk_Spline_01");

	ABP_Sidewalk_Spline_01_C_ExecuteUbergraph_BP_Sidewalk_Spline_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
