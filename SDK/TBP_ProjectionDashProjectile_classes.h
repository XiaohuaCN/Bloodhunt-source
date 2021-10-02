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

// BlueprintGeneratedClass TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C
// 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
class ATBP_ProjectionDashProjectile_C : public ATigerProjectionDashProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             IconRoot;                                                  // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Trail;                                                     // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Size;                                                      // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Archetype;                                                 // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MAX6[0x3];                                     // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ProjectionDashSirenAkEventID;                              // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ProjectionDashLoopAkEventID;                               // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C");
		return ptr;
	}



	void CreateWorldIcon(class ATigerPlayerController* InPlayerController);
	void OnProjectileStopped();
	void OnProjectileDeath();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_ProjectionDashProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
