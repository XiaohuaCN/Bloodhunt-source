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

// WidgetBlueprintGeneratedClass TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C
// 0x0028 (FullSize[0x02B8] - InheritedSize[0x0290])
class UTBP_UI_Social_Inbox_Subscreen_C : public UTigerSocialInboxUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTBP_UI_Social_FriendInviteList_C*           FriendInviteList;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                FriendInvitePanel;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                PartyInvitationPanel;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Social_PartyInviteList_C*            PartyInviteList;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C");
		return ptr;
	}



	void UpdateFriendAvailability();
	void OnOpen();
	void OnClose();
	void OnFriendServiceStatusChanged(Tiger_ETigerOnlineServiceStatus InServiceStatus);
	void ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
