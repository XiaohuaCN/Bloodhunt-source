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

// BlueprintGeneratedClass TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UTBP_WEP_Ability_Dash_C : public UTigerWeaponAbilityDash
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C");
		return ptr;
	}



	void OnCharacterHit(class ATigerCharacter* AHitTigerCharacter);
	void OnTerrainHitResult(class AActor* InTerrainActor, class UPrimitiveComponent* InHitComponent, const struct FHitResult& InHitResult);
	void ExecuteUbergraph_TBP_WEP_Ability_Dash(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
