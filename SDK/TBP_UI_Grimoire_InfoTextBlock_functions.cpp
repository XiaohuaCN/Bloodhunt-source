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
//		Name   -> Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ShowHighlight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_InfoTextBlock_C::ShowHighlight(bool Highlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ShowHighlight");

	UTBP_UI_Grimoire_InfoTextBlock_C_ShowHighlight_Params params;
	params.Highlight = Highlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_InfoTextBlock_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.Construct");

	UTBP_UI_Grimoire_InfoTextBlock_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoTextBlock_C::ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoTextBlock.TBP_UI_Grimoire_InfoTextBlock_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock");

	UTBP_UI_Grimoire_InfoTextBlock_C_ExecuteUbergraph_TBP_UI_Grimoire_InfoTextBlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
