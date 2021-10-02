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

// WidgetBlueprintGeneratedClass TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C
// 0x0038 (FullSize[0x02E8] - InheritedSize[0x02B0])
class UTBP_UI_DialogueInteraction_C : public UTigerDialogueInteractionScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTBP_UI_InputMenuPrompt_C*                   CloseButtonPrompt;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   ContinueButtonPrompt;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_DialogueText_C*                      DialogueText;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                LastAkEvent;                                               // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q6R9[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UABP_Vendor_C*                               VendorAnimationInstance;                                   // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C");
		return ptr;
	}



	void EndInteraction();
	void StartInteraction();
	void NextDialoguePack();
	void NextDialogueLine(const struct FText& InText, const struct FText& InQuestObjective);
	void BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature();
	void OnInitialized();
	void OnClose();
	void Continue();
	void CloseDialogueInteraction();
	void OnOpen();
	void ExecuteUbergraph_TBP_UI_DialogueInteraction(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
