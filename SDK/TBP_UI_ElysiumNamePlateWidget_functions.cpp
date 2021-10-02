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
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnMemberLeftParty
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPartyId                               InPartyId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FString                                     InDepartingPlayerId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::OnMemberLeftParty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnMemberLeftParty");

	UTBP_UI_ElysiumNamePlateWidget_C_OnMemberLeftParty_Params params;
	params.InPartyId = InPartyId;
	params.InDepartingPlayerId = InDepartingPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerLeftPArty
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerParty                                 InParty                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumNamePlateWidget_C::OnPlayerLeftPArty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerLeftPArty");

	UTBP_UI_ElysiumNamePlateWidget_C_OnPlayerLeftPArty_Params params;
	params.InParty = InParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdatePlayerNameColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 PlayerNameColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumNamePlateWidget_C::UpdatePlayerNameColor(struct FSlateColor* PlayerNameColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdatePlayerNameColor");

	UTBP_UI_ElysiumNamePlateWidget_C_UpdatePlayerNameColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerNameColor != nullptr)
		*PlayerNameColor = params.PlayerNameColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaAndScaleTargets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumNamePlateWidget_C::UpdateAlphaAndScaleTargets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaAndScaleTargets");

	UTBP_UI_ElysiumNamePlateWidget_C_UpdateAlphaAndScaleTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetupPlayerIndexChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayerState*                           self3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::SetupPlayerIndexChanged(class ATigerPlayerState* self2, class ATigerPlayerState* self3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetupPlayerIndexChanged");

	UTBP_UI_ElysiumNamePlateWidget_C_SetupPlayerIndexChanged_Params params;
	params.self2 = self2;
	params.self3 = self3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlpha
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumNamePlateWidget_C::UpdateAlpha()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlpha");

	UTBP_UI_ElysiumNamePlateWidget_C_UpdateAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::UpdateAlphaValue(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.UpdateAlphaValue");

	UTBP_UI_ElysiumNamePlateWidget_C_UpdateAlphaValue_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetPlayer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATBP_Player_C*                               Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::SetPlayer(class ATBP_Player_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.SetPlayer");

	UTBP_UI_ElysiumNamePlateWidget_C_SetPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumNamePlateWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Construct");

	UTBP_UI_ElysiumNamePlateWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnGroupChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumNamePlateWidget_C::OnGroupChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnGroupChanged");

	UTBP_UI_ElysiumNamePlateWidget_C_OnGroupChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerNameChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumNamePlateWidget_C::OnPlayerNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerNameChanged");

	UTBP_UI_ElysiumNamePlateWidget_C_OnPlayerNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerIndexChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::OnPlayerIndexChanged(unsigned char InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.OnPlayerIndexChanged");

	UTBP_UI_ElysiumNamePlateWidget_C_OnPlayerIndexChanged_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.Tick");

	UTBP_UI_ElysiumNamePlateWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ClearPlayerNameColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumNamePlateWidget_C::ClearPlayerNameColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ClearPlayerNameColor");

	UTBP_UI_ElysiumNamePlateWidget_C_ClearPlayerNameColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumNamePlateWidget_C::ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumNamePlateWidget.TBP_UI_ElysiumNamePlateWidget_C.ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget");

	UTBP_UI_ElysiumNamePlateWidget_C_ExecuteUbergraph_TBP_UI_ElysiumNamePlateWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
