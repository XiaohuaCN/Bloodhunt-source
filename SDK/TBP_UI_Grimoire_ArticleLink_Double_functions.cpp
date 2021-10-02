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
//		Name   -> Function TBP_UI_Grimoire_ArticleLink_Double.TBP_UI_Grimoire_ArticleLink_Double_C.HideArticleLink2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_ArticleLink_Double_C::HideArticleLink2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_ArticleLink_Double.TBP_UI_Grimoire_ArticleLink_Double_C.HideArticleLink2");

	UTBP_UI_Grimoire_ArticleLink_Double_C_HideArticleLink2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
