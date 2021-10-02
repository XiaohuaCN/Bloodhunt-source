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

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetLockedColor
struct UTBP_UI_ResourceBar_Shield_C_GetLockedColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetEmptyColor
struct UTBP_UI_ResourceBar_Shield_C_GetEmptyColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetFilledColor
struct UTBP_UI_ResourceBar_Shield_C_GetFilledColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetRecentResourcesLost
struct UTBP_UI_ResourceBar_Shield_C_GetRecentResourcesLost_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetMaxResources
struct UTBP_UI_ResourceBar_Shield_C_GetMaxResources_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetCurrentResources
struct UTBP_UI_ResourceBar_Shield_C_GetCurrentResources_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnInitialized
struct UTBP_UI_ResourceBar_Shield_C_OnInitialized_Params
{
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnShieldChanged
struct UTBP_UI_ResourceBar_Shield_C_OnShieldChanged_Params
{
	float                                              InNewHealth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InNewHealthPercentage;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.ExecuteUbergraph_TBP_UI_ResourceBar_Shield
struct UTBP_UI_ResourceBar_Shield_C_ExecuteUbergraph_TBP_UI_ResourceBar_Shield_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
