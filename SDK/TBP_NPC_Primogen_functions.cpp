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
//		Name   -> Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.DisableScreenCullSize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_Primogen_C::DisableScreenCullSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.DisableScreenCullSize");

	ATBP_NPC_Primogen_C_DisableScreenCullSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_NPC_Primogen_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.UserConstructionScript");

	ATBP_NPC_Primogen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_NPC_Primogen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.ReceiveBeginPlay");

	ATBP_NPC_Primogen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.ExecuteUbergraph_TBP_NPC_Primogen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_NPC_Primogen_C::ExecuteUbergraph_TBP_NPC_Primogen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.ExecuteUbergraph_TBP_NPC_Primogen");

	ATBP_NPC_Primogen_C_ExecuteUbergraph_TBP_NPC_Primogen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
