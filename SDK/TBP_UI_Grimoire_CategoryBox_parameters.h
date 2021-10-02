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

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.AnyExpanding
struct UTBP_UI_Grimoire_CategoryBox_C_AnyExpanding_Params
{
	bool                                               OutExpanding;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseToHighlightedWidget
struct UTBP_UI_Grimoire_CategoryBox_C_MoveMouseToHighlightedWidget_Params
{
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GamepadSelectHoveredEntryButton
struct UTBP_UI_Grimoire_CategoryBox_C_GamepadSelectHoveredEntryButton_Params
{
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHighlightWidgetIndex
struct UTBP_UI_Grimoire_CategoryBox_C_GetHighlightWidgetIndex_Params
{
	int                                                OutIndex;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ChangeSortingOrder
struct UTBP_UI_Grimoire_CategoryBox_C_ChangeSortingOrder_Params
{
	Tiger_ETigerGrimoireSortType                       InSortingOrder;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.FindExpandingWidget
struct UTBP_UI_Grimoire_CategoryBox_C_FindExpandingWidget_Params
{
	TArray<class UWidget*>                             InWidgets;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int                                                OutExpandingIndex;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MouseFollowExpandingWidget
struct UTBP_UI_Grimoire_CategoryBox_C_MouseFollowExpandingWidget_Params
{
	bool                                               MouseMoved;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseInWidgetDirection
struct UTBP_UI_Grimoire_CategoryBox_C_MoveMouseInWidgetDirection_Params
{
	int                                                InDirection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InHoverIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.CalcHoverIndex
struct UTBP_UI_Grimoire_CategoryBox_C_CalcHoverIndex_Params
{
	TArray<class UWidget*>                             InWidgets;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int                                                OutHoverindex;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHoverableWidgetsRecurse
struct UTBP_UI_Grimoire_CategoryBox_C_GetHoverableWidgetsRecurse_Params
{
	TArray<class UWidget*>                             InWidgetList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                             OutVisibleWidgets;                                         // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetLocationWidgets
struct UTBP_UI_Grimoire_CategoryBox_C_GetLocationWidgets_Params
{
	TArray<class UWidget*>                             InWidgetList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                             OutVisibleWidgets;                                         // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfEntry
struct UTBP_UI_Grimoire_CategoryBox_C_SelectButtonOfEntry_Params
{
	struct FString                                     InEntryId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryButton_C*           SelectedCategoryButton;                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfCategory
struct UTBP_UI_Grimoire_CategoryBox_C_SelectButtonOfCategory_Params
{
	class UTigerGrimoireCategory*                      InCategory;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightCategory
struct UTBP_UI_Grimoire_CategoryBox_C_HighlightCategory_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightEntry
struct UTBP_UI_Grimoire_CategoryBox_C_HighlightEntry_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Show Categories
struct UTBP_UI_Grimoire_CategoryBox_C_Show_Categories_Params
{
	class UTigerGrimoireCategory*                      ParentCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Entry Flags
struct UTBP_UI_Grimoire_CategoryBox_C_Get_Entry_Flags_Params
{
	class UTigerPersistentPlayerState*                 InPersistentState;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireEntry*                         InEntry;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEntryUnlocked;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEntryRead;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Category Info
struct UTBP_UI_Grimoire_CategoryBox_C_Get_Category_Info_Params
{
	class UTigerPersistentPlayerState*                 InPersistentState;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      InCategory;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InIncludeSubCategories;                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     IgnoreEntryId;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsUnlocked;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsRead;                                                    // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Out_UnlockedCount;                                         // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Out_NumberOfEntries;                                       // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Entry Widget
struct UTBP_UI_Grimoire_CategoryBox_C_Make_Entry_Widget_Params
{
	class UTigerPersistentPlayerState*                 PersistentState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireEntry*                         Entry;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                InPanelWidget;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryButton_C*           ParentButtonWidget;                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      ParentCat;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryButton_C*           OutCreatedWidget;                                          // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Sub Category Widget
struct UTBP_UI_Grimoire_CategoryBox_C_Make_Sub_Category_Widget_Params
{
	class UPanelWidget*                                ParentPanelWidget;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerPersistentPlayerState*                 InPersistentState;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireCategory*                      InSubCategory;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryButton_C*           OutCreatedWidget;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnOpen
struct UTBP_UI_Grimoire_CategoryBox_C_OnOpen_Params
{
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickCategoryButton
struct UTBP_UI_Grimoire_CategoryBox_C_SelectMenuOnClickCategoryButton_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           SelectedCategoryButton;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickEntryButton
struct UTBP_UI_Grimoire_CategoryBox_C_SelectMenuOnClickEntryButton_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           SelectedCategoryButton;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnInitialized
struct UTBP_UI_Grimoire_CategoryBox_C_OnInitialized_Params
{
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuDownPressed
struct UTBP_UI_Grimoire_CategoryBox_C_MenuDownPressed_Params
{
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuUpPressed
struct UTBP_UI_Grimoire_CategoryBox_C_MenuUpPressed_Params
{
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Tick
struct UTBP_UI_Grimoire_CategoryBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnClose
struct UTBP_UI_Grimoire_CategoryBox_C_OnClose_Params
{
};

// Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox
struct UTBP_UI_Grimoire_CategoryBox_C_ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
