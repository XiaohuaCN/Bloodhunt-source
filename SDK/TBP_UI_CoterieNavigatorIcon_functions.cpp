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
//		Name   -> Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.UpdateVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsNavigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CoterieNavigatorIcon_C::UpdateVisibility(bool bIsNavigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.UpdateVisibility");

	UTBP_UI_CoterieNavigatorIcon_C_UpdateVisibility_Params params;
	params.bIsNavigator = bIsNavigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.SetOwningPawn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       In_Pawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CoterieNavigatorIcon_C::SetOwningPawn(class APawn* In_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.SetOwningPawn");

	UTBP_UI_CoterieNavigatorIcon_C_SetOwningPawn_Params params;
	params.In_Pawn = In_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.OnIsCoterieNavigatorChanged_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsCoterieNavigator                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CoterieNavigatorIcon_C::OnIsCoterieNavigatorChanged_Event_1(bool bInIsCoterieNavigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.OnIsCoterieNavigatorChanged_Event_1");

	UTBP_UI_CoterieNavigatorIcon_C_OnIsCoterieNavigatorChanged_Event_1_Params params;
	params.bInIsCoterieNavigator = bInIsCoterieNavigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CoterieNavigatorIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.PreConstruct");

	UTBP_UI_CoterieNavigatorIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CoterieNavigatorIcon_C::ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon");

	UTBP_UI_CoterieNavigatorIcon_C_ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
