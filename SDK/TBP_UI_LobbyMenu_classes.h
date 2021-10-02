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

// WidgetBlueprintGeneratedClass TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C
// 0x00A0 (FullSize[0x0330] - InheritedSize[0x0290])
class UTBP_UI_LobbyMenu_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     HostButton;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad_LeaveGroup;                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad_PlayerList;                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad_Quit;                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad_Resume;                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad_SelectCharacter;                       // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard_LeaveGroup;                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard_PlayerList;                           // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard_Quit;                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard_Resume;                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard_SelectCharacter;                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        LeaveGroupButton;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        PlayerListButton;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       QuitConfirmation;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        QuitGameButton;                                            // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        ResumeButton;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        SelectCharacterButton;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BasicMenu_C*                         TBP_UI_BasicMenu;                                          // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstanceRef;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_LobbyMenu.TBP_UI_LobbyMenu_C");
		return ptr;
	}



	void ShowQuitConfirmation();
	void ShowLobbyMenu();
	bool Get_FindButton_bIsEnabled_1();
	UMG_ESlateVisibility Get_LeaveGroup_Visibility_1();
	void Construct();
	void BndEvt__HostButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_444_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_C_2_K2Node_ComponentBoundEvent_609_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_C_3_K2Node_ComponentBoundEvent_620_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_ConfirmMenu_K2Node_ComponentBoundEvent_25_Confirm__DelegateSignature();
	void BndEvt__QuitConfirmation_K2Node_ComponentBoundEvent_81_Decline__DelegateSignature();
	void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_113_OnClicked__DelegateSignature();
	void Resume();
	void OnOpen();
	void OnClose();
	void SelectCharacter();
	void LeaveGroup();
	void ExecuteUbergraph_TBP_UI_LobbyMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
