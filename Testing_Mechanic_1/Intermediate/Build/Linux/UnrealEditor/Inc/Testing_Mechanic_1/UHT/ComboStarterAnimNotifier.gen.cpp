// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Testing_Mechanic_1/Public/ComboStarterAnimNotifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboStarterAnimNotifier() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_UComboStarterAnimNotifier();
TESTING_MECHANIC_1_API UClass* Z_Construct_UClass_UComboStarterAnimNotifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_Testing_Mechanic_1();
// End Cross Module References

// Begin Class UComboStarterAnimNotifier
void UComboStarterAnimNotifier::StaticRegisterNativesUComboStarterAnimNotifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboStarterAnimNotifier);
UClass* Z_Construct_UClass_UComboStarterAnimNotifier_NoRegister()
{
	return UComboStarterAnimNotifier::StaticClass();
}
struct Z_Construct_UClass_UComboStarterAnimNotifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "ComboStarterAnimNotifier.h" },
		{ "ModuleRelativePath", "Public/ComboStarterAnimNotifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightOHard_MetaData[] = {
		{ "Category", "ComboStarterAnimNotifier" },
		{ "ModuleRelativePath", "Public/ComboStarterAnimNotifier.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LightOHard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LightOHard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboStarterAnimNotifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UComboStarterAnimNotifier_Statics::NewProp_LightOHard_SetBit(void* Obj)
{
	((UComboStarterAnimNotifier*)Obj)->LightOHard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboStarterAnimNotifier_Statics::NewProp_LightOHard = { "LightOHard", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboStarterAnimNotifier), &Z_Construct_UClass_UComboStarterAnimNotifier_Statics::NewProp_LightOHard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightOHard_MetaData), NewProp_LightOHard_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboStarterAnimNotifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboStarterAnimNotifier_Statics::NewProp_LightOHard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboStarterAnimNotifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboStarterAnimNotifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Testing_Mechanic_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboStarterAnimNotifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboStarterAnimNotifier_Statics::ClassParams = {
	&UComboStarterAnimNotifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComboStarterAnimNotifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboStarterAnimNotifier_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboStarterAnimNotifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboStarterAnimNotifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboStarterAnimNotifier()
{
	if (!Z_Registration_Info_UClass_UComboStarterAnimNotifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboStarterAnimNotifier.OuterSingleton, Z_Construct_UClass_UComboStarterAnimNotifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboStarterAnimNotifier.OuterSingleton;
}
template<> TESTING_MECHANIC_1_API UClass* StaticClass<UComboStarterAnimNotifier>()
{
	return UComboStarterAnimNotifier::StaticClass();
}
UComboStarterAnimNotifier::UComboStarterAnimNotifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboStarterAnimNotifier);
UComboStarterAnimNotifier::~UComboStarterAnimNotifier() {}
// End Class UComboStarterAnimNotifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_ComboStarterAnimNotifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboStarterAnimNotifier, UComboStarterAnimNotifier::StaticClass, TEXT("UComboStarterAnimNotifier"), &Z_Registration_Info_UClass_UComboStarterAnimNotifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboStarterAnimNotifier), 49793166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_ComboStarterAnimNotifier_h_1684091638(TEXT("/Script/Testing_Mechanic_1"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_ComboStarterAnimNotifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_Testing_Mechanic_1_Testing_Mechanic_1_Source_Testing_Mechanic_1_Public_ComboStarterAnimNotifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
