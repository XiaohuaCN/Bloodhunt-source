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

// WidgetBlueprintGeneratedClass TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class UTBP_UI_InputBindingCollection_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  BindingCollection;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputBinding_C*                      CurrentlyActiveChild;                                      // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C");
		return ptr;
	}



	void SetActiveChild(class UTBP_UI_InputBinding_C* Input_Binding);
	void Construct();
	void ExecuteUbergraph_TBP_UI_InputBindingCollection(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
