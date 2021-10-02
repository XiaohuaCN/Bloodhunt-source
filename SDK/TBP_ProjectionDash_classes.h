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

// BlueprintGeneratedClass TBP_ProjectionDash.TBP_ProjectionDash_C
// 0x000C (FullSize[0x0174] - InheritedSize[0x0168])
class UTBP_ProjectionDash_C : public UTigerDisciplineProjectionDash
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FullscreenFurthestFocusPoint;                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ProjectionDash.TBP_ProjectionDash_C");
		return ptr;
	}



	void OnDashStart();
	void OnDashEnd();
	void UpdateFocusPoint();
	void ExecuteUbergraph_TBP_ProjectionDash(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
