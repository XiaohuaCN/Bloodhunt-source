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

// BlueprintGeneratedClass TBP_MatchMaker.TBP_MatchMaker_C
// 0x000C (FullSize[0x0164] - InheritedSize[0x0158])
class UTBP_MatchMaker_C : public UTigerInteractiveNpcComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0158(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WelcomeSoundDelay;                                         // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_MatchMaker.TBP_MatchMaker_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnCountdownBegin();
	void OnTitleScreenClosed();
	void ExecuteUbergraph_TBP_MatchMaker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
