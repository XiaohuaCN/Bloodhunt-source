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
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetToolTipText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ExaminableProp_Template_C::SetToolTipText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetToolTipText");

	ATBP_ExaminableProp_Template_C_SetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetDrawDistance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_ExaminableProp_Template_C::SetDrawDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetDrawDistance");

	ATBP_ExaminableProp_Template_C_SetDrawDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetCustomPrimitiveData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_ExaminableProp_Template_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetCustomPrimitiveData");

	ATBP_ExaminableProp_Template_C_SetCustomPrimitiveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ValidateEntryId
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     EntryId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ExaminableProp_Template_C::ValidateEntryId(const struct FString& EntryId, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ValidateEntryId");

	ATBP_ExaminableProp_Template_C_ValidateEntryId_Params params;
	params.EntryId = EntryId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ShowGrimoireEntryInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Entry_Id                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ATBP_ExaminableProp_Template_C::ShowGrimoireEntryInfo(const struct FString& Entry_Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ShowGrimoireEntryInfo");

	ATBP_ExaminableProp_Template_C_ShowGrimoireEntryInfo_Params params;
	params.Entry_Id = Entry_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UpdateOutlineEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ExaminableProp_Template_C::UpdateOutlineEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UpdateOutlineEffect");

	ATBP_ExaminableProp_Template_C_UpdateOutlineEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ExaminableProp_Template_C::SetOutlineColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineColor");

	ATBP_ExaminableProp_Template_C_SetOutlineColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineBillboardScale
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ExaminableProp_Template_C::SetOutlineBillboardScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineBillboardScale");

	ATBP_ExaminableProp_Template_C_SetOutlineBillboardScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ExaminableProp_Template_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UserConstructionScript");

	ATBP_ExaminableProp_Template_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ExaminableProp_Template_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveBeginPlay");

	ATBP_ExaminableProp_Template_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.DisableHighlight
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ExaminableProp_Template_C::DisableHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.DisableHighlight");

	ATBP_ExaminableProp_Template_C_DisableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ExaminableProp_Template_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveTick");

	ATBP_ExaminableProp_Template_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OpenGrimoire
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ExaminableProp_Template_C::OpenGrimoire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OpenGrimoire");

	ATBP_ExaminableProp_Template_C_OpenGrimoire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnInteract
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_EInteractiveObjectState                      ActivatedTrigger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ExaminableProp_Template_C::OnInteract(Tiger_EInteractiveObjectState ActivatedTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnInteract");

	ATBP_ExaminableProp_Template_C_OnInteract_Params params;
	params.ActivatedTrigger = ActivatedTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATBP_ExaminableProp_Template_C::BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ATBP_ExaminableProp_Template_C_BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ExaminableProp_Template_C::BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ATBP_ExaminableProp_Template_C_BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnLanguageChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ExaminableProp_Template_C::OnLanguageChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnLanguageChanged");

	ATBP_ExaminableProp_Template_C_OnLanguageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ExecuteUbergraph_TBP_ExaminableProp_Template
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ExaminableProp_Template_C::ExecuteUbergraph_TBP_ExaminableProp_Template(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ExecuteUbergraph_TBP_ExaminableProp_Template");

	ATBP_ExaminableProp_Template_C_ExecuteUbergraph_TBP_ExaminableProp_Template_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
