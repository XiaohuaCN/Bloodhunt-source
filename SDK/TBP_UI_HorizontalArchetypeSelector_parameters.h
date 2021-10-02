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

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ChangeArchetypeButtonSelection
struct UTBP_UI_HorizontalArchetypeSelector_C_ChangeArchetypeButtonSelection_Params
{
	Tiger_ETigerPowerKitType                           InArchetypeType;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateWidgetForArchetype
struct UTBP_UI_HorizontalArchetypeSelector_C_CreateWidgetForArchetype_Params
{
	Tiger_ETigerPowerKitType                           InArchetypeType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateArchetypeWidgetsForClan
struct UTBP_UI_HorizontalArchetypeSelector_C_CreateArchetypeWidgetsForClan_Params
{
	class UTigerPlayerClanData*                        InClanData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateDivider
struct UTBP_UI_HorizontalArchetypeSelector_C_CreateDivider_Params
{
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnSelectionChanged
struct UTBP_UI_HorizontalArchetypeSelector_C_OnSelectionChanged_Params
{
	class UTigerPowerKit*                              InArchetypeData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.SelectArchetype
struct UTBP_UI_HorizontalArchetypeSelector_C_SelectArchetype_Params
{
	Tiger_ETigerPowerKitType                           InArchetypeType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector
struct UTBP_UI_HorizontalArchetypeSelector_C_ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnArchetypeSelected__DelegateSignature
struct UTBP_UI_HorizontalArchetypeSelector_C_OnArchetypeSelected__DelegateSignature_Params
{
	class UTigerPowerKit*                              InArchetypeData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
