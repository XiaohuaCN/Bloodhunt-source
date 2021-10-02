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

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetShieldVisibility
struct UTBP_UI_SharedPlayerStatus_C_SetShieldVisibility_Params
{
	int                                                Amount;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ShowSpeakIconIfSpeaking
struct UTBP_UI_SharedPlayerStatus_C_ShowSpeakIconIfSpeaking_Params
{
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLevelChanged
struct UTBP_UI_SharedPlayerStatus_C_OnLevelChanged_Params
{
	int                                                InLevel;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InOldLevel;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPlayerNameChanged
struct UTBP_UI_SharedPlayerStatus_C_OnPlayerNameChanged_Params
{
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnArchetypeChanged
struct UTBP_UI_SharedPlayerStatus_C_OnArchetypeChanged_Params
{
	class UTigerPlayerClanData*                        InClanData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerPowerKit*                              InArchetypeData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerHealthNumber
struct UTBP_UI_SharedPlayerStatus_C_GetPlayerHealthNumber_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	struct FText                                       HealthCurrent;                                             // 0x0018(0x0018)  (Parm, OutParm)
	struct FText                                       HealthMax;                                                 // 0x0030(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.GetPlayerEmblem
struct UTBP_UI_SharedPlayerStatus_C_GetPlayerEmblem_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDisconnectedStateChanged
struct UTBP_UI_SharedPlayerStatus_C_OnDisconnectedStateChanged_Params
{
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnDeathStatusChanged
struct UTBP_UI_SharedPlayerStatus_C_OnDeathStatusChanged_Params
{
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnLifeStatusChanged
struct UTBP_UI_SharedPlayerStatus_C_OnLifeStatusChanged_Params
{
	Tiger_ETigerPlayerLifeStatus                       InNewLifeStatus;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnShieldChanged
struct UTBP_UI_SharedPlayerStatus_C_OnShieldChanged_Params
{
	float                                              InNewHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InNewHealthPercentage;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnHealthChanged
struct UTBP_UI_SharedPlayerStatus_C_OnHealthChanged_Params
{
	float                                              InNewHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InNewHealthPercentage;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetDesiredBackgroundColor
struct UTBP_UI_SharedPlayerStatus_C_SetDesiredBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnStatusIconChanged
struct UTBP_UI_SharedPlayerStatus_C_OnStatusIconChanged_Params
{
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InStatusIcon;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.SetPlayerColor
struct UTBP_UI_SharedPlayerStatus_C_SetPlayerColor_Params
{
	unsigned char                                      PlayerIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.IsDowned
struct UTBP_UI_SharedPlayerStatus_C_IsDowned_Params
{
	bool                                               Is_Downed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.OnPawnChanged
struct UTBP_UI_SharedPlayerStatus_C_OnPawnChanged_Params
{
	class APawn*                                       NewPawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateElysiumVisibility
struct UTBP_UI_SharedPlayerStatus_C_UpdateElysiumVisibility_Params
{
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Set Member
struct UTBP_UI_SharedPlayerStatus_C_Set_Member_Params
{
	class ATigerPlayerState*                           InGroupMemberState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Construct
struct UTBP_UI_SharedPlayerStatus_C_Construct_Params
{
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.UpdateMatchmakingReadyStatus
struct UTBP_UI_SharedPlayerStatus_C_UpdateMatchmakingReadyStatus_Params
{
	bool                                               bInIsReadyForMatchmaking;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.Tick
struct UTBP_UI_SharedPlayerStatus_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.PreConstruct
struct UTBP_UI_SharedPlayerStatus_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SharedPlayerStatus.TBP_UI_SharedPlayerStatus_C.ExecuteUbergraph_TBP_UI_SharedPlayerStatus
struct UTBP_UI_SharedPlayerStatus_C_ExecuteUbergraph_TBP_UI_SharedPlayerStatus_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
