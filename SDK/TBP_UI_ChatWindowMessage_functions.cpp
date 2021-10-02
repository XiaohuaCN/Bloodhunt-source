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
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIPadding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChatWindowMessage_C::SetUIPadding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIPadding");

	UTBP_UI_ChatWindowMessage_C_SetUIPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIVisibilities
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindowMessage_C::SetUIVisibilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIVisibilities");

	UTBP_UI_ChatWindowMessage_C_SetUIVisibilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Is Another Player
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bIsAnotherPlayer                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindowMessage_C::Is_Another_Player(bool* bIsAnotherPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Is Another Player");

	UTBP_UI_ChatWindowMessage_C_Is_Another_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsAnotherPlayer != nullptr)
		*bIsAnotherPlayer = params.bIsAnotherPlayer;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.RecycleMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InChatMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ChatWindowMessage_C::RecycleMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.RecycleMessage");

	UTBP_UI_ChatWindowMessage_C_RecycleMessage_Params params;
	params.InChatMessage = InChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChatWindowMessage_C::BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_ChatWindowMessage_C_BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChatWindowMessage_C::BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_ChatWindowMessage_C_BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ChatWindowMessage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Construct");

	UTBP_UI_ChatWindowMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.ExecuteUbergraph_TBP_UI_ChatWindowMessage
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChatWindowMessage_C::ExecuteUbergraph_TBP_UI_ChatWindowMessage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.ExecuteUbergraph_TBP_UI_ChatWindowMessage");

	UTBP_UI_ChatWindowMessage_C_ExecuteUbergraph_TBP_UI_ChatWindowMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
