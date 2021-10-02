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

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.CloseDialogueScreen
struct UTBP_UI_NpcDialogueScreen_C_CloseDialogueScreen_Params
{
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNextDialogueLine
struct UTBP_UI_NpcDialogueScreen_C_ShowNextDialogueLine_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.GetPaperDollAnimationInstance
struct UTBP_UI_NpcDialogueScreen_C_GetPaperDollAnimationInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.PlayPaperDollAnimation
struct UTBP_UI_NpcDialogueScreen_C_PlayPaperDollAnimation_Params
{
	class UAnimMontage*                                InAnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BeginDialogueInteraction
struct UTBP_UI_NpcDialogueScreen_C_BeginDialogueInteraction_Params
{
	class UTigerInteractiveNpcComponent*               InInteractiveComponent;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_VendorShared_C*                      InVendorUi;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNewDialoguePack
struct UTBP_UI_NpcDialogueScreen_C_ShowNewDialoguePack_Params
{
	struct FTigerNpcDialogue                           InDialogueAsset;                                           // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FText                                       InNextLine;                                                // 0x00A8(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UTBP_UI_NpcDialogueScreen_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ExecuteUbergraph_TBP_UI_NpcDialogueScreen
struct UTBP_UI_NpcDialogueScreen_C_ExecuteUbergraph_TBP_UI_NpcDialogueScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
