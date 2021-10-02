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
//		Name   -> Function BPI_PingableActor.BPI_PingableActor_C.GetPingInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTS_PingableActorInfo                       OutInfo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PingableActor_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PingableActor.BPI_PingableActor_C.GetPingInfo");

	UBPI_PingableActor_C_GetPingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_PingableActor.BPI_PingableActor_C.GetPingCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       OutCategory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PingableActor_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PingableActor.BPI_PingableActor_C.GetPingCategory");

	UBPI_PingableActor_C_GetPingCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
