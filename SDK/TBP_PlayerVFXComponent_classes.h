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

// BlueprintGeneratedClass TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UTBP_PlayerVFXComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ATBP_Player_C*                               OwnerPlayer;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    HeavyAttackPS;                                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C");
		return ptr;
	}



	void OnCharacterCustomizationChanged();
	void OnHeavyAttackChargeEnd();
	void OnHeavyAttackChargeBegin();
	void OnAppearance_Changed(Tiger_ETigerPlayerApperanceChangeReason InReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_PlayerVFXComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
