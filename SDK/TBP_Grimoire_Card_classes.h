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

// BlueprintGeneratedClass TBP_Grimoire_Card.TBP_Grimoire_Card_C
// 0x00B0 (FullSize[0x02F8] - InheritedSize[0x0248])
class ATBP_Grimoire_Card_C : public ATigerGrimoireCard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     FloatingCardAnimation_TranslationCurve_F0AD789C4045538D46B43F856C07A722; // 0x0250(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FloatingCardAnimation__Direction_F0AD789C4045538D46B43F856C07A722; // 0x025C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LFET[0x3];                                     // 0x025D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FloatingCardAnimation;                                     // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    CardMaterialInstance;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGrimoireCardMaterialPreset*                 CardMaterialPreset;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamage;                                                 // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxExtraDamage;                                            // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamageOnEdges;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QL51[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireEntry*                         CurrentEntry;                                              // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              TransitionSequence;                                        // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MaxFloatHeight;                                            // 0x02A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxVertical;                                               // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHorizontal;                                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LeftVec;                                                   // 0x02B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Begin_Float_Animation_Dispatcher;                          // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                     MaxRotation;                                               // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MinRotation;                                               // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionPlayRate;                                        // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatingPlayRate;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                               CardStream;                                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Grimoire_Card.TBP_Grimoire_Card_C");
		return ptr;
	}



	void Randomise_Damage_Placement();
	void OnClose();
	void OnOpen();
	void Play_Card_Transition_Animation();
	void Set_Is_Back_Using_DNMR(bool InBool);
	void Set_Is_Front_Using_DNMR(bool InBool);
	void Change_Card_To_New_Card(class UTigerGrimoireEntry* InEntry);
	void Change_Quality_Level(const struct FDataTableRowHandle& InRow);
	void Change_Border_Colour(const struct FDataTableRowHandle& InRow);
	void Send_Card_Mat_Properties_to_Material();
	void Send_Backface_Texture_to_Material();
	void Send_Frontface_Texture_to_Material();
	void Overwrite_Card_Material_Preset(class UGrimoireCardMaterialPreset* InPreset);
	void Set_Frontface(class UTexture* InTexture);
	void Set_Backface(class UTexture* InTexture);
	void Create_Material_Instance();
	void Show(class UTigerGrimoireEntry* InEntry, Tiger_ETigerGrimoireEntryMediaDisplayMode InLastEntryNode);
	void UserConstructionScript();
	void FloatingCardAnimation__FinishedFunc();
	void FloatingCardAnimation__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayFloatingAnimation();
	void ExecuteUbergraph_TBP_Grimoire_Card(int EntryPoint);
	void Begin_Float_Animation_Dispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
