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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C
// 0x0037 (FullSize[0x0398] - InheritedSize[0x0361])
class UTBP_UI_Grimoire_RootButton_C : public UTBP_UI_MatchMaker_TabButton_C
{
public:
	unsigned char                                      UnknownData_TP5I[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerIngameSubmenuWidget*                   MenuWidget;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsSelected;                                                // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S93T[0x7];                                     // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireCategory*                      MenuItemCategory;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C");
		return ptr;
	}



	void OnNewMenuSelected(class UTigerGrimoireCategory* NewCategory);
	void Construct();
	void OnButtonClicked();
	void ExecuteUbergraph_TBP_UI_Grimoire_RootButton(int EntryPoint);
	void OnClicked__DelegateSignature(class UTigerGrimoireCategory* SubmenuWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
