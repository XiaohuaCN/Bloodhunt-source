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
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetShieldVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::SetShieldVisibility(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetShieldVisibility");

	UTBP_UI_SharedPlayerStatus_C_SetShieldVisibility_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ShowSpeakIconIfSpeaking
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SharedPlayerStatus_C::ShowSpeakIconIfSpeaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ShowSpeakIconIfSpeaking");

	UTBP_UI_SharedPlayerStatus_C_ShowSpeakIconIfSpeaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLevelChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOldLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnLevelChanged(int InLevel, int InOldLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLevelChanged");

	UTBP_UI_SharedPlayerStatus_C_OnLevelChanged_Params params;
	params.InLevel = InLevel;
	params.InOldLevel = InOldLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPlayerNameChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SharedPlayerStatus_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPlayerNameChanged");

	UTBP_UI_SharedPlayerStatus_C_OnPlayerNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnArchetypeChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPlayerClanData*                        InClanData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnArchetypeChanged(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnArchetypeChanged");

	UTBP_UI_SharedPlayerStatus_C_OnArchetypeChanged_Params params;
	params.InClanData = InClanData;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerHealthNumber
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
//		struct FText                                       HealthCurrent                                              (Parm, OutParm)
//		struct FText                                       HealthMax                                                  (Parm, OutParm)
struct FText UTBP_UI_SharedPlayerStatus_C::GetPlayerHealthNumber(struct FText* HealthCurrent, struct FText* HealthMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerHealthNumber");

	UTBP_UI_SharedPlayerStatus_C_GetPlayerHealthNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HealthCurrent != nullptr)
		*HealthCurrent = params.HealthCurrent;
	if (HealthMax != nullptr)
		*HealthMax = params.HealthMax;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerEmblem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTBP_UI_SharedPlayerStatus_C::GetPlayerEmblem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerEmblem");

	UTBP_UI_SharedPlayerStatus_C_GetPlayerEmblem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDisconnectedStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SharedPlayerStatus_C::OnDisconnectedStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDisconnectedStateChanged");

	UTBP_UI_SharedPlayerStatus_C_OnDisconnectedStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDeathStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SharedPlayerStatus_C::OnDeathStatusChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDeathStatusChanged");

	UTBP_UI_SharedPlayerStatus_C_OnDeathStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLifeStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       InNewLifeStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnLifeStatusChanged(Tiger_ETigerPlayerLifeStatus InNewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLifeStatusChanged");

	UTBP_UI_SharedPlayerStatus_C_OnLifeStatusChanged_Params params;
	params.InNewLifeStatus = InNewLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnShieldChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InNewHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InNewHealthPercentage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnShieldChanged(float InNewHealth, float InNewHealthPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnShieldChanged");

	UTBP_UI_SharedPlayerStatus_C_OnShieldChanged_Params params;
	params.InNewHealth = InNewHealth;
	params.InNewHealthPercentage = InNewHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnHealthChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InNewHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InNewHealthPercentage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnHealthChanged(float InNewHealth, float InNewHealthPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnHealthChanged");

	UTBP_UI_SharedPlayerStatus_C_OnHealthChanged_Params params;
	params.InNewHealth = InNewHealth;
	params.InNewHealthPercentage = InNewHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetDesiredBackgroundColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_SharedPlayerStatus_C::SetDesiredBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetDesiredBackgroundColor");

	UTBP_UI_SharedPlayerStatus_C_SetDesiredBackgroundColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnStatusIconChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InStatusIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnStatusIconChanged(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InStatusIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnStatusIconChanged");

	UTBP_UI_SharedPlayerStatus_C_OnStatusIconChanged_Params params;
	params.InStatusIcon = InStatusIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetPlayerColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::SetPlayerColor(unsigned char PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetPlayerColor");

	UTBP_UI_SharedPlayerStatus_C_SetPlayerColor_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.IsDowned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Is_Downed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SharedPlayerStatus_C::IsDowned(bool* Is_Downed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.IsDowned");

	UTBP_UI_SharedPlayerStatus_C_IsDowned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Downed != nullptr)
		*Is_Downed = params.Is_Downed;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPawnChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::OnPawnChanged(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPawnChanged");

	UTBP_UI_SharedPlayerStatus_C_OnPawnChanged_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateElysiumVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SharedPlayerStatus_C::UpdateElysiumVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateElysiumVisibility");

	UTBP_UI_SharedPlayerStatus_C_UpdateElysiumVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Set Member
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InGroupMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::Set_Member(class ATigerPlayerState* InGroupMemberState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Set Member");

	UTBP_UI_SharedPlayerStatus_C_Set_Member_Params params;
	params.InGroupMemberState = InGroupMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_SharedPlayerStatus_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Construct");

	UTBP_UI_SharedPlayerStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateMatchmakingReadyStatus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsReadyForMatchmaking                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SharedPlayerStatus_C::UpdateMatchmakingReadyStatus(bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateMatchmakingReadyStatus");

	UTBP_UI_SharedPlayerStatus_C_UpdateMatchmakingReadyStatus_Params params;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Tick");

	UTBP_UI_SharedPlayerStatus_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SharedPlayerStatus_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.PreConstruct");

	UTBP_UI_SharedPlayerStatus_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ExecuteUbergraph_TBP_UI_SharedPlayerStatus
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SharedPlayerStatus_C::ExecuteUbergraph_TBP_UI_SharedPlayerStatus(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ExecuteUbergraph_TBP_UI_SharedPlayerStatus");

	UTBP_UI_SharedPlayerStatus_C_ExecuteUbergraph_TBP_UI_SharedPlayerStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
