// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JetPack/Public/LevelSpawner.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
JETPACK_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
JETPACK_API UClass* Z_Construct_UClass_ALevelSpawner();
JETPACK_API UClass* Z_Construct_UClass_ALevelSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_JetPack();
// End Cross Module References

// Begin Class ALevelSpawner Function OnOverlapBegin
struct Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics
{
	struct LevelSpawner_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((LevelSpawner_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSpawner_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSpawner, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::LevelSpawner_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::LevelSpawner_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSpawner::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ALevelSpawner Function OnOverlapBegin

// Begin Class ALevelSpawner Function SpawnLevel
struct Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics
{
	struct LevelSpawner_eventSpawnLevel_Parms
	{
		bool isFirst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSpawner.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_isFirst_SetBit(void* Obj)
{
	((LevelSpawner_eventSpawnLevel_Parms*)Obj)->isFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_isFirst = { "isFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelSpawner_eventSpawnLevel_Parms), &Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_isFirst_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_isFirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSpawner, nullptr, "SpawnLevel", nullptr, nullptr, Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::LevelSpawner_eventSpawnLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::LevelSpawner_eventSpawnLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALevelSpawner_SpawnLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALevelSpawner::execSpawnLevel)
{
	P_GET_UBOOL(Z_Param_isFirst);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnLevel(Z_Param_isFirst);
	P_NATIVE_END;
}
// End Class ALevelSpawner Function SpawnLevel

// Begin Class ALevelSpawner
void ALevelSpawner::StaticRegisterNativesALevelSpawner()
{
	UClass* Class = ALevelSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &ALevelSpawner::execOnOverlapBegin },
		{ "SpawnLevel", &ALevelSpawner::execSpawnLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelSpawner);
UClass* Z_Construct_UClass_ALevelSpawner_NoRegister()
{
	return ALevelSpawner::StaticClass();
}
struct Z_Construct_UClass_ALevelSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSpawner.h" },
		{ "ModuleRelativePath", "Public/LevelSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "Public/LevelSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLocation_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "Public/LevelSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Levels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin, "OnOverlapBegin" }, // 3057289523
		{ &Z_Construct_UFunction_ALevelSpawner_SpawnLevel, "SpawnLevel" }, // 833846586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseLevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSpawner, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Levels_MetaData), NewProp_Levels_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_LastLocation = { "LastLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelSpawner, LastLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLocation_MetaData), NewProp_LastLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Levels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_LastLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_JetPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelSpawner_Statics::ClassParams = {
	&ALevelSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALevelSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelSpawner()
{
	if (!Z_Registration_Info_UClass_ALevelSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelSpawner.OuterSingleton, Z_Construct_UClass_ALevelSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelSpawner.OuterSingleton;
}
template<> JETPACK_API UClass* StaticClass<ALevelSpawner>()
{
	return ALevelSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSpawner);
ALevelSpawner::~ALevelSpawner() {}
// End Class ALevelSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelSpawner, ALevelSpawner::StaticClass, TEXT("ALevelSpawner"), &Z_Registration_Info_UClass_ALevelSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelSpawner), 295283953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_1365043230(TEXT("/Script/JetPack"),
	Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
