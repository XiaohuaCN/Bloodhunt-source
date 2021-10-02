#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Refresh Search Bar
struct UTBP_UI_Grimoire_Searchbar_C_Refresh_Search_Bar_Params
{
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Open Search Bar
struct UTBP_UI_Grimoire_Searchbar_C_Open_Search_Bar_Params
{
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Close Search Bar
struct UTBP_UI_Grimoire_Searchbar_C_Close_Search_Bar_Params
{
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.UpdateSearchList
struct UTBP_UI_Grimoire_Searchbar_C_UpdateSearchList_Params
{
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Tick
struct UTBP_UI_Grimoire_Searchbar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UTBP_UI_Grimoire_Searchbar_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.GetLastestSearchResults
struct UTBP_UI_Grimoire_Searchbar_C_GetLastestSearchResults_Params
{
	TArray<struct FTigerGrimoireSearchEntry>           OutSearchResults;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature
struct UTBP_UI_Grimoire_Searchbar_C_BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature_Params
{
	class UExpandableArea*                             Area;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsExpanded;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Destruct
struct UTBP_UI_Grimoire_Searchbar_C_Destruct_Params
{
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UTBP_UI_Grimoire_Searchbar_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.Construct
struct UTBP_UI_Grimoire_Searchbar_C_Construct_Params
{
};

// Function TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C.ExecuteUbergraph_TBP_UI_Grimoire_Searchbar
struct UTBP_UI_Grimoire_Searchbar_C_ExecuteUbergraph_TBP_UI_Grimoire_Searchbar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
