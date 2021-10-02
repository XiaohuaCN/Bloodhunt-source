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
//		Name   -> Function TBP_LevelComponent.TBP_LevelComponent_C.PlayLevelUpSound
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_LevelComponent_C::PlayLevelUpSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LevelComponent.TBP_LevelComponent_C.PlayLevelUpSound");

	UTBP_LevelComponent_C_PlayLevelUpSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LevelComponent.TBP_LevelComponent_C.ExecuteUbergraph_TBP_LevelComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_LevelComponent_C::ExecuteUbergraph_TBP_LevelComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LevelComponent.TBP_LevelComponent_C.ExecuteUbergraph_TBP_LevelComponent");

	UTBP_LevelComponent_C_ExecuteUbergraph_TBP_LevelComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
