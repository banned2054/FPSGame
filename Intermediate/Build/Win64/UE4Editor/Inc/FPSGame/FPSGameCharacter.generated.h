// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSGameCharacter_generated_h
#error "FPSGameCharacter.generated.h already included, missing '#pragma once' in FPSGameCharacter.h"
#endif
#define FPSGAME_FPSGameCharacter_generated_h

#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_SPARSE_DATA
#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_RPC_WRAPPERS
#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSGameCharacter(); \
	friend struct Z_Construct_UClass_AFPSGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameCharacter)


#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFPSGameCharacter(); \
	friend struct Z_Construct_UClass_AFPSGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSGameCharacter)


#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameCharacter(AFPSGameCharacter&&); \
	NO_API AFPSGameCharacter(const AFPSGameCharacter&); \
public:


#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSGameCharacter(AFPSGameCharacter&&); \
	NO_API AFPSGameCharacter(const AFPSGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSGameCharacter)


#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPSGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPSGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPSGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPSGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPSGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPSGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPSGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPSGameCharacter, L_MotionController); }


#define FPSGame_Source_FPSGame_FPSGameCharacter_h_17_PROLOG
#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_SPARSE_DATA \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_RPC_WRAPPERS \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_INCLASS \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSGame_Source_FPSGame_FPSGameCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_SPARSE_DATA \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FPSGame_Source_FPSGame_FPSGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSGame_Source_FPSGame_FPSGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
