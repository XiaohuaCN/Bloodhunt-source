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

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnReadyStateChanged
struct UTBP_UI_PlayerHealthBar_C_OnReadyStateChanged_Params
{
	bool                                               InReady;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.DisableHover
struct UTBP_UI_PlayerHealthBar_C_DisableHover_Params
{
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.EnableHover
struct UTBP_UI_PlayerHealthBar_C_EnableHover_Params
{
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.SetPlayerState
struct UTBP_UI_PlayerHealthBar_C_SetPlayerState_Params
{
	class ATigerPlayerState*                           PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OverridePlayerState
struct UTBP_UI_PlayerHealthBar_C_OverridePlayerState_Params
{
	class ATigerPlayerState*                           OverridePlayerState;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.Tick
struct UTBP_UI_PlayerHealthBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnPlayerStateReceived
struct UTBP_UI_PlayerHealthBar_C_OnPlayerStateReceived_Params
{
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.ExecuteUbergraph_TBP_UI_PlayerHealthBar
struct UTBP_UI_PlayerHealthBar_C_ExecuteUbergraph_TBP_UI_PlayerHealthBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
