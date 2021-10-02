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

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnMemberLeftParty
struct UTBP_UI_ElysiumNamePlateWidget_C_OnMemberLeftParty_Params
{
	struct FTigerPartyId                               InPartyId;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FString                                     InDepartingPlayerId;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerLeftPArty
struct UTBP_UI_ElysiumNamePlateWidget_C_OnPlayerLeftPArty_Params
{
	struct FTigerParty                                 InParty;                                                   // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdatePlayerNameColor
struct UTBP_UI_ElysiumNamePlateWidget_C_UpdatePlayerNameColor_Params
{
	struct FSlateColor                                 PlayerNameColor;                                           // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaAndScaleTargets
struct UTBP_UI_ElysiumNamePlateWidget_C_UpdateAlphaAndScaleTargets_Params
{
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetupPlayerIndexChanged
struct UTBP_UI_ElysiumNamePlateWidget_C_SetupPlayerIndexChanged_Params
{
	class ATigerPlayerState*                           self2;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           self3;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlpha
struct UTBP_UI_ElysiumNamePlateWidget_C_UpdateAlpha_Params
{
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaValue
struct UTBP_UI_ElysiumNamePlateWidget_C_UpdateAlphaValue_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetPlayer
struct UTBP_UI_ElysiumNamePlateWidget_C_SetPlayer_Params
{
	class ATBP_Player_C*                               Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Construct
struct UTBP_UI_ElysiumNamePlateWidget_C_Construct_Params
{
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnGroupChanged
struct UTBP_UI_ElysiumNamePlateWidget_C_OnGroupChanged_Params
{
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerNameChanged
struct UTBP_UI_ElysiumNamePlateWidget_C_OnPlayerNameChanged_Params
{
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerIndexChanged
struct UTBP_UI_ElysiumNamePlateWidget_C_OnPlayerIndexChanged_Params
{
	unsigned char                                      InIndex;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Tick
struct UTBP_UI_ElysiumNamePlateWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ClearPlayerNameColor
struct UTBP_UI_ElysiumNamePlateWidget_C_ClearPlayerNameColor_Params
{
};

// Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget
struct UTBP_UI_ElysiumNamePlateWidget_C_ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
