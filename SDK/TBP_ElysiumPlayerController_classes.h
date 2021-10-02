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

// BlueprintGeneratedClass TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C
// 0x0012 (FullSize[0x0BF2] - InheritedSize[0x0BE0])
class ATBP_ElysiumPlayerController_C : public ATBP_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerVendorComponent*                       TigerVendorComponent;                                      // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasReceivedPlayerOutfit;                                  // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsPreloadingDone;                                         // 0x0BF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C");
		return ptr;
	}



	void InpActEvt_MapToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void OnInGameMenuToggled(bool bIsOpen);
	void OnPreloadingDone();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_ElysiumPlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
