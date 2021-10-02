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
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.UpdateHighlight
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_CharacterSkin_Elysium_C::UpdateHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.UpdateHighlight");

	UTBP_UI_CharacterSkin_Elysium_C_UpdateHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.FindPaperDollAndCameraActors
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AActor*>                              InActors                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_CharacterSkin_Elysium_C::FindPaperDollAndCameraActors(TArray<class AActor*>* InActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.FindPaperDollAndCameraActors");

	UTBP_UI_CharacterSkin_Elysium_C_FindPaperDollAndCameraActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InActors != nullptr)
		*InActors = params.InActors;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.GetAnimMontageIfNotAlreadyPlaying
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      BodyMesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAnimMontage*                                AnimMontage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::GetAnimMontageIfNotAlreadyPlaying(class USkeletalMeshComponent** BodyMesh, class UAnimMontage** AnimMontage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.GetAnimMontageIfNotAlreadyPlaying");

	UTBP_UI_CharacterSkin_Elysium_C_GetAnimMontageIfNotAlreadyPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BodyMesh != nullptr)
		*BodyMesh = params.BodyMesh;
	if (AnimMontage != nullptr)
		*AnimMontage = params.AnimMontage;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F");

	UTBP_UI_CharacterSkin_Elysium_C_OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F");

	UTBP_UI_CharacterSkin_Elysium_C_OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F");

	UTBP_UI_CharacterSkin_Elysium_C_OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F");

	UTBP_UI_CharacterSkin_Elysium_C_OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F(const struct FName& NotifyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F");

	UTBP_UI_CharacterSkin_Elysium_C_OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DeselectCharacter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::DeselectCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DeselectCharacter");

	UTBP_UI_CharacterSkin_Elysium_C_DeselectCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SelectCharacter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::SelectCharacter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SelectCharacter");

	UTBP_UI_CharacterSkin_Elysium_C_SelectCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnAppearanceLoaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::OnAppearanceLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnAppearanceLoaded");

	UTBP_UI_CharacterSkin_Elysium_C_OnAppearanceLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CharacterSkin_Elysium_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.PreConstruct");

	UTBP_UI_CharacterSkin_Elysium_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.InitializeActors
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AActor*>                              InArchetypeSelectActors                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_CharacterSkin_Elysium_C::InitializeActors(TArray<class AActor*> InArchetypeSelectActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.InitializeActors");

	UTBP_UI_CharacterSkin_Elysium_C_InitializeActors_Params params;
	params.InArchetypeSelectActors = InArchetypeSelectActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DoClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::DoClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DoClick");

	UTBP_UI_CharacterSkin_Elysium_C_DoClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsExistingCharacter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_CharacterSkin_Elysium_C::SetAsExistingCharacter(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsExistingCharacter");

	UTBP_UI_CharacterSkin_Elysium_C_SetAsExistingCharacter_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.Update Ui State
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_ElysiumChangeCharacterState_E_ElysiumChangeCharacterState> Ui_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::Update_Ui_State(TEnumAsByte<E_ElysiumChangeCharacterState_E_ElysiumChangeCharacterState> Ui_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.Update Ui State");

	UTBP_UI_CharacterSkin_Elysium_C_Update_Ui_State_Params params;
	params.Ui_State = Ui_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_CharacterSkin_Elysium_C::BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsEmptySlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::SetAsEmptySlot(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsEmptySlot");

	UTBP_UI_CharacterSkin_Elysium_C_SetAsEmptySlot_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CharacterSkin_Elysium_C::ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium");

	UTBP_UI_CharacterSkin_Elysium_C_ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnClick__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_CharacterSkin_Elysium_C::OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnClick__DelegateSignature");

	UTBP_UI_CharacterSkin_Elysium_C_OnClick__DelegateSignature_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
