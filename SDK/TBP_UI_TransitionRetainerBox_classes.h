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

// BlueprintGeneratedClass TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C
// 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
class UTBP_UI_TransitionRetainerBox_C : public URetainerBox
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C");
		return ptr;
	}



	void CreateDynamicEffectMaterial(class UMaterialInstanceDynamic** EffectMaterial);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
