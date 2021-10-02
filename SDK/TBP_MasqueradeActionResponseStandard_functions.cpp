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
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.KilledNonCivilian
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerAIPlayerAction                         PlayerAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerBaseNPC*                               NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_MasqueradeActionResponseStandard_C::KilledNonCivilian(Tiger_ETigerAIPlayerAction PlayerAction, class ATigerBaseNPC* NPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.KilledNonCivilian");

	UTBP_MasqueradeActionResponseStandard_C_KilledNonCivilian_Params params;
	params.PlayerAction = PlayerAction;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetPlayerMasqueradePointsForAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerNPC*                                   InNpc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerAIPlayerAction                        InPlayerAction                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTBP_MasqueradeActionResponseStandard_C::GetPlayerMasqueradePointsForAction(class ATigerNPC* InNpc, class ATigerPlayer* InTigerPlayer, const struct FTigerAIPlayerAction& InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetPlayerMasqueradePointsForAction");

	UTBP_MasqueradeActionResponseStandard_C_GetPlayerMasqueradePointsForAction_Params params;
	params.InNpc = InNpc;
	params.InTigerPlayer = InTigerPlayer;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.IsActionVampiricMobility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerAIPlayerAction                         Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsMobility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_MasqueradeActionResponseStandard_C::IsActionVampiricMobility(Tiger_ETigerAIPlayerAction Action, bool* IsMobility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.IsActionVampiricMobility");

	UTBP_MasqueradeActionResponseStandard_C_IsActionVampiricMobility_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsMobility != nullptr)
		*IsMobility = params.IsMobility;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValueFromJudge
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerAIPlayerAction                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class ATigerJudge*                                 Judge                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               FoundValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_MasqueradeActionResponseStandard_C::GetMasqueradeValueFromJudge(struct FTigerAIPlayerAction* Action, class ATigerJudge* Judge, class ATigerPlayer* Player, float* Value, bool* FoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValueFromJudge");

	UTBP_MasqueradeActionResponseStandard_C_GetMasqueradeValueFromJudge_Params params;
	params.Judge = Judge;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
	if (Value != nullptr)
		*Value = params.Value;
	if (FoundValue != nullptr)
		*FoundValue = params.FoundValue;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.CheckFearLimitsFunction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentFearValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerAIController*                          AI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerAIMasqueradeState                      NewMasqueradeState                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MasqueradeActionResponseStandard_C::CheckFearLimitsFunction(float CurrentFearValue, class ATigerAIController* AI, Tiger_ETigerAIMasqueradeState* NewMasqueradeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.CheckFearLimitsFunction");

	UTBP_MasqueradeActionResponseStandard_C_CheckFearLimitsFunction_Params params;
	params.CurrentFearValue = CurrentFearValue;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewMasqueradeState != nullptr)
		*NewMasqueradeState = params.NewMasqueradeState;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.ScaleValueByDistance
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Unscaled_Value                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerBaseNPC*                               NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UseMasqueradeScaling                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ShouldScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ActionLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaledValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MasqueradeActionResponseStandard_C::ScaleValueByDistance(float Unscaled_Value, class ATigerPlayer* Player, class ATigerBaseNPC* NPC, bool UseMasqueradeScaling, bool ShouldScale, const struct FVector& ActionLocation, float* ScaledValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.ScaleValueByDistance");

	UTBP_MasqueradeActionResponseStandard_C_ScaleValueByDistance_Params params;
	params.Unscaled_Value = Unscaled_Value;
	params.Player = Player;
	params.NPC = NPC;
	params.UseMasqueradeScaling = UseMasqueradeScaling;
	params.ShouldScale = ShouldScale;
	params.ActionLocation = ActionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScaledValue != nullptr)
		*ScaledValue = params.ScaledValue;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValue
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerAIPlayerAction                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class ATigerBaseNPC*                               NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               FoundValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_MasqueradeActionResponseStandard_C::GetMasqueradeValue(struct FTigerAIPlayerAction* Action, class ATigerBaseNPC* NPC, class ATigerPlayer* Player, float* Value, bool* FoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradeValue");

	UTBP_MasqueradeActionResponseStandard_C_GetMasqueradeValue_Params params;
	params.NPC = NPC;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
	if (Value != nullptr)
		*Value = params.Value;
	if (FoundValue != nullptr)
		*FoundValue = params.FoundValue;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValues
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerAIPlayerAction                         Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerAIController*                          AI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TMap<Tiger_ETigerAIPlayerAction, float>            ReturnValue                                                (Parm, OutParm, ReturnParm)
TMap<Tiger_ETigerAIPlayerAction, float> UTBP_MasqueradeActionResponseStandard_C::GetFearValues(Tiger_ETigerAIPlayerAction Action, class ATigerAIController** AI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValues");

	UTBP_MasqueradeActionResponseStandard_C_GetFearValues_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AI != nullptr)
		*AI = params.AI;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradePointsForFeedingAction
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerAIPlayerAction                         Player_Action                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MasqueradePoints                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MasqueradeActionResponseStandard_C::GetMasqueradePointsForFeedingAction(Tiger_ETigerAIPlayerAction Player_Action, float* MasqueradePoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetMasqueradePointsForFeedingAction");

	UTBP_MasqueradeActionResponseStandard_C_GetMasqueradePointsForFeedingAction_Params params;
	params.Player_Action = Player_Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasqueradePoints != nullptr)
		*MasqueradePoints = params.MasqueradePoints;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.AddFearPoints
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerAIController*                          AI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerAIPlayerAction                        PlayerAction                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              FearValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Added_Fear_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MasqueradeActionResponseStandard_C::AddFearPoints(class ATigerAIController** AI, struct FTigerAIPlayerAction* PlayerAction, float* FearValue, class ATigerPlayer* Player, float* Added_Fear_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.AddFearPoints");

	UTBP_MasqueradeActionResponseStandard_C_AddFearPoints_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AI != nullptr)
		*AI = params.AI;
	if (PlayerAction != nullptr)
		*PlayerAction = params.PlayerAction;
	if (FearValue != nullptr)
		*FearValue = params.FearValue;
	if (Added_Fear_Value != nullptr)
		*Added_Fear_Value = params.Added_Fear_Value;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.OnReactToPlayerAction
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerAIController*                          TigerAIController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                TigerPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerAIPlayerAction                        PlayerAction                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		Tiger_ETigerAIMasqueradeState                      CurrentState                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FearValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerAIMasqueradeState                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Tiger_ETigerAIMasqueradeState UTBP_MasqueradeActionResponseStandard_C::OnReactToPlayerAction(class ATigerAIController* TigerAIController, class ATigerPlayer* TigerPlayer, const struct FTigerAIPlayerAction& PlayerAction, Tiger_ETigerAIMasqueradeState CurrentState, float* FearValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.OnReactToPlayerAction");

	UTBP_MasqueradeActionResponseStandard_C_OnReactToPlayerAction_Params params;
	params.TigerAIController = TigerAIController;
	params.TigerPlayer = TigerPlayer;
	params.PlayerAction = PlayerAction;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FearValue != nullptr)
		*FearValue = params.FearValue;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValueThresholds
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATigerAIController*                          AI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Threatened                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Suspicious                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MasqueradeActionResponseStandard_C::GetFearValueThresholds(class ATigerAIController* AI, float* Threatened, float* Suspicious)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseStandard.TBP_MasqueradeActionResponseStandard_C.GetFearValueThresholds");

	UTBP_MasqueradeActionResponseStandard_C_GetFearValueThresholds_Params params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Threatened != nullptr)
		*Threatened = params.Threatened;
	if (Suspicious != nullptr)
		*Suspicious = params.Suspicious;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
