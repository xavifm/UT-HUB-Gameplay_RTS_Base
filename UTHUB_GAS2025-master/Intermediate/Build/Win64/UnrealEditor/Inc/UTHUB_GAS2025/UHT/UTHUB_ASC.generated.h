// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTHUB_ASC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef UTHUB_GAS2025_UTHUB_ASC_generated_h
#error "UTHUB_ASC.generated.h already included, missing '#pragma once' in UTHUB_ASC.h"
#endif
#define UTHUB_GAS2025_UTHUB_ASC_generated_h

#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag);


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagCustomInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayTagCustomInterface(UGameplayTagCustomInterface&&); \
	UGameplayTagCustomInterface(const UGameplayTagCustomInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagCustomInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagCustomInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagCustomInterface) \
	NO_API virtual ~UGameplayTagCustomInterface();


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayTagCustomInterface(); \
	friend struct Z_Construct_UClass_UGameplayTagCustomInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagCustomInterface, UGameplayTagAssetInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UTHUB_GAS2025"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagCustomInterface)


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_GENERATED_UINTERFACE_BODY() \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayTagCustomInterface() {} \
public: \
	typedef UGameplayTagCustomInterface UClassType; \
	typedef IGameplayTagCustomInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_9_PROLOG
#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTHUB_GAS2025_API UClass* StaticClass<class UGameplayTagCustomInterface>();

#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUTHUB_ASC(); \
	friend struct Z_Construct_UClass_UUTHUB_ASC_Statics; \
public: \
	DECLARE_CLASS(UUTHUB_ASC, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UTHUB_GAS2025"), NO_API) \
	DECLARE_SERIALIZER(UUTHUB_ASC)


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUTHUB_ASC(UUTHUB_ASC&&); \
	UUTHUB_ASC(const UUTHUB_ASC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTHUB_ASC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTHUB_ASC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUTHUB_ASC) \
	NO_API virtual ~UUTHUB_ASC();


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_29_PROLOG
#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_32_INCLASS_NO_PURE_DECLS \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTHUB_GAS2025_API UClass* StaticClass<class UUTHUB_ASC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_UTHUB_ASC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
