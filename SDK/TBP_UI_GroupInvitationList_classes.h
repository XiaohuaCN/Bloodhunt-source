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

// WidgetBlueprintGeneratedClass TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
class UTBP_UI_GroupInvitationList_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             InvitationQueue;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstance;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C");
		return ptr;
	}



	void CheckIfRepeatedInviteFromPlayer(class ATigerPlayerState* Inviter, bool* NewInvite);
	void AddInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_TBP_UI_GroupInvitationList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
