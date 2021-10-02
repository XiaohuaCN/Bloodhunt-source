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
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.DecrementMenuIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_RootCategoryMenu_C::DecrementMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.DecrementMenuIndex");

	UTBP_UI_Grimoire_RootCategoryMenu_C_DecrementMenuIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.IncrementMenuIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_RootCategoryMenu_C::IncrementMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.IncrementMenuIndex");

	UTBP_UI_Grimoire_RootCategoryMenu_C_IncrementMenuIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SetupMenuButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_RootCategoryMenu_C::SetupMenuButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SetupMenuButtons");

	UTBP_UI_Grimoire_RootCategoryMenu_C_SetupMenuButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectMenuOnClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      SelectedCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_RootCategoryMenu_C::SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.SelectMenuOnClick");

	UTBP_UI_Grimoire_RootCategoryMenu_C_SelectMenuOnClick_Params params;
	params.SelectedCategory = SelectedCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnOpen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_C*                          GrimoireUI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_RootCategoryMenu_C::OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnOpen");

	UTBP_UI_Grimoire_RootCategoryMenu_C_OnOpen_Params params;
	params.GrimoireUI = GrimoireUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuLeftPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_RootCategoryMenu_C::MenuLeftPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuLeftPressed");

	UTBP_UI_Grimoire_RootCategoryMenu_C_MenuLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuRightPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_RootCategoryMenu_C::MenuRightPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.MenuRightPressed");

	UTBP_UI_Grimoire_RootCategoryMenu_C_MenuRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_RootCategoryMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.OnClose");

	UTBP_UI_Grimoire_RootCategoryMenu_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_RootCategoryMenu_C::ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C.ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu");

	UTBP_UI_Grimoire_RootCategoryMenu_C_ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
