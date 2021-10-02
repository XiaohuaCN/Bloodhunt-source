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

// WidgetBlueprintGeneratedClass TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C
// 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
class UTBP_UI_TutorialMenu_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_MenuButton_C*                        QuitButton;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        ResumeButton;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        ReturnButton;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BasicMenu_C*                         SelectionMenu;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       TBP_UI_ConfirmMenu;                                        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad_Quit;                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad_Resume;                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad_Return;                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              TBP_UI_InputPrompt_Keyboard_Quit;                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              TBP_UI_InputPrompt_Keyboard_Resume;                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              TBP_UI_InputPrompt_Keyboard_Return;                        // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstanceRef;                                           // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ConfirmLeave;                                              // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ConfirmQuit;                                               // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BJ24[0x2];                                     // 0x02FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WaitCount;                                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_TutorialMenu.TBP_UI_TutorialMenu_C");
		return ptr;
	}



	void TryToJoinElysiumSession();
	void ShowConfirmMenu(bool Leave, bool Quit);
	void ReturnToMenu();
	void BndEvt__FindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_85_Confirm__DelegateSignature();
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnStatsReadyOrTimeout(bool bTimedOut);
	void ShowConfirmMenu_Return();
	void ShowConfirmMenu_Quit();
	void ResumeGame();
	void OnOpen();
	void OnClose();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_0_Decline__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_TutorialMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
