// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_FPS_Sensor_generated_h
#error "Sensor.generated.h already included, missing '#pragma once' in Sensor.h"
#endif
#define CPP_FPS_Sensor_generated_h

#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_SPARSE_DATA
#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_RPC_WRAPPERS
#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASensor(); \
	friend struct Z_Construct_UClass_ASensor_Statics; \
public: \
	DECLARE_CLASS(ASensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_FPS"), NO_API) \
	DECLARE_SERIALIZER(ASensor)


#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASensor(); \
	friend struct Z_Construct_UClass_ASensor_Statics; \
public: \
	DECLARE_CLASS(ASensor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_FPS"), NO_API) \
	DECLARE_SERIALIZER(ASensor)


#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASensor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASensor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASensor(ASensor&&); \
	NO_API ASensor(const ASensor&); \
public:


#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASensor(ASensor&&); \
	NO_API ASensor(const ASensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASensor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASensor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASensor)


#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_PRIVATE_PROPERTY_OFFSET
#define CPP_FPS_Source_CPP_FPS_Sensor_h_9_PROLOG
#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_SPARSE_DATA \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_RPC_WRAPPERS \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_INCLASS \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPP_FPS_Source_CPP_FPS_Sensor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_PRIVATE_PROPERTY_OFFSET \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_SPARSE_DATA \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_INCLASS_NO_PURE_DECLS \
	CPP_FPS_Source_CPP_FPS_Sensor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_FPS_API UClass* StaticClass<class ASensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPP_FPS_Source_CPP_FPS_Sensor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
