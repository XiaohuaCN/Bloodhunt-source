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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C
// 0x00C8 (FullSize[0x0348] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_InfoBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerStyledRichTextBlock*                   GameplayText;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_119;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                InfoContainer;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_InfoLocked_C*               InfoLocked;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  InfoScrollBox;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   LockedSummaryText;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher;                                                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider_2;                                          // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_112;                              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Title;                                                     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TitleImage;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    TitleImageBox;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                UnlockedBox;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   UnlockedPartsText;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsDisplayed;                                               // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XLS2[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DefaultLockedBodyText;                                     // 0x0308(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTigerGrimoireTree*                          GrimoireTree;                                              // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoScroll;                                                // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J4FA[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerWidget*                                WidgetToScrollIntoView;                                    // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireEntry*                         CurrentEntry;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Scrollable;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6WN9[0x3];                                     // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InfoScrollTime;                                            // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C");
		return ptr;
	}



	void FormatUnlockedPartsText(const struct FText& InEntriesUnlocked, int InUnlockedNo, int InTotalNo, struct FText* OutResult);
	void Get_Entry_Description(class UTigerGrimoireEntry* InEntry, struct FText* Out_Text);
	void AddChildToInfoContainer(class UTBP_UI_Grimoire_InfoTextBlock_C* NewParam);
	void OnTitleImageLoaded();
	void StringStripHead(const struct FString& inString, const struct FString& InPattern, struct FString* OutString);
	void StringStripTail(const struct FString& inString, const struct FString& InPattern, struct FString* OutString);
	void GetLastInfoBlock(class UTBP_UI_Grimoire_InfoTextBlock_C** OutLastTextBlock);
	void AppendToInfoTextBlock(class UTBP_UI_Grimoire_InfoTextBlock_C* InInfoTextBlock, const struct FText& InText);
	void Clear_Info_Text();
	void CreateInfoTextHeading(const struct FText& InText, bool InIsRead);
	void CreateInfoTextSpacer(const struct FText& InText);
	void CreateInfoTextBlock(const struct FText& InLoreText, const struct FText& InHeadingText, bool InIsRead, bool InAllowSpacers, class UTBP_UI_Grimoire_InfoTextBlock_C** OutWidget);
	void GetCategoryEntriesUnlockedAndTotal(class UTigerGrimoireCategory* Category, int* UnlockedCount, int* TotalCount);
	void UpdateUnlockedPartsText(int UnlockedNo, int TotalNo, bool IsSubCategory);
	void IsEntryInfoPartLocked(class UTigerGrimoireEntry* Entry, bool* IsLocked);
	void ShowSectionsLocked(const struct FText& UnlockInfo);
	void ShowSubCategory(class UTigerGrimoireCategory* InCategory);
	void ShowLockedBody();
	void IsShown(bool* ShowStatus);
	void ShowUnlockedBody();
	void UpdateTitleText(const struct FText& EntryName);
	void Hide();
	void Show(bool Unlocked, class UTigerGrimoireEntry* SelectedEntry);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_Grimoire_InfoBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
