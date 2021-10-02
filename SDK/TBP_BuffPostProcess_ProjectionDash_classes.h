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

// BlueprintGeneratedClass TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C
// 0x0037 (FullSize[0x0298] - InheritedSize[0x0261])
class ATBP_BuffPostProcess_ProjectionDash_C : public ATBP_BuffPostProcess_Master_C
{
public:
	unsigned char                                      UnknownData_LEEF[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInterface*                          Material;                                                  // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Tick;                                                      // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash(int EntryPoint);
	void Tick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
