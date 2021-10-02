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

// BlueprintGeneratedClass TBP_Enraged.TBP_Enraged_C
// 0x001C (FullSize[0x024C] - InheritedSize[0x0230])
class ATBP_Enraged_C : public ATigerEnragedEffectActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    RegeneratingEmitter;                                       // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                EnrageAkEventID;                                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Enraged.TBP_Enraged_C");
		return ptr;
	}



	void PlayEnrageAudio();
	void StopEnrageAudio();
	void OnRegenStarted();
	void OnRegenStopped();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_TBP_Enraged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
