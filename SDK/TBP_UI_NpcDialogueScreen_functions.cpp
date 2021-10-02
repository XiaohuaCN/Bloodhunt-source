// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.CloseDialogueScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_NpcDialogueScreen_C::CloseDialogueScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.CloseDialogueScreen");

	UTBP_UI_NpcDialogueScreen_C_CloseDialogueScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNextDialogueLine
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_NpcDialogueScreen_C::ShowNextDialogueLine(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNextDialogueLine");

	UTBP_UI_NpcDialogueScreen_C_ShowNextDialogueLine_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.GetPaperDollAnimationInstance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAnimInstance*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimInstance* UTBP_UI_NpcDialogueScreen_C::GetPaperDollAnimationInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.GetPaperDollAnimationInstance");

	UTBP_UI_NpcDialogueScreen_C_GetPaperDollAnimationInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.PlayPaperDollAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAnimMontage*                                InAnimationMontage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_NpcDialogueScreen_C::PlayPaperDollAnimation(class UAnimMontage* InAnimationMontage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.PlayPaperDollAnimation");

	UTBP_UI_NpcDialogueScreen_C_PlayPaperDollAnimation_Params params;
	params.InAnimationMontage = InAnimationMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BeginDialogueInteraction
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInteractiveNpcComponent*               InInteractiveComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_VendorShared_C*                      InVendorUi                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_NpcDialogueScreen_C::BeginDialogueInteraction(class UTigerInteractiveNpcComponent* InInteractiveComponent, class UTBP_UI_VendorShared_C* InVendorUi)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BeginDialogueInteraction");

	UTBP_UI_NpcDialogueScreen_C_BeginDialogueInteraction_Params params;
	params.InInteractiveComponent = InInteractiveComponent;
	params.InVendorUi = InVendorUi;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNewDialoguePack
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerNpcDialogue                           InDialogueAsset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
//		struct FText                                       InNextLine                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_NpcDialogueScreen_C::ShowNewDialoguePack(const struct FTigerNpcDialogue& InDialogueAsset, const struct FText& InNextLine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNewDialoguePack");

	UTBP_UI_NpcDialogueScreen_C_ShowNewDialoguePack_Params params;
	params.InDialogueAsset = InDialogueAsset;
	params.InNextLine = InNextLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_NpcDialogueScreen_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UTBP_UI_NpcDialogueScreen_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ExecuteUbergraph_TBP_UI_NpcDialogueScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_NpcDialogueScreen_C::ExecuteUbergraph_TBP_UI_NpcDialogueScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ExecuteUbergraph_TBP_UI_NpcDialogueScreen");

	UTBP_UI_NpcDialogueScreen_C_ExecuteUbergraph_TBP_UI_NpcDialogueScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
