// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/FCEasing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCEasing() {}

// Begin Cross Module References
FCTWEEN_API UEnum* Z_Construct_UEnum_FCTween_EFCEase();
UPackage* Z_Construct_UPackage__Script_FCTween();
// End Cross Module References

// Begin Enum EFCEase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFCEase;
static UEnum* EFCEase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFCEase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFCEase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FCTween_EFCEase, (UObject*)Z_Construct_UPackage__Script_FCTween(), TEXT("EFCEase"));
	}
	return Z_Registration_Info_UEnum_EFCEase.OuterSingleton;
}
template<> FCTWEEN_API UEnum* StaticEnum<EFCEase>()
{
	return EFCEase_StaticEnum();
}
struct Z_Construct_UEnum_FCTween_EFCEase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InBack.Comment", "// anticipation; pull back a little before going forward\n" },
		{ "InBack.Name", "EFCEase::InBack" },
		{ "InBack.ToolTip", "anticipation; pull back a little before going forward" },
		{ "InBounce.Name", "EFCEase::InBounce" },
		{ "InCirc.Name", "EFCEase::InCirc" },
		{ "InCubic.Name", "EFCEase::InCubic" },
		{ "InElastic.Name", "EFCEase::InElastic" },
		{ "InExpo.Comment", "// like Quintic but even sharper\n" },
		{ "InExpo.Name", "EFCEase::InExpo" },
		{ "InExpo.ToolTip", "like Quintic but even sharper" },
		{ "InOutBack.Name", "EFCEase::InOutBack" },
		{ "InOutBounce.Name", "EFCEase::InOutBounce" },
		{ "InOutCirc.Name", "EFCEase::InOutCirc" },
		{ "InOutCubic.Name", "EFCEase::InOutCubic" },
		{ "InOutElastic.Name", "EFCEase::InOutElastic" },
		{ "InOutExpo.Name", "EFCEase::InOutExpo" },
		{ "InOutQuad.Name", "EFCEase::InOutQuad" },
		{ "InOutQuart.Name", "EFCEase::InOutQuart" },
		{ "InOutQuint.Name", "EFCEase::InOutQuint" },
		{ "InOutSine.Name", "EFCEase::InOutSine" },
		{ "InQuad.Name", "EFCEase::InQuad" },
		{ "InQuart.Name", "EFCEase::InQuart" },
		{ "InQuint.Name", "EFCEase::InQuint" },
		{ "InSine.Name", "EFCEase::InSine" },
		{ "Linear.Name", "EFCEase::Linear" },
		{ "ModuleRelativePath", "Public/FCEasing.h" },
		{ "OutBack.Name", "EFCEase::OutBack" },
		{ "OutBounce.Name", "EFCEase::OutBounce" },
		{ "OutCirc.Name", "EFCEase::OutCirc" },
		{ "OutCubic.Name", "EFCEase::OutCubic" },
		{ "OutElastic.Name", "EFCEase::OutElastic" },
		{ "OutExpo.Name", "EFCEase::OutExpo" },
		{ "OutQuad.Name", "EFCEase::OutQuad" },
		{ "OutQuart.Name", "EFCEase::OutQuart" },
		{ "OutQuint.Name", "EFCEase::OutQuint" },
		{ "OutSine.Name", "EFCEase::OutSine" },
		{ "Smoothstep.Name", "EFCEase::Smoothstep" },
		{ "Stepped.Name", "EFCEase::Stepped" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFCEase::Linear", (int64)EFCEase::Linear },
		{ "EFCEase::Smoothstep", (int64)EFCEase::Smoothstep },
		{ "EFCEase::Stepped", (int64)EFCEase::Stepped },
		{ "EFCEase::InSine", (int64)EFCEase::InSine },
		{ "EFCEase::OutSine", (int64)EFCEase::OutSine },
		{ "EFCEase::InOutSine", (int64)EFCEase::InOutSine },
		{ "EFCEase::InQuad", (int64)EFCEase::InQuad },
		{ "EFCEase::OutQuad", (int64)EFCEase::OutQuad },
		{ "EFCEase::InOutQuad", (int64)EFCEase::InOutQuad },
		{ "EFCEase::InCubic", (int64)EFCEase::InCubic },
		{ "EFCEase::OutCubic", (int64)EFCEase::OutCubic },
		{ "EFCEase::InOutCubic", (int64)EFCEase::InOutCubic },
		{ "EFCEase::InQuart", (int64)EFCEase::InQuart },
		{ "EFCEase::OutQuart", (int64)EFCEase::OutQuart },
		{ "EFCEase::InOutQuart", (int64)EFCEase::InOutQuart },
		{ "EFCEase::InQuint", (int64)EFCEase::InQuint },
		{ "EFCEase::OutQuint", (int64)EFCEase::OutQuint },
		{ "EFCEase::InOutQuint", (int64)EFCEase::InOutQuint },
		{ "EFCEase::InExpo", (int64)EFCEase::InExpo },
		{ "EFCEase::OutExpo", (int64)EFCEase::OutExpo },
		{ "EFCEase::InOutExpo", (int64)EFCEase::InOutExpo },
		{ "EFCEase::InCirc", (int64)EFCEase::InCirc },
		{ "EFCEase::OutCirc", (int64)EFCEase::OutCirc },
		{ "EFCEase::InOutCirc", (int64)EFCEase::InOutCirc },
		{ "EFCEase::InElastic", (int64)EFCEase::InElastic },
		{ "EFCEase::OutElastic", (int64)EFCEase::OutElastic },
		{ "EFCEase::InOutElastic", (int64)EFCEase::InOutElastic },
		{ "EFCEase::InBounce", (int64)EFCEase::InBounce },
		{ "EFCEase::OutBounce", (int64)EFCEase::OutBounce },
		{ "EFCEase::InOutBounce", (int64)EFCEase::InOutBounce },
		{ "EFCEase::InBack", (int64)EFCEase::InBack },
		{ "EFCEase::OutBack", (int64)EFCEase::OutBack },
		{ "EFCEase::InOutBack", (int64)EFCEase::InOutBack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FCTween_EFCEase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FCTween,
	nullptr,
	"EFCEase",
	"EFCEase",
	Z_Construct_UEnum_FCTween_EFCEase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FCTween_EFCEase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FCTween_EFCEase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FCTween_EFCEase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FCTween_EFCEase()
{
	if (!Z_Registration_Info_UEnum_EFCEase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFCEase.InnerSingleton, Z_Construct_UEnum_FCTween_EFCEase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFCEase.InnerSingleton;
}
// End Enum EFCEase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCEasing_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFCEase_StaticEnum, TEXT("EFCEase"), &Z_Registration_Info_UEnum_EFCEase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 551746138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCEasing_h_3169763178(TEXT("/Script/FCTween"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCEasing_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCEasing_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
