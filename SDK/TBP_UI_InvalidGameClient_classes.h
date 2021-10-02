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

// WidgetBlueprintGeneratedClass TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C
// 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
class UTBP_UI_InvalidGameClient_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     DeveloperButton;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       TBP_UI_ConfirmMenu;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnExited;                                                  // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnIgnored_Dispatch;                                        // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C");
		return ptr;
	}



	void Construct();
	void OnAcceptedTheirFate();
	void OnIsAPersonWhomBelievesThatRulesAreFlawedAsASocialConstruct();
	void ExecuteUbergraph_TBP_UI_InvalidGameClient(int EntryPoint);
	void OnIgnored_Dispatch__DelegateSignature();
	void OnExited__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
