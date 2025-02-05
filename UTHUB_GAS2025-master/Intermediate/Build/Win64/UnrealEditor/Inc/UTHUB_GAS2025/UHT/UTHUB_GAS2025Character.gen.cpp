// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTHUB_GAS2025/UTHUB_GAS2025Character.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTHUB_GAS2025Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_UTHUB_GAS2025();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_AUTHUB_GAS2025Character();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_AUTHUB_GAS2025Character_NoRegister();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UGameplayBaseStateTags_NoRegister();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UGameplayTagCustomInterface_NoRegister();
UTHUB_GAS2025_API UClass* Z_Construct_UClass_UUTHUB_ASC_NoRegister();
UTHUB_GAS2025_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAttributes();
// End Cross Module References

// Begin ScriptStruct FCharacterAttributes
static_assert(std::is_polymorphic<FCharacterAttributes>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterAttributes cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterAttributes;
class UScriptStruct* FCharacterAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterAttributes, (UObject*)Z_Construct_UPackage__Script_UTHUB_GAS2025(), TEXT("CharacterAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterAttributes.OuterSingleton;
}
template<> UTHUB_GAS2025_API UScriptStruct* StaticStruct<FCharacterAttributes>()
{
	return FCharacterAttributes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassTag_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackStrength_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimation_MetaData[] = {
		{ "Category", "CharacterAttributes" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterClassTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_CharacterClassTag = { "CharacterClassTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAttributes, CharacterClassTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassTag_MetaData), NewProp_CharacterClassTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAttributes, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_AttackStrength = { "AttackStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAttributes, AttackStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackStrength_MetaData), NewProp_AttackStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAttributes, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_AttackAnimation = { "AttackAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterAttributes, AttackAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimation_MetaData), NewProp_AttackAnimation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_CharacterClassTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_AttackStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewProp_AttackAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CharacterAttributes",
	Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::PropPointers),
	sizeof(FCharacterAttributes),
	alignof(FCharacterAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterAttributes.InnerSingleton, Z_Construct_UScriptStruct_FCharacterAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterAttributes.InnerSingleton;
}
// End ScriptStruct FCharacterAttributes

// Begin Class AUTHUB_GAS2025Character
void AUTHUB_GAS2025Character::StaticRegisterNativesAUTHUB_GAS2025Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUTHUB_GAS2025Character);
UClass* Z_Construct_UClass_AUTHUB_GAS2025Character_NoRegister()
{
	return AUTHUB_GAS2025Character::StaticClass();
}
struct Z_Construct_UClass_AUTHUB_GAS2025Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UTHUB_GAS2025Character.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassTag_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "UTHUB_GAS2025Character" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "UTHUB_GAS2025Character" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEventTag_MetaData[] = {
		{ "Category", "UTHUB_GAS2025Character" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayStates_MetaData[] = {
		{ "Category", "UTHUB_GAS2025Character" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStates_MetaData[] = {
		{ "Category", "UTHUB_GAS2025Character" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Gameplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UTHUB_GAS2025Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterClassTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUTHUB_GAS2025Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CharacterClassTag = { "CharacterClassTag", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, CharacterClassTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClassTag_MetaData), NewProp_CharacterClassTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, CharacterData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterData_MetaData), NewProp_CharacterData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_ActiveEventTag = { "ActiveEventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, ActiveEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEventTag_MetaData), NewProp_ActiveEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_GameplayStates = { "GameplayStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, GameplayStates), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayStates_MetaData), NewProp_GameplayStates_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CharacterStates = { "CharacterStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, CharacterStates), Z_Construct_UClass_UGameplayBaseStateTags_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStates_MetaData), NewProp_CharacterStates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUTHUB_GAS2025Character, ASC), Z_Construct_UClass_UUTHUB_ASC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ASC_MetaData), NewProp_ASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CharacterClassTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CharacterData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_ActiveEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_GameplayStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CharacterStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::NewProp_ASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UTHUB_GAS2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AUTHUB_GAS2025Character, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayTagCustomInterface_NoRegister, (int32)VTABLE_OFFSET(AUTHUB_GAS2025Character, IGameplayTagCustomInterface), false },  // 723115342
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::ClassParams = {
	&AUTHUB_GAS2025Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUTHUB_GAS2025Character()
{
	if (!Z_Registration_Info_UClass_AUTHUB_GAS2025Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUTHUB_GAS2025Character.OuterSingleton, Z_Construct_UClass_AUTHUB_GAS2025Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUTHUB_GAS2025Character.OuterSingleton;
}
template<> UTHUB_GAS2025_API UClass* StaticClass<AUTHUB_GAS2025Character>()
{
	return AUTHUB_GAS2025Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUTHUB_GAS2025Character);
AUTHUB_GAS2025Character::~AUTHUB_GAS2025Character() {}
// End Class AUTHUB_GAS2025Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025Character_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterAttributes::StaticStruct, Z_Construct_UScriptStruct_FCharacterAttributes_Statics::NewStructOps, TEXT("CharacterAttributes"), &Z_Registration_Info_UScriptStruct_CharacterAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterAttributes), 2308545873U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUTHUB_GAS2025Character, AUTHUB_GAS2025Character::StaticClass, TEXT("AUTHUB_GAS2025Character"), &Z_Registration_Info_UClass_AUTHUB_GAS2025Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUTHUB_GAS2025Character), 108752504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025Character_h_2096718982(TEXT("/Script/UTHUB_GAS2025"),
	Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025Character_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025Character_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_UTHUB_GAS2025Character_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
