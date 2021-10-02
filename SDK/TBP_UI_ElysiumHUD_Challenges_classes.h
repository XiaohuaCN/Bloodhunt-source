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

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class UTBP_UI_ElysiumHUD_Challenges_C : public UTigerDataDependentWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                ChallengesContainer;                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ChallengesText;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C");
		return ptr;
	}



	bool IsDataLoaded(class ATigerPlayerController* InTigerPlayerController);
	void PopulateChallenges(int NrOfChallenges);
	void OnDataLoaded();
	void ListenToDataLoadingEvent();
	void Data_Listen_Event();
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
