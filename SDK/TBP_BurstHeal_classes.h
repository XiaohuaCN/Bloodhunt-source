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

// BlueprintGeneratedClass TBP_BurstHeal.TBP_BurstHeal_C
// 0x000C (FullSize[0x00CC] - InheritedSize[0x00C0])
class UTBP_BurstHeal_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              PulseHealMultiplier;                                       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BurstHeal.TBP_BurstHeal_C");
		return ptr;
	}



	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void Character_Action(Tiger_ETigerCharacterAction InCharacterAction);
	void ExecuteUbergraph_TBP_BurstHeal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
