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

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateCardAppearance
struct UTBP_UI_Grimoire_ArticleLink_C_UpdateCardAppearance_Params
{
	class UTexture*                                    FrontCardTexture;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         CardBorderRow;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleApperance
struct UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleApperance_Params
{
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleEntry
struct UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleEntry_Params
{
	class UTigerGrimoireEntry*                         GrimoireEntry;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.OnMediaLoaded
struct UTBP_UI_Grimoire_ArticleLink_C_OnMediaLoaded_Params
{
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleImage
struct UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleImage_Params
{
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleType
struct UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleType_Params
{
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleName
struct UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleName_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Tick
struct UTBP_UI_Grimoire_ArticleLink_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Grimoire_ArticleLink_C_BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Grimoire_ArticleLink_C_BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Grimoire_ArticleLink_C_BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Anim Finished
struct UTBP_UI_Grimoire_ArticleLink_C_Anim_Finished_Params
{
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink
struct UTBP_UI_Grimoire_ArticleLink_C_ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ArticleButtonPressed__DelegateSignature
struct UTBP_UI_Grimoire_ArticleLink_C_ArticleButtonPressed__DelegateSignature_Params
{
	struct FString                                     EntryId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	Tiger_ETigerGrimoireArticleType                    ArticleType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
