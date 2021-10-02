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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C
// 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_Searchbar_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ExpansionAnim;                                             // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UExpandableArea*                             Area;                                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     BlurBorder;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Panel;                                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     ResultsBorder;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ResultsList;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            SearchBox;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FTigerGrimoireSearchEntry>           CurrentSearchResults;                                      // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bAreResultsPrepared;                                       // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SRW5[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       CurrentInputText;                                          // 0x02E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxSortingIterations;                                      // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InUseOpacity;                                              // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NoUseOpacity;                                              // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CharLimit;                                                 // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOpen;                                                    // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M0GF[0x3];                                     // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FirstEntryTopPadding;                                      // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NoEntriesText;                                             // 0x0310(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Searchbar.TBP_UI_Grimoire_Searchbar_C");
		return ptr;
	}



	void Refresh_Search_Bar();
	void Open_Search_Bar();
	void Close_Search_Bar();
	void UpdateSearchList();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void GetLastestSearchResults(TArray<struct FTigerGrimoireSearchEntry> OutSearchResults);
	void BndEvt__ExpandableArea_570_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
	void Destruct();
	void BndEvt__SearchBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void Construct();
	void ExecuteUbergraph_TBP_UI_Grimoire_Searchbar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
