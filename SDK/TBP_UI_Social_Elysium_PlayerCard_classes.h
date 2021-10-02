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

// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C
// 0x0019 (FullSize[0x0369] - InheritedSize[0x0350])
class UTBP_UI_Social_Elysium_PlayerCard_C : public UTBP_UI_Social_PlayerCardBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ATigerElysiumPlayerState*                    ElysiumPlayerState;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendRequestSentAudioEvent;                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCouldInviteToParty;                                       // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C");
		return ptr;
	}



	void OnExtra();
	void CouldInviteToParty(bool* bCouldInvite);
	void InviteToParty();
	void SendFriendRequest();
	void UpdatePlayerInfo();
	void UpdateGroupStatus();
	void Update();
	void Construct();
	void OnIsInPartyChanged(bool bInIsInParty);
	void ExecuteUbergraph_TBP_UI_Social_Elysium_PlayerCard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
