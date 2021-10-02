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

// WidgetBlueprintGeneratedClass TBP_UI_DamageBase.TBP_UI_DamageBase_C
// 0x0011 (FullSize[0x0291] - InheritedSize[0x0280])
class UTBP_UI_DamageBase_C : public UTigerWidget
{
public:
	struct FVector                                     EnemyLocation;                                             // 0x0280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CanHandleAngle;                                            // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsVisible;                                                // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_DamageBase.TBP_UI_DamageBase_C");
		return ptr;
	}



	void HasExtraHealth(class ATigerPlayer* Player, bool* HasExtraHealth);
	void GetWidgetColor(class ATBP_Player_C* Player, struct FLinearColor* Color);
	void CanHandleDirection(const struct FVector& DamageLocation, bool* IsHandled);
	void OnDamage(const struct FVector& DamageLocation, float DamageAmount, float NewHealthAmount, bool* IsHandled);
	void IsAlive(bool* IsAlive);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
