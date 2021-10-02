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
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Background_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.Show");

	UTBP_UI_Grimoire_Background_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Background_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.Hide");

	UTBP_UI_Grimoire_Background_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.PlayVignetteFadeInAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Background_C::PlayVignetteFadeInAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.PlayVignetteFadeInAnim");

	UTBP_UI_Grimoire_Background_C_PlayVignetteFadeInAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.PlayVignetteFadeOutAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Background_C::PlayVignetteFadeOutAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.PlayVignetteFadeOutAnim");

	UTBP_UI_Grimoire_Background_C_PlayVignetteFadeOutAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.On Media Loaded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_Background_C::On_Media_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.On Media Loaded");

	UTBP_UI_Grimoire_Background_C_On_Media_Loaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ShowEntryBackground
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         SelectedEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_Background_C::ShowEntryBackground(class UTigerGrimoireEntry* SelectedEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ShowEntryBackground");

	UTBP_UI_Grimoire_Background_C_ShowEntryBackground_Params params;
	params.SelectedEntry = SelectedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ShowDefaultBackground
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Background_C::ShowDefaultBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ShowDefaultBackground");

	UTBP_UI_Grimoire_Background_C_ShowDefaultBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ExecuteUbergraph_TBP_UI_Grimoire_Background
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_Background_C::ExecuteUbergraph_TBP_UI_Grimoire_Background(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Background.TBP_UI_Grimoire_Background_C.ExecuteUbergraph_TBP_UI_Grimoire_Background");

	UTBP_UI_Grimoire_Background_C_ExecuteUbergraph_TBP_UI_Grimoire_Background_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
