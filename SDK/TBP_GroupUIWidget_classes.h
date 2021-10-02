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

// WidgetBlueprintGeneratedClass TBP_GroupUIWidget.TBP_GroupUIWidget_C
// 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
class UTBP_GroupUIWidget_C : public UTigerGroupUIWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                GroupMembersBox;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ScreenPanel;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTigerInWorldWidget*>                 GroupMemberWidgets;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_GroupUIWidget.TBP_GroupUIWidget_C");
		return ptr;
	}



	void ClearOutOfSightWidgets();
	class UTBP_GroupMemberStatusWidget_C* CreateMemberWidget(class APlayerController* OwningPlayer, bool bIsReadyForMatchmaking);
	void AddGroupMemberStatusWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMemberState, bool bInIsReadyForMatchmaking);
	void AddOutOfSightWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMember);
	void ClearGroupMembers();
	void AddGroupMemberToCanvas(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking);
	void OnGroupMemberReadyStatusChanged(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_GroupUIWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
