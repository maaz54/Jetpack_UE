// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetPack/Public/BaseLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLevel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
JETPACK_API UClass* Z_Construct_UClass_ABaseLevel();
JETPACK_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
UPackage* Z_Construct_UPackage__Script_JetPack();
// End Cross Module References

// Begin Class ABaseLevel
void ABaseLevel::StaticRegisterNativesABaseLevel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseLevel);
UClass* Z_Construct_UClass_ABaseLevel_NoRegister()
{
	return ABaseLevel::StaticClass();
}
struct Z_Construct_UClass_ABaseLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseLevel.h" },
		{ "ModuleRelativePath", "Public/BaseLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLevel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseLevel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Trigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseLevel, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trigger_MetaData), NewProp_Trigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseLevel, SpawnLocation), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_JetPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseLevel_Statics::ClassParams = {
	&ABaseLevel::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseLevel()
{
	if (!Z_Registration_Info_UClass_ABaseLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseLevel.OuterSingleton, Z_Construct_UClass_ABaseLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseLevel.OuterSingleton;
}
template<> JETPACK_API UClass* StaticClass<ABaseLevel>()
{
	return ABaseLevel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseLevel);
ABaseLevel::~ABaseLevel() {}
// End Class ABaseLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_BaseLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseLevel, ABaseLevel::StaticClass, TEXT("ABaseLevel"), &Z_Registration_Info_UClass_ABaseLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseLevel), 1934510609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_BaseLevel_h_3106792900(TEXT("/Script/JetPack"),
	Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_BaseLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_BaseLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
