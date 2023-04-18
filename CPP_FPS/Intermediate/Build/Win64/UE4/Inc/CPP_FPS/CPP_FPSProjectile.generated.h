// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CPP_FPS_CPP_FPSProjectile_generated_h
#error "CPP_FPSProjectile.generated.h already included, missing '#pragma once' in CPP_FPSProjectile.h"
#endif
#define CPP_FPS_CPP_FPSProjectile_generated_h

#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_SPARSE_DATA
#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_FPSProjectile(); \
	friend struct Z_Construct_UClass_ACPP_FPSProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPP_FPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_FPS"), NO_API) \
	DECLARE_SERIALIZER(ACPP_FPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACPP_FPSProjectile(); \
	friend struct Z_Construct_UClass_ACPP_FPSProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPP_FPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_FPS"), NO_API) \
	DECLARE_SERIALIZER(ACPP_FPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_FPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_FPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_FPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_FPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_FPSProjectile(ACPP_FPSProjectile&&); \
	NO_API ACPP_FPSProjectile(const ACPP_FPSProjectile&); \
public:


#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_FPSProjectile(ACPP_FPSProjectile&&); \
	NO_API ACPP_FPSProjectile(const ACPP_FPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_FPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_FPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_FPSProjectile)


#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACPP_FPSProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACPP_FPSProjectile, ProjectileMovement); }


#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_9_PROLOG
#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_SPARSE_DATA \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_RPC_WRAPPERS \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_INCLASS \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_SPARSE_DATA \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_INCLASS_NO_PURE_DECLS \
	CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_FPS_API UClass* StaticClass<class ACPP_FPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_FPS_Source_CPP_FPS_CPP_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
