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

// BlueprintGeneratedClass TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C
// 0x0040 (FullSize[0x0278] - InheritedSize[0x0238])
class ATBP_Grimoire_ModelViewerItem_C : public ATigerModelViewerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerGrimoireEntry*                         CurrentEntry;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      RootObject;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            CurrentCamera;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CurrentWorldSpaceScale;                                    // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetWorldSpaceScale;                                     // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C");
		return ptr;
	}



	void ResetScale();
	void AdjustByDeltaPosition();
	void EnforceDesiredScreenSize();
	void RecalculateScreenSize();
	void OnMeshLoaded();
	void Show(class UTBP_UI_Grimoire_CategoryButton_C* InSelectedButton);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_Grimoire_ModelViewerItem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
