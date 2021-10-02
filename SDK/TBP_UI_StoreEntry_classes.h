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

// WidgetBlueprintGeneratedClass TBP_UI_StoreEntry.TBP_UI_StoreEntry_C
// 0x0048 (FullSize[0x0318] - InheritedSize[0x02D0])
class UTBP_UI_StoreEntry_C : public UTigerStoreEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     BuyButton;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      EntryImage;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      TBP_UI_CurrencyText;                                       // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                                  DefaultImage;                                              // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_StoreEntry.TBP_UI_StoreEntry_C");
		return ptr;
	}



	void OnFail_9165BC0C4F525209541CCD9677982392(class UTexture2DDynamic* Texture);
	void OnSuccess_9165BC0C4F525209541CCD9677982392(class UTexture2DDynamic* Texture);
	void SetStoreEntry(const struct FTigerMetaStoreEntry& InStoreEntry);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_StoreEntry(int EntryPoint);
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
