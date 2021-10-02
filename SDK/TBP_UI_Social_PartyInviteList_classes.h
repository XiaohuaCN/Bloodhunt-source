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

// WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C
// 0x0018 (FullSize[0x02A0] - InheritedSize[0x0288])
class UTBP_UI_Social_PartyInviteList_C : public UTigerSocialPartyInviteListUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UListView*                                   PartyInviteListView;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_22;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C");
		return ptr;
	}



	void Open();
	void Close();
	void OnInviteReceived(class UTigerPartyInvite* InInvite);
	void OnInviteRemoved(class UTigerPartyInvite* InInvite);
	void ExecuteUbergraph_TBP_UI_Social_PartyInviteList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
