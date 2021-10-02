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

// WidgetBlueprintGeneratedClass TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C
// 0x0088 (FullSize[0x0318] - InheritedSize[0x0290])
class UTBP_UI_JoinPartyElysiumScreen_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_MenuButton_C*                        ExitButton;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   LoadingThrobber;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BasicMenu_C*                         TBP_UI_BasicMenu;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        TryAgainButton;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstanceRef;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>             FoundSessions;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	UMG_ESlateVisibility                               ThrobberVisibility;                                        // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_24IF[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleText;                                                 // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	UMG_ESlateVisibility                               ButtonVisibility;                                          // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IXN2[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFailed;                                                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_JoinPartyElysiumScreen.TBP_UI_JoinPartyElysiumScreen_C");
		return ptr;
	}



	void FindGameInstanceRef();
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature();
	void Join();
	void Construct();
	void SetupUiForJoining();
	void HandleFailure();
	void ExecuteUbergraph_TBP_UI_JoinPartyElysiumScreen(int EntryPoint);
	void OnSuccess__DelegateSignature();
	void OnFailed__DelegateSignature(const struct FString& ErrorString);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
