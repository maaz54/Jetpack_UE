// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetPack/Public/WallSpikes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallSpikes() {}

// Begin Cross Module References
JETPACK_API UClass* Z_Construct_UClass_ASpikes();
JETPACK_API UClass* Z_Construct_UClass_AWallSpikes();
JETPACK_API UClass* Z_Construct_UClass_AWallSpikes_NoRegister();
UPackage* Z_Construct_UPackage__Script_JetPack();
// End Cross Module References

// Begin Class AWallSpikes
void AWallSpikes::StaticRegisterNativesAWallSpikes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWallSpikes);
UClass* Z_Construct_UClass_AWallSpikes_NoRegister()
{
	return AWallSpikes::StaticClass();
}
struct Z_Construct_UClass_AWallSpikes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WallSpikes.h" },
		{ "ModuleRelativePath", "Public/WallSpikes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallSpikes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWallSpikes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpikes,
	(UObject* (*)())Z_Construct_UPackage__Script_JetPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWallSpikes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWallSpikes_Statics::ClassParams = {
	&AWallSpikes::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWallSpikes_Statics::Class_MetaDataParams), Z_Construct_UClass_AWallSpikes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWallSpikes()
{
	if (!Z_Registration_Info_UClass_AWallSpikes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWallSpikes.OuterSingleton, Z_Construct_UClass_AWallSpikes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWallSpikes.OuterSingleton;
}
template<> JETPACK_API UClass* StaticClass<AWallSpikes>()
{
	return AWallSpikes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWallSpikes);
AWallSpikes::~AWallSpikes() {}
// End Class AWallSpikes

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_WallSpikes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWallSpikes, AWallSpikes::StaticClass, TEXT("AWallSpikes"), &Z_Registration_Info_UClass_AWallSpikes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWallSpikes), 3605863345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_WallSpikes_h_2510043101(TEXT("/Script/JetPack"),
	Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_WallSpikes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_WallSpikes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
