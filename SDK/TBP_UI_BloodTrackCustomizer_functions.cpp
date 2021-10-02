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
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PopulateMenus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BloodTrackCustomizer_C::PopulateMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PopulateMenus");

	UTBP_UI_BloodTrackCustomizer_C_PopulateMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.SwitchSelectedPassive
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerBloodTrackPassiveConfig*               New_Passive                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackCustomizer_C::SwitchSelectedPassive(int Index, class UTigerBloodTrackPassiveConfig* New_Passive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.SwitchSelectedPassive");

	UTBP_UI_BloodTrackCustomizer_C_SwitchSelectedPassive_Params params;
	params.Index = Index;
	params.New_Passive = New_Passive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuClosing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BloodTrackCustomizer_C::MenuClosing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuClosing");

	UTBP_UI_BloodTrackCustomizer_C_MenuClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PreviewMove
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        Movement_Data                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BloodTrackCustomizer_C::PreviewMove(TArray<int>* Movement_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PreviewMove");

	UTBP_UI_BloodTrackCustomizer_C_PreviewMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Movement_Data != nullptr)
		*Movement_Data = params.Movement_Data;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ModifyBloodTrack
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        Movement_Data                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BloodTrackCustomizer_C::ModifyBloodTrack(TArray<int>* Movement_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ModifyBloodTrack");

	UTBP_UI_BloodTrackCustomizer_C_ModifyBloodTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Movement_Data != nullptr)
		*Movement_Data = params.Movement_Data;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuOpening
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BloodTrackCustomizer_C::MenuOpening()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuOpening");

	UTBP_UI_BloodTrackCustomizer_C_MenuOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.UpdateBackgroundVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BloodTrackCustomizer_C::UpdateBackgroundVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.UpdateBackgroundVisibility");

	UTBP_UI_BloodTrackCustomizer_C_UpdateBackgroundVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BloodTrackCustomizer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnInitialized");

	UTBP_UI_BloodTrackCustomizer_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BloodTrackCustomizer_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.Destruct");

	UTBP_UI_BloodTrackCustomizer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnBloodTrackUpdatedEvent_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackCustomizer_C::OnBloodTrackUpdatedEvent_Event_1(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnBloodTrackUpdatedEvent_Event_1");

	UTBP_UI_BloodTrackCustomizer_C_OnBloodTrackUpdatedEvent_Event_1_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ExecuteUbergraph_TBP_UI_BloodTrackCustomizer
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackCustomizer_C::ExecuteUbergraph_TBP_UI_BloodTrackCustomizer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ExecuteUbergraph_TBP_UI_BloodTrackCustomizer");

	UTBP_UI_BloodTrackCustomizer_C_ExecuteUbergraph_TBP_UI_BloodTrackCustomizer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
