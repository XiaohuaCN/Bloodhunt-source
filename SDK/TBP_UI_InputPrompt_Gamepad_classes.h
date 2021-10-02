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

// WidgetBlueprintGeneratedClass TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C
// 0x0098 (FullSize[0x0380] - InheritedSize[0x02E8])
class UTBP_UI_InputPrompt_Gamepad_C : public UTigerInputPrompt
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerStyledRichTextBlock*                   PostFixTextBlock;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PrefixTextBlock;                                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_XboxIcon_C*                          TBP_UI_XboxIcon;                                           // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                              FontInfo;                                                  // 0x0308(0x0058) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                                     CustomPadding;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                         Font;                                                      // 0x0370(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InputPrompt_Gamepad.TBP_UI_InputPrompt_Gamepad_C");
		return ptr;
	}



	void InputBindingChanged(const struct FName& InInputName);
	void UpdatePromptVisibility(bool bUsingGamePad);
	void ConstructIcon();
	void Construct();
	void Destruct();
	void OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void UpdateIcon();
	void UpdateProperties(const struct FText& NewPrefixText, const struct FText& NewPostfixText, bool bNewUseKey, const struct FName& NewInputAction, const struct FName& NewInputAxis, const struct FKey& NewInputKey);
	void OnInputBindingChanged(const struct FInputActionKeyMapping& OldKeyBinding, const struct FInputActionKeyMapping& NewKeyBinding);
	void OnInputPresetChanged();
	void OnAxisInputBindingChanged(const struct FInputAxisKeyMapping& OldKeyBinding, const struct FInputAxisKeyMapping& NewKeyBinding);
	void ExecuteUbergraph_TBP_UI_InputPrompt_Gamepad(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
