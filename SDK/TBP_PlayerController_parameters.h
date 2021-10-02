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

// Function TBP_PlayerController.TBP_PlayerController_C.StopGasSounds
struct ATBP_PlayerController_C_StopGasSounds_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.DebugCrosshairLineHitTest
struct ATBP_PlayerController_C_DebugCrosshairLineHitTest_Params
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End;                                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerController.TBP_PlayerController_C.OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C
struct ATBP_PlayerController_C_OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C
struct ATBP_PlayerController_C_OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1
struct ATBP_PlayerController_C_InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_PlayerController.TBP_PlayerController_C.ReceiveBeginPlay
struct ATBP_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.ReceiveEndPlay
struct ATBP_PlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerController.TBP_PlayerController_C.ReturnToElysium
struct ATBP_PlayerController_C_ReturnToElysium_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.ShowPostMatchScreen
struct ATBP_PlayerController_C_ShowPostMatchScreen_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.OnGhostModeSet_Event
struct ATBP_PlayerController_C_OnGhostModeSet_Event_Params
{
	bool                                               bIsGhostModeEnabled;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_PlayerController.TBP_PlayerController_C.BindOnGhostModeSet
struct ATBP_PlayerController_C_BindOnGhostModeSet_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.ExitMatch
struct ATBP_PlayerController_C_ExitMatch_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.OnToggleMainMenu
struct ATBP_PlayerController_C_OnToggleMainMenu_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.Debug_ShowCharacterCard
struct ATBP_PlayerController_C_Debug_ShowCharacterCard_Params
{
};

// Function TBP_PlayerController.TBP_PlayerController_C.ExecuteUbergraph_TBP_PlayerController
struct ATBP_PlayerController_C_ExecuteUbergraph_TBP_PlayerController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
