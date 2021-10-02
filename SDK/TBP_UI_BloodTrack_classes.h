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

// WidgetBlueprintGeneratedClass TBP_UI_BloodTrack.TBP_UI_BloodTrack_C
// 0x004C (FullSize[0x02AC] - InheritedSize[0x0260])
class UTBP_UI_BloodTrack_C : public UUserWidget
{
public:
	class UHorizontalBox*                              PassiveBox;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              SlotPadding;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H4V4[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTigerBloodTrackPassiveConfig*>       Current_Blood_Vein;                                        // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTBP_UI_BloodTrackCustomizer_C*              Blood_Track_Customizer;                                    // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Read_Only;                                              // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_4PBV[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LevelText;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bIsInInventory;                                            // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z3HO[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerLevelCap;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerLevelCurrent;                                        // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodTrack.TBP_UI_BloodTrack_C");
		return ptr;
	}



	void Update_Passive_Slot_Opacity(int PlayerLevel);
	void Init(int PlayerLevelCap, int PlayerLevelCurrent, bool bIsInInventory);
	void GetSlotAtIndex(int Index, class UTBP_UI_BloodTrackPassiveSlot_C** Blood_Track_Slot);
	void Populate(TArray<class UTigerBloodTrackPassiveConfig*>* BloodTrack);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
