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

// BlueprintGeneratedClass TBP_Trap.TBP_Trap_C
// 0x0048 (FullSize[0x0368] - InheritedSize[0x0320])
class ATBP_Trap_C : public ATigerTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         TrapLightBottom;                                           // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             IconLocation;                                              // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             IconRoot;                                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpotLightComponent*                         TrapLightTop;                                              // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Dyn_material;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Curve;                                                     // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerTrapsConfig*                           TrapConfig;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInWorldWidget*                         InWorldWidget;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Trap.TBP_Trap_C");
		return ptr;
	}



	void CreateWorldIcon(class ATigerPlayerController* InPlayerController, class UTBP_UI_Discipline_Trap_WorldMarker_C** OutWidget);
	void IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* OtherCharacter, bool* Is_Friendly);
	void GetWorldMarkerWidget(class UTBP_UI_Discipline_Trap_WorldMarker_C** AsTBP_UI_Discipline_Trap_World_Marker, bool* bSuccess);
	void OnPlacedTrap();
	void OnActivatedTrap();
	void OnTriggeredTrap();
	void TrapDestroy();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_Trap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
