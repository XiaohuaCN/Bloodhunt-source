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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C
// 0x0051 (FullSize[0x0331] - InheritedSize[0x02E0])
class UTBP_UI_PremiumCurrency_C : public UTigerPremiumCurrencyUiScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowConfirm;                                               // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                                    CloseIfPopUpContainer;                                     // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        CloseIfPopUpMenuButton;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ConfirmPopup;                                              // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CurrencyBox;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      InputBlock_Dark;                                           // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmPurchase_Premium_C*           TBP_UI_ConfirmPurchase_Premium;                            // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTBP_UI_PremiumCurrency_Button_C*>    CurrencyButtons;                                           // 0x0320(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bIsPopUpMenu;                                              // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C");
		return ptr;
	}



	void PopUpMenuSetup(bool Index);
	void Construct();
	void On_Currency_Button_Clicked(const struct FTigerPremiumCurrencyPackData& InPremiumPackData);
	void OnConfirmPopupClosed(bool ConfirmedPurchase);
	void OnCurrencyPacksUpdated();
	void OnPurchaseHandled(bool bInWasSuccesful, TEnumAsByte<Shark_EShMidasResultCode> InPurchaseResult);
	void BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_PremiumCurrency(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
