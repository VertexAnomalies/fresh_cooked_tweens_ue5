// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/FCTweenInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenInstance() {}

// Begin Cross Module References
FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EDelayState();
UPackage* Z_Construct_UPackage__Script_FCTween();
// End Cross Module References

// Begin Enum EDelayState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDelayState;
static UEnum* EDelayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDelayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDelayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FCTween_EDelayState, (UObject*)Z_Construct_UPackage__Script_FCTween(), TEXT("EDelayState"));
	}
	return Z_Registration_Info_UEnum_EDelayState.OuterSingleton;
}
template<> FCTWEEN_API UEnum* StaticEnum<EDelayState>()
{
	return EDelayState_StaticEnum();
}
struct Z_Construct_UEnum_FCTween_EDelayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Loop.Name", "EDelayState::Loop" },
		{ "ModuleRelativePath", "Public/FCTweenInstance.h" },
		{ "None.Name", "EDelayState::None" },
		{ "Start.Name", "EDelayState::Start" },
		{ "Yoyo.Name", "EDelayState::Yoyo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDelayState::None", (int64)EDelayState::None },
		{ "EDelayState::Start", (int64)EDelayState::Start },
		{ "EDelayState::Loop", (int64)EDelayState::Loop },
		{ "EDelayState::Yoyo", (int64)EDelayState::Yoyo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FCTween_EDelayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FCTween,
	nullptr,
	"EDelayState",
	"EDelayState",
	Z_Construct_UEnum_FCTween_EDelayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FCTween_EDelayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FCTween_EDelayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FCTween_EDelayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FCTween_EDelayState()
{
	if (!Z_Registration_Info_UEnum_EDelayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDelayState.InnerSingleton, Z_Construct_UEnum_FCTween_EDelayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDelayState.InnerSingleton;
}
// End Enum EDelayState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDelayState_StaticEnum, TEXT("EDelayState"), &Z_Registration_Info_UEnum_EDelayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 36523215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenInstance_h_2046933656(TEXT("/Script/FCTween"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenInstance_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
