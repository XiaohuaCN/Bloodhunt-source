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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C
// 0x0010 (FullSize[0x0590] - InheritedSize[0x0580])
class UTBP_BestialTrailPart_SplineMesh_C : public UTigerBestialTrailPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ATigerBestialTrailVisualizer*                Visualizer;                                                // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C");
		return ptr;
	}



	void Setup(const struct FVector& Start_Location, const struct FVector& End_Location, const struct FVector& End_Tangent, float New_Dissappear_Time_Stamp);
	void ScheduleFade(float Dissappear_At);
	void Fade_Out();
	void ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
