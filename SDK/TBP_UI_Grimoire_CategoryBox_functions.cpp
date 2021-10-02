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
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.AnyExpanding
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               OutExpanding                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryBox_C::AnyExpanding(bool* OutExpanding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.AnyExpanding");

	UTBP_UI_Grimoire_CategoryBox_C_AnyExpanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutExpanding != nullptr)
		*OutExpanding = params.OutExpanding;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseToHighlightedWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_CategoryBox_C::MoveMouseToHighlightedWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseToHighlightedWidget");

	UTBP_UI_Grimoire_CategoryBox_C_MoveMouseToHighlightedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GamepadSelectHoveredEntryButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_CategoryBox_C::GamepadSelectHoveredEntryButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GamepadSelectHoveredEntryButton");

	UTBP_UI_Grimoire_CategoryBox_C_GamepadSelectHoveredEntryButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHighlightWidgetIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::GetHighlightWidgetIndex(int* OutIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHighlightWidgetIndex");

	UTBP_UI_Grimoire_CategoryBox_C_GetHighlightWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ChangeSortingOrder
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerGrimoireSortType                       InSortingOrder                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::ChangeSortingOrder(Tiger_ETigerGrimoireSortType InSortingOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ChangeSortingOrder");

	UTBP_UI_Grimoire_CategoryBox_C_ChangeSortingOrder_Params params;
	params.InSortingOrder = InSortingOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.FindExpandingWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             InWidgets                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		int                                                OutExpandingIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::FindExpandingWidget(TArray<class UWidget*>* InWidgets, int* OutExpandingIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.FindExpandingWidget");

	UTBP_UI_Grimoire_CategoryBox_C_FindExpandingWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
	if (OutExpandingIndex != nullptr)
		*OutExpandingIndex = params.OutExpandingIndex;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MouseFollowExpandingWidget
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               MouseMoved                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryBox_C::MouseFollowExpandingWidget(bool* MouseMoved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MouseFollowExpandingWidget");

	UTBP_UI_Grimoire_CategoryBox_C_MouseFollowExpandingWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MouseMoved != nullptr)
		*MouseMoved = params.MouseMoved;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseInWidgetDirection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InHoverIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::MoveMouseInWidgetDirection(int InDirection, int InHoverIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MoveMouseInWidgetDirection");

	UTBP_UI_Grimoire_CategoryBox_C_MoveMouseInWidgetDirection_Params params;
	params.InDirection = InDirection;
	params.InHoverIndex = InHoverIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.CalcHoverIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             InWidgets                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		int                                                OutHoverindex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::CalcHoverIndex(TArray<class UWidget*>* InWidgets, int* OutHoverindex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.CalcHoverIndex");

	UTBP_UI_Grimoire_CategoryBox_C_CalcHoverIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
	if (OutHoverindex != nullptr)
		*OutHoverindex = params.OutHoverindex;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHoverableWidgetsRecurse
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             InWidgetList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		TArray<class UWidget*>                             OutVisibleWidgets                                          (Parm, OutParm, ContainsInstancedReference)
void UTBP_UI_Grimoire_CategoryBox_C::GetHoverableWidgetsRecurse(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetHoverableWidgetsRecurse");

	UTBP_UI_Grimoire_CategoryBox_C_GetHoverableWidgetsRecurse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWidgetList != nullptr)
		*InWidgetList = params.InWidgetList;
	if (OutVisibleWidgets != nullptr)
		*OutVisibleWidgets = params.OutVisibleWidgets;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetLocationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             InWidgetList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		TArray<class UWidget*>                             OutVisibleWidgets                                          (Parm, OutParm, ContainsInstancedReference)
void UTBP_UI_Grimoire_CategoryBox_C::GetLocationWidgets(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.GetLocationWidgets");

	UTBP_UI_Grimoire_CategoryBox_C_GetLocationWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWidgetList != nullptr)
		*InWidgetList = params.InWidgetList;
	if (OutVisibleWidgets != nullptr)
		*OutVisibleWidgets = params.OutVisibleWidgets;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfEntry
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UTBP_UI_Grimoire_CategoryButton_C*           SelectedCategoryButton                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::SelectButtonOfEntry(const struct FString& InEntryId, class UTBP_UI_Grimoire_CategoryButton_C** SelectedCategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfEntry");

	UTBP_UI_Grimoire_CategoryBox_C_SelectButtonOfEntry_Params params;
	params.InEntryId = InEntryId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedCategoryButton != nullptr)
		*SelectedCategoryButton = params.SelectedCategoryButton;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfCategory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::SelectButtonOfCategory(class UTigerGrimoireCategory* InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectButtonOfCategory");

	UTBP_UI_Grimoire_CategoryBox_C_SelectButtonOfCategory_Params params;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightCategory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::HighlightCategory(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightCategory");

	UTBP_UI_Grimoire_CategoryBox_C_HighlightCategory_Params params;
	params.CategoryButton = CategoryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightEntry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::HighlightEntry(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.HighlightEntry");

	UTBP_UI_Grimoire_CategoryBox_C_HighlightEntry_Params params;
	params.CategoryButton = CategoryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Show Categories
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      ParentCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::Show_Categories(class UTigerGrimoireCategory* ParentCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Show Categories");

	UTBP_UI_Grimoire_CategoryBox_C_Show_Categories_Params params;
	params.ParentCategory = ParentCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Entry Flags
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPersistentPlayerState*                 InPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerGrimoireEntry*                         InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEntryUnlocked                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsEntryRead                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_CategoryBox_C::Get_Entry_Flags(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireEntry* InEntry, bool* IsEntryUnlocked, bool* IsEntryRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Entry Flags");

	UTBP_UI_Grimoire_CategoryBox_C_Get_Entry_Flags_Params params;
	params.InPersistentState = InPersistentState;
	params.InEntry = InEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEntryUnlocked != nullptr)
		*IsEntryUnlocked = params.IsEntryUnlocked;
	if (IsEntryRead != nullptr)
		*IsEntryRead = params.IsEntryRead;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Category Info
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPersistentPlayerState*                 InPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerGrimoireCategory*                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InIncludeSubCategories                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     IgnoreEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsUnlocked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsRead                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Out_UnlockedCount                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Out_NumberOfEntries                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::Get_Category_Info(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InCategory, bool InIncludeSubCategories, const struct FString& IgnoreEntryId, bool* IsUnlocked, bool* IsRead, int* Out_UnlockedCount, int* Out_NumberOfEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Get Category Info");

	UTBP_UI_Grimoire_CategoryBox_C_Get_Category_Info_Params params;
	params.InPersistentState = InPersistentState;
	params.InCategory = InCategory;
	params.InIncludeSubCategories = InIncludeSubCategories;
	params.IgnoreEntryId = IgnoreEntryId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
	if (IsRead != nullptr)
		*IsRead = params.IsRead;
	if (Out_UnlockedCount != nullptr)
		*Out_UnlockedCount = params.Out_UnlockedCount;
	if (Out_NumberOfEntries != nullptr)
		*Out_NumberOfEntries = params.Out_NumberOfEntries;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Entry Widget
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPersistentPlayerState*                 PersistentState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerGrimoireEntry*                         Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPanelWidget*                                InPanelWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_Grimoire_CategoryButton_C*           ParentButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerGrimoireCategory*                      ParentCat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_Grimoire_CategoryButton_C*           OutCreatedWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::Make_Entry_Widget(class UTigerPersistentPlayerState* PersistentState, class UTigerGrimoireEntry* Entry, class UPanelWidget* InPanelWidget, class UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget, class UTigerGrimoireCategory* ParentCat, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Entry Widget");

	UTBP_UI_Grimoire_CategoryBox_C_Make_Entry_Widget_Params params;
	params.PersistentState = PersistentState;
	params.Entry = Entry;
	params.InPanelWidget = InPanelWidget;
	params.ParentButtonWidget = ParentButtonWidget;
	params.ParentCat = ParentCat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCreatedWidget != nullptr)
		*OutCreatedWidget = params.OutCreatedWidget;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Sub Category Widget
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPanelWidget*                                ParentPanelWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerPersistentPlayerState*                 InPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerGrimoireCategory*                      InSubCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_Grimoire_CategoryButton_C*           OutCreatedWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::Make_Sub_Category_Widget(class UPanelWidget* ParentPanelWidget, class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InSubCategory, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Make Sub Category Widget");

	UTBP_UI_Grimoire_CategoryBox_C_Make_Sub_Category_Widget_Params params;
	params.ParentPanelWidget = ParentPanelWidget;
	params.InPersistentState = InPersistentState;
	params.InSubCategory = InSubCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCreatedWidget != nullptr)
		*OutCreatedWidget = params.OutCreatedWidget;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnOpen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_C*                          GrimoireUI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnOpen");

	UTBP_UI_Grimoire_CategoryBox_C_OnOpen_Params params;
	params.GrimoireUI = GrimoireUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickCategoryButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           SelectedCategoryButton                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickCategoryButton");

	UTBP_UI_Grimoire_CategoryBox_C_SelectMenuOnClickCategoryButton_Params params;
	params.SelectedCategoryButton = SelectedCategoryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickEntryButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_CategoryButton_C*           SelectedCategoryButton                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.SelectMenuOnClickEntryButton");

	UTBP_UI_Grimoire_CategoryBox_C_SelectMenuOnClickEntryButton_Params params;
	params.SelectedCategoryButton = SelectedCategoryButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryBox_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnInitialized");

	UTBP_UI_Grimoire_CategoryBox_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuDownPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryBox_C::MenuDownPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuDownPressed");

	UTBP_UI_Grimoire_CategoryBox_C_MenuDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuUpPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryBox_C::MenuUpPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.MenuUpPressed");

	UTBP_UI_Grimoire_CategoryBox_C_MenuUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.Tick");

	UTBP_UI_Grimoire_CategoryBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_CategoryBox_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.OnClose");

	UTBP_UI_Grimoire_CategoryBox_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_CategoryBox_C::ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C.ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox");

	UTBP_UI_Grimoire_CategoryBox_C_ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
