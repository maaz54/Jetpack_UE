// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RunnerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JETPACK_RunnerCharacter_generated_h
#error "RunnerCharacter.generated.h already included, missing '#pragma once' in RunnerCharacter.h"
#endif
#define JETPACK_RunnerCharacter_generated_h

#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunnerCharacter(); \
	friend struct Z_Construct_UClass_ARunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JetPack"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCharacter)


#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARunnerCharacter(ARunnerCharacter&&); \
	ARunnerCharacter(const ARunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunnerCharacter) \
	NO_API virtual ~ARunnerCharacter();


#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_9_PROLOG
#define FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JETPACK_API UClass* StaticClass<class ARunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WorkSpace_UnrealProjects_LiquidX_Test_Jetpack_UE_JetPack_Source_JetPack_Public_RunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
