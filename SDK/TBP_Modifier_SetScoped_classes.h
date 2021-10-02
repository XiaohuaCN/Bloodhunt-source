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

// BlueprintGeneratedClass TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C
// 0x0019 (FullSize[0x0041] - InheritedSize[0x0028])
class UTBP_Modifier_SetScoped_C : public UTigerRangedWeaponModModifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bIsScoped;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1N6P[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CrossHairWidget;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAppliedWidget;                                            // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Modifier_SetScoped.TBP_Modifier_SetScoped_C");
		return ptr;
	}



	void OnModEquipped(class UTigerEquippedModModifierValues* Modifiers);
	void OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers);
	void ExecuteUbergraph_TBP_Modifier_SetScoped(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
