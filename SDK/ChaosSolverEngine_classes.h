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

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_0MGW[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosDebugDrawComponent");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UChaosEventListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_RL7L[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x01B8 (FullSize[0x0270] - InheritedSize[0x00B8])
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData_5QG8[0x110];                                   // 0x00B8(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                               // 0x01C8(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                   // 0x0218(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_28DG[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChaosNotifyHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		return ptr;
	}



	struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChaosSolver : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosSolverActor
// 0x00F8 (FullSize[0x0320] - InheritedSize[0x0228])
class AChaosSolverActor : public AActor
{
public:
	struct FChaosSolverConfiguration                   Properties;                                                // 0x0228(0x0068) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeStepMultiplier;                                        // 0x0290(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionIterations;                                       // 0x0294(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PushOutIterations;                                         // 0x0298(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PushOutPairIterations;                                     // 0x029C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClusterConnectionFactor;                                   // 0x02A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ChaosSolverEngine_EClusterConnectionTypeEnum       ClusterUnionConnectionType;                                // 0x02A4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoGenerateCollisionData;                                   // 0x02A5(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HU7C[0x2];                                     // 0x02A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                   // 0x02A8(0x0010) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               DoGenerateBreakingData;                                    // 0x02B8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M4H2[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                    // 0x02BC(0x0010) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               DoGenerateTrailingData;                                    // 0x02CC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R6XE[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                    // 0x02D0(0x0010) (Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                 // 0x02E0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateContactGraph;                                     // 0x02E4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasFloor;                                                 // 0x02E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7EL[0x2];                                     // 0x02E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorHeight;                                               // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                  // 0x02EC(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQ1E[0x1];                                     // 0x02EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBillboardComponent*                         SpriteComponent;                                           // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6TGZ[0x18];                                    // 0x02F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                          // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G572[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		return ptr;
	}



	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData_SDWY[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                              // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
