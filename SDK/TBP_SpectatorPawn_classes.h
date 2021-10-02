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

// BlueprintGeneratedClass TBP_SpectatorPawn.TBP_SpectatorPawn_C
// 0x0018 (FullSize[0x0320] - InheritedSize[0x0308])
class ATBP_SpectatorPawn_C : public ATigerSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Listener_Component;                                        // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_SpectatorPawn.TBP_SpectatorPawn_C");
		return ptr;
	}



	void SetAudioListenerOverride();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_SpectatorPawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
