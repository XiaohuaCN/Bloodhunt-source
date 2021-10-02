#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.SetTigerCharacter
struct UTBP_UI_EnemyHealthBar_C_SetTigerCharacter_Params
{
	class ATigerCharacter*                             TigerCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateHealthBar
struct UTBP_UI_EnemyHealthBar_C_UpdateHealthBar_Params
{
	float                                              CurrentShield;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHealth;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHealth;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPowerKitChanged
struct UTBP_UI_EnemyHealthBar_C_OnPowerKitChanged_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.GetClanIcon
struct UTBP_UI_EnemyHealthBar_C_GetClanIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerStatusChanged
struct UTBP_UI_EnemyHealthBar_C_OnPlayerStatusChanged_Params
{
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InNewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateIsGroupMember
struct UTBP_UI_EnemyHealthBar_C_UpdateIsGroupMember_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsAlliedWithLocalPlayer
struct UTBP_UI_EnemyHealthBar_C_IsAlliedWithLocalPlayer_Params
{
	class ATigerCharacter*                             TigerCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShieldBreak
struct UTBP_UI_EnemyHealthBar_C_ShieldBreak_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExtraHealthBreak
struct UTBP_UI_EnemyHealthBar_C_ExtraHealthBreak_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OldShouldBeVisible
struct UTBP_UI_EnemyHealthBar_C_OldShouldBeVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsAlive;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateDownedTimer
struct UTBP_UI_EnemyHealthBar_C_UpdateDownedTimer_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnUpdatedPlayerState
struct UTBP_UI_EnemyHealthBar_C_OnUpdatedPlayerState_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.RemoveMarkingAsGroupMember
struct UTBP_UI_EnemyHealthBar_C_RemoveMarkingAsGroupMember_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.MarkAsGroupMember
struct UTBP_UI_EnemyHealthBar_C_MarkAsGroupMember_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.IsPlayerInElysim
struct UTBP_UI_EnemyHealthBar_C_IsPlayerInElysim_Params
{
	bool                                               IsPlayerInElyusium;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.UpdateVisibility
struct UTBP_UI_EnemyHealthBar_C_UpdateVisibility_Params
{
	bool                                               InIsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsAlive;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DeltaSeconds;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ShouldBeVisible
struct UTBP_UI_EnemyHealthBar_C_ShouldBeVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsAlive;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Construct
struct UTBP_UI_EnemyHealthBar_C_Construct_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.Tick
struct UTBP_UI_EnemyHealthBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.OnPlayerNameChanged
struct UTBP_UI_EnemyHealthBar_C_OnPlayerNameChanged_Params
{
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.AddHealAmount
struct UTBP_UI_EnemyHealthBar_C_AddHealAmount_Params
{
	int                                                InHealAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBar.TBP_UI_EnemyHealthBar_C.ExecuteUbergraph_TBP_UI_EnemyHealthBar
struct UTBP_UI_EnemyHealthBar_C_ExecuteUbergraph_TBP_UI_EnemyHealthBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
