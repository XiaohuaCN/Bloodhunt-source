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

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.WaitForPlayerAppearanceAsync
struct ATBP_RewardPreview_Outfit_C_WaitForPlayerAppearanceAsync_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ApplyItemToPaperdoll
struct ATBP_RewardPreview_Outfit_C_ApplyItemToPaperdoll_Params
{
	struct FTigerPreviewerData                         InPreviewAppearance;                                       // 0x0000(0x02B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	Tiger_ETigerClan                                   InClanType;                                                // 0x02B0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.LoadCharacterPresetFromPrimaryOwner
struct ATBP_RewardPreview_Outfit_C_LoadCharacterPresetFromPrimaryOwner_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.TryWithPlayerAppearance
struct ATBP_RewardPreview_Outfit_C_TryWithPlayerAppearance_Params
{
	bool                                               bWasSuccessful;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnCharacterPresetsLoaded
struct ATBP_RewardPreview_Outfit_C_OnCharacterPresetsLoaded_Params
{
	TArray<class UObject*>                             LoadedPresets;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnPreviewItemUpdated
struct ATBP_RewardPreview_Outfit_C_OnPreviewItemUpdated_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ReceiveBeginPlay
struct ATBP_RewardPreview_Outfit_C_ReceiveBeginPlay_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnAppearanceChanged
struct ATBP_RewardPreview_Outfit_C_OnAppearanceChanged_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.PlayerApperanceFinishedLoading
struct ATBP_RewardPreview_Outfit_C_PlayerApperanceFinishedLoading_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.Update Camera
struct ATBP_RewardPreview_Outfit_C_Update_Camera_Params
{
};

// Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ExecuteUbergraph_TBP_RewardPreview_Outfit
struct ATBP_RewardPreview_Outfit_C_ExecuteUbergraph_TBP_RewardPreview_Outfit_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
