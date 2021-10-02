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
//		Name   -> Function BPI_PlayerBuffs.BPI_PlayerBuffs_C.IncrementFeedingBloodIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PlayerBuffs_C::IncrementFeedingBloodIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerBuffs.BPI_PlayerBuffs_C.IncrementFeedingBloodIndex");

	UBPI_PlayerBuffs_C_IncrementFeedingBloodIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
