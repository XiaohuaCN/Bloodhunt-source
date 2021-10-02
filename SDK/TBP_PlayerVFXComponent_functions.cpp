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
//		Name   -> Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnCharacterCustomizationChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_PlayerVFXComponent_C::OnCharacterCustomizationChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnCharacterCustomizationChanged");

	UTBP_PlayerVFXComponent_C_OnCharacterCustomizationChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeEnd
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_PlayerVFXComponent_C::OnHeavyAttackChargeEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeEnd");

	UTBP_PlayerVFXComponent_C_OnHeavyAttackChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeBegin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_PlayerVFXComponent_C::OnHeavyAttackChargeBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeBegin");

	UTBP_PlayerVFXComponent_C_OnHeavyAttackChargeBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnAppearance Changed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerApperanceChangeReason            InReason                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerVFXComponent_C::OnAppearance_Changed(Tiger_ETigerPlayerApperanceChangeReason InReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnAppearance Changed");

	UTBP_PlayerVFXComponent_C_OnAppearance_Changed_Params params;
	params.InReason = InReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_PlayerVFXComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ReceiveBeginPlay");

	UTBP_PlayerVFXComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ExecuteUbergraph_TBP_PlayerVFXComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PlayerVFXComponent_C::ExecuteUbergraph_TBP_PlayerVFXComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ExecuteUbergraph_TBP_PlayerVFXComponent");

	UTBP_PlayerVFXComponent_C_ExecuteUbergraph_TBP_PlayerVFXComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
