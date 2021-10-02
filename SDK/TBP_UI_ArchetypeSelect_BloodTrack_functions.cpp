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
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.Update_Blodtrack
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ArchetypeSelect_BloodTrack_C::Update_Blodtrack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.Update_Blodtrack");

	UTBP_UI_ArchetypeSelect_BloodTrack_C_Update_Blodtrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ArchetypeSelect_BloodTrack_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.Construct");

	UTBP_UI_ArchetypeSelect_BloodTrack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeSelect_BloodTrack_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.Tick");

	UTBP_UI_ArchetypeSelect_BloodTrack_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ArchetypeSelect_BloodTrack_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_ArchetypeSelect_BloodTrack_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ArchetypeSelect_BloodTrack_C::ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ArchetypeSelect_BloodTrack.TBP_UI_ArchetypeSelect_BloodTrack_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack");

	UTBP_UI_ArchetypeSelect_BloodTrack_C_ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
