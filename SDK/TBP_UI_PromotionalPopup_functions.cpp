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
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.HideTextIfEmpty
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_PromotionalPopup_C::HideTextIfEmpty(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.HideTextIfEmpty");

	UTBP_UI_PromotionalPopup_C_HideTextIfEmpty_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ShowFirstTimeEntry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_PromotionalPopup_C::ShowFirstTimeEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ShowFirstTimeEntry");

	UTBP_UI_PromotionalPopup_C_ShowFirstTimeEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ApplyTextureToImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture*                                    InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PromotionalPopup_C::ApplyTextureToImage(class UTexture* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ApplyTextureToImage");

	UTBP_UI_PromotionalPopup_C_ApplyTextureToImage_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnFail_786AAD54450C034286CFC995F0D77869
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PromotionalPopup_C::OnFail_786AAD54450C034286CFC995F0D77869(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnFail_786AAD54450C034286CFC995F0D77869");

	UTBP_UI_PromotionalPopup_C_OnFail_786AAD54450C034286CFC995F0D77869_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnSuccess_786AAD54450C034286CFC995F0D77869
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PromotionalPopup_C::OnSuccess_786AAD54450C034286CFC995F0D77869(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnSuccess_786AAD54450C034286CFC995F0D77869");

	UTBP_UI_PromotionalPopup_C_OnSuccess_786AAD54450C034286CFC995F0D77869_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnShowFirstTimeEntry
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::OnShowFirstTimeEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnShowFirstTimeEntry");

	UTBP_UI_PromotionalPopup_C_OnShowFirstTimeEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnShowEntry
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerPromotionalPopupConfigEntry           InEntry                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_PromotionalPopup_C::OnShowEntry(const struct FTigerPromotionalPopupConfigEntry& InEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnShowEntry");

	UTBP_UI_PromotionalPopup_C_OnShowEntry_Params params;
	params.InEntry = InEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_PromotionalPopup_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_PromotionalPopup_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_PromotionalPopup_C_BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UTBP_UI_PromotionalPopup_C_BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.Construct");

	UTBP_UI_PromotionalPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnOpen");

	UTBP_UI_PromotionalPopup_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BeginPopupCloseAnimated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::BeginPopupCloseAnimated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.BeginPopupCloseAnimated");

	UTBP_UI_PromotionalPopup_C_BeginPopupCloseAnimated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_PromotionalPopup_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.OnClose");

	UTBP_UI_PromotionalPopup_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ExecuteUbergraph_TBP_UI_PromotionalPopup
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PromotionalPopup_C::ExecuteUbergraph_TBP_UI_PromotionalPopup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C.ExecuteUbergraph_TBP_UI_PromotionalPopup");

	UTBP_UI_PromotionalPopup_C_ExecuteUbergraph_TBP_UI_PromotionalPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
