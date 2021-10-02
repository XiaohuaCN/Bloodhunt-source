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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C
// 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_ImageBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image;                                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsDisplayed;                                               // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QV41[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireEntry*                         GrimoireEntry;                                             // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ImageBox.TBP_UI_Grimoire_ImageBox_C");
		return ptr;
	}



	void OnMediaLoaded();
	void IsShown(bool* ShowStatus);
	void Hide();
	void Show(class UTigerGrimoireEntry* SelectedItem);
	void Construct();
	void ExecuteUbergraph_TBP_UI_Grimoire_ImageBox(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
