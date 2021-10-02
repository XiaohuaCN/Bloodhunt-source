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

// BlueprintGeneratedClass TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C
// 0x0034 (FullSize[0x00CC] - InheritedSize[0x0098])
class UTBP_CheckLureTargetValidity_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      LureTarget;                                                // 0x00A0(0x0028) (Edit, BlueprintVisible)
	float                                              LureRadiusSquared;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TBP_CheckLureTargetValidity(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
