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
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.WaitForPlayerAppearanceAsync
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_RewardPreview_Outfit_C::WaitForPlayerAppearanceAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.WaitForPlayerAppearanceAsync");

	ATBP_RewardPreview_Outfit_C_WaitForPlayerAppearanceAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ApplyItemToPaperdoll
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPreviewerData                         InPreviewAppearance                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		Tiger_ETigerClan                                   InClanType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_RewardPreview_Outfit_C::ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, Tiger_ETigerClan InClanType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ApplyItemToPaperdoll");

	ATBP_RewardPreview_Outfit_C_ApplyItemToPaperdoll_Params params;
	params.InPreviewAppearance = InPreviewAppearance;
	params.InClanType = InClanType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.LoadCharacterPresetFromPrimaryOwner
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_RewardPreview_Outfit_C::LoadCharacterPresetFromPrimaryOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.LoadCharacterPresetFromPrimaryOwner");

	ATBP_RewardPreview_Outfit_C_LoadCharacterPresetFromPrimaryOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.TryWithPlayerAppearance
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bWasSuccessful                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_RewardPreview_Outfit_C::TryWithPlayerAppearance(bool* bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.TryWithPlayerAppearance");

	ATBP_RewardPreview_Outfit_C_TryWithPlayerAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bWasSuccessful != nullptr)
		*bWasSuccessful = params.bWasSuccessful;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnCharacterPresetsLoaded
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UObject*>                             LoadedPresets                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ATBP_RewardPreview_Outfit_C::OnCharacterPresetsLoaded(TArray<class UObject*> LoadedPresets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnCharacterPresetsLoaded");

	ATBP_RewardPreview_Outfit_C_OnCharacterPresetsLoaded_Params params;
	params.LoadedPresets = LoadedPresets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnPreviewItemUpdated
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void ATBP_RewardPreview_Outfit_C::OnPreviewItemUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnPreviewItemUpdated");

	ATBP_RewardPreview_Outfit_C_OnPreviewItemUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_RewardPreview_Outfit_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ReceiveBeginPlay");

	ATBP_RewardPreview_Outfit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnAppearanceChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_RewardPreview_Outfit_C::OnAppearanceChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnAppearanceChanged");

	ATBP_RewardPreview_Outfit_C_OnAppearanceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.PlayerApperanceFinishedLoading
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_RewardPreview_Outfit_C::PlayerApperanceFinishedLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.PlayerApperanceFinishedLoading");

	ATBP_RewardPreview_Outfit_C_PlayerApperanceFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.Update Camera
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_RewardPreview_Outfit_C::Update_Camera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.Update Camera");

	ATBP_RewardPreview_Outfit_C_Update_Camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ExecuteUbergraph_TBP_RewardPreview_Outfit
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_RewardPreview_Outfit_C::ExecuteUbergraph_TBP_RewardPreview_Outfit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ExecuteUbergraph_TBP_RewardPreview_Outfit");

	ATBP_RewardPreview_Outfit_C_ExecuteUbergraph_TBP_RewardPreview_Outfit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
