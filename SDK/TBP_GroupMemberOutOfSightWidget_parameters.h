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

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandleLifeStatusChanged
struct UTBP_GroupMemberOutOfSightWidget_C_HandleLifeStatusChanged_Params
{
	Tiger_ETigerPlayerLifeStatus                       NewLifeStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandlePlayerChanged
struct UTBP_GroupMemberOutOfSightWidget_C_HandlePlayerChanged_Params
{
	class ATigerPlayer*                                InTigerPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity
struct UTBP_GroupMemberOutOfSightWidget_C_GetColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize
struct UTBP_GroupMemberOutOfSightWidget_C_Initialize_Params
{
	class ATigerPlayerState*                           Player_State;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged
struct UTBP_GroupMemberOutOfSightWidget_C_OnPawnChanged_Params
{
	class APawn*                                       NewPawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged
struct UTBP_GroupMemberOutOfSightWidget_C_OnScreenStateChanged_Params
{
	bool                                               bInIsOnScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct
struct UTBP_GroupMemberOutOfSightWidget_C_Destruct_Params
{
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged
struct UTBP_GroupMemberOutOfSightWidget_C_OnNameChanged_Params
{
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget
struct UTBP_GroupMemberOutOfSightWidget_C_ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnLifeStatusChanged__DelegateSignature
struct UTBP_GroupMemberOutOfSightWidget_C_OnLifeStatusChanged__DelegateSignature_Params
{
	Tiger_ETigerPlayerLifeStatus                       InLifeStatus;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
