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
//		Offset -> 0x03460BC0
//		Name   -> Function TigerCore.TigerAnimationFilter.UpdateFilter
//		Flags  -> (Final, Native, Public)
void UTigerAnimationFilter::UpdateFilter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TigerCore.TigerAnimationFilter.UpdateFilter");

	UTigerAnimationFilter_UpdateFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03461040
//		Name   -> Function TigerCore.TigerAnimMetaDataAsset.GetMetaData
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       InName                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimMetaData*                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMetaData* UTigerAnimMetaDataAsset::GetMetaData(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TigerCore.TigerAnimMetaDataAsset.GetMetaData");

	UTigerAnimMetaDataAsset_GetMetaData_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
