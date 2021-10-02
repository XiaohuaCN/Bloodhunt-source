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

// WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C
// 0x0079 (FullSize[0x0321] - InheritedSize[0x02A8])
class UTBP_UI_Social_Friend_Subscreen_C : public UTigerSocialFriendsUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     AddFriendButton;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      AddFriendImage;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   AddFriendText;                                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   FriendDisabledReasonText;                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FriendsDisabledPanel;                                      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FriendServiceUnavailablePanel;                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Social_PlayerCardList_C*             FriendsList;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                FriendsListPanel;                                          // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              FriendsTItleContainer;                                     // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Header;                                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   NumberOfFriendsText;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTigerFriend*>                        FriendObjs;                                                // 0x0310(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Friend_olnine;                                             // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C");
		return ptr;
	}



	void UpdateAvailability();
	void RemoveFriendFromList(class UTigerFriend** InLostFriend);
	void AddFriendToList(class UTigerFriend** InNewFriend);
	void RefreshFriendsList();
	void OnFriendAdded(class UTigerFriend* InNewFriend);
	void OnFriendRemoved(class UTigerFriend* InLostFriend);
	void OnFriendsLoaded();
	void OnOpen();
	void BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnFriendServiceStatusChanged(Tiger_ETigerOnlineServiceStatus InServiceStatus);
	void ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
