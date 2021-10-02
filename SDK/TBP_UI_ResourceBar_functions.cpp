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
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentAdded
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_ResourceBarSegment_C*                InSegment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UHorizontalBoxSlot*                          InHorizontalBoxSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ResourceBar_C::OnSegmentAdded(int InIndex, class UTBP_UI_ResourceBarSegment_C* InSegment, class UHorizontalBoxSlot* InHorizontalBoxSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentAdded");

	UTBP_UI_ResourceBar_C_OnSegmentAdded_Params params;
	params.InIndex = InIndex;
	params.InSegment = InSegment;
	params.InHorizontalBoxSlot = InHorizontalBoxSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ClearSegments
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ResourceBar_C::ClearSegments()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ClearSegments");

	UTBP_UI_ResourceBar_C_ClearSegments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.CreateFlashEffect
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_FlashEffect_C*                       Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ResourceBar_C::CreateFlashEffect(class UTBP_UI_FlashEffect_C** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.CreateFlashEffect");

	UTBP_UI_ResourceBar_C_CreateFlashEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnHealthLost
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ResourceBar_C::OnHealthLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnHealthLost");

	UTBP_UI_ResourceBar_C_OnHealthLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentEmptied
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              HorizontalProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ResourceBar_C::OnSegmentEmptied(float HorizontalProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentEmptied");

	UTBP_UI_ResourceBar_C_OnSegmentEmptied_Params params;
	params.HorizontalProgress = HorizontalProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.RecycleFlashEffect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_FlashEffect_C*                       Finished_Effect                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ResourceBar_C::RecycleFlashEffect(class UTBP_UI_FlashEffect_C* Finished_Effect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.RecycleFlashEffect");

	UTBP_UI_ResourceBar_C_RecycleFlashEffect_Params params;
	params.Finished_Effect = Finished_Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ResourceBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.PreConstruct");

	UTBP_UI_ResourceBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ExecuteUbergraph_TBP_UI_ResourceBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ResourceBar_C::ExecuteUbergraph_TBP_UI_ResourceBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ExecuteUbergraph_TBP_UI_ResourceBar");

	UTBP_UI_ResourceBar_C_ExecuteUbergraph_TBP_UI_ResourceBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
