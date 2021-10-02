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
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SwitchPersistentState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TBE_StatusBackground_ETBE_StatusBackground> InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::SwitchPersistentState(TEnumAsByte<TBE_StatusBackground_ETBE_StatusBackground> InState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SwitchPersistentState");

	UTBP_UI_PlayerActionIndicator_C_SwitchPersistentState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.TriggerOneShotState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::TriggerOneShotState(class UTexture2D* InTexture, class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.TriggerOneShotState");

	UTBP_UI_PlayerActionIndicator_C_TriggerOneShotState_Params params;
	params.InTexture = InTexture;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.UpdateActiveStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_PlayerActionIndicator_C::UpdateActiveStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.UpdateActiveStatus");

	UTBP_UI_PlayerActionIndicator_C_UpdateActiveStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnBuffChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBuff*                                  InBuff                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InDuration                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::OnBuffChanged(class UTigerBuff* InBuff, int InId, float InDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnBuffChanged");

	UTBP_UI_PlayerActionIndicator_C_OnBuffChanged_Params params;
	params.InBuff = InBuff;
	params.InId = InId;
	params.InDuration = InDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStoppedFeeding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InWasAttacked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ATigerCharacter*                             InNPCFedOn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::OnStoppedFeeding(bool InWasAttacked, class ATigerCharacter* InNPCFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStoppedFeeding");

	UTBP_UI_PlayerActionIndicator_C_OnStoppedFeeding_Params params;
	params.InWasAttacked = InWasAttacked;
	params.InNPCFedOn = InNPCFedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStartedFeeding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InTravelTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::OnStartedFeeding(float InTravelTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStartedFeeding");

	UTBP_UI_PlayerActionIndicator_C_OnStartedFeeding_Params params;
	params.InTravelTime = InTravelTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnPlayerAction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerCharacterAction                        InPlayerAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::OnPlayerAction(Tiger_ETigerCharacterAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnPlayerAction");

	UTBP_UI_PlayerActionIndicator_C_OnPlayerAction_Params params;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnHealthChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InOldHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InNewHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnHealthChanged");

	UTBP_UI_PlayerActionIndicator_C_OnHealthChanged_Params params;
	params.InPlayer = InPlayer;
	params.InOldHealth = InOldHealth;
	params.InNewHealth = InNewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SetPawn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       InPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::SetPawn(class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SetPawn");

	UTBP_UI_PlayerActionIndicator_C_SetPawn_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_PlayerActionIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.Construct");

	UTBP_UI_PlayerActionIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PlayerActionIndicator_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.PreConstruct");

	UTBP_UI_PlayerActionIndicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.ExecuteUbergraph_TBP_UI_PlayerActionIndicator
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerActionIndicator_C::ExecuteUbergraph_TBP_UI_PlayerActionIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.ExecuteUbergraph_TBP_UI_PlayerActionIndicator");

	UTBP_UI_PlayerActionIndicator_C_ExecuteUbergraph_TBP_UI_PlayerActionIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
