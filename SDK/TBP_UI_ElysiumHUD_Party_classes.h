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

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C
// 0x0054 (FullSize[0x02D4] - InheritedSize[0x0280])
class UTBP_UI_ElysiumHUD_Party_C : public UTigerGroupUIWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UOverlay*                                    OverlayContainer;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PartyText;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Icon_C*                TBP_UI_CharacterCard_Icon;                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Icon_C*                TBP_UI_CharacterCard_Icon_2;                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CharacterCard_Icon_C*                TBP_UI_CharacterCard_Icon_3;                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTBP_UI_CharacterCard_Icon_C*>        PlayerIcons;                                               // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ATigerPlayerState*>                   PartyPlayerStates;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              UpdateTimer;                                               // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C");
		return ptr;
	}



	void Update_Icons();
	void UpdatePlayerStates();
	void UpdateWidget();
	void Construct();
	void On_PartyUpdated();
	void OnPlayerJoiendParty(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId);
	void OnPlayerLeftPArty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId);
	void Update_Cards();
	void UpdateIsReady(bool bInIsGroupReady);
	void GroupChanged();
	void OnCardLoaded();
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Party(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
