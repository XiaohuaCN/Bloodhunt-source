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
//		Name   -> Function ABP_VMP_NOS_F_HAIR_01_Skeleton.ABP_VMP_NOS_F_HAIR_01_Skeleton_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UABP_VMP_NOS_F_HAIR_01_Skeleton_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_VMP_NOS_F_HAIR_01_Skeleton.ABP_VMP_NOS_F_HAIR_01_Skeleton_C.AnimGraph");

	UABP_VMP_NOS_F_HAIR_01_Skeleton_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_VMP_NOS_F_HAIR_01_Skeleton.ABP_VMP_NOS_F_HAIR_01_Skeleton_C.ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_01_Skeleton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_VMP_NOS_F_HAIR_01_Skeleton_C::ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_01_Skeleton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_VMP_NOS_F_HAIR_01_Skeleton.ABP_VMP_NOS_F_HAIR_01_Skeleton_C.ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_01_Skeleton");

	UABP_VMP_NOS_F_HAIR_01_Skeleton_C_ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_01_Skeleton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
