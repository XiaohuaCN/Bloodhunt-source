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
//		Name   -> Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForKeyInternal
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTBP_RichTextBlockIconDecorator_C::GetBrushForKeyInternal(const struct FKey& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForKeyInternal");

	UTBP_RichTextBlockIconDecorator_C_GetBrushForKeyInternal_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForAxisInternal
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InName                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTBP_RichTextBlockIconDecorator_C::GetBrushForAxisInternal(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForAxisInternal");

	UTBP_RichTextBlockIconDecorator_C_GetBrushForAxisInternal_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForActionInternal
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InName                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateBrush UTBP_RichTextBlockIconDecorator_C::GetBrushForActionInternal(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForActionInternal");

	UTBP_RichTextBlockIconDecorator_C_GetBrushForActionInternal_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
