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
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.UpdatePackData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPremiumCurrencyPackData               InNewPackData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_PremiumCurrency_Button_C::UpdatePackData(const struct FTigerPremiumCurrencyPackData& InNewPackData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.UpdatePackData");

	UTBP_UI_PremiumCurrency_Button_C_UpdatePackData_Params params;
	params.InNewPackData = InNewPackData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.UpdateAppearance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_PremiumCurrency_Button_C::UpdateAppearance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.UpdateAppearance");

	UTBP_UI_PremiumCurrency_Button_C_UpdateAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnFail_70BD921E4DF523A95B2F7CA66C0D34FC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrency_Button_C::OnFail_70BD921E4DF523A95B2F7CA66C0D34FC(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnFail_70BD921E4DF523A95B2F7CA66C0D34FC");

	UTBP_UI_PremiumCurrency_Button_C_OnFail_70BD921E4DF523A95B2F7CA66C0D34FC_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnSuccess_70BD921E4DF523A95B2F7CA66C0D34FC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrency_Button_C::OnSuccess_70BD921E4DF523A95B2F7CA66C0D34FC(class UTexture2DDynamic* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnSuccess_70BD921E4DF523A95B2F7CA66C0D34FC");

	UTBP_UI_PremiumCurrency_Button_C_OnSuccess_70BD921E4DF523A95B2F7CA66C0D34FC_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PremiumCurrency_Button_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.PreConstruct");

	UTBP_UI_PremiumCurrency_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_PremiumCurrency_Button_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.Construct");

	UTBP_UI_PremiumCurrency_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PremiumCurrency_Button_C::BndEvt__Button_63_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_PremiumCurrency_Button_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PremiumCurrency_Button_C::BndEvt__Button_63_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_PremiumCurrency_Button_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PremiumCurrency_Button_C::BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_PremiumCurrency_Button_C_BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.DownloadImage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_PremiumCurrency_Button_C::DownloadImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.DownloadImage");

	UTBP_UI_PremiumCurrency_Button_C_DownloadImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.ExecuteUbergraph_TBP_UI_PremiumCurrency_Button
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrency_Button_C::ExecuteUbergraph_TBP_UI_PremiumCurrency_Button(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.ExecuteUbergraph_TBP_UI_PremiumCurrency_Button");

	UTBP_UI_PremiumCurrency_Button_C_ExecuteUbergraph_TBP_UI_PremiumCurrency_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPremiumCurrencyPackData               PremiumPackData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_PremiumCurrency_Button_C::OnClicked__DelegateSignature(const struct FTigerPremiumCurrencyPackData& PremiumPackData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency_Button.TBP_UI_PremiumCurrency_Button_C.OnClicked__DelegateSignature");

	UTBP_UI_PremiumCurrency_Button_C_OnClicked__DelegateSignature_Params params;
	params.PremiumPackData = PremiumPackData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
