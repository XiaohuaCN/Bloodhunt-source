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
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.FormatUnlockedPartsText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InEntriesUnlocked                                          (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                InUnlockedNo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InTotalNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OutResult                                                  (Parm, OutParm)
void UTBP_UI_Grimoire_InfoBox_C::FormatUnlockedPartsText(const struct FText& InEntriesUnlocked, int InUnlockedNo, int InTotalNo, struct FText* OutResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.FormatUnlockedPartsText");

	UTBP_UI_Grimoire_InfoBox_C_FormatUnlockedPartsText_Params params;
	params.InEntriesUnlocked = InEntriesUnlocked;
	params.InUnlockedNo = InUnlockedNo;
	params.InTotalNo = InTotalNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Get Entry Description
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Out_Text                                                   (Parm, OutParm)
void UTBP_UI_Grimoire_InfoBox_C::Get_Entry_Description(class UTigerGrimoireEntry* InEntry, struct FText* Out_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Get Entry Description");

	UTBP_UI_Grimoire_InfoBox_C_Get_Entry_Description_Params params;
	params.InEntry = InEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Text != nullptr)
		*Out_Text = params.Out_Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AddChildToInfoContainer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_InfoTextBlock_C*            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::AddChildToInfoContainer(class UTBP_UI_Grimoire_InfoTextBlock_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AddChildToInfoContainer");

	UTBP_UI_Grimoire_InfoBox_C_AddChildToInfoContainer_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.OnTitleImageLoaded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_InfoBox_C::OnTitleImageLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.OnTitleImageLoaded");

	UTBP_UI_Grimoire_InfoBox_C_OnTitleImageLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripHead
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     InPattern                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::StringStripHead(const struct FString& inString, const struct FString& InPattern, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripHead");

	UTBP_UI_Grimoire_InfoBox_C_StringStripHead_Params params;
	params.inString = inString;
	params.InPattern = InPattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripTail
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     InPattern                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::StringStripTail(const struct FString& inString, const struct FString& InPattern, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.StringStripTail");

	UTBP_UI_Grimoire_InfoBox_C_StringStripTail_Params params;
	params.inString = inString;
	params.InPattern = InPattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetLastInfoBlock
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_InfoTextBlock_C*            OutLastTextBlock                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::GetLastInfoBlock(class UTBP_UI_Grimoire_InfoTextBlock_C** OutLastTextBlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetLastInfoBlock");

	UTBP_UI_Grimoire_InfoBox_C_GetLastInfoBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLastTextBlock != nullptr)
		*OutLastTextBlock = params.OutLastTextBlock;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AppendToInfoTextBlock
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_InfoTextBlock_C*            InInfoTextBlock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Grimoire_InfoBox_C::AppendToInfoTextBlock(class UTBP_UI_Grimoire_InfoTextBlock_C* InInfoTextBlock, const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.AppendToInfoTextBlock");

	UTBP_UI_Grimoire_InfoBox_C_AppendToInfoTextBlock_Params params;
	params.InInfoTextBlock = InInfoTextBlock;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Clear Info Text
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_InfoBox_C::Clear_Info_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Clear Info Text");

	UTBP_UI_Grimoire_InfoBox_C_Clear_Info_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextHeading
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               InIsRead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_InfoBox_C::CreateInfoTextHeading(const struct FText& InText, bool InIsRead)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextHeading");

	UTBP_UI_Grimoire_InfoBox_C_CreateInfoTextHeading_Params params;
	params.InText = InText;
	params.InIsRead = InIsRead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextSpacer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Grimoire_InfoBox_C::CreateInfoTextSpacer(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextSpacer");

	UTBP_UI_Grimoire_InfoBox_C_CreateInfoTextSpacer_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextBlock
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InLoreText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InHeadingText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               InIsRead                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InAllowSpacers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTBP_UI_Grimoire_InfoTextBlock_C*            OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::CreateInfoTextBlock(const struct FText& InLoreText, const struct FText& InHeadingText, bool InIsRead, bool InAllowSpacers, class UTBP_UI_Grimoire_InfoTextBlock_C** OutWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.CreateInfoTextBlock");

	UTBP_UI_Grimoire_InfoBox_C_CreateInfoTextBlock_Params params;
	params.InLoreText = InLoreText;
	params.InHeadingText = InHeadingText;
	params.InIsRead = InIsRead;
	params.InAllowSpacers = InAllowSpacers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetCategoryEntriesUnlockedAndTotal
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                UnlockedCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::GetCategoryEntriesUnlockedAndTotal(class UTigerGrimoireCategory* Category, int* UnlockedCount, int* TotalCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.GetCategoryEntriesUnlockedAndTotal");

	UTBP_UI_Grimoire_InfoBox_C_GetCategoryEntriesUnlockedAndTotal_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UnlockedCount != nullptr)
		*UnlockedCount = params.UnlockedCount;
	if (TotalCount != nullptr)
		*TotalCount = params.TotalCount;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateUnlockedPartsText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                UnlockedNo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalNo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSubCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_InfoBox_C::UpdateUnlockedPartsText(int UnlockedNo, int TotalNo, bool IsSubCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateUnlockedPartsText");

	UTBP_UI_Grimoire_InfoBox_C_UpdateUnlockedPartsText_Params params;
	params.UnlockedNo = UnlockedNo;
	params.TotalNo = TotalNo;
	params.IsSubCategory = IsSubCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsEntryInfoPartLocked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsLocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_InfoBox_C::IsEntryInfoPartLocked(class UTigerGrimoireEntry* Entry, bool* IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsEntryInfoPartLocked");

	UTBP_UI_Grimoire_InfoBox_C_IsEntryInfoPartLocked_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSectionsLocked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       UnlockInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Grimoire_InfoBox_C::ShowSectionsLocked(const struct FText& UnlockInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSectionsLocked");

	UTBP_UI_Grimoire_InfoBox_C_ShowSectionsLocked_Params params;
	params.UnlockInfo = UnlockInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSubCategory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      InCategory                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::ShowSubCategory(class UTigerGrimoireCategory* InCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowSubCategory");

	UTBP_UI_Grimoire_InfoBox_C_ShowSubCategory_Params params;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowLockedBody
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_InfoBox_C::ShowLockedBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowLockedBody");

	UTBP_UI_Grimoire_InfoBox_C_ShowLockedBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsShown
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowStatus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_InfoBox_C::IsShown(bool* ShowStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.IsShown");

	UTBP_UI_Grimoire_InfoBox_C_IsShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShowStatus != nullptr)
		*ShowStatus = params.ShowStatus;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowUnlockedBody
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_InfoBox_C::ShowUnlockedBody()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ShowUnlockedBody");

	UTBP_UI_Grimoire_InfoBox_C_ShowUnlockedBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateTitleText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Grimoire_InfoBox_C::UpdateTitleText(const struct FText& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.UpdateTitleText");

	UTBP_UI_Grimoire_InfoBox_C_UpdateTitleText_Params params;
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_InfoBox_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Hide");

	UTBP_UI_Grimoire_InfoBox_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTigerGrimoireEntry*                         SelectedEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::Show(bool Unlocked, class UTigerGrimoireEntry* SelectedEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Show");

	UTBP_UI_Grimoire_InfoBox_C_Show_Params params;
	params.Unlocked = Unlocked;
	params.SelectedEntry = SelectedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_InfoBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Construct");

	UTBP_UI_Grimoire_InfoBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.Tick");

	UTBP_UI_Grimoire_InfoBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_InfoBox_C::ExecuteUbergraph_TBP_UI_Grimoire_InfoBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_InfoBox.TBP_UI_Grimoire_InfoBox_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoBox");

	UTBP_UI_Grimoire_InfoBox_C_ExecuteUbergraph_TBP_UI_Grimoire_InfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
