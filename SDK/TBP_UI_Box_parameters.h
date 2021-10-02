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

// Function TBP_UI_Box.TBP_UI_Box_C.ShouldSetSize
struct UTBP_UI_Box_C_ShouldSetSize_Params
{
	bool                                               ShouldSetSize;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Box.TBP_UI_Box_C.SetBorderOpacity
struct UTBP_UI_Box_C_SetBorderOpacity_Params
{
	float                                              InOpacity;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Box.TBP_UI_Box_C.SetBorderTexture
struct UTBP_UI_Box_C_SetBorderTexture_Params
{
	class UImage*                                      ImageToSet;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  TextureToUse;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Box.TBP_UI_Box_C.CalculateMargin
struct UTBP_UI_Box_C_CalculateMargin_Params
{
};

// Function TBP_UI_Box.TBP_UI_Box_C.SetupBorder
struct UTBP_UI_Box_C_SetupBorder_Params
{
};

// Function TBP_UI_Box.TBP_UI_Box_C.PreConstruct
struct UTBP_UI_Box_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Box.TBP_UI_Box_C.Construct
struct UTBP_UI_Box_C_Construct_Params
{
};

// Function TBP_UI_Box.TBP_UI_Box_C.ExecuteUbergraph_TBP_UI_Box
struct UTBP_UI_Box_C_ExecuteUbergraph_TBP_UI_Box_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
