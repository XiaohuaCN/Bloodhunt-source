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

// WidgetBlueprintGeneratedClass TBP_UI_VendorShared.TBP_UI_VendorShared_C
// 0x010A (FullSize[0x03F2] - InheritedSize[0x02E8])
class UTBP_UI_VendorShared_C : public UTigerSharedVendorUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            EnableShortcut;                                            // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeInBackground;                                          // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOutBackground;                                         // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ActiveInteractionSwitcher;                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Background;                                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Character;                                                 // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             CharacterSwitcher;                                         // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   CloseButtonPrompt;                                         // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      IMAGE_ShortcutBackground;                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  MenuContent;                                               // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_VendorTabButton_C*                   ShortcutTabButton;                                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                          // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_NpcDialogueScreen_C*                 TBP_UI_NpcDialogueScreen;                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_VerticalLine_C*                      TBP_UI_VerticalLine;                                       // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                     // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Vendor;                                                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                VendorHeader;                                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      VendorIconImage;                                           // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_VendorTabButton_C*                   VendorTabButton;                                           // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnActiveMenuSwitched;                                      // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      VendorIconPath[0x28];                                      // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      VendorBackgroundPath[0x28];                                // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               IsInteractionFullscreen;                                   // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               CONFIG_NeedPaperdoll;                                      // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_VendorShared.TBP_UI_VendorShared_C");
		return ptr;
	}



	void UpdateInteractionSize();
	void OverrideNameAndPurpose(const struct FText& Name, const struct FText& Purpose);
	void OverrideBackground();
	void CycleActiveInteraction();
	void AddAndActivateShopCanvas(class UCanvasPanel* NewParam);
	void ShowPlayerCharacter();
	void ShowVendorNPC(class ATigerNPC* VendorNPC);
	void OnLoaded_074CCE824EB764DB2242DBA1BD20B138(class UObject* Loaded);
	void OnLoaded_8D766778435DA3B2F6BDA382CB67B356(class UObject* Loaded);
	void Construct();
	void OneFrameLater();
	void PreConstruct(bool IsDesignTime);
	void TabMenuLeftGamepad();
	void TabMenuRightGamepad();
	void BndEvt__VendorTabButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__ShortcutTabButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void LoadVendorImages();
	void Back();
	void BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_VendorShared(int EntryPoint);
	void OnActiveMenuSwitched__DelegateSignature(bool Is_Dialogue_Menu);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
