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
//		Name   -> Function TBP_BurstHeal.TBP_BurstHeal_C.OnCreated
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InHasAuthority                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_BurstHeal_C::OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BurstHeal.TBP_BurstHeal_C.OnCreated");

	UTBP_BurstHeal_C_OnCreated_Params params;
	params.InPlayer = InPlayer;
	params.InHasAuthority = InHasAuthority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BurstHeal.TBP_BurstHeal_C.Character Action
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerCharacterAction                        InCharacterAction                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BurstHeal_C::Character_Action(Tiger_ETigerCharacterAction InCharacterAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BurstHeal.TBP_BurstHeal_C.Character Action");

	UTBP_BurstHeal_C_Character_Action_Params params;
	params.InCharacterAction = InCharacterAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BurstHeal.TBP_BurstHeal_C.ExecuteUbergraph_TBP_BurstHeal
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BurstHeal_C::ExecuteUbergraph_TBP_BurstHeal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BurstHeal.TBP_BurstHeal_C.ExecuteUbergraph_TBP_BurstHeal");

	UTBP_BurstHeal_C_ExecuteUbergraph_TBP_BurstHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
