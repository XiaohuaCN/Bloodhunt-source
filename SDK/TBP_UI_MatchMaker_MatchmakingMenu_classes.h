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

// WidgetBlueprintGeneratedClass TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UTBP_UI_MatchMaker_MatchmakingMenu_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_MenuButton_C*                        GoToPragueButton;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_MatchMaker_MatchmakingMenu.TBP_UI_MatchMaker_MatchmakingMenu_C");
		return ptr;
	}



	bool CanGoToPrague();
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_MatchMaker_MatchmakingMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
