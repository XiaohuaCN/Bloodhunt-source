// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnBanStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMuteInfo                              InMuteInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UBPI_UI_ChatWindow_C::OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnBanStatusChanged");

	UBPI_UI_ChatWindow_C_OnBanStatusChanged_Params params;
	params.InMuteInfo = InMuteInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.WelcomePlayersInElysium
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_UI_ChatWindow_C::WelcomePlayersInElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.WelcomePlayersInElysium");

	UBPI_UI_ChatWindow_C_WelcomePlayersInElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_UI_ChatWindow_C::OnMessageNameUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameUnhovered");

	UBPI_UI_ChatWindow_C_OnMessageNameUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameHovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InChatData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_UI_ChatWindow_C::OnMessageNameHovered(const struct FTigerChatMessage& InChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.OnMessageNameHovered");

	UBPI_UI_ChatWindow_C_OnMessageNameHovered_Params params;
	params.InChatData = InChatData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.Focus on Input Box
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_UI_ChatWindow_C::Focus_on_Input_Box()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.Focus on Input Box");

	UBPI_UI_ChatWindow_C_Focus_on_Input_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.AddMessage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InChatMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_UI_ChatWindow_C::AddMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_UI_ChatWindow.BPI_UI_ChatWindow_C.AddMessage");

	UBPI_UI_ChatWindow_C_AddMessage_Params params;
	params.InChatMessage = InChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
