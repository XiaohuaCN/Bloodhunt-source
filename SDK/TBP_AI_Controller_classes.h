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

// BlueprintGeneratedClass TBP_AI_Controller.TBP_AI_Controller_C
// 0x0018 (FullSize[0x04B0] - InheritedSize[0x0498])
class ATBP_AI_Controller_C : public ATigerAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       SelfKey;                                                   // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_AI_Controller.TBP_AI_Controller_C");
		return ptr;
	}



	void DebugStimulus(const struct FAIStimulus& Stimulus);
	void HandleNonVampireStimulus(const struct FAIStimulus& Stimulus);
	void SyncKeysFromBlackboard();
	void InitBlackBoardBB_Police();
	void InitBlackBoardBB_Civilian();
	void InitBlackBoardBB_Entity();
	void InitBlackBoardValues(Tiger_ETigerNPCType NPC_Type);
	void ReceiveBeginPlay();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SetupData(Tiger_ETigerNPCType InNPCType);
	void ExecuteUbergraph_TBP_AI_Controller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
