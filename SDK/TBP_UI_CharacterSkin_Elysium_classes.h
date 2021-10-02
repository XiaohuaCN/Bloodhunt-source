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

// WidgetBlueprintGeneratedClass TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C
// 0x0184 (FullSize[0x0404] - InheritedSize[0x0280])
class UTBP_UI_CharacterSkin_Elysium_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnHover;                                                   // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowCustomizeButton;                                       // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ActiveTextRich;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   Button_Text_3;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             CharacterSlotSwitcher;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_TransitionMenuButton_C*              CreateNewCharacterButton;                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        Customize_Button2;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ExistingCharacterButton;                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Unlock_Border;                                             // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTigerPersistentPlayerCharacter             PersistentCharacter;                                       // 0x02D0(0x00B8) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnClick;                                                   // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bIsSelected;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OBOV[0x7];                                     // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATBP_PaperDoll_C*                            PaperDoll;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PaperDollIndex;                                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CONFIG_HighlightChangeSpeed;                               // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UActorComponent*, float>                HighlightComponentTargetValues;                            // 0x03B0(0x0050) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bHasPlayerIntroAnimation;                                  // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bShouldBeLit;                                              // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsMiddle;                                                 // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               ArchetypeDetailsIsActive;                                  // 0x0403(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C");
		return ptr;
	}



	void UpdateHighlight();
	void FindPaperDollAndCameraActors(TArray<class AActor*>* InActors);
	void GetAnimMontageIfNotAlreadyPlaying(class USkeletalMeshComponent** BodyMesh, class UAnimMontage** AnimMontage);
	void OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName);
	void DeselectCharacter();
	void SelectCharacter();
	void BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnAppearanceLoaded();
	void BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature();
	void InitializeActors(TArray<class AActor*> InArchetypeSelectActors);
	void BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void DoClick();
	void SetAsExistingCharacter(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
	void Update_Ui_State(TEnumAsByte<E_ElysiumChangeCharacterState_E_ElysiumChangeCharacterState> Ui_State);
	void BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void SetAsEmptySlot(Tiger_ETigerPowerKitType InArchetypeType);
	void ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium(int EntryPoint);
	void OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
