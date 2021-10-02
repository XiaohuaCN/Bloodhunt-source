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

// BlueprintGeneratedClass TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C
// 0x000C (FullSize[0x00CC] - InheritedSize[0x00C0])
class UTBP_AnAcquiredTaste_C : public UTigerPassiveComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Stacks;                                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C");
		return ptr;
	}



	void OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority);
	void OnPlayerEvent(Tiger_ETigerPlayerEvent Event, class ATigerCharacter* EventTiedCharacter);
	void ExecuteUbergraph_TBP_AnAcquiredTaste(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
