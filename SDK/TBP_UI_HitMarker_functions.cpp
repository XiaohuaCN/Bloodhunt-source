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
//		Name   -> Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.IsShown
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bOutIsShown                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_HitMarker_C::IsShown(bool* bOutIsShown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.IsShown");

	UTBP_UI_HitMarker_C_IsShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOutIsShown != nullptr)
		*bOutIsShown = params.bOutIsShown;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ShowHitMarker
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                In_Hit_Marker_Color                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bPlayerWasDownedOrKilled                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_HitMarker_C::ShowHitMarker(const struct FLinearColor& In_Hit_Marker_Color, bool bPlayerWasDownedOrKilled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ShowHitMarker");

	UTBP_UI_HitMarker_C_ShowHitMarker_Params params;
	params.In_Hit_Marker_Color = In_Hit_Marker_Color;
	params.bPlayerWasDownedOrKilled = bPlayerWasDownedOrKilled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HitMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Tick");

	UTBP_UI_HitMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_HitMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Construct");

	UTBP_UI_HitMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ExecuteUbergraph_TBP_UI_HitMarker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HitMarker_C::ExecuteUbergraph_TBP_UI_HitMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ExecuteUbergraph_TBP_UI_HitMarker");

	UTBP_UI_HitMarker_C_ExecuteUbergraph_TBP_UI_HitMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
