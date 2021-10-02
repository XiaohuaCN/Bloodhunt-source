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

// WidgetBlueprintGeneratedClass TBP_UI_ServerSelection.TBP_UI_ServerSelection_C
// 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
class UTBP_UI_ServerSelection_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_MenuButton_C*                        CancelButton;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        ContinueButton;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             ServerComboBox;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BasicMenu_C*                         TBP_UI_BasicMenu;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTigerBpFindSessionResultList               Sessions;                                                  // 0x02B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnServerSelected;                                          // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ServerSelection.TBP_UI_ServerSelection_C");
		return ptr;
	}



	void OnMatchServerList(const struct FTigerBpFindSessionResultList& SessionAlternatives);
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void JointSelectedServer();
	void ExecuteUbergraph_TBP_UI_ServerSelection(int EntryPoint);
	void OnCancel__DelegateSignature();
	void OnServerSelected__DelegateSignature(const struct FTigerBpFindSessionSelectedSession& Session);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
