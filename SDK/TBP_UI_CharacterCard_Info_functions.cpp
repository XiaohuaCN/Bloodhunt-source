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
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIconBorderBackground
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_CharacterCard_Info_C::SetPlayerIconBorderBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIconBorderBackground");

	UTBP_UI_CharacterCard_Info_C_SetPlayerIconBorderBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetCardShapeAndBackground
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_CharacterCard_Info_C::SetCardShapeAndBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetCardShapeAndBackground");

	UTBP_UI_CharacterCard_Info_C_SetCardShapeAndBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_CharacterCard_Info_C::SetPlayerIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIcon");

	UTBP_UI_CharacterCard_Info_C_SetPlayerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.BuildCharacterCard
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UTBP_UI_CharacterCard_Info_C::BuildCharacterCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.BuildCharacterCard");

	UTBP_UI_CharacterCard_Info_C_BuildCharacterCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CharacterCard_Info_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.PreConstruct");

	UTBP_UI_CharacterCard_Info_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.OnInit
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InRepresentedPlayer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterCard_Info_C::OnInit(class ATigerPlayerState* InRepresentedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.OnInit");

	UTBP_UI_CharacterCard_Info_C_OnInit_Params params;
	params.InRepresentedPlayer = InRepresentedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterCard_Info_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.Tick");

	UTBP_UI_CharacterCard_Info_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.ExecuteUbergraph_TBP_UI_CharacterCard_Info
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterCard_Info_C::ExecuteUbergraph_TBP_UI_CharacterCard_Info(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.ExecuteUbergraph_TBP_UI_CharacterCard_Info");

	UTBP_UI_CharacterCard_Info_C_ExecuteUbergraph_TBP_UI_CharacterCard_Info_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
