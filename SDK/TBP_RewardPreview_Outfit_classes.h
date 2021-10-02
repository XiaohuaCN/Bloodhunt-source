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

// BlueprintGeneratedClass TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C
// 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
class ATBP_RewardPreview_Outfit_C : public ATigerBattlepassRewardPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerSpotLightComponent*                    TigerSpotLight;                                            // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UChildActorComponent*                        PaperdollComponentEditorPreview;                           // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTigerItemPreviewInputComponent*             TigerItemPreviewInput;                                     // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UChildActorComponent*                        PaperdollComponent;                                        // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C");
		return ptr;
	}



	void WaitForPlayerAppearanceAsync();
	void ApplyItemToPaperdoll(const struct FTigerPreviewerData& InPreviewAppearance, Tiger_ETigerClan InClanType);
	void LoadCharacterPresetFromPrimaryOwner();
	void TryWithPlayerAppearance(bool* bWasSuccessful);
	void OnCharacterPresetsLoaded(TArray<class UObject*> LoadedPresets);
	void OnPreviewItemUpdated();
	void ReceiveBeginPlay();
	void OnAppearanceChanged();
	void PlayerApperanceFinishedLoading();
	void Update_Camera();
	void ExecuteUbergraph_TBP_RewardPreview_Outfit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
