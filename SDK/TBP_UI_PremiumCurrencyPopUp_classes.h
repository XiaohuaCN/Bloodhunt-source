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

// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C
// 0x006C (FullSize[0x02EC] - InheritedSize[0x0280])
class UTBP_UI_PremiumCurrencyPopUp_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerStyledRichTextBlock*                   Header;                                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Subheader;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Popup_Base_C*                        TBP_UI_Popup_Base;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_PremiumCurrency_C*                   TBP_UI_PremiumCurrency;                                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       Currency_Name;                                             // 0x02B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       CurrentItemName;                                           // 0x02D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentItemCost;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C");
		return ptr;
	}



	void SetItemNameAndCost(const struct FText& InItemName, int InItemCost);
	void PreConstruct(bool IsDesignTime);
	void OnOpen();
	void OnClose();
	void OnExitKeyPressed();
	void ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp(int EntryPoint);
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
