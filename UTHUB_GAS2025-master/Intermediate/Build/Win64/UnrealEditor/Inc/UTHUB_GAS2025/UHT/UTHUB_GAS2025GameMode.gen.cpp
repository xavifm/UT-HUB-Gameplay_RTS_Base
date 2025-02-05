// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_GAS2025/UTHUB_GAS2025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_GAS2025GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_UTHUB_GAS2025();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_AUTHUB_GAS2025GameMode();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_AUTHUB_GAS2025GameMode_NoRegister();
// End Cross Module References

// Begin Class AUTHUB_GAS2025GameMode
void AUTHUB_GAS2025GameMode::StaticRegisterNativesAUTHUB_GAS2025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUTHUB_GAS2025GameMode);
UClass* Z_Construct_UClass_AUTHUB_GAS2025GameMode_NoRegister()
{
	return AUTHUB_GAS2025GameMode::StaticClass();
}
struct Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UTHUB_GAS2025GameMode.h" },
		{ "ModuleRelativePath", "UTHUB_GAS2025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUTHUB_GAS2025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics::ClassParams = {
	&AUTHUB_GAS2025GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUTHUB_GAS2025GameMode()
{
	if (!Z_Registration_Info_UClass_AUTHUB_GAS2025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUTHUB_GAS2025GameMode.OuterSingleton, Z_Construct_UClass_AUTHUB_GAS2025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUTHUB_GAS2025GameMode.OuterSingleton;
}
template<> UTHUB_GAS2025_API UClass* StaticClass<AUTHUB_GAS2025GameMode>()
{
	return AUTHUB_GAS2025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUTHUB_GAS2025GameMode);
AUTHUB_GAS2025GameMode::~AUTHUB_GAS2025GameMode() {}
// End Class AUTHUB_GAS2025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUTHUB_GAS2025GameMode, AUTHUB_GAS2025GameMode::StaticClass, TEXT("AUTHUB_GAS2025GameMode"), &Z_Registration_Info_UClass_AUTHUB_GAS2025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUTHUB_GAS2025GameMode), 534259545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025GameMode_h_144211718(TEXT("/Script/UTHUB_GAS2025"),
	Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
