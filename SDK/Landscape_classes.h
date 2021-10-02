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

// Class Landscape.ControlPointMeshActor
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                 // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.ControlPointMeshActor");
		return ptr;
	}



};

// Class Landscape.ControlPointMeshComponent
// 0x0010 (FullSize[0x04F0] - InheritedSize[0x04E0])
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                     // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2DO7[0xC];                                     // 0x04E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeProxy
// 0x0378 (FullSize[0x05A0] - InheritedSize[0x0228])
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                           // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                             // 0x0230(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   LandscapeSectionOffset;                                    // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODLevel;                                               // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODDistanceFactor;                                         // 0x024C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeLODFalloff>        LODFalloff;                                                // 0x0250(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8DPP[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ComponentScreenSizeToUseSubSections;                       // 0x0254(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOD0ScreenSize;                                            // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOD0DistributionSetting;                                   // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LODDistributionSetting;                                    // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TessellationComponentScreenSize;                           // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTessellationComponentScreenSizeFalloff;                 // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H8JJ[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TessellationComponentScreenSizeFalloff;                    // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OccluderGeometryLOD;                                       // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticLightingLOD;                                         // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                       // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StreamingDistanceMultiplier;                               // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92DD[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          LandscapeMaterial;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1A5Q[0x20];                                    // 0x0290(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                     // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeProxyMaterialOverride>     LandscapeMaterialsOverride;                                // 0x02B8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bMeshHoles;                                                // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MeshHolesMaxLod;                                           // 0x02C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2GL[0x6];                                     // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                    // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                VirtualTextureNumLods;                                     // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VirtualTextureLodBias;                                     // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ERuntimeVirtualTextureMainPassType          VirtualTextureRenderPassType;                              // 0x02E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4HHA[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NegativeZBoundsExtension;                                  // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                  // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3OL[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                       // 0x02F8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                       // 0x0308(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                         // 0x0318(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MRQ3[0x64];                                    // 0x0328(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasLandscapeGrass;                                        // 0x038C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1XA8[0x3];                                     // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticLightingResolution;                                  // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CastShadow : 1;                                            // 0x0394(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastDynamicShadow : 1;                                    // 0x0394(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastStaticShadow : 1;                                     // 0x0394(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVTP[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bCastFarShadow : 1;                                        // 0x0398(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGN4[0x3];                                     // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bCastHiddenShadow : 1;                                     // 0x039C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30AH[0x3];                                     // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                 // 0x03A0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0LB[0x3];                                     // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                          // 0x03A4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                           LightingChannels;                                          // 0x03A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8CZ1[0x2];                                     // 0x03A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;            // 0x03A8(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRenderCustomDepth : 1;                                    // 0x03A8(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7BFU[0x3];                                     // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_ERendererStencilMask                        CustomDepthStencilWriteMask;                               // 0x03AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGIO[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CustomDepthStencilValue;                                   // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LDMaxDrawDistance;                                         // 0x03B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                         // 0x03B8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                   // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGFM[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBodyInstance                               BodyInstance;                                              // 0x03E0(0x0158) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateOverlapEvents : 1;                                // 0x0538(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;              // 0x0538(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JRP8[0x3];                                     // 0x0539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ComponentSizeQuads;                                        // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x0544(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsedForNavigation : 1;                                    // 0x0548(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFillCollisionUnderLandscapeForNavmesh : 1;                // 0x0548(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QO9[0x3];                                     // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseDynamicMaterialInstance;                               // 0x054C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ENavDataGatheringMode                       NavigationGeometryGatheringMode;                           // 0x054D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;              // 0x054E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLayersContent;                                         // 0x054F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                         // 0x0550(0x0050) (Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}



	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value);
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, const struct FName& EditLayerName);
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
};

// Class Landscape.Landscape
// 0x0000 (FullSize[0x05A0] - InheritedSize[0x05A0])
class ALandscape : public ALandscapeProxy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}



};

// Class Landscape.LandscapeBlueprintBrushBase
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class ALandscapeBlueprintBrushBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		return ptr;
	}



	void RequestLandscapeUpdate();
	class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName);
	void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
	void GetBlueprintRenderDependencies(TArray<class UObject*>* OutStreamableAssets);
};

// Class Landscape.LandscapeLODStreamingProxy
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{
public:
	unsigned char                                      UnknownData_AXTJ[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeLODStreamingProxy");
		return ptr;
	}



};

// Class Landscape.LandscapeComponent
// 0x0220 (FullSize[0x0670] - InheritedSize[0x0450])
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                SectionBaseX;                                              // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x0454(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubsections;                                            // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9RZ7[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideHoleMaterial;                                      // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;                                         // 0x0478(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                         // 0x0488(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                  // 0x0498(0x0010) (ZeroConstructor, Transient, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                   // 0x04A8(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;               // 0x04B8(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	class UTexture2D*                                  XYOffsetmapTexture;                                        // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    WeightmapScaleBias;                                        // 0x04D0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightmapSubsectionOffset;                                 // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9F4A[0xC];                                     // 0x04E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    HeightmapScaleBias;                                        // 0x04F0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                            // 0x0500(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                        // 0x051C(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  HeightmapTexture;                                          // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                 // 0x0540(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UTexture2D*>                          WeightmapTextures;                                         // 0x0550(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPrivate)
	class ULandscapeLODStreamingProxy*                 LODStreamingProxy;                                         // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       MapBuildDataId;                                            // 0x0568(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               IrrelevantLights;                                          // 0x0578(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	int                                                CollisionMipLevel;                                         // 0x0588(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionMipLevel;                                   // 0x058C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NegativeZBoundsExtension;                                  // 0x0590(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositiveZBoundsExtension;                                  // 0x0594(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticLightingResolution;                                  // 0x0598(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForcedLOD;                                                 // 0x059C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias;                                                   // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       StateId;                                                   // 0x05A4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       BakedTextureMaterialGuid;                                  // 0x05B4(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6TI2[0x4];                                     // 0x05C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                   // 0x05C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MobileBlendableLayerMask;                                  // 0x05D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G2EH[0x7];                                     // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          MobileMaterialInterface;                                   // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                  // 0x05E0(0x0010) (ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                   // 0x05F0(0x0010) (ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_580O[0x70];                                    // 0x0600(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}



	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, const struct FName& InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);
};

// Class Landscape.LandscapeGizmoActor
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class ALandscapeGizmoActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (FullSize[0x0278] - InheritedSize[0x0228])
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData_7OYF[0x50];                                    // 0x0228(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGrassType
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDensityScaling : 1;                                 // 0x0038(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D8XL[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0040(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrassDensity;                                              // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlacementJitter;                                           // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartCullDistance;                                         // 0x0050(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndCullDistance;                                           // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x0058(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                            // 0x0059(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBXH[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}



};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (FullSize[0x0530] - InheritedSize[0x0450])
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                       // 0x0450(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                SectionBaseX;                                              // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionBaseY;                                              // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionSizeQuads;                                        // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionScale;                                            // 0x046C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimpleCollisionSizeQuads;                                  // 0x0470(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5M76[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              CollisionQuadFlags;                                        // 0x0478(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       HeightfieldGuid;                                           // 0x0488(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                        CachedLocalBox;                                            // 0x0498(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                           // 0x04B4(0x001C) (ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_855B[0x10];                                    // 0x04D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                   // 0x04E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LANN[0x40];                                    // 0x04F0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}



	class ULandscapeComponent* GetRenderComponent();
};

// Class Landscape.LandscapeInfo
// 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x0028(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LandscapeGuid;                                             // 0x0044(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentSizeQuads;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubsectionSizeQuads;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ComponentNumSubsections;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DrawScale;                                                 // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CLU5[0xA4];                                    // 0x006C(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                   // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XBED[0xF0];                                    // 0x0120(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}



};

// Class Landscape.LandscapeInfoMap
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData_NZIS[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}



};

// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Hardness;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LayerUsageDebugColor;                                      // 0x003C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKVP[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}



};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0018 (FullSize[0x0380] - InheritedSize[0x0368])
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                                      // 0x0368(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsLayerThumbnail : 1;                                     // 0x0378(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableTessellation : 1;                                  // 0x0378(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMobile : 1;                                               // 0x0378(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEditorToolUsage : 1;                                      // 0x0378(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XI9K[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0020 (FullSize[0x0550] - InheritedSize[0x0530])
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                       MeshGuid;                                                  // 0x0530(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUUE[0x10];                                    // 0x0540(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                               // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (FullSize[0x0510] - InheritedSize[0x04E0])
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                             // 0x04E0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                       // 0x04F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int8_t                                             ProxyLOD;                                                  // 0x0500(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_46GQ[0xF];                                     // 0x0501(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeSettings
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int                                                MaxNumberOfLayers;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E685[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSettings");
		return ptr;
	}



};

// Class Landscape.LandscapeSplinesComponent
// 0x0030 (FullSize[0x0480] - InheritedSize[0x0450])
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                             // 0x0450(0x0010) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class ULandscapeSplineSegment*>             Segments;                                                  // 0x0460(0x0010) (ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                               // 0x0470(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}



	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};

// Class Landscape.LandscapeSplineControlPoint
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Width;                                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LayerWidthRatio;                                           // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideFalloff;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftSideFalloffFactor;                                     // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightSideFalloffFactor;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftSideLayerFalloffFactor;                                // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightSideLayerFalloffFactor;                               // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndFalloff;                                                // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                         // 0x0060(0x0010) (ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0070(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z1MQ[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                        // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineSegment
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                          // 0x0028(0x0030) (Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          SplineInfo;                                                // 0x0058(0x0018) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                    // 0x0070(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FBox                                        Bounds;                                                    // 0x0080(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GFOJ[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                       // 0x00A0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}



};

// Class Landscape.LandscapeStreamingProxy
// 0x0020 (FullSize[0x05C0] - InheritedSize[0x05A0])
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                            // 0x05A0(0x001C) (Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CJGK[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}



};

// Class Landscape.LandscapeSubsystem
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class ULandscapeSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_I02J[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeSubsystem");
		return ptr;
	}



};

// Class Landscape.LandscapeWeightmapUsage
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                         ChannelUsage[0x4];                                         // 0x0028(0x0020) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       LayerGuid;                                                 // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<Landscape_ETerrainCoordMappingType>    MappingType;                                               // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeCustomizedCoordType> CustomUVType;                                              // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IWY[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MappingScale;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingRotation;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanU;                                               // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MappingPanV;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDJ4[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9COI[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                 // 0x0040(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F9ZZ[0x8];                                     // 0x004C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerNotUsed;                                              // 0x0054(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8R5T[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParameterName;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviewUsed : 1;                                           // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5CCS[0x3];                                     // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ExpressionGUID;                                            // 0x0074(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BO51[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                      // 0x0040(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBOV[0x8];                                     // 0x004C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            Layer;                                                     // 0x0054(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T650[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParameterName;                                             // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewWeight;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstBase;                                                 // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                            // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>              Inputs;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                            // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
