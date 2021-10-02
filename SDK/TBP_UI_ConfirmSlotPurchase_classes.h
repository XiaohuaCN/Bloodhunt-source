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

// WidgetBlueprintGeneratedClass TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C
// 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
class UTBP_UI_ConfirmSlotPurchase_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG_Image;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Border;                                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   CancelPrompt;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   ConfirmPrompt;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ConfirmPurchase;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemImageWidget;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemNameWidget;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      PriceWidget;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTigerItemIdWithPrice                       ItemWithPrice;                                             // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ConfirmSlotPurchase.TBP_UI_ConfirmSlotPurchase_C");
		return ptr;
	}



	void OnLoaded_2F008DAC479D06EA7CE27EA187DD07B3(class UObject* Loaded);
	void OnLoaded_9A80E476402A7298AD4629B56CCA144F(class UClass* Loaded);
	void Show(const struct FTigerItemIdWithPrice& InItemWithPrice);
	void BndEvt__ConfirmPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void BndEvt__CancelPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_ConfirmSlotPurchase(int EntryPoint);
	void OnClosed__DelegateSignature(bool ConfirmedPurchase);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
