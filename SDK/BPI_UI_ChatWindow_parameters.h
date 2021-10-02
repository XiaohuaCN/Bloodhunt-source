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

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnBanStatusChanged
struct UBPI_UI_ChatWindow_C_OnBanStatusChanged_Params
{
	struct FTigerMuteInfo                              InMuteInfo;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.WelcomePlayersInElysium
struct UBPI_UI_ChatWindow_C_WelcomePlayersInElysium_Params
{
};

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameUnhovered
struct UBPI_UI_ChatWindow_C_OnMessageNameUnhovered_Params
{
};

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameHovered
struct UBPI_UI_ChatWindow_C_OnMessageNameHovered_Params
{
	struct FTigerChatMessage                           InChatData;                                                // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.Focus on Input Box
struct UBPI_UI_ChatWindow_C_Focus_on_Input_Box_Params
{
};

// Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.AddMessage
struct UBPI_UI_ChatWindow_C_AddMessage_Params
{
	struct FTigerChatMessage                           InChatMessage;                                             // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
