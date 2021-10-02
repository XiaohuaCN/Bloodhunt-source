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

// BlueprintGeneratedClass TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C
// 0x00B0 (FullSize[0x02A8] - InheritedSize[0x01F8])
class UTBP_BuffPostProcessHandler_C : public USceneComponent
{
public:
	unsigned char                                      UnknownData_Q3PG[0x8];                                     // 0x01F8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0200(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<int, class ATBP_BuffPostProcess_Master_C*>    ActiveList;                                                // 0x0208(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int, class ATBP_BuffPostProcess_Master_C*>    ActiveConsumableList;                                      // 0x0258(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C");
		return ptr;
	}



	void GetConsumableBuffDuration(class UTigerConsumableAsset* InConsumable, float* OutDuration);
	void GetConsumableID(class UTigerConsumableAsset* InConsumable, int* OutID);
	void AddPostProcess(class UClass* PostProcess, float Duration, int ID, class ATBP_BuffPostProcess_Master_C** PostProcessActor);
	void ReceiveBeginPlay();
	void OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration);
	void OnClientBuffIdUpdated(int OldId, int NewId);
	void OnUseConsumableStarted(class UTigerConsumableAsset* Consumable);
	void OnUseConsumableFinished(class UTigerConsumableAsset* Consumable);
	void OnUseConsumableCancelled(class UTigerConsumableAsset* Consumable);
	void ExecuteUbergraph_TBP_BuffPostProcessHandler(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
