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
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplayLoreText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ParagraphText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       SubheaderText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               FadeInText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Tutorial_IntroText_C::DisplayLoreText(const struct FText& ParagraphText, const struct FText& SubheaderText, const struct FText& TitleText, bool FadeInText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplayLoreText");

	UTBP_UI_Tutorial_IntroText_C_DisplayLoreText_Params params;
	params.ParagraphText = ParagraphText;
	params.SubheaderText = SubheaderText;
	params.TitleText = TitleText;
	params.FadeInText = FadeInText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplaySimpleText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               FadeInText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Tutorial_IntroText_C::DisplaySimpleText(const struct FText& Text, bool FadeInText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplaySimpleText");

	UTBP_UI_Tutorial_IntroText_C_DisplaySimpleText_Params params;
	params.Text = Text;
	params.FadeInText = FadeInText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_FCE6245B4381C41C23D6B9AC1B912BF8
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Tutorial_IntroText_C::Finished_FCE6245B4381C41C23D6B9AC1B912BF8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_FCE6245B4381C41C23D6B9AC1B912BF8");

	UTBP_UI_Tutorial_IntroText_C_Finished_FCE6245B4381C41C23D6B9AC1B912BF8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_EFDB33FC447883CF45686E82D5843F75
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Tutorial_IntroText_C::Finished_EFDB33FC447883CF45686E82D5843F75()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_EFDB33FC447883CF45686E82D5843F75");

	UTBP_UI_Tutorial_IntroText_C_Finished_EFDB33FC447883CF45686E82D5843F75_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_7806B81B4F37B50F3F03899A74B6E88E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Tutorial_IntroText_C::Finished_7806B81B4F37B50F3F03899A74B6E88E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_7806B81B4F37B50F3F03899A74B6E88E");

	UTBP_UI_Tutorial_IntroText_C_Finished_7806B81B4F37B50F3F03899A74B6E88E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.PlayIntro
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Tutorial_IntroText_C::PlayIntro()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.PlayIntro");

	UTBP_UI_Tutorial_IntroText_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.ExecuteUbergraph_TBP_UI_Tutorial_IntroText
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Tutorial_IntroText_C::ExecuteUbergraph_TBP_UI_Tutorial_IntroText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.ExecuteUbergraph_TBP_UI_Tutorial_IntroText");

	UTBP_UI_Tutorial_IntroText_C_ExecuteUbergraph_TBP_UI_Tutorial_IntroText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.OnIntroComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Tutorial_IntroText_C::OnIntroComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.OnIntroComplete__DelegateSignature");

	UTBP_UI_Tutorial_IntroText_C_OnIntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
