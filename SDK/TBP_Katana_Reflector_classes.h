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

// BlueprintGeneratedClass TBP_Katana_Reflector.TBP_Katana_Reflector_C
// 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
class ATBP_Katana_Reflector_C : public ATigerWeaponAbilityReflectActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Null;                                                      // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Null3;                                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Null2;                                                     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ReflectedProjectile;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Start_time2;                                               // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UBWS[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraComponent*                           niagaravar;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Katana_Reflector.TBP_Katana_Reflector_C");
		return ptr;
	}



	bool CanBeReflected(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool bInFromSweep, const struct FHitResult& InSweepResult);
	void CheckIfProjectileHitWithinCone(const struct FVector& HitLocation, bool* bIsWithinCone);
	void ReceiveBeginPlay();
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_TBP_Katana_Reflector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
