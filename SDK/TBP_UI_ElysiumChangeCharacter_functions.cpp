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
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.CloseFullscreenCinematic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::CloseFullscreenCinematic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.CloseFullscreenCinematic");

	UTBP_UI_ElysiumChangeCharacter_C_CloseFullscreenCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Reset Selection to 0
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumChangeCharacter_C::Reset_Selection_to_0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Reset Selection to 0");

	UTBP_UI_ElysiumChangeCharacter_C_Reset_Selection_to_0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectCharacterIfValid
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumChangeCharacter_C::SelectCharacterIfValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectCharacterIfValid");

	UTBP_UI_ElysiumChangeCharacter_C_SelectCharacterIfValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Paperdoll Positions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumChangeCharacter_C::Update_Paperdoll_Positions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Paperdoll Positions");

	UTBP_UI_ElysiumChangeCharacter_C_Update_Paperdoll_Positions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::ResetMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetMenu");

	UTBP_UI_ElysiumChangeCharacter_C_ResetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUseCaptureComponent                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumChangeCharacter_C::AddTaggedActorsToCaptureComponent(bool* bUseCaptureComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent");

	UTBP_UI_ElysiumChangeCharacter_C_AddTaggedActorsToCaptureComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bUseCaptureComponent != nullptr)
		*bUseCaptureComponent = params.bUseCaptureComponent;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ChangeSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_CharacterSkin_Elysium_C*             InNewSelection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumChangeCharacter_C::ChangeSelection(class UTBP_UI_CharacterSkin_Elysium_C* InNewSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ChangeSelection");

	UTBP_UI_ElysiumChangeCharacter_C_ChangeSelection_Params params;
	params.InNewSelection = InNewSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.TogglePresets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumChangeCharacter_C::TogglePresets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.TogglePresets");

	UTBP_UI_ElysiumChangeCharacter_C_TogglePresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ToggleArchetypeDetails
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumChangeCharacter_C::ToggleArchetypeDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ToggleArchetypeDetails");

	UTBP_UI_ElysiumChangeCharacter_C_ToggleArchetypeDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        inArray                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumChangeCharacter_C::ResetSlotStates(TArray<int> inArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates");

	UTBP_UI_ElysiumChangeCharacter_C_ResetSlotStates_Params params;
	params.inArray = inArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPlayerCharacter                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumChangeCharacter_C::SelectOrCreateCharacter(const struct FTigerPersistentPlayerCharacter& InPlayerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter");

	UTBP_UI_ElysiumChangeCharacter_C_SelectOrCreateCharacter_Params params;
	params.InPlayerCharacter = InPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::OnCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected");

	UTBP_UI_ElysiumChangeCharacter_C_OnCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerVersionIsValidResult                   Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumChangeCharacter_C::OnGetValidGameVersionResult(Tiger_ETigerVersionIsValidResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult");

	UTBP_UI_ElysiumChangeCharacter_C_OnGetValidGameVersionResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerLoginFailedInfo                       InLoginFailedInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumChangeCharacter_C::OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed");

	UTBP_UI_ElysiumChangeCharacter_C_OnLoginFailed_Params params;
	params.InLoginFailedInfo = InLoginFailedInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerPersistentPlayerCharacter>     AvailableCharacters                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumChangeCharacter_C::OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded");

	UTBP_UI_ElysiumChangeCharacter_C_OnLoginSucceeded_Params params;
	params.AvailableCharacters = AvailableCharacters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature_Params params;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_0_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_1_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnInitialized");

	UTBP_UI_ElysiumChangeCharacter_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentCharacterID                 CharacterId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWasCharacterCreated                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumChangeCharacter_C::OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult");

	UTBP_UI_ElysiumChangeCharacter_C_OnCreateCharacterResult_Params params;
	params.CharacterId = CharacterId;
	params.bWasCharacterCreated = bWasCharacterCreated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumChangeCharacter_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.PreConstruct");

	UTBP_UI_ElysiumChangeCharacter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<int>                                        InPlayerArchetypeCharacterIndices                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ElysiumChangeCharacter_C::OnArchetypeChanged(class UTigerPowerKit* InArchetypeData, TArray<int> InPlayerArchetypeCharacterIndices)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged");

	UTBP_UI_ElysiumChangeCharacter_C_OnArchetypeChanged_Params params;
	params.InArchetypeData = InArchetypeData;
	params.InPlayerArchetypeCharacterIndices = InPlayerArchetypeCharacterIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_3_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerCharacter             InPersistentCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(const struct FTigerPersistentPlayerCharacter& InPersistentCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__CharacterSkin_4_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params params;
	params.InPersistentCharacter = InPersistentCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose");

	UTBP_UI_ElysiumChangeCharacter_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::Create_Character_On_Existing_Slot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot");

	UTBP_UI_ElysiumChangeCharacter_C_Create_Character_On_Existing_Slot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBuyCharacterSlotResults
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bInSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     InErrorString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumChangeCharacter_C::OnBuyCharacterSlotResults(bool bInSuccess, const struct FString& InErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBuyCharacterSlotResults");

	UTBP_UI_ElysiumChangeCharacter_C_OnBuyCharacterSlotResults_Params params;
	params.bInSuccess = bInSuccess;
	params.InErrorString = InErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ShowArchetypeDetails_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_LoadingDone_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2");

	UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_ShowArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3");

	UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_HideArchetypeDetailsAnim_K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_8_OnVideoStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_9_OnVideoEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen");

	UTBP_UI_ElysiumChangeCharacter_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct");

	UTBP_UI_ElysiumChangeCharacter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowFullscreenCinematic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::ShowFullscreenCinematic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowFullscreenCinematic");

	UTBP_UI_ElysiumChangeCharacter_C_ShowFullscreenCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnFullscreenCinematicClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::OnFullscreenCinematicClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnFullscreenCinematicClosed");

	UTBP_UI_ElysiumChangeCharacter_C_OnFullscreenCinematicClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ConfirmedPurchase                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature(bool ConfirmedPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ConfirmSlotPurchase_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature_Params params;
	params.ConfirmedPurchase = ConfirmedPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown");

	UTBP_UI_ElysiumChangeCharacter_C_OnBackgroundSceneShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__HideArchetypeDetails_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__Button_84_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__Button_117_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Carousel Change
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::Update_Carousel_Change()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Update Carousel Change");

	UTBP_UI_ElysiumChangeCharacter_C_Update_Carousel_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumChangeCharacter_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Tick");

	UTBP_UI_ElysiumChangeCharacter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ButtonPresets_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__ButtonArchetype_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4");

	UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_HideArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5");

	UTBP_UI_ElysiumChangeCharacter_C_WidgetAnimationEvt_ShowArchetypeDetailsAnim_Fast_K2Node_WidgetAnimationEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ElysiumChangeCharacter_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UTBP_UI_ElysiumChangeCharacter_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumChangeCharacter_C::ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter");

	UTBP_UI_ElysiumChangeCharacter_C_ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
