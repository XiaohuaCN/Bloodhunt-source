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
//		Name   -> Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.OnActivated
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             InBuffOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             InBuffCaster                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Buff_SpeedUp_C::OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.OnActivated");

	UTBP_Buff_SpeedUp_C_OnActivated_Params params;
	params.InBuffOwner = InBuffOwner;
	params.InBuffCaster = InBuffCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.OnDeactivated
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             InBuffOwner                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             InBuffCaster                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Buff_SpeedUp_C::OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.OnDeactivated");

	UTBP_Buff_SpeedUp_C_OnDeactivated_Params params;
	params.InBuffOwner = InBuffOwner;
	params.InBuffCaster = InBuffCaster;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.ExecuteUbergraph_TBP_Buff_SpeedUp
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Buff_SpeedUp_C::ExecuteUbergraph_TBP_Buff_SpeedUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Buff_SpeedUp.TBP_Buff_SpeedUp_C.ExecuteUbergraph_TBP_Buff_SpeedUp");

	UTBP_Buff_SpeedUp_C_ExecuteUbergraph_TBP_Buff_SpeedUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
