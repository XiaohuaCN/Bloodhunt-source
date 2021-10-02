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

// WidgetBlueprintGeneratedClass TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class UTBP_UI_ErrorPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_ConfirmMenu_C*                       ConfirmMenu;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClose;                                                   // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C");
		return ptr;
	}



	void ShowErrorString(const struct FString& InSourceString);
	void BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_ErrorPrompt(int EntryPoint);
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
