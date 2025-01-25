// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Testing_Mechanic_1/Public/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_ABaseEnemy();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Testing_Mechanic_1();
// End Cross Module References

// Begin Class ABaseEnemy
void ABaseEnemy::StaticRegisterNativesABaseEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
{
	return ABaseEnemy::StaticClass();
}
struct Z_Construct_UClass_ABaseEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Testing_Mechanic_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
	&ABaseEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemy()
{
	if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
}
template<> TESTING_MECHANIC_1_API UClass* StaticClass<ABaseEnemy>()
{
	return ABaseEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
ABaseEnemy::~ABaseEnemy() {}
// End Class ABaseEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_BaseEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 2459688984U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_BaseEnemy_h_2298066845(TEXT("/Script/Testing_Mechanic_1"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_BaseEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
