// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/FCTweenSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenSubsystem();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FCTween();
// End Cross Module References

// Begin Class UFCTweenSubsystem
void UFCTweenSubsystem::StaticRegisterNativesUFCTweenSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFCTweenSubsystem);
UClass* Z_Construct_UClass_UFCTweenSubsystem_NoRegister()
{
	return UFCTweenSubsystem::StaticClass();
}
struct Z_Construct_UClass_UFCTweenSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FCTweenSubsystem.h" },
		{ "ModuleRelativePath", "Public/FCTweenSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTickedFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/FCTweenSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRealTimeSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FCTweenSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_LastTickedFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastRealTimeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UFCTweenSubsystem_Statics::NewProp_LastTickedFrame = { "LastTickedFrame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFCTweenSubsystem, LastTickedFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTickedFrame_MetaData), NewProp_LastTickedFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFCTweenSubsystem_Statics::NewProp_LastRealTimeSeconds = { "LastRealTimeSeconds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFCTweenSubsystem, LastRealTimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRealTimeSeconds_MetaData), NewProp_LastRealTimeSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFCTweenSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCTweenSubsystem_Statics::NewProp_LastTickedFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFCTweenSubsystem_Statics::NewProp_LastRealTimeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFCTweenSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenSubsystem_Statics::ClassParams = {
	&UFCTweenSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFCTweenSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFCTweenSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFCTweenSubsystem()
{
	if (!Z_Registration_Info_UClass_UFCTweenSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenSubsystem.OuterSingleton, Z_Construct_UClass_UFCTweenSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFCTweenSubsystem.OuterSingleton;
}
template<> FCTWEEN_API UClass* StaticClass<UFCTweenSubsystem>()
{
	return UFCTweenSubsystem::StaticClass();
}
UFCTweenSubsystem::UFCTweenSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenSubsystem);
UFCTweenSubsystem::~UFCTweenSubsystem() {}
// End Class UFCTweenSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenSubsystem, UFCTweenSubsystem::StaticClass, TEXT("UFCTweenSubsystem"), &Z_Registration_Info_UClass_UFCTweenSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenSubsystem), 3045587352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenSubsystem_h_2270879310(TEXT("/Script/FCTween"),
	Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
