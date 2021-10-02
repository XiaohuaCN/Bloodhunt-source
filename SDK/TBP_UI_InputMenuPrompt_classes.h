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

// WidgetBlueprintGeneratedClass TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UTBP_UI_InputMenuPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_InputPrompt_Gamepad_C*               InputPrompt_Gamepad;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Keyboard_C*              InputPrompt_Keyboard;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_TransitionMenuButton_C*              TransitionMenuButton;                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       PrefixText;                                                // 0x0280(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       PostfixTest;                                               // 0x0298(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FName                                       InputAction;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bListenForInput;                                           // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_6XL4[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInputPressed;                                            // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void Internal_OnInputPressed();
	void BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void RestartAnimation();
	void ExecuteUbergraph_TBP_UI_InputMenuPrompt(int EntryPoint);
	void OnInputPressed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
