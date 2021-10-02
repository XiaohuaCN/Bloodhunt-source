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

// BlueprintGeneratedClass TBP_LoadingToolTip.TBP_LoadingToolTip_C
// 0x0014 (FullSize[0x0044] - InheritedSize[0x0030])
class UTBP_LoadingToolTip_C : public UPrimaryDataAsset
{
public:
	TArray<struct FTS_LoadingTip>                      LoadingTips;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SecondsBetweenLoadingTips;                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_LoadingToolTip.TBP_LoadingToolTip_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
