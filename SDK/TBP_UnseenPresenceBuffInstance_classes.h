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

// BlueprintGeneratedClass TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C
// 0x000C (FullSize[0x00A4] - InheritedSize[0x0098])
class UTBP_UnseenPresenceBuffInstance_C : public UTigerBuffUnseenPresenceInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CurrentOpacity;                                            // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C");
		return ptr;
	}



	void UpdateInvisibilityMaterial(float DeltaTime, class ATigerPlayer* Player, class UMaterialInstanceDynamic* MaterialInstance);
	void ExecuteUbergraph_TBP_UnseenPresenceBuffInstance(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
