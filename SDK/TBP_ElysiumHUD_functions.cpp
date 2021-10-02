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
//		Name   -> Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.HideOnScreenUI
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_ElysiumHUD_C::HideOnScreenUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.HideOnScreenUI");

	ATBP_ElysiumHUD_C_HideOnScreenUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.ShowOnScreenUI
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_ElysiumHUD_C::ShowOnScreenUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.ShowOnScreenUI");

	ATBP_ElysiumHUD_C_ShowOnScreenUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ElysiumHUD_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.ReceiveBeginPlay");

	ATBP_ElysiumHUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.ExecuteUbergraph_TBP_ElysiumHUD
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ElysiumHUD_C::ExecuteUbergraph_TBP_ElysiumHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumHUD.TBP_ElysiumHUD_C.ExecuteUbergraph_TBP_ElysiumHUD");

	ATBP_ElysiumHUD_C_ExecuteUbergraph_TBP_ElysiumHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
