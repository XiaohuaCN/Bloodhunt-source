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
//		Name   -> Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumHUD_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.Construct");

	UTBP_UI_ElysiumHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.Toggle Visibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_C::Toggle_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.Toggle Visibility");

	UTBP_UI_ElysiumHUD_C_Toggle_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.ExecuteUbergraph_TBP_UI_ElysiumHUD
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_C::ExecuteUbergraph_TBP_UI_ElysiumHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.ExecuteUbergraph_TBP_UI_ElysiumHUD");

	UTBP_UI_ElysiumHUD_C_ExecuteUbergraph_TBP_UI_ElysiumHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
