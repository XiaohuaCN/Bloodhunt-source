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

// WidgetBlueprintGeneratedClass TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C
// 0x0088 (FullSize[0x0308] - InheritedSize[0x0280])
class UTBP_UI_ConfirmPurchase_Premium_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_MenuButton_C*                        ClosePrompt;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_218;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ProcessText;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PurchaseStatusHeader;                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   SupportText;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Popup_Base_C*                        TBP_UI_Popup_Base;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ThrobberSizeBox;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       WaitingText;                                               // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       WebsiteLinkToSupport;                                      // 0x02F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C");
		return ptr;
	}



	void PurchaseHandled(bool InSuccess, const struct FText& InMessage);
	void CloseWidget();
	void Show();
	void BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium(int EntryPoint);
	void OnClosed__DelegateSignature(bool ConfirmedPurchase);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
