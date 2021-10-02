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
//		Name   -> Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_HostMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.Construct");

	UTBP_UI_HostMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_HostMenu_C::BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UTBP_UI_HostMenu_C_BndEvt__UserServerName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_HostMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_HostMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_HostMenu_C::BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_HostMenu_C_BndEvt__LaunchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.ExecuteUbergraph_TBP_UI_HostMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HostMenu_C::ExecuteUbergraph_TBP_UI_HostMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HostMenu.TBP_UI_HostMenu_C.ExecuteUbergraph_TBP_UI_HostMenu");

	UTBP_UI_HostMenu_C_ExecuteUbergraph_TBP_UI_HostMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
