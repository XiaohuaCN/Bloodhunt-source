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

// BlueprintGeneratedClass TBP_VanishBuff_Master.TBP_VanishBuff_Master_C
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UTBP_VanishBuff_Master_C : public UTigerBuffVanish
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_VanishBuff_Master.TBP_VanishBuff_Master_C");
		return ptr;
	}



	void OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_VanishBuff_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
