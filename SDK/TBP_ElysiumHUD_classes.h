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

// BlueprintGeneratedClass TBP_ElysiumHUD.TBP_ElysiumHUD_C
// 0x0010 (FullSize[0x0528] - InheritedSize[0x0518])
class ATBP_ElysiumHUD_C : public ATigerElysiumHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ElysiumHUD.TBP_ElysiumHUD_C");
		return ptr;
	}



	void HideOnScreenUI();
	void ShowOnScreenUI();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_ElysiumHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
