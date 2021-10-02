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
//		Name   -> Function TBP_UI_ElysiumNewsMenu.TBP_UI_ElysiumNewsMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumNewsMenu_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNewsMenu.TBP_UI_ElysiumNewsMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_ElysiumNewsMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNewsMenu.TBP_UI_ElysiumNewsMenu_C.ExecuteUbergraph_TBP_UI_ElysiumNewsMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNewsMenu_C::ExecuteUbergraph_TBP_UI_ElysiumNewsMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNewsMenu.TBP_UI_ElysiumNewsMenu_C.ExecuteUbergraph_TBP_UI_ElysiumNewsMenu");

	UTBP_UI_ElysiumNewsMenu_C_ExecuteUbergraph_TBP_UI_ElysiumNewsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
