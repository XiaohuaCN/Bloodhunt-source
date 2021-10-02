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

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C
// 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
class UTBP_UI_SystemMenuKeybindings_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             BindingCollectionSwitcher;                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputBindingCollection_C*            GamepadBindingCollection;                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              GamepadSubmenuButton;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputBindingCollection_C*            KeyboardBindingCollection;                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              KeyboardSubmenuButton;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    ResetToDefaultsButton;                                     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       KeyboardSubmenuText;                                       // 0x02D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       GamepadSubmenuText;                                        // 0x02E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C");
		return ptr;
	}



	void LoadKeybind(struct FName* InName, struct FKey* InKey, int InIndex, float InAxisScale, bool InIsAxis);
	void RefreshKeyBindings(bool ShouldClearChildren);
	void LoadAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* UserInputBindings);
	void LoadKeyBindings(TArray<struct FInputActionKeyMapping>* UserInputBindings);
	void Construct();
	void BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature();
	void OnOpen();
	void BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature();
	void BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_SystemMenuKeybindings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
