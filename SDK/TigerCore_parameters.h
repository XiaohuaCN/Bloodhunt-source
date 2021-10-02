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

// Function TigerCore.TigerAnimationFilter.UpdateFilter
struct UTigerAnimationFilter_UpdateFilter_Params
{
};

// Function TigerCore.TigerAnimMetaDataAsset.GetMetaData
struct UTigerAnimMetaDataAsset_GetMetaData_Params
{
	struct FName                                       InName;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMetaData*                               ReturnValue;                                               // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
