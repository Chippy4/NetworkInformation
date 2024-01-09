// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkInformation/Public/UNetworkInformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNetworkInformation() {}
// Cross Module References
	NETWORKINFORMATION_API UClass* Z_Construct_UClass_UUNetworkInformation();
	NETWORKINFORMATION_API UClass* Z_Construct_UClass_UUNetworkInformation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NetworkInformation();
// End Cross Module References
	DEFINE_FUNCTION(UUNetworkInformation::execUpdateNetStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNetStats();
		P_NATIVE_END;
	}
	void UUNetworkInformation::StaticRegisterNativesUUNetworkInformation()
	{
		UClass* Class = UUNetworkInformation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateNetStats", &UUNetworkInformation::execUpdateNetStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "NetworkInformation" },
		{ "Comment", "//protected:\n" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
		{ "ToolTip", "protected:" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUNetworkInformation, nullptr, "UpdateNetStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUNetworkInformation);
	UClass* Z_Construct_UClass_UUNetworkInformation_NoRegister()
	{
		return UUNetworkInformation::StaticClass();
	}
	struct Z_Construct_UClass_UUNetworkInformation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutPacketsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutPacketsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPacketsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPacketsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutBytesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutBytesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBytesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InBytesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutPacketLoss_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutPacketLoss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPacketLoss_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPacketLoss;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidNetConnection_MetaData[];
#endif
		static void NewProp_bHasValidNetConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidNetConnection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUNetworkInformation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkInformation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUNetworkInformation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUNetworkInformation_UpdateNetStats, "UpdateNetStats" }, // 874763140
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UNetworkInformation.h" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketsPerSecond_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketsPerSecond = { "OutPacketsPerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUNetworkInformation, OutPacketsPerSecond), METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketsPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketsPerSecond_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketsPerSecond = { "InPacketsPerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUNetworkInformation, InPacketsPerSecond), METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketsPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutBytesPerSecond_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutBytesPerSecond = { "OutBytesPerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUNetworkInformation, OutBytesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutBytesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutBytesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InBytesPerSecond_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InBytesPerSecond = { "InBytesPerSecond", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUNetworkInformation, InBytesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InBytesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InBytesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketLoss_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketLoss = { "OutPacketLoss", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUNetworkInformation, OutPacketLoss), METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketLoss_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketLoss_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketLoss = { "InPacketLoss", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUNetworkInformation, InPacketLoss), METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketLoss_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection_MetaData[] = {
		{ "Category", "NetworkInformation" },
		{ "ModuleRelativePath", "Public/UNetworkInformation.h" },
	};
#endif
	void Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection_SetBit(void* Obj)
	{
		((UUNetworkInformation*)Obj)->bHasValidNetConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection = { "bHasValidNetConnection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUNetworkInformation), &Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUNetworkInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutBytesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InBytesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_OutPacketLoss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_InPacketLoss,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUNetworkInformation_Statics::NewProp_bHasValidNetConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUNetworkInformation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUNetworkInformation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUNetworkInformation_Statics::ClassParams = {
		&UUNetworkInformation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUNetworkInformation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUNetworkInformation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUNetworkInformation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUNetworkInformation()
	{
		if (!Z_Registration_Info_UClass_UUNetworkInformation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUNetworkInformation.OuterSingleton, Z_Construct_UClass_UUNetworkInformation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUNetworkInformation.OuterSingleton;
	}
	template<> NETWORKINFORMATION_API UClass* StaticClass<UUNetworkInformation>()
	{
		return UUNetworkInformation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUNetworkInformation);
	UUNetworkInformation::~UUNetworkInformation() {}
	struct Z_CompiledInDeferFile_FID_EIkSetupTestProj_Plugins_NetworkInformation_Source_NetworkInformation_Public_UNetworkInformation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EIkSetupTestProj_Plugins_NetworkInformation_Source_NetworkInformation_Public_UNetworkInformation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUNetworkInformation, UUNetworkInformation::StaticClass, TEXT("UUNetworkInformation"), &Z_Registration_Info_UClass_UUNetworkInformation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUNetworkInformation), 25657703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EIkSetupTestProj_Plugins_NetworkInformation_Source_NetworkInformation_Public_UNetworkInformation_h_1001119967(TEXT("/Script/NetworkInformation"),
		Z_CompiledInDeferFile_FID_EIkSetupTestProj_Plugins_NetworkInformation_Source_NetworkInformation_Public_UNetworkInformation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EIkSetupTestProj_Plugins_NetworkInformation_Source_NetworkInformation_Public_UNetworkInformation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
