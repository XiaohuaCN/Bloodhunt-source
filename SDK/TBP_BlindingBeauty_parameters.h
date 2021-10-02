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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.GlowCurve__FinishedFunc
struct ATBP_BlindingBeauty_C_GlowCurve__FinishedFunc_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.GlowCurve__UpdateFunc
struct ATBP_BlindingBeauty_C_GlowCurve__UpdateFunc_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.Timeline_0__FinishedFunc
struct ATBP_BlindingBeauty_C_Timeline_0__FinishedFunc_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.Timeline_0__UpdateFunc
struct ATBP_BlindingBeauty_C_Timeline_0__UpdateFunc_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.UpdateAnticipationVisibility__FinishedFunc
struct ATBP_BlindingBeauty_C_UpdateAnticipationVisibility__FinishedFunc_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.UpdateAnticipationVisibility__UpdateFunc
struct ATBP_BlindingBeauty_C_UpdateAnticipationVisibility__UpdateFunc_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.ReceiveBeginPlay
struct ATBP_BlindingBeauty_C_ReceiveBeginPlay_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.ReceiveEndPlay
struct ATBP_BlindingBeauty_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATBP_BlindingBeauty_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ATBP_BlindingBeauty_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.OnDashEnter
struct ATBP_BlindingBeauty_C_OnDashEnter_Params
{
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.OnDashExit
struct ATBP_BlindingBeauty_C_OnDashExit_Params
{
	bool                                               bInShouldTrigger;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_BlindingBeauty.TBP_BlindingBeauty_C.ExecuteUbergraph_TBP_BlindingBeauty
struct ATBP_BlindingBeauty_C_ExecuteUbergraph_TBP_BlindingBeauty_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
