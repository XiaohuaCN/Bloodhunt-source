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
//		Name   -> Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.OpenPopup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Popup_Base_C::OpenPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.OpenPopup");

	UTBP_UI_Popup_Base_C_OpenPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.ClosePopup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Popup_Base_C::ClosePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.ClosePopup");

	UTBP_UI_Popup_Base_C_ClosePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
