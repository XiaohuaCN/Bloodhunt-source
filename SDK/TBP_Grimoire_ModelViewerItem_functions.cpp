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
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ResetScale
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_ModelViewerItem_C::ResetScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ResetScale");

	ATBP_Grimoire_ModelViewerItem_C_ResetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.AdjustByDeltaPosition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_ModelViewerItem_C::AdjustByDeltaPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.AdjustByDeltaPosition");

	ATBP_Grimoire_ModelViewerItem_C_AdjustByDeltaPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.EnforceDesiredScreenSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_ModelViewerItem_C::EnforceDesiredScreenSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.EnforceDesiredScreenSize");

	ATBP_Grimoire_ModelViewerItem_C_EnforceDesiredScreenSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.RecalculateScreenSize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_ModelViewerItem_C::RecalculateScreenSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.RecalculateScreenSize");

	ATBP_Grimoire_ModelViewerItem_C_RecalculateScreenSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.OnMeshLoaded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_ModelViewerItem_C::OnMeshLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.OnMeshLoaded");

	ATBP_Grimoire_ModelViewerItem_C_OnMeshLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.Show
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           InSelectedButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_ModelViewerItem_C::Show(class UTBP_UI_Grimoire_CategoryButton_C* InSelectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.Show");

	ATBP_Grimoire_ModelViewerItem_C_Show_Params params;
	params.InSelectedButton = InSelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Grimoire_ModelViewerItem_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ReceiveBeginPlay");

	ATBP_Grimoire_ModelViewerItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_ModelViewerItem_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ReceiveTick");

	ATBP_Grimoire_ModelViewerItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ExecuteUbergraph_TBP_Grimoire_ModelViewerItem
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_ModelViewerItem_C::ExecuteUbergraph_TBP_Grimoire_ModelViewerItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ExecuteUbergraph_TBP_Grimoire_ModelViewerItem");

	ATBP_Grimoire_ModelViewerItem_C_ExecuteUbergraph_TBP_Grimoire_ModelViewerItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
