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

// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C
// 0x0048 (FullSize[0x02D0] - InheritedSize[0x0288])
class UTBP_UI_Social_Elysium_Subscreen_C : public UTigerSocialElysiumUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTigerStyledRichTextBlock*                   NumberOfPlayerInElysium;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Social_PlayerCardList_C*             PlayerList;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTBP_UI_Social_Elysium_PlayerCard_C*> PlayerCards;                                               // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class APlayerState*>                        PlayerStates;                                              // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FTigerPlayerStateFriendPair>         PlayerFriendPairs;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C");
		return ptr;
	}



	void RefreshPlayerListIfNeeded();
	void AddPlayerEntry(class ATigerElysiumPlayerState* PlayerState, int Index);
	void RefreshPlayerList();
	void OnOpen();
	void OnClose();
	void AddPlayer(class ATigerPlayerState* PlayerState, int Index);
	void OnPartyUpdated();
	void ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
