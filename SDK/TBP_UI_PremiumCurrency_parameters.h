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

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PopUpMenuSetup
struct UTBP_UI_PremiumCurrency_C_PopUpMenuSetup_Params
{
	bool                                               Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Construct
struct UTBP_UI_PremiumCurrency_C_Construct_Params
{
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.On Currency Button Clicked
struct UTBP_UI_PremiumCurrency_C_On_Currency_Button_Clicked_Params
{
	struct FTigerPremiumCurrencyPackData               InPremiumPackData;                                         // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnConfirmPopupClosed
struct UTBP_UI_PremiumCurrency_C_OnConfirmPopupClosed_Params
{
	bool                                               ConfirmedPurchase;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdated
struct UTBP_UI_PremiumCurrency_C_OnCurrencyPacksUpdated_Params
{
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnPurchaseHandled
struct UTBP_UI_PremiumCurrency_C_OnPurchaseHandled_Params
{
	bool                                               bInWasSuccesful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Shark_EShMidasResultCode>              InPurchaseResult;                                          // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_PremiumCurrency_C_BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PreConstruct
struct UTBP_UI_PremiumCurrency_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.ExecuteUbergraph_TBP_UI_PremiumCurrency
struct UTBP_UI_PremiumCurrency_C_ExecuteUbergraph_TBP_UI_PremiumCurrency_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
