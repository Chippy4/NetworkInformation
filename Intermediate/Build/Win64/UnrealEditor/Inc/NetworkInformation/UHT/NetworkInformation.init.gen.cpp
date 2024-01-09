// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkInformation_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NetworkInformation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NetworkInformation()
	{
		if (!Z_Registration_Info_UPackage__Script_NetworkInformation.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NetworkInformation",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4231382C,
				0x9D8C686E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NetworkInformation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NetworkInformation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NetworkInformation(Z_Construct_UPackage__Script_NetworkInformation, TEXT("/Script/NetworkInformation"), Z_Registration_Info_UPackage__Script_NetworkInformation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4231382C, 0x9D8C686E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
