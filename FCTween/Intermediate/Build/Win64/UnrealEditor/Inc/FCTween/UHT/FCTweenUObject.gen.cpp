// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FCTween/Public/FCTweenUObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCTweenUObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenUObject();
FCTWEEN_API UClass* Z_Construct_UClass_UFCTweenUObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_FCTween();
// End Cross Module References

// Begin Class UFCTweenUObject
void UFCTweenUObject::StaticRegisterNativesUFCTweenUObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFCTweenUObject);
UClass* Z_Construct_UClass_UFCTweenUObject_NoRegister()
{
	return UFCTweenUObject::StaticClass();
}
struct Z_Construct_UClass_UFCTweenUObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief Use this to wrap an FCTweenInstance inside a UObject, so that it's destroyed when its outer object is destroyed\n */" },
#endif
		{ "IncludePath", "FCTweenUObject.h" },
		{ "ModuleRelativePath", "Public/FCTweenUObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Use this to wrap an FCTweenInstance inside a UObject, so that it's destroyed when its outer object is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFCTweenUObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFCTweenUObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FCTween,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenUObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFCTweenUObject_Statics::ClassParams = {
	&UFCTweenUObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFCTweenUObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UFCTweenUObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFCTweenUObject()
{
	if (!Z_Registration_Info_UClass_UFCTweenUObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFCTweenUObject.OuterSingleton, Z_Construct_UClass_UFCTweenUObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFCTweenUObject.OuterSingleton;
}
template<> FCTWEEN_API UClass* StaticClass<UFCTweenUObject>()
{
	return UFCTweenUObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFCTweenUObject);
UFCTweenUObject::~UFCTweenUObject() {}
// End Class UFCTweenUObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenUObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFCTweenUObject, UFCTweenUObject::StaticClass, TEXT("UFCTweenUObject"), &Z_Registration_Info_UClass_UFCTweenUObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFCTweenUObject), 730506589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenUObject_h_1100841256(TEXT("/Script/FCTween"),
	Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenUObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_5_4_FumbleFootball_Plugins_fresh_cooked_tweens_main_fresh_cooked_tweens_ue5_FCTween_Source_FCTween_Public_FCTweenUObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
