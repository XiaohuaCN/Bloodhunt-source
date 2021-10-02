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
//		Name   -> Function TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C.PrepareAssets
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSoftObjectPath>                     OutAssetsToLoad                                            (Parm, OutParm)
void UTBP_LoadingScreen_Simple_C::PrepareAssets(TArray<struct FSoftObjectPath>* OutAssetsToLoad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C.PrepareAssets");

	UTBP_LoadingScreen_Simple_C_PrepareAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAssetsToLoad != nullptr)
		*OutAssetsToLoad = params.OutAssetsToLoad;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
