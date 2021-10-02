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
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnLevelChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LevelOverlay_C::OnLevelChanged(int InLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnLevelChanged");

	UTBP_UI_LevelOverlay_C_OnLevelChanged_Params params;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateBars
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_LevelOverlay_C::UpdateBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateBars");

	UTBP_UI_LevelOverlay_C_UpdateBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.SetupUpdateConstants
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerLevelComponent*                        Level_Component                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LevelOverlay_C::SetupUpdateConstants(class UTigerLevelComponent* Level_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.SetupUpdateConstants");

	UTBP_UI_LevelOverlay_C_SetupUpdateConstants_Params params;
	params.Level_Component = Level_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperianceLevelReset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_LevelOverlay_C::UpdateCurrentExperianceLevelReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperianceLevelReset");

	UTBP_UI_LevelOverlay_C_UpdateCurrentExperianceLevelReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperience
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerLevelComponent*                        Level_Component                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LevelOverlay_C::UpdateCurrentExperience(class UTigerLevelComponent* Level_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperience");

	UTBP_UI_LevelOverlay_C_UpdateCurrentExperience_Params params;
	params.Level_Component = Level_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnAddExperience
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Add_Experience                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LevelOverlay_C::OnAddExperience(int Add_Experience)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnAddExperience");

	UTBP_UI_LevelOverlay_C_OnAddExperience_Params params;
	params.Add_Experience = Add_Experience;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_LevelOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Construct");

	UTBP_UI_LevelOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LevelOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Tick");

	UTBP_UI_LevelOverlay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_LevelOverlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.PreConstruct");

	UTBP_UI_LevelOverlay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.ExecuteUbergraph_TBP_UI_LevelOverlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_LevelOverlay_C::ExecuteUbergraph_TBP_UI_LevelOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.ExecuteUbergraph_TBP_UI_LevelOverlay");

	UTBP_UI_LevelOverlay_C_ExecuteUbergraph_TBP_UI_LevelOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
