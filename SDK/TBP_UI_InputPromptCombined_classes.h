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

// WidgetBlueprintGeneratedClass TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C
// 0x00A9 (FullSize[0x0329] - InheritedSize[0x0280])
class UTBP_UI_InputPromptCombined_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button;                                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             InputSwitcher;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad;                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              TBP_UI_InputPrompt_Keyboard;                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       PrefixText;                                                // 0x02A8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       PostfixText;                                               // 0x02C0(0x0018) (Edit, BlueprintVisible)
	struct FName                                       Action;                                                    // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAxis;                                                    // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CXL4[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         FontInfo;                                                  // 0x02E8(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsClickable;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C");
		return ptr;
	}



	void UpdatePromptVisibility();
	void Update_Properties(const struct FText& PrefixText, const struct FText& PostfixText, const struct FName& Action, bool IsAxis);
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad);
	void Construct();
	void BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetClickability(bool Index);
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_InputPromptCombined(int EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
