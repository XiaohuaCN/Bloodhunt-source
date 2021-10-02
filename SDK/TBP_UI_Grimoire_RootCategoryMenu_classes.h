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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C
// 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_RootCategoryMenu_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              MenuItems;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTBP_UI_Grimoire_RootButton_C*>       MenuButtons;                                               // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActiveIndex;                                               // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EMI6[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_Grimoire_Searchbar_C*                SearchBar;                                                 // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootCategoryMenu.TBP_UI_Grimoire_RootCategoryMenu_C");
		return ptr;
	}



	void DecrementMenuIndex();
	void IncrementMenuIndex();
	void SetupMenuButtons();
	void SelectMenuOnClick(class UTigerGrimoireCategory* SelectedCategory);
	void OnOpen(class UTBP_UI_Grimoire_C* GrimoireUI);
	void MenuLeftPressed();
	void MenuRightPressed();
	void OnClose();
	void ExecuteUbergraph_TBP_UI_Grimoire_RootCategoryMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
