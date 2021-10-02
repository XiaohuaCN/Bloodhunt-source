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

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ToggleExpansion
struct UTBP_UI_Grimoire_CategoryButton_C_ToggleExpansion_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.MarkEntryAsRead
struct UTBP_UI_Grimoire_CategoryButton_C_MarkEntryAsRead_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.IsParentExpanding
struct UTBP_UI_Grimoire_CategoryButton_C_IsParentExpanding_Params
{
	bool                                               outIsExpanding;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsCategoryButton
struct UTBP_UI_Grimoire_CategoryButton_C_SetHighlightedAsCategoryButton_Params
{
	bool                                               InHighlight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.SetHighlightedAsEntryButton
struct UTBP_UI_Grimoire_CategoryButton_C_SetHighlightedAsEntryButton_Params
{
	bool                                               InHighlight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Unlocked
struct UTBP_UI_Grimoire_CategoryButton_C_Unlocked_Params
{
	bool                                               IsUnlocked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Tick
struct UTBP_UI_Grimoire_CategoryButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Grimoire_CategoryButton_C_BndEvt__CatButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature
struct UTBP_UI_Grimoire_CategoryButton_C_BndEvt__SubEntryArea_K2Node_ComponentBoundEvent_3_OnExpandableAreaExpansionChanged__DelegateSignature_Params
{
	class UExpandableArea*                             Area;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsExpanded;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Grimoire_CategoryButton_C_BndEvt__CatButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Grimoire_CategoryButton_C_BndEvt__CatButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Construct
struct UTBP_UI_Grimoire_CategoryButton_C_Construct_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.Media Loaded
struct UTBP_UI_Grimoire_CategoryButton_C_Media_Loaded_Params
{
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton
struct UTBP_UI_Grimoire_CategoryButton_C_ExecuteUbergraph_TBP_UI_Grimoire_CategoryButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Entry__DelegateSignature
struct UTBP_UI_Grimoire_CategoryButton_C_On_Clicked_Entry__DelegateSignature_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           EntryButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryButton.TBP_UI_Grimoire_CategoryButton_C.On Clicked Category__DelegateSignature
struct UTBP_UI_Grimoire_CategoryButton_C_On_Clicked_Category__DelegateSignature_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
