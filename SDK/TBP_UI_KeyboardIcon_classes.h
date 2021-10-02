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

// WidgetBlueprintGeneratedClass TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C
// 0x0019 (FullSize[0x0299] - InheritedSize[0x0280])
class UTBP_UI_KeyboardIcon_C : public UTigerInputIcon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      IconImage;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerKeyTextureMapping*                     KeyTextureMapping;                                         // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MatchSize;                                                 // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C");
		return ptr;
	}



	void SetIconFromKey(const struct FKey& Key);
	void ExecuteUbergraph_TBP_UI_KeyboardIcon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
