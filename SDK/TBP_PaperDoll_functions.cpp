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
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.UpdateOutlines
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_PaperDoll_C::UpdateOutlines()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.UpdateOutlines");

	ATBP_PaperDoll_C_UpdateOutlines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_PaperDoll_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.UserConstructionScript");

	ATBP_PaperDoll_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.PostNewCharacterSelected
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_PaperDoll_C::PostNewCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.PostNewCharacterSelected");

	ATBP_PaperDoll_C_PostNewCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_PaperDoll_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveBeginPlay");

	ATBP_PaperDoll_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_PaperDoll_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveDestroyed");

	ATBP_PaperDoll_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.SetPlayerOutlineMemberId
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InPlayerMemberId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_PaperDoll_C::SetPlayerOutlineMemberId(unsigned char InPlayerMemberId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.SetPlayerOutlineMemberId");

	ATBP_PaperDoll_C_SetPlayerOutlineMemberId_Params params;
	params.InPlayerMemberId = InPlayerMemberId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.Particle Destroy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_PaperDoll_C::Particle_Destroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.Particle Destroy");

	ATBP_PaperDoll_C_Particle_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PaperDoll.TBP_PaperDoll_C.ExecuteUbergraph_TBP_PaperDoll
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_PaperDoll_C::ExecuteUbergraph_TBP_PaperDoll(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PaperDoll.TBP_PaperDoll_C.ExecuteUbergraph_TBP_PaperDoll");

	ATBP_PaperDoll_C_ExecuteUbergraph_TBP_PaperDoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
