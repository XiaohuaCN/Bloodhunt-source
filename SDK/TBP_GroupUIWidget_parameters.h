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

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearOutOfSightWidgets
struct UTBP_GroupUIWidget_C_ClearOutOfSightWidgets_Params
{
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.CreateMemberWidget
struct UTBP_GroupUIWidget_C_CreateMemberWidget_Params
{
	class APlayerController*                           OwningPlayer;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsReadyForMatchmaking;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTBP_GroupMemberStatusWidget_C*              ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberStatusWidget
struct UTBP_GroupUIWidget_C_AddGroupMemberStatusWidget_Params
{
	class APlayerController*                           InOwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           InGroupMemberState;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsReadyForMatchmaking;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddOutOfSightWidget
struct UTBP_GroupUIWidget_C_AddOutOfSightWidget_Params
{
	class APlayerController*                           InOwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           InGroupMember;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearGroupMembers
struct UTBP_GroupUIWidget_C_ClearGroupMembers_Params
{
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberToCanvas
struct UTBP_GroupUIWidget_C_AddGroupMemberToCanvas_Params
{
	class ATigerPlayerState*                           InGroupMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsReadyForMatchmaking;                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.OnGroupMemberReadyStatusChanged
struct UTBP_GroupUIWidget_C_OnGroupMemberReadyStatusChanged_Params
{
	class ATigerPlayerState*                           InGroupMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsReadyForMatchmaking;                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.PreConstruct
struct UTBP_GroupUIWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ExecuteUbergraph_TBP_GroupUIWidget
struct UTBP_GroupUIWidget_C_ExecuteUbergraph_TBP_GroupUIWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
