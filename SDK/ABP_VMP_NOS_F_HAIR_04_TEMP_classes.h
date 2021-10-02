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

// AnimBlueprintGeneratedClass ABP_VMP_NOS_F_HAIR_04_TEMP.ABP_VMP_NOS_F_HAIR_04_TEMP_C
// 0x0040 (FullSize[0x02F8] - InheritedSize[0x02B8])
class UABP_VMP_NOS_F_HAIR_04_TEMP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_7YTF[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_VMP_NOS_F_HAIR_04_TEMP.ABP_VMP_NOS_F_HAIR_04_TEMP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_VMP_NOS_F_HAIR_04_TEMP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
