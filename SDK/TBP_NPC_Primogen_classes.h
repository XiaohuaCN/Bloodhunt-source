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

// BlueprintGeneratedClass TBP_NPC_Primogen.TBP_NPC_Primogen_C
// 0x0018 (FullSize[0x0B48] - InheritedSize[0x0B30])
class ATBP_NPC_Primogen_C : public ATigerPrimogenNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                        InteractionCamera;                                         // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_CharacterCustomizationComp_C*           TBP_CharacterCustomizationComp;                            // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_NPC_Primogen.TBP_NPC_Primogen_C");
		return ptr;
	}



	void DisableScreenCullSize();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_NPC_Primogen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
