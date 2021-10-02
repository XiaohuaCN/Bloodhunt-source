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
//		Name   -> Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.OnMediaLoaded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_ImageBox_C::OnMediaLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.OnMediaLoaded");

	UTBP_UI_Grimoire_ImageBox_C_OnMediaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.IsShown
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowStatus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_ImageBox_C::IsShown(bool* ShowStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.IsShown");

	UTBP_UI_Grimoire_ImageBox_C_IsShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_ImageBox_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Hide");

	UTBP_UI_Grimoire_ImageBox_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Show
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ImageBox_C::Show(class UTigerGrimoireEntry* SelectedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Show");

	UTBP_UI_Grimoire_ImageBox_C_Show_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_ImageBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.Construct");

	UTBP_UI_Grimoire_ImageBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ImageBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ImageBox_C::ExecuteUbergraph_TBP_UI_Grimoire_ImageBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ImageBox");

	UTBP_UI_Grimoire_ImageBox_C_ExecuteUbergraph_TBP_UI_Grimoire_ImageBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
