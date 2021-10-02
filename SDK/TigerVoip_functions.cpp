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
//		Offset -> 0x0346C010
//		Name   -> Function TigerVoip.TigerVoipTalkerState.IsPlayerTalking
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTigerPersistentPlayerID                    InPlayerId                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTigerVoipTalkerState::IsPlayerTalking(const struct FTigerPersistentPlayerID& InPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TigerVoip.TigerVoipTalkerState.IsPlayerTalking");

	UTigerVoipTalkerState_IsPlayerTalking_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
