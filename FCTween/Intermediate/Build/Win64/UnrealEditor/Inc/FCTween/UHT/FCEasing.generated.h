// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FCEasing.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FCTWEEN_FCEasing_generated_h
#error "FCEasing.generated.h already included, missing '#pragma once' in FCEasing.h"
#endif
#define FCTWEEN_FCEasing_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCEasing_h


#define FOREACH_ENUM_EFCEASE(op) \
	op(EFCEase::Linear) \
	op(EFCEase::Smoothstep) \
	op(EFCEase::Stepped) \
	op(EFCEase::InSine) \
	op(EFCEase::OutSine) \
	op(EFCEase::InOutSine) \
	op(EFCEase::InQuad) \
	op(EFCEase::OutQuad) \
	op(EFCEase::InOutQuad) \
	op(EFCEase::InCubic) \
	op(EFCEase::OutCubic) \
	op(EFCEase::InOutCubic) \
	op(EFCEase::InQuart) \
	op(EFCEase::OutQuart) \
	op(EFCEase::InOutQuart) \
	op(EFCEase::InQuint) \
	op(EFCEase::OutQuint) \
	op(EFCEase::InOutQuint) \
	op(EFCEase::InExpo) \
	op(EFCEase::OutExpo) \
	op(EFCEase::InOutExpo) \
	op(EFCEase::InCirc) \
	op(EFCEase::OutCirc) \
	op(EFCEase::InOutCirc) \
	op(EFCEase::InElastic) \
	op(EFCEase::OutElastic) \
	op(EFCEase::InOutElastic) \
	op(EFCEase::InBounce) \
	op(EFCEase::OutBounce) \
	op(EFCEase::InOutBounce) \
	op(EFCEase::InBack) \
	op(EFCEase::OutBack) \
	op(EFCEase::InOutBack) 

enum class EFCEase : uint8;
template<> struct TIsUEnumClass<EFCEase> { enum { Value = true }; };
template<> FCTWEEN_API UEnum* StaticEnum<EFCEase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
