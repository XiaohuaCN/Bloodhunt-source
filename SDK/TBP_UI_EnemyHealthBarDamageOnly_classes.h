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

// WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C
// 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
class UTBP_UI_EnemyHealthBarDamageOnly_C : public UTigerUIEnemyHealthBar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              LastDamageTime;                                            // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZDYU[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_DamageNumber_C*                      CurrentDamageNumberUI;                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsGroupMember;                                            // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q68N[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DamageNumberUpdateTime;                                    // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageNumberUpdateGraceTime;                               // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XJFU[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerCharacter*                             TigerCharacterOwner;                                       // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C");
		return ptr;
	}



	void SetTigerCharacter(class ATigerCharacter* TigerCharacter);
	void Set_Damage_Amount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool InHasExtraHealth, bool InHasShield, float InRangedDamageFalloffPercent, bool InBelowLowHealthThreshold);
	void UpdateCurrentDamageNumber();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
