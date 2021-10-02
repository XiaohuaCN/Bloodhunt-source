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

// WidgetBlueprintGeneratedClass TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C
// 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
class UTBP_GroupMemberStatusWidget_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_SharedPlayerStatus_C*                TBP_UI_SharedStatusPanel;                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                                  BloodLevelSymbol;                                          // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsReadyForMatchmaking;                                    // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_LCVV[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerPlayerState*                           GroupMemberState;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                GroupMember;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C");
		return ptr;
	}



	void SetPlayerColor(unsigned char InPlayerIndex);
	void OnPawnChanged(class APawn* New_Pawn);
	void UpdateElysiumVisibility();
	void SetMember(class ATigerPlayerState* InGroupMemberState);
	void UpdateMatchmakingReadyStatus(bool InIsReadyForMatchmaking);
	void ExecuteUbergraph_TBP_GroupMemberStatusWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
