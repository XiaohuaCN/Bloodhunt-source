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
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetToUltimatePredatorPassive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_BloodTrackPassiveSlot_C::SetToUltimatePredatorPassive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetToUltimatePredatorPassive");

	UTBP_UI_BloodTrackPassiveSlot_C_SetToUltimatePredatorPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::SetOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetOpacity");

	UTBP_UI_BloodTrackPassiveSlot_C_SetOpacity_Params params;
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragOver
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_BloodTrackPassiveSlot_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragOver");

	UTBP_UI_BloodTrackPassiveSlot_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CanPassiveOccupyThisSlot
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerBloodTrackPassiveConfig*               New_Passive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_BloodTrackPassiveSlot_C::CanPassiveOccupyThisSlot(class UTigerBloodTrackPassiveConfig* New_Passive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CanPassiveOccupyThisSlot");

	UTBP_UI_BloodTrackPassiveSlot_C_CanPassiveOccupyThisSlot_Params params;
	params.New_Passive = New_Passive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CalculateBloodTrackMovement
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_BloodTrack_DragDropReorderOperation_C*  Drag_Operation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        Movement                                                   (Parm, OutParm)
void UTBP_UI_BloodTrackPassiveSlot_C::CalculateBloodTrackMovement(class UTBP_BloodTrack_DragDropReorderOperation_C* Drag_Operation, TArray<int>* Movement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CalculateBloodTrackMovement");

	UTBP_UI_BloodTrackPassiveSlot_C_CalculateBloodTrackMovement_Params params;
	params.Drag_Operation = Drag_Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Movement != nullptr)
		*Movement = params.Movement;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDrop
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_BloodTrackPassiveSlot_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDrop");

	UTBP_UI_BloodTrackPassiveSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.RestoreIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_BloodTrackPassiveSlot_C::RestoreIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.RestoreIcon");

	UTBP_UI_BloodTrackPassiveSlot_C_RestoreIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.GetAbsoluteIconLocation
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Absolute_X                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::GetAbsoluteIconLocation(float* Absolute_X)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.GetAbsoluteIconLocation");

	UTBP_UI_BloodTrackPassiveSlot_C_GetAbsoluteIconLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Absolute_X != nullptr)
		*Absolute_X = params.Absolute_X;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.MoveIconToAbsoluteLocation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              AbsoluteX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::MoveIconToAbsoluteLocation(float AbsoluteX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.MoveIconToAbsoluteLocation");

	UTBP_UI_BloodTrackPassiveSlot_C_MoveIconToAbsoluteLocation_Params params;
	params.AbsoluteX = AbsoluteX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_BloodTrackPassiveSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseButtonDown");

	UTBP_UI_BloodTrackPassiveSlot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragDetected
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragDetected");

	UTBP_UI_BloodTrackPassiveSlot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetPassive
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBloodTrackPassiveConfig*               Passive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::SetPassive(class UTigerBloodTrackPassiveConfig* Passive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetPassive");

	UTBP_UI_BloodTrackPassiveSlot_C_SetPassive_Params params;
	params.Passive = Passive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.Tick");

	UTBP_UI_BloodTrackPassiveSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragEnter");

	UTBP_UI_BloodTrackPassiveSlot_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragLeave");

	UTBP_UI_BloodTrackPassiveSlot_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragCancelled
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragCancelled");

	UTBP_UI_BloodTrackPassiveSlot_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BloodTrackPassiveSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseEnter");

	UTBP_UI_BloodTrackPassiveSlot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_BloodTrackPassiveSlot_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseLeave");

	UTBP_UI_BloodTrackPassiveSlot_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveSlot_C::ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot");

	UTBP_UI_BloodTrackPassiveSlot_C_ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
