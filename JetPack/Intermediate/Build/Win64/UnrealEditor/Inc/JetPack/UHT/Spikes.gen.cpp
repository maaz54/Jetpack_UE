// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetPack/Public/Spikes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpikes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
JETPACK_API UClass* Z_Construct_UClass_ASpikes();
JETPACK_API UClass* Z_Construct_UClass_ASpikes_NoRegister();
UPackage* Z_Construct_UPackage__Script_JetPack();
// End Cross Module References

// Begin Class ASpikes
void ASpikes::StaticRegisterNativesASpikes()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpikes);
UClass* Z_Construct_UClass_ASpikes_NoRegister()
{
	return ASpikes::StaticClass();
}
struct Z_Construct_UClass_ASpikes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Spikes.h" },
		{ "ModuleRelativePath", "Public/Spikes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpikes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpikes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_JetPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpikes_Statics::ClassParams = {
	&ASpikes::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpikes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpikes()
{
	if (!Z_Registration_Info_UClass_ASpikes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpikes.OuterSingleton, Z_Construct_UClass_ASpikes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpikes.OuterSingleton;
}
template<> JETPACK_API UClass* StaticClass<ASpikes>()
{
	return ASpikes::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpikes);
ASpikes::~ASpikes() {}
// End Class ASpikes

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_Spikes_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpikes, ASpikes::StaticClass, TEXT("ASpikes"), &Z_Registration_Info_UClass_ASpikes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpikes), 3191586942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_Spikes_h_1876941769(TEXT("/Script/JetPack"),
	Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_Spikes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_Spikes_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
