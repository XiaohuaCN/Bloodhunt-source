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
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ResetScroll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_ArticleBox_C::ResetScroll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ResetScroll");

	UTBP_UI_Grimoire_ArticleBox_C_ResetScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleRandom
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         GrimoireEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::AddArticleRandom(class UTigerGrimoireEntry* GrimoireEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleRandom");

	UTBP_UI_Grimoire_ArticleBox_C_AddArticleRandom_Params params;
	params.GrimoireEntry = GrimoireEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetNewArticleEntryIDs
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             EntryIds                                                   (Parm, OutParm)
void UTBP_UI_Grimoire_ArticleBox_C::GetNewArticleEntryIDs(TArray<struct FString>* EntryIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetNewArticleEntryIDs");

	UTBP_UI_Grimoire_ArticleBox_C_GetNewArticleEntryIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryIds != nullptr)
		*EntryIds = params.EntryIds;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleDouble
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         GrimoireEntry1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerGrimoireEntry*                         GrimoireEntry2                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::AddArticleDouble(class UTigerGrimoireEntry* GrimoireEntry1, class UTigerGrimoireEntry* GrimoireEntry2, Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleDouble");

	UTBP_UI_Grimoire_ArticleBox_C_AddArticleDouble_Params params;
	params.GrimoireEntry1 = GrimoireEntry1;
	params.GrimoireEntry2 = GrimoireEntry2;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticle
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         GrimoireEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::AddArticle(class UTigerGrimoireEntry* GrimoireEntry, Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticle");

	UTBP_UI_Grimoire_ArticleBox_C_AddArticle_Params params;
	params.GrimoireEntry = GrimoireEntry;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.CreateArticleLinks
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_C*                          GrimoireUI                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_Grimoire_Landing_C*                  GrimoireLandingUI                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalArticles                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::CreateArticleLinks(class UTBP_UI_Grimoire_C* GrimoireUI, class UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI, int* TotalArticles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.CreateArticleLinks");

	UTBP_UI_Grimoire_ArticleBox_C_CreateArticleLinks_Params params;
	params.GrimoireUI = GrimoireUI;
	params.GrimoireLandingUI = GrimoireLandingUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TotalArticles != nullptr)
		*TotalArticles = params.TotalArticles;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetTestEntries
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             EntryIds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<class UTigerGrimoireEntry*>                 Entries                                                    (Parm, OutParm)
void UTBP_UI_Grimoire_ArticleBox_C::GetTestEntries(TArray<struct FString>* EntryIds, TArray<class UTigerGrimoireEntry*>* Entries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetTestEntries");

	UTBP_UI_Grimoire_ArticleBox_C_GetTestEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryIds != nullptr)
		*EntryIds = params.EntryIds;
	if (Entries != nullptr)
		*Entries = params.Entries;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ClearArticleLinks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_ArticleBox_C::ClearArticleLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ClearArticleLinks");

	UTBP_UI_Grimoire_ArticleBox_C_ClearArticleLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Grimoire_ArticleBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.PreConstruct");

	UTBP_UI_Grimoire_ArticleBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_ArticleBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Construct");

	UTBP_UI_Grimoire_ArticleBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Tick");

	UTBP_UI_Grimoire_ArticleBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ArticleSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     EntryId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::ArticleSelected(const struct FString& EntryId, Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ArticleSelected");

	UTBP_UI_Grimoire_ArticleBox_C_ArticleSelected_Params params;
	params.EntryId = EntryId;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleBox_C::ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox");

	UTBP_UI_Grimoire_ArticleBox_C_ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
