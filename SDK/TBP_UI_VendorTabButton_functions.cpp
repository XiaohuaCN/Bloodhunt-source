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
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.EnableButtonShortcuts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_VendorTabButton_C::EnableButtonShortcuts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.EnableButtonShortcuts");

	UTBP_UI_VendorTabButton_C_EnableButtonShortcuts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.InitialSetup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InTitle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InSubTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_VendorTabButton_C::InitialSetup(const struct FText& InTitle, const struct FText& InSubTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.InitialSetup");

	UTBP_UI_VendorTabButton_C_InitialSetup_Params params;
	params.InTitle = InTitle;
	params.InSubTitle = InSubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_VendorTabButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_VendorTabButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_VendorTabButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_VendorTabButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.Select
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_VendorTabButton_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.Select");

	UTBP_UI_VendorTabButton_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.Deselect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_VendorTabButton_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.Deselect");

	UTBP_UI_VendorTabButton_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_VendorTabButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_VendorTabButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_VendorTabButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.PreConstruct");

	UTBP_UI_VendorTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.ExecuteUbergraph_TBP_UI_VendorTabButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_VendorTabButton_C::ExecuteUbergraph_TBP_UI_VendorTabButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.ExecuteUbergraph_TBP_UI_VendorTabButton");

	UTBP_UI_VendorTabButton_C_ExecuteUbergraph_TBP_UI_VendorTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_VendorTabButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.OnClicked__DelegateSignature");

	UTBP_UI_VendorTabButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
