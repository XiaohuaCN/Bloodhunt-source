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
//		Name   -> Function TBP_CullingPlane.TBP_CullingPlane_C.EnableCullingPlanes
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_CullingPlane_C::EnableCullingPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_CullingPlane.TBP_CullingPlane_C.EnableCullingPlanes");

	ATBP_CullingPlane_C_EnableCullingPlanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_CullingPlane.TBP_CullingPlane_C.DisableCullingPlanes
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_CullingPlane_C::DisableCullingPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_CullingPlane.TBP_CullingPlane_C.DisableCullingPlanes");

	ATBP_CullingPlane_C_DisableCullingPlanes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_CullingPlane.TBP_CullingPlane_C.ExecuteUbergraph_TBP_CullingPlane
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_CullingPlane_C::ExecuteUbergraph_TBP_CullingPlane(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_CullingPlane.TBP_CullingPlane_C.ExecuteUbergraph_TBP_CullingPlane");

	ATBP_CullingPlane_C_ExecuteUbergraph_TBP_CullingPlane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
