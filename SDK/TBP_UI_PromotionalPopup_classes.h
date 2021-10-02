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

// WidgetBlueprintGeneratedClass TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C
// 0x00D0 (FullSize[0x03D0] - InheritedSize[0x0300])
class UTBP_UI_PromotionalPopup_C : public UTigerPromotionalUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOut;                                                   // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        CloseButton;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CloseImage;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CornerCloseButton;                                         // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   DescriptionWidget;                                         // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        GoToStoreButton;                                           // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   HeaderWidget;                                              // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_104;                                                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PromoImageWidget;                                          // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider_2;                                          // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          TBP_UI_Gradient;                                           // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     Subheader_TextFormatting;                                  // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Subtitle_TextFormatting;                                   // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     UL_TextFormatting;                                         // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Bold_TextFormating;                                        // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     EF_TextFormatting;                                         // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       BR_TextFormatting;                                         // 0x03B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PromotionalPopup.TBP_UI_PromotionalPopup_C");
		return ptr;
	}



	void HideTextIfEmpty(const struct FText& InText);
	void ShowFirstTimeEntry();
	void ApplyTextureToImage(class UTexture* InTexture);
	void OnFail_786AAD54450C034286CFC995F0D77869(class UTexture2DDynamic* Texture);
	void OnSuccess_786AAD54450C034286CFC995F0D77869(class UTexture2DDynamic* Texture);
	void OnShowFirstTimeEntry();
	void OnShowEntry(const struct FTigerPromotionalPopupConfigEntry& InEntry);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void BndEvt__GoToStoreButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__CornerCloseButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void OnOpen();
	void BeginPopupCloseAnimated();
	void OnClose();
	void ExecuteUbergraph_TBP_UI_PromotionalPopup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
