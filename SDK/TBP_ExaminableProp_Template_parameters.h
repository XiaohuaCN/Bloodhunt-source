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

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetToolTipText
struct ATBP_ExaminableProp_Template_C_SetToolTipText_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetDrawDistance
struct ATBP_ExaminableProp_Template_C_SetDrawDistance_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetCustomPrimitiveData
struct ATBP_ExaminableProp_Template_C_SetCustomPrimitiveData_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ValidateEntryId
struct ATBP_ExaminableProp_Template_C_ValidateEntryId_Params
{
	struct FString                                     EntryId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsValid;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ShowGrimoireEntryInfo
struct ATBP_ExaminableProp_Template_C_ShowGrimoireEntryInfo_Params
{
	struct FString                                     Entry_Id;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UpdateOutlineEffect
struct ATBP_ExaminableProp_Template_C_UpdateOutlineEffect_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineColor
struct ATBP_ExaminableProp_Template_C_SetOutlineColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.SetOutlineBillboardScale
struct ATBP_ExaminableProp_Template_C_SetOutlineBillboardScale_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.UserConstructionScript
struct ATBP_ExaminableProp_Template_C_UserConstructionScript_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveBeginPlay
struct ATBP_ExaminableProp_Template_C_ReceiveBeginPlay_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.DisableHighlight
struct ATBP_ExaminableProp_Template_C_DisableHighlight_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ReceiveTick
struct ATBP_ExaminableProp_Template_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OpenGrimoire
struct ATBP_ExaminableProp_Template_C_OpenGrimoire_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnInteract
struct ATBP_ExaminableProp_Template_C_OnInteract_Params
{
	Tiger_EInteractiveObjectState                      ActivatedTrigger;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATBP_ExaminableProp_Template_C_BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ATBP_ExaminableProp_Template_C_BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.OnLanguageChanged
struct ATBP_ExaminableProp_Template_C_OnLanguageChanged_Params
{
};

// Function TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C.ExecuteUbergraph_TBP_ExaminableProp_Template
struct ATBP_ExaminableProp_Template_C_ExecuteUbergraph_TBP_ExaminableProp_Template_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
