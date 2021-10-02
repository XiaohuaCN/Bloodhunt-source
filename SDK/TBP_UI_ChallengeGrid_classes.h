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

// WidgetBlueprintGeneratedClass TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C
// 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
class UTBP_UI_ChallengeGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeRight;                                                 // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeLeft;                                                  // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUniformGridPanel*                           Grid;                                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerClientRewardTrackChallenges*           ChallengeTrack;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               HasExpired;                                                // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_LSS0[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    AnimationFinished;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                                   ChallengeWidgetSize;                                       // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2();
	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1();
	void SetChallengeWidgetSize(float Width, float Height);
	void UpdateChallengeProgress();
	void FillGrid();
	void Construct();
	void CallAnimationFinished();
	void ExecuteUbergraph_TBP_UI_ChallengeGrid(int EntryPoint);
	void AnimationFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
