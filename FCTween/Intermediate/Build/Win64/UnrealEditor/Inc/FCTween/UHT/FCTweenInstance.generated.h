// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FCTweenInstance.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FCTWEEN_FCTweenInstance_generated_h
#error "FCTweenInstance.generated.h already included, missing '#pragma once' in FCTweenInstance.h"
#endif
#define FCTWEEN_FCTweenInstance_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenInstance_h


#define FOREACH_ENUM_EDELAYSTATE(op) \
	op(EDelayState::None) \
	op(EDelayState::Start) \
	op(EDelayState::Loop) \
	op(EDelayState::Yoyo) 

enum class EDelayState : uint8;
template<> struct TIsUEnumClass<EDelayState> { enum { Value = true }; };
template<> FCTWEEN_API UEnum* StaticEnum<EDelayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
