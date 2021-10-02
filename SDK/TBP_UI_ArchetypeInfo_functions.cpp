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
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.SetCharacterArchetype
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              DesiredArchetype                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeInfo_C::SetCharacterArchetype(class UTigerPowerKit* DesiredArchetype)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.SetCharacterArchetype");

	UTBP_UI_ArchetypeInfo_C_SetCharacterArchetype_Params params;
	params.DesiredArchetype = DesiredArchetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.UpdateClanInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeInfo_C::UpdateClanInfo(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.UpdateClanInfo");

	UTBP_UI_ArchetypeInfo_C_UpdateClanInfo_Params params;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ChangeClan
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPlayerClanData*                        ClanData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bAnimateChange                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTigerPowerKit*                              ArchetypeData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeInfo_C::ChangeClan(class UTigerPlayerClanData* ClanData, bool bAnimateChange, class UTigerPowerKit* ArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ChangeClan");

	UTBP_UI_ArchetypeInfo_C_ChangeClan_Params params;
	params.ClanData = ClanData;
	params.bAnimateChange = bAnimateChange;
	params.ArchetypeData = ArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ArchetypeInfo_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.PreConstruct");

	UTBP_UI_ArchetypeInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.Toggle UI Visibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::Toggle_UI_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.Toggle UI Visibility");

	UTBP_UI_ArchetypeInfo_C_Toggle_UI_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_ArchetypeInfo_C_WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature");

	UTBP_UI_ArchetypeInfo_C_BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature");

	UTBP_UI_ArchetypeInfo_C_BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.StopVideo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::StopVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.StopVideo");

	UTBP_UI_ArchetypeInfo_C_StopVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ExecuteUbergraph_TBP_UI_ArchetypeInfo
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeInfo_C::ExecuteUbergraph_TBP_UI_ArchetypeInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ExecuteUbergraph_TBP_UI_ArchetypeInfo");

	UTBP_UI_ArchetypeInfo_C_ExecuteUbergraph_TBP_UI_ArchetypeInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoEnded__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoEnded__DelegateSignature");

	UTBP_UI_ArchetypeInfo_C_OnVideoEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoStarted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ArchetypeInfo_C::OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoStarted__DelegateSignature");

	UTBP_UI_ArchetypeInfo_C_OnVideoStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
