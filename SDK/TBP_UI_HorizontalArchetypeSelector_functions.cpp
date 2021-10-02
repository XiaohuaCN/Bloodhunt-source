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
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ChangeArchetypeButtonSelection
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalArchetypeSelector_C::ChangeArchetypeButtonSelection(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ChangeArchetypeButtonSelection");

	UTBP_UI_HorizontalArchetypeSelector_C_ChangeArchetypeButtonSelection_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateWidgetForArchetype
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UTBP_UI_HorizontalArchetypeSelector_C::CreateWidgetForArchetype(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateWidgetForArchetype");

	UTBP_UI_HorizontalArchetypeSelector_C_CreateWidgetForArchetype_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateArchetypeWidgetsForClan
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerPlayerClanData*                        InClanData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalArchetypeSelector_C::CreateArchetypeWidgetsForClan(class UTigerPlayerClanData* InClanData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateArchetypeWidgetsForClan");

	UTBP_UI_HorizontalArchetypeSelector_C_CreateArchetypeWidgetsForClan_Params params;
	params.InClanData = InClanData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateDivider
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_HorizontalArchetypeSelector_C::CreateDivider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateDivider");

	UTBP_UI_HorizontalArchetypeSelector_C_CreateDivider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnSelectionChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalArchetypeSelector_C::OnSelectionChanged(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnSelectionChanged");

	UTBP_UI_HorizontalArchetypeSelector_C_OnSelectionChanged_Params params;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.SelectArchetype
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalArchetypeSelector_C::SelectArchetype(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.SelectArchetype");

	UTBP_UI_HorizontalArchetypeSelector_C_SelectArchetype_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalArchetypeSelector_C::ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector");

	UTBP_UI_HorizontalArchetypeSelector_C_ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnArchetypeSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_HorizontalArchetypeSelector_C::OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnArchetypeSelected__DelegateSignature");

	UTBP_UI_HorizontalArchetypeSelector_C_OnArchetypeSelected__DelegateSignature_Params params;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
