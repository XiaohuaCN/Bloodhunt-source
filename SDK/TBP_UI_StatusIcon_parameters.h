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

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateUpdated
struct UTBP_UI_StatusIcon_C_OnMasqueradeStateUpdated_Params
{
	bool                                               InMasqueradeBroken;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Tiger_ETigerAIPlayerAction                         InPlayerAction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetStatusIcon
struct UTBP_UI_StatusIcon_C_SetStatusIcon_Params
{
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InStatusIcon;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.UpdateActiveStatus
struct UTBP_UI_StatusIcon_C_UpdateActiveStatus_Params
{
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnReviveStateChanged
struct UTBP_UI_StatusIcon_C_OnReviveStateChanged_Params
{
	bool                                               InReviveActive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InIsTarget;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnDiablerizeStateChanged
struct UTBP_UI_StatusIcon_C_OnDiablerizeStateChanged_Params
{
	bool                                               InDiablerizeActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InIsTarget;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateChanged
struct UTBP_UI_StatusIcon_C_OnMasqueradeStateChanged_Params
{
	bool                                               InMasqueradeBroken;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Tiger_ETigerAIPlayerAction                         InPlayerAction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetPawn
struct UTBP_UI_StatusIcon_C_SetPawn_Params
{
	class APawn*                                       InPawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.PreConstruct
struct UTBP_UI_StatusIcon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.ExecuteUbergraph_TBP_UI_StatusIcon
struct UTBP_UI_StatusIcon_C_ExecuteUbergraph_TBP_UI_StatusIcon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnStatusIconChanged__DelegateSignature
struct UTBP_UI_StatusIcon_C_OnStatusIconChanged__DelegateSignature_Params
{
	TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InNewStatusIcon;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
