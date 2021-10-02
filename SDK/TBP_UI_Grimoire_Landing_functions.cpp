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
//		Name   -> Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Landing_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Hide");

	UTBP_UI_Grimoire_Landing_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Show
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_C*                          GrimoireUI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsShown                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_Landing_C::Show(class UTBP_UI_Grimoire_C* GrimoireUI, bool* IsShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Show");

	UTBP_UI_Grimoire_Landing_C_Show_Params params;
	params.GrimoireUI = GrimoireUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsShown != nullptr)
		*IsShown = params.IsShown;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.UpdateUnlockedStatus
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_Landing_C::UpdateUnlockedStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.UpdateUnlockedStatus");

	UTBP_UI_Grimoire_Landing_C_UpdateUnlockedStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_Landing_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.Construct");

	UTBP_UI_Grimoire_Landing_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.ExecuteUbergraph_TBP_UI_Grimoire_Landing
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_Landing_C::ExecuteUbergraph_TBP_UI_Grimoire_Landing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C.ExecuteUbergraph_TBP_UI_Grimoire_Landing");

	UTBP_UI_Grimoire_Landing_C_ExecuteUbergraph_TBP_UI_Grimoire_Landing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
