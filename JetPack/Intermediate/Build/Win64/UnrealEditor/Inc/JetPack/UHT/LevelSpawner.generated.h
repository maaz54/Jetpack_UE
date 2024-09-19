// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JETPACK_LevelSpawner_generated_h
#error "LevelSpawner.generated.h already included, missing '#pragma once' in LevelSpawner.h"
#endif
#define JETPACK_LevelSpawner_generated_h

#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelSpawner(); \
	friend struct Z_Construct_UClass_ALevelSpawner_Statics; \
public: \
	DECLARE_CLASS(ALevelSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JetPack"), NO_API) \
	DECLARE_SERIALIZER(ALevelSpawner)


#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALevelSpawner(ALevelSpawner&&); \
	ALevelSpawner(const ALevelSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelSpawner) \
	NO_API virtual ~ALevelSpawner();


#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_11_PROLOG
#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_INCLASS_NO_PURE_DECLS \
	FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JETPACK_API UClass* StaticClass<class ALevelSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_LevelSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
