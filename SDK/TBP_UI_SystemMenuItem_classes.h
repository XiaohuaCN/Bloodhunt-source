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

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C
// 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
class UTBP_UI_SystemMenuItem_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_TransitionMenuButton_C*              ItemUiButton;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TextBlock;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnWidgetClicked;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnWidgetHovered;                                           // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnWidgetUnhovered;                                         // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                               HoveredAudioEvent;                                         // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickedAudioEvent;                                         // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       ButtonLabel;                                               // 0x02D8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuItem.TBP_UI_SystemMenuItem_C");
		return ptr;
	}



	void SetIsDeselected();
	void SetIsSelected();
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__CreateNewCharacterUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_SystemMenuItem(int EntryPoint);
	void OnWidgetUnhovered__DelegateSignature();
	void OnWidgetHovered__DelegateSignature();
	void OnWidgetClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
