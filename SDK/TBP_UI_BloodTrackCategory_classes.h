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

// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C
// 0x0021 (FullSize[0x0281] - InheritedSize[0x0260])
class UTBP_UI_BloodTrackCategory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                           GridPanel;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodTrackLevelHeader_C*             TBP_UI_BloodTrackLevelHeader;                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                Columns;                                                   // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rows;                                                      // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerBloodTrackPassiveCategory              Category_Filter;                                           // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C");
		return ptr;
	}



	void Fill(TArray<class UTigerBloodTrackPassiveConfig*>* Passives, TArray<class UTigerBloodTrackPassiveConfig*>* Passives_To_Exclude, class UTBP_UI_BloodTrack_C* In_Blood_Track);
	void Construct();
	void ExecuteUbergraph_TBP_UI_BloodTrackCategory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
