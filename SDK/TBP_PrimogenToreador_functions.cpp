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
//		Name   -> Function TBP_PrimogenToreador.TBP_PrimogenToreador_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_PrimogenToreador_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PrimogenToreador.TBP_PrimogenToreador_C.ReceiveBeginPlay");

	UTBP_PrimogenToreador_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PrimogenToreador.TBP_PrimogenToreador_C.ExecuteUbergraph_TBP_PrimogenToreador
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PrimogenToreador_C::ExecuteUbergraph_TBP_PrimogenToreador(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PrimogenToreador.TBP_PrimogenToreador_C.ExecuteUbergraph_TBP_PrimogenToreador");

	UTBP_PrimogenToreador_C_ExecuteUbergraph_TBP_PrimogenToreador_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
