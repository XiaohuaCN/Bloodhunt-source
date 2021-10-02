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
//		Name   -> Function TBP_Trap_Aim.TBP_Trap_Aim_C.IsCharacterFriendlyWithDisciplineCaster
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             OtherCharacter                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Is_Friendly                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Trap_Aim_C::IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* OtherCharacter, bool* Is_Friendly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap_Aim.TBP_Trap_Aim_C.IsCharacterFriendlyWithDisciplineCaster");

	ATBP_Trap_Aim_C_IsCharacterFriendlyWithDisciplineCaster_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Friendly != nullptr)
		*Is_Friendly = params.Is_Friendly;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap_Aim.TBP_Trap_Aim_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Trap_Aim_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap_Aim.TBP_Trap_Aim_C.ReceiveBeginPlay");

	ATBP_Trap_Aim_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap_Aim.TBP_Trap_Aim_C.ExecuteUbergraph_TBP_Trap_Aim
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Trap_Aim_C::ExecuteUbergraph_TBP_Trap_Aim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap_Aim.TBP_Trap_Aim_C.ExecuteUbergraph_TBP_Trap_Aim");

	ATBP_Trap_Aim_C_ExecuteUbergraph_TBP_Trap_Aim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
