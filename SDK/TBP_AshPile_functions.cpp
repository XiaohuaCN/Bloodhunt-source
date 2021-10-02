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
//		Name   -> Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_AshPile_C::Timeline_AshPileScaleIn__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__FinishedFunc");

	ATBP_AshPile_C_Timeline_AshPileScaleIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_AshPile_C::Timeline_AshPileScaleIn__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__UpdateFunc");

	ATBP_AshPile_C_Timeline_AshPileScaleIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AshPile.TBP_AshPile_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_AshPile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AshPile.TBP_AshPile_C.ReceiveBeginPlay");

	ATBP_AshPile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AshPile.TBP_AshPile_C.ExecuteUbergraph_TBP_AshPile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_AshPile_C::ExecuteUbergraph_TBP_AshPile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AshPile.TBP_AshPile_C.ExecuteUbergraph_TBP_AshPile");

	ATBP_AshPile_C_ExecuteUbergraph_TBP_AshPile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
