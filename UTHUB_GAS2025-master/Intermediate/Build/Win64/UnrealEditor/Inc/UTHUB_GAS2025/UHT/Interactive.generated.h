// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactive.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UTHUB_GAS2025_Interactive_generated_h
#error "Interactive.generated.h already included, missing '#pragma once' in Interactive.h"
#endif
#define UTHUB_GAS2025_Interactive_generated_h

#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckTagCondition);


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_CALLBACK_WRAPPERS
#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractive(); \
	friend struct Z_Construct_UClass_AInteractive_Statics; \
public: \
	DECLARE_CLASS(AInteractive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UTHUB_GAS2025"), NO_API) \
	DECLARE_SERIALIZER(AInteractive)


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractive(AInteractive&&); \
	AInteractive(const AInteractive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractive) \
	NO_API virtual ~AInteractive();


#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_10_PROLOG
#define FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_CALLBACK_WRAPPERS \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_INCLASS_NO_PURE_DECLS \
	FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UTHUB_GAS2025_API UClass* StaticClass<class AInteractive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UTHUB_GAS2025_master_Source_UTHUB_GAS2025_Public_Interactive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
