// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Testing_Mechanic_1/Public/AttackAnimEndedAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackAnimEndedAnimNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_UAttackAnimEndedAnimNotify();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_UAttackAnimEndedAnimNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_Testing_Mechanic_1();
// End Cross Module References

// Begin Class UAttackAnimEndedAnimNotify
void UAttackAnimEndedAnimNotify::StaticRegisterNativesUAttackAnimEndedAnimNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackAnimEndedAnimNotify);
UClass* Z_Construct_UClass_UAttackAnimEndedAnimNotify_NoRegister()
{
	return UAttackAnimEndedAnimNotify::StaticClass();
}
struct Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AttackAnimEndedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/AttackAnimEndedAnimNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightOHard_MetaData[] = {
		{ "Category", "AttackAnimEndedAnimNotify" },
		{ "ModuleRelativePath", "Public/AttackAnimEndedAnimNotify.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LightOHard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LightOHard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackAnimEndedAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::NewProp_LightOHard_SetBit(void* Obj)
{
	((UAttackAnimEndedAnimNotify*)Obj)->LightOHard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::NewProp_LightOHard = { "LightOHard", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAttackAnimEndedAnimNotify), &Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::NewProp_LightOHard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightOHard_MetaData), NewProp_LightOHard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::NewProp_LightOHard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Testing_Mechanic_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::ClassParams = {
	&UAttackAnimEndedAnimNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackAnimEndedAnimNotify()
{
	if (!Z_Registration_Info_UClass_UAttackAnimEndedAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackAnimEndedAnimNotify.OuterSingleton, Z_Construct_UClass_UAttackAnimEndedAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackAnimEndedAnimNotify.OuterSingleton;
}
template<> TESTING_MECHANIC_1_API UClass* StaticClass<UAttackAnimEndedAnimNotify>()
{
	return UAttackAnimEndedAnimNotify::StaticClass();
}
UAttackAnimEndedAnimNotify::UAttackAnimEndedAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackAnimEndedAnimNotify);
UAttackAnimEndedAnimNotify::~UAttackAnimEndedAnimNotify() {}
// End Class UAttackAnimEndedAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_AttackAnimEndedAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackAnimEndedAnimNotify, UAttackAnimEndedAnimNotify::StaticClass, TEXT("UAttackAnimEndedAnimNotify"), &Z_Registration_Info_UClass_UAttackAnimEndedAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAnimEndedAnimNotify), 3426572067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_AttackAnimEndedAnimNotify_h_3491485929(TEXT("/Script/Testing_Mechanic_1"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_AttackAnimEndedAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_AttackAnimEndedAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
