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

// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.UpdatePosition
struct UTBP_UI_CompassObject_C_UpdatePosition_Params
{
};

// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Construct
struct UTBP_UI_CompassObject_C_Construct_Params
{
};

// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Tick
struct UTBP_UI_CompassObject_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.SetColorBasedOnPlayerIndex
struct UTBP_UI_CompassObject_C_SetColorBasedOnPlayerIndex_Params
{
	unsigned char                                      InIndex;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.ExecuteUbergraph_TBP_UI_CompassObject
struct UTBP_UI_CompassObject_C_ExecuteUbergraph_TBP_UI_CompassObject_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
