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

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C
// 0x000F (FullSize[0x0388] - InheritedSize[0x0379])
class UTBP_UI_ElysiumGameMenu_C : public UTBP_UI_MenuContainer_C
{
public:
	unsigned char                                      UnknownData_EQOU[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C");
		return ptr;
	}



	void MessageElysiumMenuChangeInterface();
	void OnCurrencyButtonReleased();
	void ToggleSocialMenu();
	void CreatePlayerInfoWidget();
	void Construct();
	void InitializePlayerInfomation(class ATigerPlayerController* PlayerController);
	void PreConstruct(bool IsDesignTime);
	void OnBackgroundShown();
	void OnMenuSelected();
	void ExecuteUbergraph_TBP_UI_ElysiumGameMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
