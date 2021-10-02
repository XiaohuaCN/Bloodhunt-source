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
//		Name   -> Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.CalculateMargin
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_VerticalLine_C::CalculateMargin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.CalculateMargin");

	UTBP_UI_VerticalLine_C_CalculateMargin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.SetupLine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_VerticalLine_C::SetupLine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.SetupLine");

	UTBP_UI_VerticalLine_C_SetupLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_VerticalLine_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.PreConstruct");

	UTBP_UI_VerticalLine_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_VerticalLine_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.Construct");

	UTBP_UI_VerticalLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.ExecuteUbergraph_TBP_UI_VerticalLine
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_VerticalLine_C::ExecuteUbergraph_TBP_UI_VerticalLine(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.ExecuteUbergraph_TBP_UI_VerticalLine");

	UTBP_UI_VerticalLine_C_ExecuteUbergraph_TBP_UI_VerticalLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
