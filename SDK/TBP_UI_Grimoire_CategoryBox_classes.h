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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C
// 0x007A (FullSize[0x02FA] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_CategoryBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                CategoryBox;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  CategoryScrollBox;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_CategoryBox_Filter_C*       SortDropDown;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider_43;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TitleTextBlock;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerGrimoireTree*                          Tree;                                                      // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUnlocked;                                                // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               hasBeenRead;                                               // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I54B[0x2];                                     // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCoreUObject_FColor                         UnreadColor;                                               // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RootCatTotalEntryCount;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RootCatUnlockedEntryCount;                                 // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CategoryScrollTime;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EU99[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     ScrollViewWidget;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Scrollable;                                                // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	Tiger_ETigerGrimoireSortType                       CurrentSortingOrder;                                       // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UZQF[0x6];                                     // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireCategory*                      CurrentParentCategory;                                     // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bGamepadDpadMoved;                                         // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bGamepadJumpToEntry;                                       // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_CategoryBox.TBP_UI_Grimoire_CategoryBox_C");
		return ptr;
	}



	void AnyExpanding(bool* OutExpanding);
	void MoveMouseToHighlightedWidget();
	void GamepadSelectHoveredEntryButton();
	void GetHighlightWidgetIndex(int* OutIndex);
	void ChangeSortingOrder(Tiger_ETigerGrimoireSortType InSortingOrder);
	void FindExpandingWidget(TArray<class UWidget*>* InWidgets, int* OutExpandingIndex);
	void MouseFollowExpandingWidget(bool* MouseMoved);
	void MoveMouseInWidgetDirection(int InDirection, int InHoverIndex);
	void CalcHoverIndex(TArray<class UWidget*>* InWidgets, int* OutHoverindex);
	void GetHoverableWidgetsRecurse(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets);
	void GetLocationWidgets(TArray<class UWidget*>* InWidgetList, TArray<class UWidget*>* OutVisibleWidgets);
	void SelectButtonOfEntry(const struct FString& InEntryId, class UTBP_UI_Grimoire_CategoryButton_C** SelectedCategoryButton);
	void SelectButtonOfCategory(class UTigerGrimoireCategory* InCategory);
	void HighlightCategory(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton);
	void HighlightEntry(class UTBP_UI_Grimoire_CategoryButton_C* CategoryButton);
	void Show_Categories(class UTigerGrimoireCategory* ParentCategory);
	void Get_Entry_Flags(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireEntry* InEntry, bool* IsEntryUnlocked, bool* IsEntryRead);
	void Get_Category_Info(class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InCategory, bool InIncludeSubCategories, const struct FString& IgnoreEntryId, bool* IsUnlocked, bool* IsRead, int* Out_UnlockedCount, int* Out_NumberOfEntries);
	void Make_Entry_Widget(class UTigerPersistentPlayerState* PersistentState, class UTigerGrimoireEntry* Entry, class UPanelWidget* InPanelWidget, class UTBP_UI_Grimoire_CategoryButton_C* ParentButtonWidget, class UTigerGrimoireCategory* ParentCat, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget);
	void Make_Sub_Category_Widget(class UPanelWidget* ParentPanelWidget, class UTigerPersistentPlayerState* InPersistentState, class UTigerGrimoireCategory* InSubCategory, class UTBP_UI_Grimoire_CategoryButton_C** OutCreatedWidget);
	void OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI);
	void SelectMenuOnClickCategoryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton);
	void SelectMenuOnClickEntryButton(class UTBP_UI_Grimoire_CategoryButton_C* SelectedCategoryButton);
	void OnInitialized();
	void MenuDownPressed();
	void MenuUpPressed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnClose();
	void ExecuteUbergraph_TBP_UI_Grimoire_CategoryBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
