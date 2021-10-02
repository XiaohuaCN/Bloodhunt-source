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
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.SetTigerCharacter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             TigerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::SetTigerCharacter(class ATigerCharacter* TigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.SetTigerCharacter");

	UTBP_UI_EnemyHealthBar_C_SetTigerCharacter_Params params;
	params.TigerCharacter = TigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateHealthBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentShield                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CurrentHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::UpdateHealthBar(float CurrentShield, float CurrentHealth, float MaxHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateHealthBar");

	UTBP_UI_EnemyHealthBar_C_UpdateHealthBar_Params params;
	params.CurrentShield = CurrentShield;
	params.CurrentHealth = CurrentHealth;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPowerKitChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_EnemyHealthBar_C::OnPowerKitChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPowerKitChanged");

	UTBP_UI_EnemyHealthBar_C_OnPowerKitChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.GetClanIcon
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTBP_UI_EnemyHealthBar_C::GetClanIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.GetClanIcon");

	UTBP_UI_EnemyHealthBar_C_GetClanIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InNewState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::OnPlayerStatusChanged(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerStatusChanged");

	UTBP_UI_EnemyHealthBar_C_OnPlayerStatusChanged_Params params;
	params.InNewState = InNewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateIsGroupMember
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_EnemyHealthBar_C::UpdateIsGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateIsGroupMember");

	UTBP_UI_EnemyHealthBar_C_UpdateIsGroupMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsAlliedWithLocalPlayer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATigerCharacter*                             TigerCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_EnemyHealthBar_C::IsAlliedWithLocalPlayer(class ATigerCharacter* TigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsAlliedWithLocalPlayer");

	UTBP_UI_EnemyHealthBar_C_IsAlliedWithLocalPlayer_Params params;
	params.TigerCharacter = TigerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShieldBreak
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_EnemyHealthBar_C::ShieldBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShieldBreak");

	UTBP_UI_EnemyHealthBar_C_ShieldBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExtraHealthBreak
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_EnemyHealthBar_C::ExtraHealthBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExtraHealthBreak");

	UTBP_UI_EnemyHealthBar_C_ExtraHealthBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OldShouldBeVisible
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bVisible                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsAlive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_EnemyHealthBar_C::OldShouldBeVisible(bool* bVisible, bool* bIsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OldShouldBeVisible");

	UTBP_UI_EnemyHealthBar_C_OldShouldBeVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bVisible != nullptr)
		*bVisible = params.bVisible;
	if (bIsAlive != nullptr)
		*bIsAlive = params.bIsAlive;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateDownedTimer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_EnemyHealthBar_C::UpdateDownedTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateDownedTimer");

	UTBP_UI_EnemyHealthBar_C_UpdateDownedTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnUpdatedPlayerState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::OnUpdatedPlayerState(class APlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnUpdatedPlayerState");

	UTBP_UI_EnemyHealthBar_C_OnUpdatedPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.RemoveMarkingAsGroupMember
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_EnemyHealthBar_C::RemoveMarkingAsGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.RemoveMarkingAsGroupMember");

	UTBP_UI_EnemyHealthBar_C_RemoveMarkingAsGroupMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.MarkAsGroupMember
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_EnemyHealthBar_C::MarkAsGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.MarkAsGroupMember");

	UTBP_UI_EnemyHealthBar_C_MarkAsGroupMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsPlayerInElysim
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsPlayerInElyusium                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_EnemyHealthBar_C::IsPlayerInElysim(bool* IsPlayerInElyusium)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsPlayerInElysim");

	UTBP_UI_EnemyHealthBar_C_IsPlayerInElysim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPlayerInElyusium != nullptr)
		*IsPlayerInElyusium = params.IsPlayerInElyusium;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsAlive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::UpdateVisibility(bool InIsVisible, bool bIsAlive, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateVisibility");

	UTBP_UI_EnemyHealthBar_C_UpdateVisibility_Params params;
	params.InIsVisible = InIsVisible;
	params.bIsAlive = bIsAlive;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShouldBeVisible
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bVisible                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsAlive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_EnemyHealthBar_C::ShouldBeVisible(bool* bVisible, bool* bIsAlive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShouldBeVisible");

	UTBP_UI_EnemyHealthBar_C_ShouldBeVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bVisible != nullptr)
		*bVisible = params.bVisible;
	if (bIsAlive != nullptr)
		*bIsAlive = params.bIsAlive;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_EnemyHealthBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Construct");

	UTBP_UI_EnemyHealthBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Tick");

	UTBP_UI_EnemyHealthBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerNameChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_EnemyHealthBar_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerNameChanged");

	UTBP_UI_EnemyHealthBar_C_OnPlayerNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.AddHealAmount
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                InHealAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::AddHealAmount(int InHealAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.AddHealAmount");

	UTBP_UI_EnemyHealthBar_C_AddHealAmount_Params params;
	params.InHealAmount = InHealAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExecuteUbergraph_TBP_UI_EnemyHealthBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_EnemyHealthBar_C::ExecuteUbergraph_TBP_UI_EnemyHealthBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExecuteUbergraph_TBP_UI_EnemyHealthBar");

	UTBP_UI_EnemyHealthBar_C_ExecuteUbergraph_TBP_UI_EnemyHealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
