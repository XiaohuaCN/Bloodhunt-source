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

// Function TBP_ChatComponent.TBP_ChatComponent_C.OnLoaded_5480FD144B182ADDBFA34EB41371AFF7
struct UTBP_ChatComponent_C_OnLoaded_5480FD144B182ADDBFA34EB41371AFF7_Params
{
	class UClass*                                      Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.Server_SendChatMessageToClients
struct UTBP_ChatComponent_C_Server_SendChatMessageToClients_Params
{
	struct FText                                       MessageText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bWriteOnlyToGroupMembers;                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.OnMessageInput
struct UTBP_ChatComponent_C_OnMessageInput_Params
{
	struct FText                                       MessageText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OnlyGroup;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.OnChatMessageReceived
struct UTBP_ChatComponent_C_OnChatMessageReceived_Params
{
	struct FTigerChatMessage                           InMessage;                                                 // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.OpenChatWindow
struct UTBP_ChatComponent_C_OpenChatWindow_Params
{
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.PreventChatUntilInElysium
struct UTBP_ChatComponent_C_PreventChatUntilInElysium_Params
{
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.Welcome Players In Chat
struct UTBP_ChatComponent_C_Welcome_Players_In_Chat_Params
{
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.On Hud Preloading Done
struct UTBP_ChatComponent_C_On_Hud_Preloading_Done_Params
{
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.CreateChatWindow
struct UTBP_ChatComponent_C_CreateChatWindow_Params
{
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.OnBanStatusUpdated
struct UTBP_ChatComponent_C_OnBanStatusUpdated_Params
{
	struct FTigerMuteInfo                              InMuteInfo;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_ChatComponent.TBP_ChatComponent_C.ExecuteUbergraph_TBP_ChatComponent
struct UTBP_ChatComponent_C_ExecuteUbergraph_TBP_ChatComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
