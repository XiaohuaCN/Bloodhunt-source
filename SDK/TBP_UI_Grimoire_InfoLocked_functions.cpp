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
//		Name   -> Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.SetUnlockInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       UnlockInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Grimoire_InfoLocked_C::SetUnlockInfo(const struct FText& UnlockInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.SetUnlockInfo");

	UTBP_UI_Grimoire_InfoLocked_C_SetUnlockInfo_Params params;
	params.UnlockInfo = UnlockInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_InfoLocked_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.PreConstruct");

	UTBP_UI_Grimoire_InfoLocked_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_InfoLocked_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.Construct");

	UTBP_UI_Grimoire_InfoLocked_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoLocked_C::ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked");

	UTBP_UI_Grimoire_InfoLocked_C_ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
