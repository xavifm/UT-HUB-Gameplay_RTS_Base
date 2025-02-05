// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_GAS2025/Public/UTHUB_ASC.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_ASC() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_UTHUB_GAS2025();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UGameplayTagCustomInterface();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UGameplayTagCustomInterface_NoRegister();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UUTHUB_ASC();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UUTHUB_ASC_NoRegister();
// End Cross Module References

// Begin Interface UGameplayTagCustomInterface Function AddTag
struct Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics
{
	struct GameplayTagCustomInterface_eventAddTag_Parms
	{
		FGameplayTag InTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/UTHUB_ASC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagCustomInterface_eventAddTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::NewProp_InTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagCustomInterface, nullptr, "AddTag", nullptr, nullptr, Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::GameplayTagCustomInterface_eventAddTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::GameplayTagCustomInterface_eventAddTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameplayTagCustomInterface::execAddTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTag(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Interface UGameplayTagCustomInterface Function AddTag

// Begin Interface UGameplayTagCustomInterface Function RemoveTag
struct Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics
{
	struct GameplayTagCustomInterface_eventRemoveTag_Parms
	{
		FGameplayTag InTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/UTHUB_ASC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTagCustomInterface_eventRemoveTag_Parms, InTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTag_MetaData), NewProp_InTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::NewProp_InTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTagCustomInterface, nullptr, "RemoveTag", nullptr, nullptr, Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::GameplayTagCustomInterface_eventRemoveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::GameplayTagCustomInterface_eventRemoveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IGameplayTagCustomInterface::execRemoveTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTag(Z_Param_Out_InTag);
	P_NATIVE_END;
}
// End Interface UGameplayTagCustomInterface Function RemoveTag

// Begin Interface UGameplayTagCustomInterface
void UGameplayTagCustomInterface::StaticRegisterNativesUGameplayTagCustomInterface()
{
	UClass* Class = UGameplayTagCustomInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTag", &IGameplayTagCustomInterface::execAddTag },
		{ "RemoveTag", &IGameplayTagCustomInterface::execRemoveTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTagCustomInterface);
UClass* Z_Construct_UClass_UGameplayTagCustomInterface_NoRegister()
{
	return UGameplayTagCustomInterface::StaticClass();
}
struct Z_Construct_UClass_UGameplayTagCustomInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UTHUB_ASC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTagCustomInterface_AddTag, "AddTag" }, // 3454029031
		{ &Z_Construct_UFunction_UGameplayTagCustomInterface_RemoveTag, "RemoveTag" }, // 97371427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayTagCustomInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayTagCustomInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTagAssetInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagCustomInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagCustomInterface_Statics::ClassParams = {
	&UGameplayTagCustomInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTagCustomInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTagCustomInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTagCustomInterface()
{
	if (!Z_Registration_Info_UClass_UGameplayTagCustomInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTagCustomInterface.OuterSingleton, Z_Construct_UClass_UGameplayTagCustomInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTagCustomInterface.OuterSingleton;
}
template<> UTHUB_GAS2025_API UClass* StaticClass<UGameplayTagCustomInterface>()
{
	return UGameplayTagCustomInterface::StaticClass();
}
UGameplayTagCustomInterface::UGameplayTagCustomInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagCustomInterface);
UGameplayTagCustomInterface::~UGameplayTagCustomInterface() {}
// End Interface UGameplayTagCustomInterface

// Begin Class UUTHUB_ASC
void UUTHUB_ASC::StaticRegisterNativesUUTHUB_ASC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTHUB_ASC);
UClass* Z_Construct_UClass_UUTHUB_ASC_NoRegister()
{
	return UUTHUB_ASC::StaticClass();
}
struct Z_Construct_UClass_UUTHUB_ASC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "UTHUB_ASC.h" },
		{ "ModuleRelativePath", "Public/UTHUB_ASC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTHUB_ASC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUTHUB_ASC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUTHUB_ASC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTHUB_ASC_Statics::ClassParams = {
	&UUTHUB_ASC::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUTHUB_ASC_Statics::Class_MetaDataParams), Z_Construct_UClass_UUTHUB_ASC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUTHUB_ASC()
{
	if (!Z_Registration_Info_UClass_UUTHUB_ASC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTHUB_ASC.OuterSingleton, Z_Construct_UClass_UUTHUB_ASC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUTHUB_ASC.OuterSingleton;
}
template<> UTHUB_GAS2025_API UClass* StaticClass<UUTHUB_ASC>()
{
	return UUTHUB_ASC::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUTHUB_ASC);
UUTHUB_ASC::~UUTHUB_ASC() {}
// End Class UUTHUB_ASC

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTagCustomInterface, UGameplayTagCustomInterface::StaticClass, TEXT("UGameplayTagCustomInterface"), &Z_Registration_Info_UClass_UGameplayTagCustomInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTagCustomInterface), 723115342U) },
		{ Z_Construct_UClass_UUTHUB_ASC, UUTHUB_ASC::StaticClass, TEXT("UUTHUB_ASC"), &Z_Registration_Info_UClass_UUTHUB_ASC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTHUB_ASC), 4253190170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_2515637926(TEXT("/Script/UTHUB_GAS2025"),
	Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
