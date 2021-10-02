// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.UpdatePosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_CompassObject_C::UpdatePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.UpdatePosition");

	UTBP_UI_CompassObject_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_CompassObject_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Construct");

	UTBP_UI_CompassObject_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CompassObject_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Tick");

	UTBP_UI_CompassObject_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.SetColorBasedOnPlayerIndex
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		unsigned char                                      InIndex                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CompassObject_C::SetColorBasedOnPlayerIndex(unsigned char InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.SetColorBasedOnPlayerIndex");

	UTBP_UI_CompassObject_C_SetColorBasedOnPlayerIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.ExecuteUbergraph_TBP_UI_CompassObject
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CompassObject_C::ExecuteUbergraph_TBP_UI_CompassObject(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.ExecuteUbergraph_TBP_UI_CompassObject");

	UTBP_UI_CompassObject_C_ExecuteUbergraph_TBP_UI_CompassObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
