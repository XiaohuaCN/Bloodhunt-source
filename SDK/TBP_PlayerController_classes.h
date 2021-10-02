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

// BlueprintGeneratedClass TBP_PlayerController.TBP_PlayerController_C
// 0x0038 (FullSize[0x0BE0] - InheritedSize[0x0BA8])
class ATBP_PlayerController_C : public ATigerPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_ChatComponent_C*                        TBP_ChatComponent;                                         // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_ContextualHelpComponent_C*              TBP_ContextualHelpComponent;                               // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_PingControllerComponent_C*              TBP_PingControllerComponent;                               // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_EmoteControllerComponent_C*             TBP_EmoteControllerComponent;                              // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTigerMenuWidget*                            ArchetypeHelpUI;                                           // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ArchtypeHelpClass;                                         // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PlayerController.TBP_PlayerController_C");
		return ptr;
	}



	void StopGasSounds();
	void DebugCrosshairLineHitTest(const struct FVector& Start, const struct FVector& End);
	void OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C();
	void OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C();
	void InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ReturnToElysium();
	void ShowPostMatchScreen();
	void OnGhostModeSet_Event(bool bIsGhostModeEnabled);
	void BindOnGhostModeSet();
	void ExitMatch();
	void OnToggleMainMenu();
	void Debug_ShowCharacterCard();
	void ExecuteUbergraph_TBP_PlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
