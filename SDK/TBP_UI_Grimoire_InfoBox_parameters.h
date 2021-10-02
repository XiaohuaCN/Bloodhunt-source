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

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.FormatUnlockedPartsText
struct UTBP_UI_Grimoire_InfoBox_C_FormatUnlockedPartsText_Params
{
	struct FText                                       InEntriesUnlocked;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InUnlockedNo;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InTotalNo;                                                 // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutResult;                                                 // 0x0020(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Get Entry Description
struct UTBP_UI_Grimoire_InfoBox_C_Get_Entry_Description_Params
{
	class UTigerGrimoireEntry*                         InEntry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out_Text;                                                  // 0x0008(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AddChildToInfoContainer
struct UTBP_UI_Grimoire_InfoBox_C_AddChildToInfoContainer_Params
{
	class UTBP_UI_Grimoire_InfoTextBlock_C*            NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.OnTitleImageLoaded
struct UTBP_UI_Grimoire_InfoBox_C_OnTitleImageLoaded_Params
{
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripHead
struct UTBP_UI_Grimoire_InfoBox_C_StringStripHead_Params
{
	struct FString                                     inString;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     InPattern;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OutString;                                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripTail
struct UTBP_UI_Grimoire_InfoBox_C_StringStripTail_Params
{
	struct FString                                     inString;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     InPattern;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     OutString;                                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetLastInfoBlock
struct UTBP_UI_Grimoire_InfoBox_C_GetLastInfoBlock_Params
{
	class UTBP_UI_Grimoire_InfoTextBlock_C*            OutLastTextBlock;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AppendToInfoTextBlock
struct UTBP_UI_Grimoire_InfoBox_C_AppendToInfoTextBlock_Params
{
	class UTBP_UI_Grimoire_InfoTextBlock_C*            InInfoTextBlock;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InText;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Clear Info Text
struct UTBP_UI_Grimoire_InfoBox_C_Clear_Info_Text_Params
{
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextHeading
struct UTBP_UI_Grimoire_InfoBox_C_CreateInfoTextHeading_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               InIsRead;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextSpacer
struct UTBP_UI_Grimoire_InfoBox_C_CreateInfoTextSpacer_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextBlock
struct UTBP_UI_Grimoire_InfoBox_C_CreateInfoTextBlock_Params
{
	struct FText                                       InLoreText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InHeadingText;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               InIsRead;                                                  // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InAllowSpacers;                                            // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTBP_UI_Grimoire_InfoTextBlock_C*            OutWidget;                                                 // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetCategoryEntriesUnlockedAndTotal
struct UTBP_UI_Grimoire_InfoBox_C_GetCategoryEntriesUnlockedAndTotal_Params
{
	class UTigerGrimoireCategory*                      Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UnlockedCount;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalCount;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateUnlockedPartsText
struct UTBP_UI_Grimoire_InfoBox_C_UpdateUnlockedPartsText_Params
{
	int                                                UnlockedNo;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalNo;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSubCategory;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsEntryInfoPartLocked
struct UTBP_UI_Grimoire_InfoBox_C_IsEntryInfoPartLocked_Params
{
	class UTigerGrimoireEntry*                         Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLocked;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSectionsLocked
struct UTBP_UI_Grimoire_InfoBox_C_ShowSectionsLocked_Params
{
	struct FText                                       UnlockInfo;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSubCategory
struct UTBP_UI_Grimoire_InfoBox_C_ShowSubCategory_Params
{
	class UTigerGrimoireCategory*                      InCategory;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowLockedBody
struct UTBP_UI_Grimoire_InfoBox_C_ShowLockedBody_Params
{
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsShown
struct UTBP_UI_Grimoire_InfoBox_C_IsShown_Params
{
	bool                                               ShowStatus;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowUnlockedBody
struct UTBP_UI_Grimoire_InfoBox_C_ShowUnlockedBody_Params
{
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateTitleText
struct UTBP_UI_Grimoire_InfoBox_C_UpdateTitleText_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Hide
struct UTBP_UI_Grimoire_InfoBox_C_Hide_Params
{
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Show
struct UTBP_UI_Grimoire_InfoBox_C_Show_Params
{
	bool                                               Unlocked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTigerGrimoireEntry*                         SelectedEntry;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Construct
struct UTBP_UI_Grimoire_InfoBox_C_Construct_Params
{
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Tick
struct UTBP_UI_Grimoire_InfoBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoBox
struct UTBP_UI_Grimoire_InfoBox_C_ExecuteUbergraph_TBP_UI_Grimoire_InfoBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
