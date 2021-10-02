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
//		Name   -> Function BP_Brujah_Lantern_01.BP_Brujah_Lantern_01_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Brujah_Lantern_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Brujah_Lantern_01.BP_Brujah_Lantern_01_C.UserConstructionScript");

	ABP_Brujah_Lantern_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
