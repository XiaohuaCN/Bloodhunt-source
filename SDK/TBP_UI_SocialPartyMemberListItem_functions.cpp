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
//		Name   -> Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnEntryReleased
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SocialPartyMemberListItem_C::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnEntryReleased");

	UTBP_UI_SocialPartyMemberListItem_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemExpansionChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SocialPartyMemberListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemExpansionChanged");

	UTBP_UI_SocialPartyMemberListItem_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemSelectionChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SocialPartyMemberListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemSelectionChanged");

	UTBP_UI_SocialPartyMemberListItem_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnListItemObjectSet
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SocialPartyMemberListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnListItemObjectSet");

	UTBP_UI_SocialPartyMemberListItem_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SocialPartyMemberListItem_C::ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem");

	UTBP_UI_SocialPartyMemberListItem_C_ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
