// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FCTWEEN_FCTweenBPAction_generated_h
#error "FCTweenBPAction.generated.h already included, missing '#pragma once' in FCTweenBPAction.h"
#endif
#define FCTWEEN_FCTweenBPAction_generated_h

#define FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_8_DELEGATE \
FCTWEEN_API void FTweenEventOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenEventOutputPin);


#define FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTimeMultiplier); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execRestart); \
	DECLARE_FUNCTION(execUnpause); \
	DECLARE_FUNCTION(execPause);


#define FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPAction(); \
	friend struct Z_Construct_UClass_UFCTweenBPAction_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPAction)


#define FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFCTweenBPAction(UFCTweenBPAction&&); \
	UFCTweenBPAction(const UFCTweenBPAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPAction) \
	NO_API virtual ~UFCTweenBPAction();


#define FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_10_PROLOG
#define FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_INCLASS_NO_PURE_DECLS \
	FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FCTWEEN_API UClass* StaticClass<class UFCTweenBPAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
