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
//		Name   -> Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnCreated
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InHasAuthority                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_AnAcquiredTaste_C::OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnCreated");

	UTBP_AnAcquiredTaste_C_OnCreated_Params params;
	params.InPlayer = InPlayer;
	params.InHasAuthority = InHasAuthority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnPlayerEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerEvent                            Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             EventTiedCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_AnAcquiredTaste_C::OnPlayerEvent(Tiger_ETigerPlayerEvent Event, class ATigerCharacter* EventTiedCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnPlayerEvent");

	UTBP_AnAcquiredTaste_C_OnPlayerEvent_Params params;
	params.Event = Event;
	params.EventTiedCharacter = EventTiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.ExecuteUbergraph_TBP_AnAcquiredTaste
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_AnAcquiredTaste_C::ExecuteUbergraph_TBP_AnAcquiredTaste(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.ExecuteUbergraph_TBP_AnAcquiredTaste");

	UTBP_AnAcquiredTaste_C_ExecuteUbergraph_TBP_AnAcquiredTaste_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
