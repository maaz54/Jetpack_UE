// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetPack_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JetPack;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JetPack()
	{
		if (!Z_Registration_Info_UPackage__Script_JetPack.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JetPack",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC2F3854E,
				0xF11C1C8E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JetPack.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JetPack.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JetPack(Z_Construct_UPackage__Script_JetPack, TEXT("/Script/JetPack"), Z_Registration_Info_UPackage__Script_JetPack, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC2F3854E, 0xF11C1C8E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
