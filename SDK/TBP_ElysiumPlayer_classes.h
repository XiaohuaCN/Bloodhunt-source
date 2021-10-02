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

// BlueprintGeneratedClass TBP_ElysiumPlayer.TBP_ElysiumPlayer_C
// 0x0014 (FullSize[0x1378] - InheritedSize[0x1364])
class ATBP_ElysiumPlayer_C : public ATBP_Player_C
{
public:
	unsigned char                                      UnknownData_HU69[0x4];                                     // 0x1364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1368(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            NameplateWidget;                                           // 0x1370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ElysiumPlayer.TBP_ElysiumPlayer_C");
		return ptr;
	}



	void OnJoinedParty(const struct FTigerParty& InParty);
	void OnGotPlayerState();
	void OnLeftParty(const struct FTigerParty& InParty);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_ElysiumPlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
