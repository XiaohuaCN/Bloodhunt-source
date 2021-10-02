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

// WidgetBlueprintGeneratedClass TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C
// 0x01A2 (FullSize[0x0432] - InheritedSize[0x0290])
class UTBP_UI_JoinGameMenu_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            CountdownAnimation;                                        // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     BackButton;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              Countdown;                                                 // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   LoadingThrobber;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     PopupRoot;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootWidget;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                               // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     TryAgainButton;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstanceRef;                                           // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               ThrobberVisibility;                                        // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H7OP[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleText;                                                 // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	UMG_ESlateVisibility                               ButtonVisibility;                                          // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QXE7[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CountdownValueLeft;                                        // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerBpFindSessionSelectedSession          SessionToJoin;                                             // 0x0308(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsFadingOut;                                              // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W15N[0x7];                                     // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionURL;                                                // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               bJoinThroughUrl;                                           // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Tiger_ESessionType                                 SESSIONTYPE;                                               // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C");
		return ptr;
	}



	void OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17();
	void OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17();
	void HandleFailure();
	void Join(const struct FTigerBpFindSessionSelectedSession& FoundSession);
	void OnFadeInComplete();
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1();
	void TriggerCountdownAnimation(int NewCountDownValue);
	void BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CancelJoin();
	void JoinThroughUrl(const struct FString& InSessionURL);
	void Construct();
	void ExecuteUbergraph_TBP_UI_JoinGameMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
