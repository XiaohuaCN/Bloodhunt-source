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
//		Name   -> Function TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C.CanGoToPrague
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_MatchMaker_MatchmakingMenu_C::CanGoToPrague()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C.CanGoToPrague");

	UTBP_UI_MatchMaker_MatchmakingMenu_C_CanGoToPrague_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMaker_MatchmakingMenu_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");

	UTBP_UI_MatchMaker_MatchmakingMenu_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C.ExecuteUbergraph_TBP_UI_MatchMaker_MatchmakingMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MatchMaker_MatchmakingMenu_C::ExecuteUbergraph_TBP_UI_MatchMaker_MatchmakingMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C.ExecuteUbergraph_TBP_UI_MatchMaker_MatchmakingMenu");

	UTBP_UI_MatchMaker_MatchmakingMenu_C_ExecuteUbergraph_TBP_UI_MatchMaker_MatchmakingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
