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

// WidgetBlueprintGeneratedClass TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C
// 0x00C5 (FullSize[0x0345] - InheritedSize[0x0280])
class UTBP_UI_ConfirmMenu_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_InputMenuPrompt_C*                   ConfirmWidget;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   DeclineWidget;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   InnerCountdownWidget;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   InnerTitleWidget;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_FullScreen_PopUp_Base_C*             PopUpWidget;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Confirm;                                                   // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Decline;                                                   // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       AcceptText;                                                // 0x02D0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       DeclineText;                                               // 0x02E8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UAkAudioEvent*                               ConfirmAudioEvent;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               DeclineAudioEvent;                                         // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       QuestionText;                                              // 0x0310(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               bFadeOut;                                                  // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_77W1[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    CountdownFinished;                                         // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                CountdownTime;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ContinueCountdown;                                         // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C");
		return ptr;
	}



	void SetTitleText(const struct FText& TitleText);
	void Hide(bool TryFadeOut);
	void Show();
	void PreConstruct(bool IsDesignTime);
	void Yes();
	void No();
	void BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature();
	void Construct();
	void OnInitialized();
	void OnFadeOutFinished();
	void InitCountdown(int InSeconds);
	void StopCountdown();
	void ExecuteUbergraph_TBP_UI_ConfirmMenu(int EntryPoint);
	void CountdownFinished__DelegateSignature();
	void Decline__DelegateSignature();
	void Confirm__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
