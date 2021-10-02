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
//		Name   -> Function TBP_SprintConfig.TBP_SprintConfig_C.OnSprintDelayCompleted
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_SprintConfig_C::OnSprintDelayCompleted(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_SprintConfig.TBP_SprintConfig_C.OnSprintDelayCompleted");

	UTBP_SprintConfig_C_OnSprintDelayCompleted_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_SprintConfig.TBP_SprintConfig_C.ExecuteUbergraph_TBP_SprintConfig
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_SprintConfig_C::ExecuteUbergraph_TBP_SprintConfig(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_SprintConfig.TBP_SprintConfig_C.ExecuteUbergraph_TBP_SprintConfig");

	UTBP_SprintConfig_C_ExecuteUbergraph_TBP_SprintConfig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
