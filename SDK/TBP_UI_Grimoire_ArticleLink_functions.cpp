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
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateCardAppearance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture*                                    FrontCardTexture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         CardBorderRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UTBP_UI_Grimoire_ArticleLink_C::UpdateCardAppearance(class UTexture* FrontCardTexture, const struct FDataTableRowHandle& CardBorderRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateCardAppearance");

	UTBP_UI_Grimoire_ArticleLink_C_UpdateCardAppearance_Params params;
	params.FrontCardTexture = FrontCardTexture;
	params.CardBorderRow = CardBorderRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleApperance
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleApperance(Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleApperance");

	UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleApperance_Params params;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         GrimoireEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleEntry(class UTigerGrimoireEntry* GrimoireEntry, Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleEntry");

	UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleEntry_Params params;
	params.GrimoireEntry = GrimoireEntry;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.OnMediaLoaded
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_ArticleLink_C::OnMediaLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.OnMediaLoaded");

	UTBP_UI_Grimoire_ArticleLink_C_OnMediaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleImage
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleImage");

	UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleType
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleType(Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleType");

	UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleType_Params params;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleName
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Grimoire_ArticleLink_C::UpdateArticleName(const struct FText& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.UpdateArticleName");

	UTBP_UI_Grimoire_ArticleLink_C_UpdateArticleName_Params params;
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleLink_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Tick");

	UTBP_UI_Grimoire_ArticleLink_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_ArticleLink_C::BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Grimoire_ArticleLink_C_BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_ArticleLink_C::BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Grimoire_ArticleLink_C_BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Grimoire_ArticleLink_C::BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Grimoire_ArticleLink_C_BndEvt__FeaturedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Anim Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_ArticleLink_C::Anim_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.Anim Finished");

	UTBP_UI_Grimoire_ArticleLink_C_Anim_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleLink_C::ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink");

	UTBP_UI_Grimoire_ArticleLink_C_ExecuteUbergraph_TBP_UI_Grimoire_ArticleLink_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ArticleButtonPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     EntryId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		Tiger_ETigerGrimoireArticleType                    ArticleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_ArticleLink_C::ArticleButtonPressed__DelegateSignature(const struct FString& EntryId, Tiger_ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink.TBP_UI_Grimoire_ArticleLink_C.ArticleButtonPressed__DelegateSignature");

	UTBP_UI_Grimoire_ArticleLink_C_ArticleButtonPressed__DelegateSignature_Params params;
	params.EntryId = EntryId;
	params.ArticleType = ArticleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
