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
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Refresh Search Bar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_Searchbar_C::Refresh_Search_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Refresh Search Bar");

	UTBP_UI_Grimoire_Searchbar_C_Refresh_Search_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Open Search Bar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_Searchbar_C::Open_Search_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Open Search Bar");

	UTBP_UI_Grimoire_Searchbar_C_Open_Search_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Close Search Bar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_Searchbar_C::Close_Search_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Close Search Bar");

	UTBP_UI_Grimoire_Searchbar_C_Close_Search_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.UpdateSearchList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_Searchbar_C::UpdateSearchList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.UpdateSearchList");

	UTBP_UI_Grimoire_Searchbar_C_UpdateSearchList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_Searchbar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Tick");

	UTBP_UI_Grimoire_Searchbar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Grimoire_Searchbar_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UTBP_UI_Grimoire_Searchbar_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.GetLastestSearchResults
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerGrimoireSearchEntry>           OutSearchResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Grimoire_Searchbar_C::GetLastestSearchResults(TArray<struct FTigerGrimoireSearchEntry> OutSearchResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.GetLastestSearchResults");

	UTBP_UI_Grimoire_Searchbar_C_GetLastestSearchResults_Params params;
	params.OutSearchResults = OutSearchResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UExpandableArea*                             Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_Searchbar_C::BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature");

	UTBP_UI_Grimoire_Searchbar_C_BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature_Params params;
	params.Area = Area;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_Searchbar_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Destruct");

	UTBP_UI_Grimoire_Searchbar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_Searchbar_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UTBP_UI_Grimoire_Searchbar_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_Searchbar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Construct");

	UTBP_UI_Grimoire_Searchbar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.ExecuteUbergraph_TBP_UI_Grimoire_Searchbar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_Searchbar_C::ExecuteUbergraph_TBP_UI_Grimoire_Searchbar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.ExecuteUbergraph_TBP_UI_Grimoire_Searchbar");

	UTBP_UI_Grimoire_Searchbar_C_ExecuteUbergraph_TBP_UI_Grimoire_Searchbar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
