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
//		Name   -> Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.UpdateMasqueradePosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MasqueradeMarker_C::UpdateMasqueradePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.UpdateMasqueradePosition");

	UTBP_UI_MasqueradeMarker_C_UpdateMasqueradePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MasqueradeMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.Construct");

	UTBP_UI_MasqueradeMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MasqueradeMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.Tick");

	UTBP_UI_MasqueradeMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MasqueradeMarker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.PreConstruct");

	UTBP_UI_MasqueradeMarker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.OnUpdated
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_MasqueradeMarker_C::OnUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.OnUpdated");

	UTBP_UI_MasqueradeMarker_C_OnUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.ExecuteUbergraph_TBP_UI_MasqueradeMarker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MasqueradeMarker_C::ExecuteUbergraph_TBP_UI_MasqueradeMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MasqueradeMarker.TBP_UI_MasqueradeMarker_C.ExecuteUbergraph_TBP_UI_MasqueradeMarker");

	UTBP_UI_MasqueradeMarker_C_ExecuteUbergraph_TBP_UI_MasqueradeMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
