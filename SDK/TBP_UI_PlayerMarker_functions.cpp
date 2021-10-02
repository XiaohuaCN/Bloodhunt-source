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
//		Name   -> Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_PlayerMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Construct");

	UTBP_UI_PlayerMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.Tick");

	UTBP_UI_PlayerMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.OnIsOnMinimapIsSet
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnMinimap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PlayerMarker_C::OnIsOnMinimapIsSet(bool bInIsOnMinimap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.OnIsOnMinimapIsSet");

	UTBP_UI_PlayerMarker_C_OnIsOnMinimapIsSet_Params params;
	params.bInIsOnMinimap = bInIsOnMinimap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.On Masquerade Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsMasqueradeBreached                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Tiger_ETigerAIPlayerAction                         InPlayerAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerMarker_C::On_Masquerade_Changed(bool InIsMasqueradeBreached, Tiger_ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.On Masquerade Changed");

	UTBP_UI_PlayerMarker_C_On_Masquerade_Changed_Params params;
	params.InIsMasqueradeBreached = InIsMasqueradeBreached;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.ExecuteUbergraph_TBP_UI_PlayerMarker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerMarker_C::ExecuteUbergraph_TBP_UI_PlayerMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerMarker.TBP_UI_PlayerMarker_C.ExecuteUbergraph_TBP_UI_PlayerMarker");

	UTBP_UI_PlayerMarker_C_ExecuteUbergraph_TBP_UI_PlayerMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
