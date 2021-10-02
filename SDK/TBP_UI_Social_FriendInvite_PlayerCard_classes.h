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

// WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C
// 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
class UTBP_UI_Social_FriendInvite_PlayerCard_C : public UTBP_UI_Social_PlayerCardBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTigerFriendInvite*                          Invite;                                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C");
		return ptr;
	}



	void OnRemove();
	void RejectFriendRequest();
	void AcceptFriendRequest();
	void OnAccept();
	void Update();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_TBP_UI_Social_FriendInvite_PlayerCard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
