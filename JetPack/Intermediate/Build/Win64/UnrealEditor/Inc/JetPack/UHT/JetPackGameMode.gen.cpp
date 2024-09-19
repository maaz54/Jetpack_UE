// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetPack/JetPackGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetPackGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
JETPACK_API UClass* Z_Construct_UClass_AJetPackGameMode();
JETPACK_API UClass* Z_Construct_UClass_AJetPackGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_JetPack();
// End Cross Module References

// Begin Class AJetPackGameMode
void AJetPackGameMode::StaticRegisterNativesAJetPackGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJetPackGameMode);
UClass* Z_Construct_UClass_AJetPackGameMode_NoRegister()
{
	return AJetPackGameMode::StaticClass();
}
struct Z_Construct_UClass_AJetPackGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JetPackGameMode.h" },
		{ "ModuleRelativePath", "JetPackGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJetPackGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AJetPackGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_JetPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJetPackGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJetPackGameMode_Statics::ClassParams = {
	&AJetPackGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJetPackGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AJetPackGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJetPackGameMode()
{
	if (!Z_Registration_Info_UClass_AJetPackGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJetPackGameMode.OuterSingleton, Z_Construct_UClass_AJetPackGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJetPackGameMode.OuterSingleton;
}
template<> JETPACK_API UClass* StaticClass<AJetPackGameMode>()
{
	return AJetPackGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJetPackGameMode);
AJetPackGameMode::~AJetPackGameMode() {}
// End Class AJetPackGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_JetPackGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJetPackGameMode, AJetPackGameMode::StaticClass, TEXT("AJetPackGameMode"), &Z_Registration_Info_UClass_AJetPackGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJetPackGameMode), 3204123594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_JetPackGameMode_h_2447976397(TEXT("/Script/JetPack"),
	Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_JetPackGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_JetPackGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
