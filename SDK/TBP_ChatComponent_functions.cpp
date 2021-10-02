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
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.OnLoaded_5480FD144B182ADDBFA34EB41371AFF7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UTBP_ChatComponent_C::OnLoaded_5480FD144B182ADDBFA34EB41371AFF7(class UClass* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.OnLoaded_5480FD144B182ADDBFA34EB41371AFF7");

	UTBP_ChatComponent_C_OnLoaded_5480FD144B182ADDBFA34EB41371AFF7_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.Server_SendChatMessageToClients
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bWriteOnlyToGroupMembers                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_ChatComponent_C::Server_SendChatMessageToClients(const struct FText& MessageText, bool bWriteOnlyToGroupMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.Server_SendChatMessageToClients");

	UTBP_ChatComponent_C_Server_SendChatMessageToClients_Params params;
	params.MessageText = MessageText;
	params.bWriteOnlyToGroupMembers = bWriteOnlyToGroupMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.OnMessageInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               OnlyGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_ChatComponent_C::OnMessageInput(const struct FText& MessageText, bool OnlyGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.OnMessageInput");

	UTBP_ChatComponent_C_OnMessageInput_Params params;
	params.MessageText = MessageText;
	params.OnlyGroup = OnlyGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.OnChatMessageReceived
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_ChatComponent_C::OnChatMessageReceived(const struct FTigerChatMessage& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.OnChatMessageReceived");

	UTBP_ChatComponent_C_OnChatMessageReceived_Params params;
	params.InMessage = InMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.OpenChatWindow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ChatComponent_C::OpenChatWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.OpenChatWindow");

	UTBP_ChatComponent_C_OpenChatWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.PreventChatUntilInElysium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ChatComponent_C::PreventChatUntilInElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.PreventChatUntilInElysium");

	UTBP_ChatComponent_C_PreventChatUntilInElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.Welcome Players In Chat
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ChatComponent_C::Welcome_Players_In_Chat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.Welcome Players In Chat");

	UTBP_ChatComponent_C_Welcome_Players_In_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.On Hud Preloading Done
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ChatComponent_C::On_Hud_Preloading_Done()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.On Hud Preloading Done");

	UTBP_ChatComponent_C_On_Hud_Preloading_Done_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.CreateChatWindow
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_ChatComponent_C::CreateChatWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.CreateChatWindow");

	UTBP_ChatComponent_C_CreateChatWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.OnBanStatusUpdated
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerMuteInfo                              InMuteInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_ChatComponent_C::OnBanStatusUpdated(const struct FTigerMuteInfo& InMuteInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.OnBanStatusUpdated");

	UTBP_ChatComponent_C_OnBanStatusUpdated_Params params;
	params.InMuteInfo = InMuteInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ChatComponent.TBP_ChatComponent_C.ExecuteUbergraph_TBP_ChatComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ChatComponent_C::ExecuteUbergraph_TBP_ChatComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ChatComponent.TBP_ChatComponent_C.ExecuteUbergraph_TBP_ChatComponent");

	UTBP_ChatComponent_C_ExecuteUbergraph_TBP_ChatComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
