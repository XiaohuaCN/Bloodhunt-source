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
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ToggleExpansion
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryButton_C::ToggleExpansion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ToggleExpansion");

	UTBP_UI_Grimoire_CategoryButton_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.MarkEntryAsRead
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_CategoryButton_C::MarkEntryAsRead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.MarkEntryAsRead");

	UTBP_UI_Grimoire_CategoryButton_C_MarkEntryAsRead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.IsParentExpanding
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               outIsExpanding                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryButton_C::IsParentExpanding(bool* outIsExpanding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.IsParentExpanding");

	UTBP_UI_Grimoire_CategoryButton_C_IsParentExpanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outIsExpanding != nullptr)
		*outIsExpanding = params.outIsExpanding;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsCategoryButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InHighlight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryButton_C::SetHighlightedAsCategoryButton(bool InHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsCategoryButton");

	UTBP_UI_Grimoire_CategoryButton_C_SetHighlightedAsCategoryButton_Params params;
	params.InHighlight = InHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsEntryButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InHighlight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryButton_C::SetHighlightedAsEntryButton(bool InHighlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsEntryButton");

	UTBP_UI_Grimoire_CategoryButton_C_SetHighlightedAsEntryButton_Params params;
	params.InHighlight = InHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Unlocked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsUnlocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryButton_C::Unlocked(bool* IsUnlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Unlocked");

	UTBP_UI_Grimoire_CategoryButton_C_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Tick");

	UTBP_UI_Grimoire_CategoryButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Grimoire_CategoryButton_C_BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UExpandableArea*                             Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature");

	UTBP_UI_Grimoire_CategoryButton_C_BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature_Params params;
	params.Area = Area;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Grimoire_CategoryButton_C_BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_CategoryButton_C::BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Grimoire_CategoryButton_C_BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Construct");

	UTBP_UI_Grimoire_CategoryButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Media Loaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryButton_C::Media_Loaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Media Loaded");

	UTBP_UI_Grimoire_CategoryButton_C_Media_Loaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryButton_C::ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton");

	UTBP_UI_Grimoire_CategoryButton_C_ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Entry__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           EntryButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryButton_C::On_Clicked_Entry__DelegateSignature(class UTBP_UI_Grimoire_CategoryButton_C* EntryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Entry__DelegateSignature");

	UTBP_UI_Grimoire_CategoryButton_C_On_Clicked_Entry__DelegateSignature_Params params;
	params.EntryButton = EntryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Category__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryButton_C::On_Clicked_Category__DelegateSignature(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Category__DelegateSignature");

	UTBP_UI_Grimoire_CategoryButton_C_On_Clicked_Category__DelegateSignature_Params params;
	params.CategoryButton = CategoryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
