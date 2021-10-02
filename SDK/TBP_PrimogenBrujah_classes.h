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

// BlueprintGeneratedClass TBP_PrimogenBrujah.TBP_PrimogenBrujah_C
// 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
class UTBP_PrimogenBrujah_C : public UTigerInteractiveNpcComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0158(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PrimogenBrujah.TBP_PrimogenBrujah_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_PrimogenBrujah(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
