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

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ResetScroll
struct UTBP_UI_Grimoire_ArticleBox_C_ResetScroll_Params
{
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleRandom
struct UTBP_UI_Grimoire_ArticleBox_C_AddArticleRandom_Params
{
	class UTigerGrimoireEntry*                         GrimoireEntry;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetNewArticleEntryIDs
struct UTBP_UI_Grimoire_ArticleBox_C_GetNewArticleEntryIDs_Params
{
	TArray<struct FString>                             EntryIds;                                                  // 0x0000(0x0010)  (Parm, OutParm)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleDouble
struct UTBP_UI_Grimoire_ArticleBox_C_AddArticleDouble_Params
{
	class UTigerGrimoireEntry*                         GrimoireEntry1;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerGrimoireEntry*                         GrimoireEntry2;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticle
struct UTBP_UI_Grimoire_ArticleBox_C_AddArticle_Params
{
	class UTigerGrimoireEntry*                         GrimoireEntry;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.CreateArticleLinks
struct UTBP_UI_Grimoire_ArticleBox_C_CreateArticleLinks_Params
{
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_Landing_C*                  GrimoireLandingUI;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalArticles;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetTestEntries
struct UTBP_UI_Grimoire_ArticleBox_C_GetTestEntries_Params
{
	TArray<struct FString>                             EntryIds;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UTigerGrimoireEntry*>                 Entries;                                                   // 0x0010(0x0010)  (Parm, OutParm)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ClearArticleLinks
struct UTBP_UI_Grimoire_ArticleBox_C_ClearArticleLinks_Params
{
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.PreConstruct
struct UTBP_UI_Grimoire_ArticleBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Construct
struct UTBP_UI_Grimoire_ArticleBox_C_Construct_Params
{
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Tick
struct UTBP_UI_Grimoire_ArticleBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ArticleSelected
struct UTBP_UI_Grimoire_ArticleBox_C_ArticleSelected_Params
{
	struct FString                                     EntryId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox
struct UTBP_UI_Grimoire_ArticleBox_C_ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
