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
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2");

	UTBP_UI_Grimoire_C_SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2_Params params;
	params.InteractedFooter = InteractedFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1");

	UTBP_UI_Grimoire_C_SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1_Params params;
	params.InteractedFooter = InteractedFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseAxis
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InAxis                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutAxis                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::NormaliseMouseAxis(float InAxis, float* OutAxis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseAxis");

	UTBP_UI_Grimoire_C_NormaliseMouseAxis_Params params;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAxis != nullptr)
		*OutAxis = params.OutAxis;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseDelta
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   InDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   OutDelta                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::NormaliseMouseDelta(const struct FVector2D& InDelta, struct FVector2D* OutDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseDelta");

	UTBP_UI_Grimoire_C_NormaliseMouseDelta_Params params;
	params.InDelta = InDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDelta != nullptr)
		*OutDelta = params.OutDelta;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshScrollPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_C::RefreshScrollPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshScrollPrompt");

	UTBP_UI_Grimoire_C_RefreshScrollPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ApplyMeshScaling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsFocused                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_C::ApplyMeshScaling(bool IsFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ApplyMeshScaling");

	UTBP_UI_Grimoire_C_ApplyMeshScaling_Params params;
	params.IsFocused = IsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::ResetGrimoireDisplayItems(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems");

	UTBP_UI_Grimoire_C_ResetGrimoireDisplayItems_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::ForwardInputToCategoryMenu(int InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu");

	UTBP_UI_Grimoire_C_ForwardInputToCategoryMenu_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::GrimoirePropJumpToEntry(const struct FString& InEntryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry");

	UTBP_UI_Grimoire_C_GrimoirePropJumpToEntry_Params params;
	params.InEntryId = InEntryId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_C::HideGrimoireDisplayItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems");

	UTBP_UI_Grimoire_C_HideGrimoireDisplayItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::RotateGrimoireDisplayItem(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem");

	UTBP_UI_Grimoire_C_RotateGrimoireDisplayItem_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_C::SetInteractionButtonVisiblity(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity");

	UTBP_UI_Grimoire_C_SetInteractionButtonVisiblity_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::ClearContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent");

	UTBP_UI_Grimoire_C_ClearContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::InteractedFooterAnimationEnd(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd");

	UTBP_UI_Grimoire_C_InteractedFooterAnimationEnd_Params params;
	params.InteractedFooter = InteractedFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::InteractedFooterAnimationStart(class UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart");

	UTBP_UI_Grimoire_C_InteractedFooterAnimationStart_Params params;
	params.InteractedFooter = InteractedFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Grimoire_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen");

	UTBP_UI_Grimoire_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      SelectedCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick");

	UTBP_UI_Grimoire_C_SelectMenuOnClick_Params params;
	params.SelectedCategory = SelectedCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton");

	UTBP_UI_Grimoire_C_SelectMenuOnClickCategoryButton_Params params;
	params.CategoryButton = CategoryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           EntryButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* EntryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton");

	UTBP_UI_Grimoire_C_SelectMenuOnClickEntryButton_Params params;
	params.EntryButton = EntryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::MenuAnimHide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide");

	UTBP_UI_Grimoire_C_MenuAnimHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::MenuAnimShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow");

	UTBP_UI_Grimoire_C_MenuAnimShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::ToggleMenusHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden");

	UTBP_UI_Grimoire_C_ToggleMenusHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Grimoire_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose");

	UTBP_UI_Grimoire_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized");

	UTBP_UI_Grimoire_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::JumpToCategory(class UTigerGrimoireCategory* InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory");

	UTBP_UI_Grimoire_C_JumpToCategory_Params params;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      InSubCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::JumpToSubCategory(class UTigerGrimoireCategory* InSubCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory");

	UTBP_UI_Grimoire_C_JumpToSubCategory_Params params;
	params.InSubCategory = InSubCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::JumpToEntry(const struct FString& InEntryId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry");

	UTBP_UI_Grimoire_C_JumpToEntry_Params params;
	params.InEntryId = InEntryId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature");

	UTBP_UI_Grimoire_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_C::BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature");

	UTBP_UI_Grimoire_C_BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_C::BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature");

	UTBP_UI_Grimoire_C_BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick");

	UTBP_UI_Grimoire_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Grimoire_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown");

	UTBP_UI_Grimoire_C_OnBackgroundSceneShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::MenuUpPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed");

	UTBP_UI_Grimoire_C_MenuUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::MenuDownPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed");

	UTBP_UI_Grimoire_C_MenuDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::OnRotateButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonPressed");

	UTBP_UI_Grimoire_C_OnRotateButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::OnRotateButtonUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonUp");

	UTBP_UI_Grimoire_C_OnRotateButtonUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.On Language Settings Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::On_Language_Settings_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.On Language Settings Changed");

	UTBP_UI_Grimoire_C_On_Language_Settings_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RegisterSharedInputs
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::RegisterSharedInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RegisterSharedInputs");

	UTBP_UI_Grimoire_C_RegisterSharedInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.UnregisterSharedInputs
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_C::UnregisterSharedInputs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.UnregisterSharedInputs");

	UTBP_UI_Grimoire_C_UnregisterSharedInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_C::ExecuteUbergraph_TBP_UI_Grimoire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire");

	UTBP_UI_Grimoire_C_ExecuteUbergraph_TBP_UI_Grimoire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
