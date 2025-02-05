// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_GAS2025/Public/Interactive.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractive() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_UTHUB_GAS2025();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_AInteractive();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_AInteractive_NoRegister();
// End Cross Module References

// Begin Class AInteractive Function CheckTagCondition
struct Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics
{
	struct Interactive_eventCheckTagCondition_Parms
	{
		AActor* TagOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::NewProp_TagOwner = { "TagOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Interactive_eventCheckTagCondition_Parms, TagOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::NewProp_TagOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractive, nullptr, "CheckTagCondition", nullptr, nullptr, Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::Interactive_eventCheckTagCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::Interactive_eventCheckTagCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractive_CheckTagCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractive_CheckTagCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractive::execCheckTagCondition)
{
	P_GET_OBJECT(AActor,Z_Param_TagOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckTagCondition(Z_Param_TagOwner);
	P_NATIVE_END;
}
// End Class AInteractive Function CheckTagCondition

// Begin Class AInteractive Function ExecuteAction
static const FName NAME_AInteractive_ExecuteAction = FName(TEXT("ExecuteAction"));
void AInteractive::ExecuteAction()
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractive_ExecuteAction);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AInteractive_ExecuteAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractive_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractive, nullptr, "ExecuteAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractive_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractive_ExecuteAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AInteractive_ExecuteAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractive_ExecuteAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AInteractive Function ExecuteAction

// Begin Class AInteractive
void AInteractive::StaticRegisterNativesAInteractive()
{
	UClass* Class = AInteractive::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckTagCondition", &AInteractive::execCheckTagCondition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractive);
UClass* Z_Construct_UClass_AInteractive_NoRegister()
{
	return AInteractive::StaticClass();
}
struct Z_Construct_UClass_AInteractive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactive.h" },
		{ "ModuleRelativePath", "Public/Interactive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionTag_MetaData[] = {
		{ "Category", "Interactive" },
		{ "ModuleRelativePath", "Public/Interactive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractive_CheckTagCondition, "CheckTagCondition" }, // 4196678299
		{ &Z_Construct_UFunction_AInteractive_ExecuteAction, "ExecuteAction" }, // 1660989675
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractive_Statics::NewProp_ConditionTag = { "ConditionTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractive, ConditionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionTag_MetaData), NewProp_ConditionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractive_Statics::NewProp_ConditionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractive_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractive_Statics::ClassParams = {
	&AInteractive::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractive_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractive_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractive_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractive()
{
	if (!Z_Registration_Info_UClass_AInteractive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractive.OuterSingleton, Z_Construct_UClass_AInteractive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractive.OuterSingleton;
}
template<> UTHUB_GAS2025_API UClass* StaticClass<AInteractive>()
{
	return AInteractive::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractive);
AInteractive::~AInteractive() {}
// End Class AInteractive

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractive, AInteractive::StaticClass, TEXT("AInteractive"), &Z_Registration_Info_UClass_AInteractive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractive), 1826176758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_257060910(TEXT("/Script/UTHUB_GAS2025"),
	Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
