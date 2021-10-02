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
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ShowSubscreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerSocialSubscreenUI*                     InSubscreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SocialMenu_C::ShowSubscreen(class UTigerSocialSubscreenUI* InSubscreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ShowSubscreen");

	UTBP_UI_SocialMenu_C_ShowSubscreen_Params params;
	params.InSubscreen = InSubscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SocialMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnOpen");

	UTBP_UI_SocialMenu_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SocialMenu_C::BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature");

	UTBP_UI_SocialMenu_C_BndEvt__Exit_K2Node_ComponentBoundEvent_4_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnSubscreenOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerSocialSubscreenUI*                     InSubscreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SocialMenu_C::OnSubscreenOpen(class UTigerSocialSubscreenUI* InSubscreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnSubscreenOpen");

	UTBP_UI_SocialMenu_C_OnSubscreenOpen_Params params;
	params.InSubscreen = InSubscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SocialMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.OnClose");

	UTBP_UI_SocialMenu_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SocialMenu_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature");

	UTBP_UI_SocialMenu_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SocialMenu_C::BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature");

	UTBP_UI_SocialMenu_C_BndEvt__InboxButton_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SocialMenu_C::BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature");

	UTBP_UI_SocialMenu_C_BndEvt__ElysiumButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ExecuteUbergraph_TBP_UI_SocialMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SocialMenu_C::ExecuteUbergraph_TBP_UI_SocialMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialMenu.TBP_UI_SocialMenu_C.ExecuteUbergraph_TBP_UI_SocialMenu");

	UTBP_UI_SocialMenu_C_ExecuteUbergraph_TBP_UI_SocialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
