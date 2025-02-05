// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_GAS2025/Public/GameplayBaseStateTags.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBaseStateTags() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_UTHUB_GAS2025();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UGameplayBaseStateTags();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UGameplayBaseStateTags_NoRegister();
// End Cross Module References

// Begin Class UGameplayBaseStateTags
void UGameplayBaseStateTags::StaticRegisterNativesUGameplayBaseStateTags()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBaseStateTags);
UClass* Z_Construct_UClass_UGameplayBaseStateTags_NoRegister()
{
	return UGameplayBaseStateTags::StaticClass();
}
struct Z_Construct_UClass_UGameplayBaseStateTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayBaseStateTags.h" },
		{ "ModuleRelativePath", "Public/GameplayBaseStateTags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_Alive_MetaData[] = {
		{ "Category", "GameplayBaseStateTags" },
		{ "ModuleRelativePath", "Public/GameplayBaseStateTags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_Dead_MetaData[] = {
		{ "Category", "GameplayBaseStateTags" },
		{ "ModuleRelativePath", "Public/GameplayBaseStateTags.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_DeParranda_MetaData[] = {
		{ "Category", "GameplayBaseStateTags" },
		{ "ModuleRelativePath", "Public/GameplayBaseStateTags.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_Alive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_Dead;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_DeParranda;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBaseStateTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayBaseStateTags_Statics::NewProp_Tag_Alive = { "Tag_Alive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayBaseStateTags, Tag_Alive), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_Alive_MetaData), NewProp_Tag_Alive_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayBaseStateTags_Statics::NewProp_Tag_Dead = { "Tag_Dead", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayBaseStateTags, Tag_Dead), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_Dead_MetaData), NewProp_Tag_Dead_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayBaseStateTags_Statics::NewProp_Tag_DeParranda = { "Tag_DeParranda", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayBaseStateTags, Tag_DeParranda), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_DeParranda_MetaData), NewProp_Tag_DeParranda_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBaseStateTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBaseStateTags_Statics::NewProp_Tag_Alive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBaseStateTags_Statics::NewProp_Tag_Dead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBaseStateTags_Statics::NewProp_Tag_DeParranda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBaseStateTags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayBaseStateTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBaseStateTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBaseStateTags_Statics::ClassParams = {
	&UGameplayBaseStateTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayBaseStateTags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBaseStateTags_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBaseStateTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayBaseStateTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayBaseStateTags()
{
	if (!Z_Registration_Info_UClass_UGameplayBaseStateTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBaseStateTags.OuterSingleton, Z_Construct_UClass_UGameplayBaseStateTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayBaseStateTags.OuterSingleton;
}
template<> UTHUB_GAS2025_API UClass* StaticClass<UGameplayBaseStateTags>()
{
	return UGameplayBaseStateTags::StaticClass();
}
UGameplayBaseStateTags::UGameplayBaseStateTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBaseStateTags);
UGameplayBaseStateTags::~UGameplayBaseStateTags() {}
// End Class UGameplayBaseStateTags

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_GameplayBaseStateTags_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBaseStateTags, UGameplayBaseStateTags::StaticClass, TEXT("UGameplayBaseStateTags"), &Z_Registration_Info_UClass_UGameplayBaseStateTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBaseStateTags), 1600333934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_GameplayBaseStateTags_h_4155337420(TEXT("/Script/UTHUB_GAS2025"),
	Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_GameplayBaseStateTags_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_GameplayBaseStateTags_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
