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

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.CloseFullscreenCinematic
struct UTBP_UI_ElysiumChangeCharacter_C_CloseFullscreenCinematic_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Reset Selection to 0
struct UTBP_UI_ElysiumChangeCharacter_C_Reset_Selection_to_0_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectCharacterIfValid
struct UTBP_UI_ElysiumChangeCharacter_C_SelectCharacterIfValid_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Paperdoll Positions
struct UTBP_UI_ElysiumChangeCharacter_C_Update_Paperdoll_Positions_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetMenu
struct UTBP_UI_ElysiumChangeCharacter_C_ResetMenu_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent
struct UTBP_UI_ElysiumChangeCharacter_C_AddTaggedActorsToCaptureComponent_Params
{
	bool                                               bUseCaptureComponent;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ChangeSelection
struct UTBP_UI_ElysiumChangeCharacter_C_ChangeSelection_Params
{
	class UTBP_UI_CharacterSkin_Elysium_C*             InNewSelection;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.TogglePresets
struct UTBP_UI_ElysiumChangeCharacter_C_TogglePresets_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ToggleArchetypeDetails
struct UTBP_UI_ElysiumChangeCharacter_C_ToggleArchetypeDetails_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates
struct UTBP_UI_ElysiumChangeCharacter_C_ResetSlotStates_Params
{
	TArray<int>                                        inArray;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter
struct UTBP_UI_ElysiumChangeCharacter_C_SelectOrCreateCharacter_Params
{
	struct FTigerPersistentPlayerCharacter             InPlayerCharacter;                                         // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected
struct UTBP_UI_ElysiumChangeCharacter_C_OnCharacterSelected_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult
struct UTBP_UI_ElysiumChangeCharacter_C_OnGetValidGameVersionResult_Params
{
	Tiger_ETigerVersionIsValidResult                   Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed
struct UTBP_UI_ElysiumChangeCharacter_C_OnLoginFailed_Params
{
	struct FTigerLoginFailedInfo                       InLoginFailedInfo;                                         // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded
struct UTBP_UI_ElysiumChangeCharacter_C_OnLoginSucceeded_Params
{
	TArray<struct FTigerPersistentPlayerCharacter>     AvailableCharacters;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature_Params
{
	class UTigerPowerKit*                              InArchetypeData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
{
	struct FTigerPersistentPlayerCharacter             InPersistentCharacter;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
	struct FTigerPersistentPlayerCharacter             InPersistentCharacter;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnInitialized
struct UTBP_UI_ElysiumChangeCharacter_C_OnInitialized_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult
struct UTBP_UI_ElysiumChangeCharacter_C_OnCreateCharacterResult_Params
{
	struct FTigerPersistentCharacterID                 CharacterId;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                               bWasCharacterCreated;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.PreConstruct
struct UTBP_UI_ElysiumChangeCharacter_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged
struct UTBP_UI_ElysiumChangeCharacter_C_OnArchetypeChanged_Params
{
	class UTigerPowerKit*                              InArchetypeData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        InPlayerArchetypeCharacterIndices;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
	struct FTigerPersistentPlayerCharacter             InPersistentCharacter;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
	struct FTigerPersistentPlayerCharacter             InPersistentCharacter;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
	struct FTigerPersistentPlayerCharacter             InPersistentCharacter;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose
struct UTBP_UI_ElysiumChangeCharacter_C_OnClose_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot
struct UTBP_UI_ElysiumChangeCharacter_C_Create_Character_On_Existing_Slot_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBuyCharacterSlotResults
struct UTBP_UI_ElysiumChangeCharacter_C_OnBuyCharacterSlotResults_Params
{
	bool                                               bInSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     InErrorString;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1
struct UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2
struct UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3
struct UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen
struct UTBP_UI_ElysiumChangeCharacter_C_OnOpen_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct
struct UTBP_UI_ElysiumChangeCharacter_C_Construct_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowFullscreenCinematic
struct UTBP_UI_ElysiumChangeCharacter_C_ShowFullscreenCinematic_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnFullscreenCinematicClosed
struct UTBP_UI_ElysiumChangeCharacter_C_OnFullscreenCinematicClosed_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature_Params
{
	bool                                               ConfirmedPurchase;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown
struct UTBP_UI_ElysiumChangeCharacter_C_OnBackgroundSceneShown_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Carousel Change
struct UTBP_UI_ElysiumChangeCharacter_C_Update_Carousel_Change_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Tick
struct UTBP_UI_ElysiumChangeCharacter_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4
struct UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5
struct UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
struct UTBP_UI_ElysiumChangeCharacter_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter
struct UTBP_UI_ElysiumChangeCharacter_C_ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
