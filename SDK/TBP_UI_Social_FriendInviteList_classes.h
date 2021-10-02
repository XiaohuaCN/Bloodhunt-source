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

// WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class UTBP_UI_Social_FriendInviteList_C : public UTigerSocialFriendInviteListUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UListView*                                   FriendRequestListView;                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C");
		return ptr;
	}



	void OnPopulateInvites(TArray<class UTigerFriendInvite*> InFriendInvites);
	void OnInviteReceived(class UTigerFriendInvite* InInvite);
	void OnInviteRemoved(class UTigerFriendInvite* InInvite);
	void ExecuteUbergraph_TBP_UI_Social_FriendInviteList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
