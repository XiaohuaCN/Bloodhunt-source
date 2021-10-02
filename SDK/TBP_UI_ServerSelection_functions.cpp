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
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnMatchServerList
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionResultList               SessionAlternatives                                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ServerSelection_C::OnMatchServerList(const struct FTigerBpFindSessionResultList& SessionAlternatives)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnMatchServerList");

	UTBP_UI_ServerSelection_C_OnMatchServerList_Params params;
	params.SessionAlternatives = SessionAlternatives;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ServerSelection_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_ServerSelection_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ServerSelection_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_ServerSelection_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.JointSelectedServer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ServerSelection_C::JointSelectedServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.JointSelectedServer");

	UTBP_UI_ServerSelection_C_JointSelectedServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.ExecuteUbergraph_TBP_UI_ServerSelection
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ServerSelection_C::ExecuteUbergraph_TBP_UI_ServerSelection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.ExecuteUbergraph_TBP_UI_ServerSelection");

	UTBP_UI_ServerSelection_C_ExecuteUbergraph_TBP_UI_ServerSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnCancel__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ServerSelection_C::OnCancel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnCancel__DelegateSignature");

	UTBP_UI_ServerSelection_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnServerSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionSelectedSession          Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ServerSelection_C::OnServerSelected__DelegateSignature(const struct FTigerBpFindSessionSelectedSession& Session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnServerSelected__DelegateSignature");

	UTBP_UI_ServerSelection_C_OnServerSelected__DelegateSignature_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
